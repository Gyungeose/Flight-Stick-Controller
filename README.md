![Status](https://img.shields.io/badge/Status-Planning-lightgrey?style=flat)
![Firmware](https://img.shields.io/badge/Firmware-Arduino_(ATmega32U4)-00979D?style=flat&logo=arduino&logoColor=white)
![CAD](https://img.shields.io/badge/CAD-SolidWorks-DA291C?style=flat)
![Fabrication](https://img.shields.io/badge/Fabrication-FDM_3D_Printing-F7A41D?style=flat)
![License](https://img.shields.io/badge/License-MIT-green?style=flat)

A DIY USB flight stick and throttle, designed in CAD, 3D-printed, and driven by custom microcontroller firmware. It shows up in Windows as a native game controller with no drivers needed. The Thrustmaster T.Flight HOTAS 4/5 is the benchmark.

> 📷 *Photo / GIF of the working stick goes here.*

---

## Goals

- Two-axis stick (pitch/roll) on a printed, bearing-supported gimbal with spring centering
- Separate throttle lever
- Hall-effect sensing (contactless, no pot wear or jitter) as the target, with potentiometers for prototyping
- Hat switch plus programmable buttons
- Total parts cost well below a retail HOTAS

## Specs (fill in as the build progresses)

| | Target | Achieved |
|---|---|---|
| Axes | X, Y, throttle (+ twist rudder, stretch) | — |
| Sensor | Hall-effect (AS5600 / SS49E) | — |
| Resolution | 10-bit+ | — |
| Buttons / hats | 8+ / 1 | — |
| Parts cost | < $80 | — |
| Print iterations | — | 0 |

## Repository layout

```
HOTAS-Flight-Controller/
├── firmware/flight_stick/   # Arduino sketch (USB HID joystick)
├── CAD/                     # SolidWorks source files
│   └── STEP/                # Neutral exports anyone can open
├── Documentation/           # BOM, wiring, design decisions
├── Build Log/               # Dated session notes (Obsidian)
├── Photos/Iterations/       # Every print version, failures included
└── Templates/               # Build-log entry template
```

## Roadmap

- [ ] **Phase 0: Proof of concept.** Microcontroller enumerates as a joystick; one pot moves an axis in `joy.cpl`
- [ ] **Phase 1: Throttle.** Single-axis lever with friction, printed housing
- [ ] **Phase 2: Gimbal.** Two-axis gimbal, bearings, spring centering
- [ ] **Phase 3: Grip.** Ergonomic grip with hat switch and buttons
- [ ] **Phase 4: Hall-effect upgrade.** Swap pots for magnetic sensors and measure jitter before/after
- [ ] **Phase 5: Write-up.** Final results, cost breakdown, lessons learned

## Documentation

- [Bill of Materials](Documentation/BOM.md)
- [Wiring](Documentation/Wiring.md)
- [Design Decisions](Documentation/Design%20Decisions.md)
- [Build Log](Build%20Log/)

## License

MIT. See [LICENSE](LICENSE).
