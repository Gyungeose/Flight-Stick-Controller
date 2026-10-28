---
tags: [hotas, quest-log]
quest: 4
---

# 04 — Speaking PC

## 1. How Does Windows Know?

You plug in a mouse and it just works, with no installing. The same goes for most game controllers.

> [!tip]- Retrieval Cue
> What is USB HID? Why does it mean "no drivers needed"? What other devices use it?

> [!tip]- Retrieval Cue
> What does Windows' `joy.cpl` do, and why will it become your best friend?

## 2. The Loop

> [!tip]- Retrieval Cue
> Almost every microcontroller program has two main parts: one that runs **once** at power-on and one that runs **forever**. What goes in each, for a joystick?

> [!todo] Field Mission
> Open a free online microcontroller simulator (search "Arduino simulator browser"). Make a virtual knob change a number on screen. That's it. You've built the first link.

> [!tip]- Retrieval Cue
> Someone has already written code libraries that make a board act like a joystick. Find one. What does it handle for you, and what's still your job?

## 3. Taming Noise

> [!tip]- Retrieval Cue
> If you leave the stick perfectly still, the reading will still wobble by a few numbers. Why? Where does the noise come from?

> [!tip]- Retrieval Cue
> What are the simplest ways to smooth a noisy signal in code? What's the trade-off between "smooth" and "responsive"? *(You've fought this exact battle in your ECG project. What did you learn there?)*

> [!tip]- Retrieval Cue
> What is a "deadzone" and why do joysticks have one around the center?

## 4. Feynman Check

> [!question]- Feynman Check
> Walk through what your firmware will do, step by step, 200 times a second, without looking anything up.

> [!success]- Unlocks
> You write `flight_stick.ino` yourself. Every line should be something you can explain.
