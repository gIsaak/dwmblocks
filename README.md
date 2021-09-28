# dwmblocks
Modular status bar for dwm written in c.

## Usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.

## Modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.

## Signals
It is possible to update blocks on specific events by assigning a signal to them.

For example, the audio module has the update signal 10 by default. Thus, running pkill -RTMIN+10 dwmblocks will update it.

You can also run kill -44 $(pidof dwmblocks) which will have the same effect, but is faster. Just add 34 to your typical signal number.

To update the volume whenever a volume key is pressed simply have this command run along side the volume shortcuts in dwm.

Note that all modules must have different signal numbers.

## Patches
- statuscmd patch (see dwm patch with the same name)
    - `dwmblocks-statuscmd-20210402-96cbb45.diff`
