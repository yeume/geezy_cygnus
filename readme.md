# geezy_cygnus

at the root of vial_qmk folder, run `make geezy_cygnus:vial`

note, there are 2 keyboard.json. When you run the above command, you need to be aware of which json you're running with, and when producing the firmware for the right half, you need to rename the `keyboard_right.json` to `keyboard.json` and make a temporary name for the other keyboard.json file.

Flash each half separately, by holding down the boot button while plugging the usb in.