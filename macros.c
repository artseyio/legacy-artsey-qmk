bool is_shift_lock_active = false; 
bool is_alt_tab_active = false; // ADD this near the begining of keymap.c;
uint16_t key_timer;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {


    case LOCK_SHIFT:
      if (record->event.pressed) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }         
      } 
    break;
case A_A:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
if (layernumber == 1) {
modify_layernumber(4);
return false;
}
if (layernumber == 2) {
modify_layernumber(1);
return false;
}
if (layernumber == 3) {
modify_layernumber(1);
return false;
}
if (layernumber == 4) {
modify_layernumber(1);
return false;
}
if (layernumber == 5) {
modify_layernumber(1);
return false;
}
if (layernumber == 6) {
modify_layernumber(1);
return false;
}
if (layernumber == 7) {
modify_layernumber(1);
return false;
}
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_A);
return false;
}
if (layernumber == 2) {
tap_code(KC_1);
return false;
}
if (layernumber == 3) {
tap_code(KC_HOME);
return false;
}
if (layernumber == 6) {
tap_code(KC_F1);
return false;
}
if (layernumber == 7) {
tap_code(KC_F7);
return false;
}
if (layernumber == 8) {
tap_code(KC_BTN1);
return false;
}
if (layernumber == 9) {
tap_code(KC__MUTE);
return false;
}
 }
 }
 break;
case A_R:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 8) {
register_code(KC_MS_U);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_R);
return false;
}
if (layernumber == 2) {
tap_code(KC_2);
return false;
}
if (layernumber == 3) {
tap_code(KC_UP);
return false;
}
if (layernumber == 4) {
SEND_STRING("(");
return false;
}
if (layernumber == 6) {
tap_code(KC_F2);
return false;
}
if (layernumber == 7) {
tap_code(KC_F8);
return false;
}
if (layernumber == 8) {
unregister_code(KC_MS_U);
return false;
}
if (layernumber == 9) {
tap_code(KC_INS);
return false;
}
 }
 }
 break;
case A_T:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_T);
return false;
}
if (layernumber == 2) {
tap_code(KC_3);
return false;
}
if (layernumber == 3) {
tap_code(KC_END);
return false;
}
if (layernumber == 4) {
SEND_STRING(")");
return false;
}
if (layernumber == 6) {
tap_code(KC_F3);
return false;
}
if (layernumber == 7) {
tap_code(KC_F9);
return false;
}
if (layernumber == 8) {
tap_code(KC_BTN2);
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_RCTRL));
return false;
}
 }
 }
 break;
case A_S:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
if (layernumber == 1) {
modify_layernumber(2);
return false;
}
if (layernumber == 2) {
modify_layernumber(6);
return false;
}
if (layernumber == 3) {
modify_layernumber(1);
return false;
}
if (layernumber == 4) {
modify_layernumber(1);
return false;
}
if (layernumber == 5) {
modify_layernumber(1);
return false;
}
if (layernumber == 6) {
modify_layernumber(1);
return false;
}
if (layernumber == 7) {
modify_layernumber(1);
return false;
}
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_S);
return false;
}
if (layernumber == 3) {
tap_code(KC_PGUP);
return false;
}
if (layernumber == 4) {
SEND_STRING("{");
return false;
}
if (layernumber == 9) {
tap_code(KC__VOLUP);
return false;
}
 }
 }
 break;
case A_E:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 8) {
register_code(KC_MS_L);
}
}
else {
if(timer_elapsed(key_timer) >100) {
if (layernumber == 1) {
modify_layernumber(5);
return false;
}
if (layernumber == 2) {
modify_layernumber(1);
return false;
}
if (layernumber == 3) {
modify_layernumber(1);
return false;
}
if (layernumber == 4) {
modify_layernumber(1);
return false;
}
if (layernumber == 5) {
modify_layernumber(1);
return false;
}
if (layernumber == 6) {
modify_layernumber(1);
return false;
}
if (layernumber == 7) {
modify_layernumber(1);
return false;
}
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_E);
return false;
}
if (layernumber == 2) {
tap_code(KC_4);
return false;
}
if (layernumber == 3) {
tap_code(KC_LEFT);
return false;
}
if (layernumber == 6) {
tap_code(KC_F4);
return false;
}
if (layernumber == 7) {
tap_code(KC_F10);
return false;
}
if (layernumber == 8) {
unregister_code(KC_MS_L);
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_RSHIFT));
return false;
}
 }
 }
 break;
case A_Y:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 8) {
register_code(KC_MS_D);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_Y);
return false;
}
if (layernumber == 2) {
tap_code(KC_5);
return false;
}
if (layernumber == 3) {
tap_code(KC_DOWN);
return false;
}
if (layernumber == 4) {
tap_code(KC_LBRC);
return false;
}
if (layernumber == 6) {
tap_code(KC_F5);
return false;
}
if (layernumber == 7) {
tap_code(KC_F11);
return false;
}
if (layernumber == 8) {
unregister_code(KC_MS_D);
return false;
}
if (layernumber == 9) {
tap_code(KC_PSCR);
return false;
}
 }
 }
 break;
case A_I:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 8) {
register_code(KC_MS_R);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_I);
return false;
}
if (layernumber == 2) {
tap_code(KC_6);
return false;
}
if (layernumber == 3) {
tap_code(KC_RIGHT);
return false;
}
if (layernumber == 4) {
tap_code(KC_RBRC);
return false;
}
if (layernumber == 6) {
tap_code(KC_F6);
return false;
}
if (layernumber == 7) {
tap_code(KC_F12);
return false;
}
if (layernumber == 8) {
unregister_code(KC_MS_R);
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_RALT));
return false;
}
 }
 }
 break;
case A_O:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
if (layernumber == 1) {
modify_layernumber(3);
return false;
}
if (layernumber == 2) {
modify_layernumber(7);
return false;
}
if (layernumber == 3) {
modify_layernumber(1);
return false;
}
if (layernumber == 4) {
modify_layernumber(1);
return false;
}
if (layernumber == 5) {
modify_layernumber(1);
return false;
}
if (layernumber == 6) {
modify_layernumber(1);
return false;
}
if (layernumber == 7) {
modify_layernumber(1);
return false;
}
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_O);
return false;
}
if (layernumber == 3) {
tap_code(KC_PGDOWN);
return false;
}
if (layernumber == 4) {
SEND_STRING("}");
return false;
}
if (layernumber == 9) {
tap_code(KC__VOLDOWN);
return false;
}
 }
 }
 break;
case A_AR:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_F);
return false;
}
if (layernumber == 2) {
tap_code(KC_7);
return false;
}
 }
 }
 break;
case A_AT:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_AS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_W);
return false;
}
 }
 }
 break;
case A_RT:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_G);
return false;
}
if (layernumber == 2) {
tap_code(KC_8);
return false;
}
 }
 }
 break;
case A_RS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_V);
return false;
}
 }
 }
 break;
case A_TS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_J);
return false;
}
 }
 }
 break;
case A_ART:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_D);
return false;
}
 }
 }
 break;
case A_ARS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_ATS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_Q);
return false;
}
 }
 }
 break;
case A_RTS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_X);
return false;
}
 }
 }
 break;
case A_ARTS:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_EY:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_C);
return false;
}
if (layernumber == 2) {
tap_code(KC_9);
return false;
}
 }
 }
 break;
case A_EI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_H);
return false;
}
 }
 }
 break;
case A_EO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_B);
return false;
}
 }
 }
 break;
case A_YI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_U);
return false;
}
if (layernumber == 2) {
tap_code(KC_0);
return false;
}
 }
 }
 break;
case A_YO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_K);
return false;
}
 }
 }
 break;
case A_IO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_N);
return false;
}
 }
 }
 break;
case A_EYI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_L);
return false;
}
 }
 }
 break;
case A_EYO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_EIO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_P);
return false;
}
 }
 }
 break;
case A_YIO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_M);
return false;
}
 }
 }
 break;
case A_AYIO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_Z);
return false;
}
 }
 }
 break;
case A_AYI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_QUOT);
return false;
}
 }
 }
 break;
case A_AY:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_DOT);
return false;
}
 }
 }
 break;
case A_AI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_COMMA);
return false;
}
 }
 }
 break;
case A_TI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
SEND_STRING("!");
return false;
}
 }
 }
 break;
case A_AO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_SLSH);
return false;
}
 }
 }
 break;
case A_RE:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 1) {
register_code(KC_BSPC);
}
if (layernumber == 2) {
register_code(KC_BSPC);
}
if (layernumber == 3) {
register_code(KC_BSPC);
}
if (layernumber == 4) {
register_code(KC_BSPC);
}
if (layernumber == 5) {
register_code(KC_BSPC);
}
if (layernumber == 6) {
register_code(KC_BSPC);
}
if (layernumber == 7) {
register_code(KC_BSPC);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 2) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 3) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 4) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 5) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 6) {
unregister_code(KC_BSPC);
return false;
}
if (layernumber == 7) {
unregister_code(KC_BSPC);
return false;
}
 }
 }
 break;
case A_ATY:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 1) {
modify_layernumber(8);
}
if (layernumber == 2) {
modify_layernumber(8);
}
if (layernumber == 3) {
modify_layernumber(8);
}
if (layernumber == 4) {
modify_layernumber(8);
}
if (layernumber == 5) {
modify_layernumber(8);
}
if (layernumber == 6) {
modify_layernumber(8);
}
if (layernumber == 7) {
modify_layernumber(8);
}
if (layernumber == 8) {
modify_layernumber(1);
}
if (layernumber == 9) {
modify_layernumber(8);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_SO:
if(record->event.pressed) {
key_timer = timer_read();
if (layernumber == 1) {
modify_layernumber(9);
}
if (layernumber == 2) {
modify_layernumber(9);
}
if (layernumber == 3) {
modify_layernumber(9);
}
if (layernumber == 4) {
modify_layernumber(9);
}
if (layernumber == 5) {
modify_layernumber(9);
}
if (layernumber == 6) {
modify_layernumber(9);
}
if (layernumber == 7) {
modify_layernumber(9);
}
if (layernumber == 8) {
modify_layernumber(9);
}
if (layernumber == 9) {
modify_layernumber(1);
}
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
 }
 }
 break;
case A_RTSE:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 2) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 3) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 4) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 5) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 6) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 7) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 8) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_LSHIFT));
return false;
}
 }
 }
 break;
case A_AE:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 2) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 3) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 4) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 5) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 6) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 7) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 8) {
tap_code(KC_ENTER);
return false;
}
if (layernumber == 9) {
tap_code(KC_ENTER);
return false;
}
 }
 }
 break;
case A_ARO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 2) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 3) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 4) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 5) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 6) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 7) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 8) {
tap_code(KC_ESC);
return false;
}
if (layernumber == 9) {
tap_code(KC_ESC);
return false;
}
 }
 }
 break;
case A_SE:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 2) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 3) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 4) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 5) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 6) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 7) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 8) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_LCTRL));
return false;
}
 }
 }
 break;
case A_SY:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 2) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 3) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 4) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 5) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 6) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 7) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 8) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_LALT));
return false;
}
 }
 }
 break;
case A_SI:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 2) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 3) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 4) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 5) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 6) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 7) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 8) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
if (layernumber == 9) {
set_oneshot_mods(MOD_BIT(KC_LGUI));
return false;
}
 }
 }
 break;
case A_EYIO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 2) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 3) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 4) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 5) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 6) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 7) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 8) {
tap_code(KC_SPACE);
return false;
}
if (layernumber == 9) {
tap_code(KC_SPACE);
return false;
}
 }
 }
 break;
case A_ARTO:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 2) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 3) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 4) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 5) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 6) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 7) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 8) {
tap_code(KC_TAB);
return false;
}
if (layernumber == 9) {
tap_code(KC_TAB);
return false;
}
 }
 }
 break;
case A_RY:
if(record->event.pressed) {
key_timer = timer_read();
}
else {
if(timer_elapsed(key_timer) >100) {
 }
if(timer_elapsed(key_timer) <100) {
if (layernumber == 1) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 2) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 3) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 4) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 5) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 6) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 7) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 8) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
if (layernumber == 9) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        };
return false;
}
 }
 }
 break;
 



  }
  return true;
};

