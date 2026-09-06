/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x3F, 0x71, 0x1A, 0x77, 0x0E, 0x6B, 0x6C, 0x04}

#define MASTER_LEFT //left half of the keyboard is the master
#define SOFT_SERIAL_PIN GP10 //this tells which pin on the microcontroller will be used for data transmission between the keyboard halves. Refer to the pro micro controller image inside the pictures folder. D0 is pin 3 on the microcontroller.
#define SERIAL_DEBUG
#define SPLIT_USB_DETECT //This basically tells the microcontroller that whichever side has the USB connection to the computer is the master and the other slave.
#define SPLIT_USB_TIMEOUT 2000 // This is necessary because USB enumeration during PC cold boot might not be instant. The value can be increased if necessary, but 2000 works for me.
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
