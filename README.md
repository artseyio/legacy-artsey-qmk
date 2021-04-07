# QMK Files for ARTSEY

# How to Build:

## Step 1. Clone "Early Combos" repo.
ARTSEY Relies on experimental QMK combo features that are available in the linked repo below. 

https://github.com/sevanteri/qmk_firmware/tree/early_combo

## Step 2. Create or find your keyboard. 

Create or find your keyboard as usual for making a QMK keymap. 

## Step 3. Make sure Combos and Mousekeys are enabled in rules.h of your keyboard.  
Add these lines to your `rules.h`

`COMBO_ENABLE = yes`  
`MOUSEKEYS_ENABLE = yes`

## Step 4. Copy these files into the /keyboards/your_keyboard/ folder

`artsey.c`  
`artsey.h`  
`artsey_basic.def`  
`combos.def`  
`keymap_combo.h`  
`macros.c`  

## Step 5. Create your keymap.   
Include this somewhere near the top of your keymap:

`#include "artsey.h"`  
`#include "keymap_combo.h"`  
`#include "artsey.c"`  

*Make sure to map these 8 keycode on some layer of your keyboard:*

`A_A`    
`A_R`  
`A_T`  
`A_S`  
`A_E`  
`A_Y`  
`A_I`  
`A_O`  

Reference the example keymaps for an example of an 8-key left and 8-key right-handed layout. 
