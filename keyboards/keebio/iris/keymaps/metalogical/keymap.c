#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// the following should effectively making TAPPING_TERM irrelevant
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
#define RETRO_TAPPING


#define _COLEMAK 0
#define _SHIFT 1
#define _RAISE 2

#define KC_ KC_TRNS
#define KC__ KC_NO
#define _______ KC_TRNS

#define KC_SFTL MO(_SHIFT)
#define KC_RAIS MO(_RAISE)
#define KC_BSPL LT(_RAISE, KC_BSP)

#define KC_SFT OSM(MOD_LSFT)
#define KC_CTL OSM(MOD_LCTL)
#define KC_GUI OSM(MOD_LGUI)
#define KC_ALT OSM(MOD_LALT)

#define KC_C_A S(KC_A)
#define KC_C_B S(KC_B)
#define KC_C_C S(KC_C)
#define KC_C_D S(KC_D)
#define KC_C_E S(KC_E)
#define KC_C_F S(KC_F)
#define KC_C_G S(KC_G)
#define KC_C_H S(KC_H)
#define KC_C_I S(KC_I)
#define KC_C_J S(KC_J)
#define KC_C_K S(KC_K)
#define KC_C_L S(KC_L)
#define KC_C_M S(KC_M)
#define KC_C_N S(KC_N)
#define KC_C_O S(KC_O)
#define KC_C_P S(KC_P)
#define KC_C_Q S(KC_Q)
#define KC_C_R S(KC_R)
#define KC_C_S S(KC_S)
#define KC_C_T S(KC_T)
#define KC_C_U S(KC_U)
#define KC_C_V S(KC_V)
#define KC_C_W S(KC_W)
#define KC_C_X S(KC_X)
#define KC_C_Y S(KC_Y)
#define KC_C_Z S(KC_Z)

#define KC_SENT S(KC_ENT)
#define KC_SSPC S(KC_SPC)
#define KC_STAB S(KC_TAB)
#define KC_SBSP S(KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GRV ,LABK,HASH,CIRC,RABK, _  ,                _  ,AMPR,EQL ,LCBR,MINS,BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , F  , P  , B  ,                J  , L  , U  , Y  ,SCLN,LBRC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     BSPC, A  , R  , S  , T  , G  ,                M  , N  , E  , I  , O  ,QUOT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     SFTL, Z  , X  , C  , D  , V  , _  ,      _  , K  , H  ,COMM,DOT ,SLSH,SFTL,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LGUI,RAIS,LALT,         ENT ,SPC ,LCTL
  //                  `----+----+----'        `----+----+----'
  ),

  [_SHIFT] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TILD,EXLM, AT ,DLR ,PERC, _  ,                _  ,ASTR,PLUS,RCBR,UNDS,PIPE,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     STAB, C_Q, C_W, C_F, C_P, C_B,                C_J, C_L, C_U, C_Y,COLN,RBRC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     SBSP, C_A, C_R, C_S, C_T, C_G,                C_M, C_N, C_E, C_I, C_O,DQUO,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     SFT , C_Z, C_X, C_C, C_D, C_V, _  ,      _  , C_K, C_H,LPRN,RPRN,QUES,SFT ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           , _  ,    ,         SENT,SSPC,
  //                  `----+----+----'        `----+----+----'
  ),

  // shift-backspace, shift-delete are not possible
  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
      _  ,VOLD,VOLU,MPLY, _  , _  ,                _  , _  , _  , _  , _  , _  ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      _  , _  ,HOME, UP ,END , _  ,                _  , 7  , 8  , 9  , _  ,ESC ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     DEL , _  ,LEFT,DOWN,RGHT, _  ,                _  , 4  , 5  , 6  , _  , _  ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     SFT , _  , _  , _  , _  , _  , _  ,      _  , _  , 1  , 2  , 3  , _  ,SFT ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,          _  , 0  ,
  //                  `----+----+----'        `----+----+----'
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
