---
tags: [hotas, vision]
status: on hold (budget)
---

# Vision: Flight Stick Controller

## The idea in one sentence
Build my own flight stick and throttle from scratch, with my own CAD, my own prints, and my own code, that plugs into a PC and flies like a store-bought HOTAS. Along the way, actually learn how mechanical, electronic, and software systems work together.

## What "done" looks like
- A stick on a printed gimbal that springs back to center crisply, with no wobble
- A separate throttle lever
- Windows sees it as a game controller with no drivers
- Hall-effect sensors, so no jitter and no wear
- A hat switch and buttons where *I* want them
- Costs less than the Thrustmaster HOTAS 4/5
- A GitHub repo and write-up that show the whole engineering process, failures included

## How it works: the chain
```
Hand → Gimbal rotates → Sensor measures angle → Board converts to number → PC moves the plane
       (mechanical)       (electronics)          (code)
```
Every phase improves one link in this chain.

## Phases, and what each one teaches

| Phase | What I build | What I learn | Why it comes here |
|---|---|---|---|
| **0. Proof of concept** | Board + one knob, shows up as a joystick | ADCs, USB HID, reading real-world signals | Proves the whole chain works before I spend on mechanics |
| **1. Throttle** | A single lever with friction | Design for 3D printing: tolerances, layer orientation, walls | Simplest mechanism: one axis, no centering. Low-stakes practice |
| **2. Gimbal** | Two-axis pivot with bearings and spring centering | Mechanisms, loads, fatigue, iteration | The hardest part. By now I know how my printer behaves |
| **3. Grip** | Ergonomic handle with hat and buttons | Ergonomics, wiring in tight spaces, button matrices | Needs a working gimbal to mount onto |
| **4. Hall upgrade** | Swap knobs for magnetic sensors | Sensor physics, calibration, measuring improvement | Upgrade a working system and compare before/after with numbers |
| **5. Write-up** | README, photos, results | Communicating engineering work | This is what turns a project into a portfolio piece |

## Key decisions ahead (and what they depend on)
- **Printer & material:** which printer type and filament can survive a gimbal's loads? *Depends on: what SGU has.*
- **Gimbal design:** which centering mechanism (springs + cam, or springs pulling directly). *Depends on: studying existing open-source designs.*
- **Sensor:** potentiometers vs Hall-effect. Learn how each works, then choose.
- **Twist rudder:** stretch goal only. It adds a third axis inside the grip.

## Budget
- Parts: roughly **$40–80 USD** plus shipping and duty to Grenada
- Printing: depends on SGU (free, per-gram, or not allowed)
- Phase 0 alone: around **$15–25** (board, knobs, buttons, wires). It can start small.

## What I can do now for $0
- [ ] Email SGU's medical illustration centre: printer type, materials, cost, personal-project policy, build size
- [ ] Study 2–3 open-source gimbals on Printables/Thingiverse and note why each made its design choices
- [ ] Sketch my gimbal concept, on paper or as a rough SolidWorks layout
- [ ] Design a tolerance test block (work out what sizes to test, and why)
- [ ] Practice Arduino code in a free browser simulator (Wokwi or Tinkercad Circuits)
- [ ] Learn how a microcontroller reads a knob and a button
- [ ] Research and price Phase 0 parts so I know the exact number to save

## Priorities
The ECG project comes first. This is the weekend / reward project. The skills overlap anyway: signal filtering, sensors, and microcontrollers carry across both.

## Why I'm doing this
I have an idea and I want to make it real, and I want to understand every piece of it, not just follow instructions.
