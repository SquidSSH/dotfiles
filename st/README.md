# A [pywal](https://github.com/dylanaraps/pywal) compatible fork of st

## Patches applied

- Alpha OSC 11
- Anysize
- Xresources
- Scrollback ringbuffer
- Boxdraw
- Ligatures boxdraw

## Other changes

- Changed key bindings for zooming in/out
- Added key bindings for scrolling
- Changed default color definitions
- Changed the terminal name to "st"

*Check the manual for key bindings.*

## Dependencies

- fontconfig
- libX11
- libXft
- harfbuzz

## Installation

`$ git clone https://github.com/tokatatahan/st`

`$ cd st`

`# make clean install`

## Uninstallation

`# make uninstall`

## Configuration

Configuration is done via editing `config.h` and then recompiling. If this file
does not exist, it will be automatically generated. Automatically generated
file will be a copy of `config.def.h` and it will be owned by the root user. If
you mess something up, or apply a new patch that changes `config.def.h`, you
should run the following command:

`$ cp config.def.h config.h`

**This will overwrite the existing `config.h`!**
