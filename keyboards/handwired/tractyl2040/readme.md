# Tractyl Manuform w/ Raspberry Pi 2040

Well, F. I didn't make any decent notes while I was working on this, and now there's a lot of mysteries in here.
Actually who am I kidding, there were a lot of mysteries all along.

For my future self, in case you're crazy enough to try working on this again, here's what I remember...

* I've got a mix of stuff from Wylderbuilds, BastardKBs, and Drashna, mostly
* Vial is cool cause it lets you remap stuff on the fly, works well
* This was hacked together way too much the hard way--just go look at what the other guys did
* Okay, it was kinda worth it

There's a bunch of files in here that configure the thing. It's a mess. There's at least two kinds of config at play the .c/.h files and the json stuff.

Configs can also be layered, so stuff down in the keymaps can override what happens at the top layer(?)

## How to build

Note: if you want to build for vial, use the vial fork.

make make handwired/tractyl2040:<keymap> #where keymap is probably `vial`

## How to flash

Can enter the bootloader mode using the `RESET` keycode. Just open Vial and assign it to any key, then push that key.

Double-tap reset to enter bootloader mode. Copy the built uf2 file to the device by dragging the file to the new USB disk.

Most changes only need to be flashed to the primary half, since the other half is just responsible for reporting matrix hits and is relatively dumb.
