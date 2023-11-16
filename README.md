# cyberspace-1
Card Edge Slot-based 8-bit experimental computer with a Cyberpunk aesthetic.

## Why?
I wanted to make a 8-bit card-edge style computer.  8-bit computers were the first thing I learned to design in school back in the 80's.  Our mid-level education courses involved engineering students wire-wrapping and then programming their own Z80 computer system, with the next semester involving the addition and more programming of peripherals.  So I want to get back to that headspace for a bit.  I see many other hobbyists doing this with Z80, 6502 and even RP2040 chips.  This not sure yet what processor I will choose but it will be something with a good emulator environment on the Mac or Linux.

## About the name...
I want to create a system that has a Cyberpunk aesthetic and in the book Neuromancer, there is a Cyberspace "Deck" called the Cyberspace7 by Ono-Sendai and that implies the existence of Cyberspace 1 through 6.  So for my own amusement I've decided to call this experiment the Cyberspace 1 along with creating logos for Cyberspace product as well as a logo for Ono-Sendai Company.

## License
I've decided to make this project with the MIT license.  Do whatever you want with it.

## Release Notes
### 2023 Early November
Created GitHub repository.

### 2023 Mid November
Roughed out basic design for all main boards.  Backplane, 6502, Memory, Clock, Video card.  Placement seems to be satisfactory.

## To Do
Sound Card, Keyboard and game controller input card.

Each of these peripheral cards are likely to be RP2040 chips masquerading as
custom devices like the Video card will be.  I wish to use USB keyboards and
USB game (perhaps bluetooth?) controllers, so I will look at making a card with multiple USB jacks on it.  The card would handle HID and Storage devices.
