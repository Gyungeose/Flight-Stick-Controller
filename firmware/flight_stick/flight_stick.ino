/*
 * HOTAS Flight Controller: Phase 0 firmware
 * Board: Arduino Pro Micro / Leonardo (ATmega32U4)
 * Library: ArduinoJoystickLibrary by MHeironimus
 *          https://github.com/MHeironimus/ArduinoJoystickLibrary
 *
 * Reads two potentiometers (X/Y) and two buttons, then reports them
 * to the PC as a USB game controller. Test in Windows with joy.cpl.
 */

#include <Joystick.h>

const int PIN_X = A0;
const int PIN_Y = A1;
const int BUTTON_PINS[] = {2, 3};
const int NUM_BUTTONS = sizeof(BUTTON_PINS) / sizeof(BUTTON_PINS[0]);

// Exponential smoothing factor: lower = smoother but laggier
const float ALPHA = 0.2;

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_JOYSTICK,
  NUM_BUTTONS, 0,          // buttons, hat switches
  true, true, false,       // X, Y, Z
  false, false, false,     // Rx, Ry, Rz
  false, false,            // rudder, throttle
  false, false, false      // accelerator, brake, steering
);

float smoothX = 512, smoothY = 512;
int lastButtonState[NUM_BUTTONS] = {0};

void setup() {
  for (int i = 0; i < NUM_BUTTONS; i++) {
    pinMode(BUTTON_PINS[i], INPUT_PULLUP);  // pressed = LOW
  }
  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  Joystick.begin(false);  // send reports manually with sendState()
}

void loop() {
  smoothX += ALPHA * (analogRead(PIN_X) - smoothX);
  smoothY += ALPHA * (analogRead(PIN_Y) - smoothY);
  Joystick.setXAxis((int)smoothX);
  Joystick.setYAxis((int)smoothY);

  for (int i = 0; i < NUM_BUTTONS; i++) {
    int state = !digitalRead(BUTTON_PINS[i]);
    if (state != lastButtonState[i]) {
      Joystick.setButton(i, state);
      lastButtonState[i] = state;
    }
  }

  Joystick.sendState();
  delay(5);  // ~200 Hz update rate
}
