# Design Decisions

Each decision gets recorded with the options considered and why one was chosen. This is the part interviewers and admissions readers care about most.

---

## DD-01: Microcontroller

- **Options:** Arduino Pro Micro / Leonardo (ATmega32U4), Raspberry Pi Pico
- **Chosen:** Pro Micro
- **Why:** Native USB HID with the well-tested ArduinoJoystickLibrary; small; cheap.
- **Revisit if:** more analog inputs or a faster ADC are needed.

## DD-02: Axis sensing

- **Options:** Potentiometers, Hall-effect (AS5600, SS49E)
- **Chosen:** Pots for prototyping, Hall-effect for the final build
- **Why:** Pots are cheap and easy to get the pipeline working with. Hall sensors don't wear out or get jittery.

## DD-03: Filament

- **Options:** PLA, PLA+, PETG, resin (SLA)
- **Chosen:** *TBD after confirming SGU's printer*
- **Why:**

<!-- Template:
## DD-0X: Title
- **Options:**
- **Chosen:**
- **Why:**
- **Revisit if:**
-->
