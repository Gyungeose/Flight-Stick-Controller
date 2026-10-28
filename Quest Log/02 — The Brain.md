---
tags: [hotas, quest-log]
quest: 2
---

# 02 — The Brain

## 1. What Is a Microcontroller?

Something in the stick has to read the sensors and talk to the PC. It's not a computer like your laptop, but it's not "just a chip" either.

> [!tip]- Retrieval Cue
> What is a microcontroller, and how is it different from the processor in your laptop? Why would you use one instead of a tiny full computer?

> [!tip]- Retrieval Cue
> What's the difference between a *digital* pin and an *analog* pin? Which kind of input would a button be? Which would a stick angle be?

## 2. Not All Boards Are Equal

> [!tip]- Retrieval Cue
> Plug some boards into a PC and they can only show up as a "serial port". Others can pretend to be a keyboard, mouse, or joystick. **What makes the difference?** What feature does a board need to do the second thing?

> [!todo] Field Mission
> Find three microcontroller boards people use for DIY joysticks. For each one, find: price, how many analog inputs it has, and whether it can act as a USB game controller natively. Make a comparison table here.

> [!hint]- Hint
> Search "DIY joystick microcontroller USB HID" and look at what DIY flight-sim builders keep choosing on forums and Reddit.

## 3. Count What You Need

> [!tip]- Retrieval Cue
> If your final stick has 2 axes, a throttle, a hat switch, and 8 buttons, how many inputs is that? Does your favourite board from the table have enough pins? If not, what tricks exist to read more buttons than you have pins?

## 4. Feynman Check

> [!question]- Feynman Check
> Explain why you chose your board over the other two, in terms of what *this project* needs, not "it's popular".

> [!success]- Unlocks
> Your first entry in **Design Decisions.md**: DD-01 Microcontroller.
