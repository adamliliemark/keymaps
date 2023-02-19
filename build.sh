#!/usr/bin/env bash
KEYBOARD=3w6/rev2
KEYMAP=ackurat
QMK_DIR=qmk_firmware

set -e

# 1. Clean up old build
rm -rf .build

# 2. Copy my files into their appropriate locations inside QMK
mkdir -p $QMK_DIR/keyboards/$KEYBOARD/keymaps/$KEYMAP
cp -r $KEYBOARD/keymaps/$KEYMAP $QMK_DIR/keyboards/$KEYBOARD/keymaps/

# 3. Compile
cd $QMK_DIR
qmk compile -kb $KEYBOARD -km $KEYMAP

# 4. Move compiled keymaps to root
cp -r .build ../.build
