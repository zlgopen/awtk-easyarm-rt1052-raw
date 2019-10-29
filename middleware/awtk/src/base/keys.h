﻿/**
 * File:   keys.h
 * Author: AWTK Develop Team
 * Brief:  key code constants
 *
 * Copyright (c) 2018 - 2019  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-04-05 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_KEYS_H
#define TK_KEYS_H

#ifdef WITH_SDL
#include <SDL_keycode.h>
#endif
#include "base/types_def.h"

BEGIN_C_DECLS

/**
 * @enum key_code_t
 * @annotation ["scriptable"]
 * @prefix TK_
 * key code。
 */
typedef enum _key_code_t {
  TK_KEY_UNKNOWN = 0,

  /**
   * @const TK_KEY_RETURN
   * TK_KEY_RETURN
   */
  TK_KEY_RETURN = '\r',
  /**
   * @const TK_KEY_ESCAPE
   * TK_KEY_ESCAPE
   */
  TK_KEY_ESCAPE = '\033',
  /**
   * @const TK_KEY_BACKSPACE
   * TK_KEY_BACKSPACE
   */
  TK_KEY_BACKSPACE = '\b',
  /**
   * @const TK_KEY_TAB
   * TK_KEY_TAB
   */
  TK_KEY_TAB = '\t',
  /**
   * @const TK_KEY_SPACE
   * TK_KEY_SPACE
   */
  TK_KEY_SPACE = ' ',
  /**
   * @const TK_KEY_EXCLAIM
   * TK_KEY_EXCLAIM
   */
  TK_KEY_EXCLAIM = '!',
  /**
   * @const TK_KEY_QUOTEDBL
   * TK_KEY_QUOTEDBL
   */
  TK_KEY_QUOTEDBL = '"',
  /**
   * @const TK_KEY_HASH
   * TK_KEY_HASH
   */
  TK_KEY_HASH = '#',
  /**
   * @const TK_KEY_PERCENT
   * TK_KEY_PERCENT
   */
  TK_KEY_PERCENT = '%',
  /**
   * @const TK_KEY_DOLLAR
   * TK_KEY_DOLLAR
   */
  TK_KEY_DOLLAR = '$',
  /**
   * @const TK_KEY_AMPERSAND
   * TK_KEY_AMPERSAND
   */
  TK_KEY_AMPERSAND = '&',
  /**
   * @const TK_KEY_QUOTE
   * TK_KEY_QUOTE
   */
  TK_KEY_QUOTE = '\'',
  /**
   * @const TK_KEY_LEFTPAREN
   * TK_KEY_LEFTPAREN
   */
  TK_KEY_LEFTPAREN = '(',
  /**
   * @const TK_KEY_RIGHTPAREN
   * TK_KEY_RIGHTPAREN
   */
  TK_KEY_RIGHTPAREN = ')',
  /**
   * @const TK_KEY_ASTERISK
   * TK_KEY_ASTERISK
   */
  TK_KEY_ASTERISK = '*',
  /**
   * @const TK_KEY_PLUS
   * TK_KEY_PLUS
   */
  TK_KEY_PLUS = '+',
  /**
   * @const TK_KEY_COMMA
   * TK_KEY_COMMA
   */
  TK_KEY_COMMA = ',',
  /**
   * @const TK_KEY_MINUS
   * TK_KEY_MINUS
   */
  TK_KEY_MINUS = '-',
  /**
   * @const TK_KEY_PERIOD
   * TK_KEY_PERIOD
   */
  TK_KEY_PERIOD = '.',
  /**
   * @const TK_KEY_SLASH
   * TK_KEY_SLASH
   */
  TK_KEY_SLASH = '/',
  /**
   * @const TK_KEY_0
   * TK_KEY_0
   */
  TK_KEY_0 = '0',
  /**
   * @const TK_KEY_1
   * TK_KEY_1
   */
  TK_KEY_1 = '1',
  /**
   * @const TK_KEY_2
   * TK_KEY_2
   */
  TK_KEY_2 = '2',
  /**
   * @const TK_KEY_3
   * TK_KEY_3
   */
  TK_KEY_3 = '3',
  /**
   * @const TK_KEY_4
   * TK_KEY_4
   */
  TK_KEY_4 = '4',
  /**
   * @const TK_KEY_5
   * TK_KEY_5
   */
  TK_KEY_5 = '5',
  /**
   * @const TK_KEY_6
   * TK_KEY_6
   */
  TK_KEY_6 = '6',
  /**
   * @const TK_KEY_7
   * TK_KEY_7
   */
  TK_KEY_7 = '7',
  /**
   * @const TK_KEY_8
   * TK_KEY_8
   */
  TK_KEY_8 = '8',
  /**
   * @const TK_KEY_9
   * TK_KEY_9
   */
  TK_KEY_9 = '9',
  /**
   * @const TK_KEY_COLON
   * TK_KEY_COLON
   */
  TK_KEY_COLON = ':',
  /**
   * @const TK_KEY_SEMICOLON
   * TK_KEY_SEMICOLON
   */
  TK_KEY_SEMICOLON = ';',
  /**
   * @const TK_KEY_LESS
   * TK_KEY_LESS
   */
  TK_KEY_LESS = '<',
  /**
   * @const TK_KEY_EQUAL
   * TK_KEY_EQUAL
   */
  TK_KEY_EQUAL = '=',
  /**
   * @const TK_KEY_GREATER
   * TK_KEY_GREATER
   */
  TK_KEY_GREATER = '>',
  /**
   * @const TK_KEY_QUESTION
   * TK_KEY_QUESTION
   */
  TK_KEY_QUESTION = '?',
  /**
   * @const TK_KEY_AT
   * TK_KEY_AT
   */
  TK_KEY_AT = '@',
  /**
   * @const TK_KEY_LEFTBRACKET
   * TK_KEY_LEFTBRACKET
   */
  TK_KEY_LEFTBRACKET = '[',
  /**
   * @const TK_KEY_BACKSLASH
   * TK_KEY_BACKSLASH
   */
  TK_KEY_BACKSLASH = '\\',
  /**
   * @const TK_KEY_RIGHTBRACKET
   * TK_KEY_RIGHTBRACKET
   */
  TK_KEY_RIGHTBRACKET = ']',
  /**
   * @const TK_KEY_CARET
   * TK_KEY_CARET
   */
  TK_KEY_CARET = '^',
  /**
   * @const TK_KEY_UNDERSCORE
   * TK_KEY_UNDERSCORE
   */
  TK_KEY_UNDERSCORE = '_',
  /**
   * @const TK_KEY_BACKQUOTE
   * TK_KEY_BACKQUOTE
   */
  TK_KEY_BACKQUOTE = '`',
  /**
   * @const TK_KEY_a
   * TK_KEY_a
   */
  TK_KEY_a = 'a',
  /**
   * @const TK_KEY_b
   * TK_KEY_b
   */
  TK_KEY_b = 'b',
  /**
   * @const TK_KEY_c
   * TK_KEY_c
   */
  TK_KEY_c = 'c',
  /**
   * @const TK_KEY_d
   * TK_KEY_d
   */
  TK_KEY_d = 'd',
  /**
   * @const TK_KEY_e
   * TK_KEY_e
   */
  TK_KEY_e = 'e',
  /**
   * @const TK_KEY_f
   * TK_KEY_f
   */
  TK_KEY_f = 'f',
  /**
   * @const TK_KEY_g
   * TK_KEY_g
   */
  TK_KEY_g = 'g',
  /**
   * @const TK_KEY_h
   * TK_KEY_h
   */
  TK_KEY_h = 'h',
  /**
   * @const TK_KEY_i
   * TK_KEY_i
   */
  TK_KEY_i = 'i',
  /**
   * @const TK_KEY_j
   * TK_KEY_j
   */
  TK_KEY_j = 'j',
  /**
   * @const TK_KEY_k
   * TK_KEY_k
   */
  TK_KEY_k = 'k',
  /**
   * @const TK_KEY_l
   * TK_KEY_l
   */
  TK_KEY_l = 'l',
  /**
   * @const TK_KEY_m
   * TK_KEY_m
   */
  TK_KEY_m = 'm',
  /**
   * @const TK_KEY_n
   * TK_KEY_n
   */
  TK_KEY_n = 'n',
  /**
   * @const TK_KEY_o
   * TK_KEY_o
   */
  TK_KEY_o = 'o',
  /**
   * @const TK_KEY_p
   * TK_KEY_p
   */
  TK_KEY_p = 'p',
  /**
   * @const TK_KEY_q
   * TK_KEY_q
   */
  TK_KEY_q = 'q',
  /**
   * @const TK_KEY_r
   * TK_KEY_r
   */
  TK_KEY_r = 'r',
  /**
   * @const TK_KEY_s
   * TK_KEY_s
   */
  TK_KEY_s = 's',
  /**
   * @const TK_KEY_t
   * TK_KEY_t
   */
  TK_KEY_t = 't',
  /**
   * @const TK_KEY_u
   * TK_KEY_u
   */
  TK_KEY_u = 'u',
  /**
   * @const TK_KEY_v
   * TK_KEY_v
   */
  TK_KEY_v = 'v',
  /**
   * @const TK_KEY_w
   * TK_KEY_w
   */
  TK_KEY_w = 'w',
  /**
   * @const TK_KEY_x
   * TK_KEY_x
   */
  TK_KEY_x = 'x',
  /**
   * @const TK_KEY_y
   * TK_KEY_y
   */
  TK_KEY_y = 'y',
  /**
   * @const TK_KEY_z
   * TK_KEY_z
   */
  TK_KEY_z = 'z',
  /**
   * @const TK_KEY_A
   * TK_KEY_A
   */
  TK_KEY_A = 'A',
  /**
   * @const TK_KEY_B
   * TK_KEY_B
   */
  TK_KEY_B = 'B',
  /**
   * @const TK_KEY_C
   * TK_KEY_C
   */
  TK_KEY_C = 'C',
  /**
   * @const TK_KEY_D
   * TK_KEY_D
   */
  TK_KEY_D = 'D',
  /**
   * @const TK_KEY_E
   * TK_KEY_E
   */
  TK_KEY_E = 'E',
  /**
   * @const TK_KEY_F
   * TK_KEY_F
   */
  TK_KEY_F = 'F',
  /**
   * @const TK_KEY_G
   * TK_KEY_G
   */
  TK_KEY_G = 'G',
  /**
   * @const TK_KEY_H
   * TK_KEY_H
   */
  TK_KEY_H = 'H',
  /**
   * @const TK_KEY_I
   * TK_KEY_I
   */
  TK_KEY_I = 'I',
  /**
   * @const TK_KEY_J
   * TK_KEY_J
   */
  TK_KEY_J = 'J',
  /**
   * @const TK_KEY_K
   * TK_KEY_K
   */
  TK_KEY_K = 'K',
  /**
   * @const TK_KEY_L
   * TK_KEY_L
   */
  TK_KEY_L = 'L',
  /**
   * @const TK_KEY_M
   * TK_KEY_M
   */
  TK_KEY_M = 'M',
  /**
   * @const TK_KEY_N
   * TK_KEY_N
   */
  TK_KEY_N = 'N',
  /**
   * @const TK_KEY_O
   * TK_KEY_O
   */
  TK_KEY_O = 'O',
  /**
   * @const TK_KEY_P
   * TK_KEY_P
   */
  TK_KEY_P = 'P',
  /**
   * @const TK_KEY_Q
   * TK_KEY_Q
   */
  TK_KEY_Q = 'Q',
  /**
   * @const TK_KEY_R
   * TK_KEY_R
   */
  TK_KEY_R = 'R',
  /**
   * @const TK_KEY_S
   * TK_KEY_S
   */
  TK_KEY_S = 'S',
  /**
   * @const TK_KEY_T
   * TK_KEY_T
   */
  TK_KEY_T = 'T',
  /**
   * @const TK_KEY_U
   * TK_KEY_U
   */
  TK_KEY_U = 'U',
  /**
   * @const TK_KEY_V
   * TK_KEY_V
   */
  TK_KEY_V = 'V',
  /**
   * @const TK_KEY_W
   * TK_KEY_W
   */
  TK_KEY_W = 'W',
  /**
   * @const TK_KEY_X
   * TK_KEY_X
   */
  TK_KEY_X = 'X',
  /**
   * @const TK_KEY_Y
   * TK_KEY_Y
   */
  TK_KEY_Y = 'Y',
  /**
   * @const TK_KEY_Z
   * TK_KEY_Z
   */
  TK_KEY_Z = 'Z',
  /**
   * @const TK_KEY_DOT
   * TK_KEY_DOT
   */
  TK_KEY_DOT = '.',
  /**
   * @const TK_KEY_DELETE
   * TK_KEY_DELETE
   */
  TK_KEY_DELETE = '\177',
  /**
   * @const TK_KEY_LEFTBRACE
   * TK_KEY_LEFTBRACE
   */
  TK_KEY_LEFTBRACE = '(',
  /**
   * @const TK_KEY_RIGHTBRACE
   * TK_KEY_RIGHTBRACE
   */
  TK_KEY_RIGHTBRACE = ')',
#ifdef SDL2
  TK_KEY_CAPSLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CAPSLOCK),

  TK_KEY_F1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F1),
  TK_KEY_F2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F2),
  TK_KEY_F3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F3),
  TK_KEY_F4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F4),
  TK_KEY_F5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F5),
  TK_KEY_F6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F6),
  TK_KEY_F7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F7),
  TK_KEY_F8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F8),
  TK_KEY_F9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F9),
  TK_KEY_F10 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F10),
  TK_KEY_F11 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F11),
  TK_KEY_F12 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F12),

  TK_KEY_PRINTSCREEN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRINTSCREEN),
  TK_KEY_SCROLLLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SCROLLLOCK),
  TK_KEY_PAUSE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAUSE),
  TK_KEY_INSERT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_INSERT),
  TK_KEY_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HOME),
  TK_KEY_PAGEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEUP),
  TK_KEY_END = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_END),
  TK_KEY_PAGEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEDOWN),
  TK_KEY_RIGHT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RIGHT),
  TK_KEY_LEFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LEFT),
  TK_KEY_DOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DOWN),
  TK_KEY_UP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UP),

  TK_KEY_NUMLOCKCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_NUMLOCKCLEAR),
  TK_KEY_KP_DIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DIVIDE),
  TK_KEY_KP_MULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MULTIPLY),
  TK_KEY_KP_MINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MINUS),
  TK_KEY_KP_PLUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUS),
  TK_KEY_KP_ENTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_ENTER),
  TK_KEY_KP_1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_1),
  TK_KEY_KP_2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_2),
  TK_KEY_KP_3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_3),
  TK_KEY_KP_4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_4),
  TK_KEY_KP_5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_5),
  TK_KEY_KP_6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_6),
  TK_KEY_KP_7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_7),
  TK_KEY_KP_8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_8),
  TK_KEY_KP_9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_9),
  TK_KEY_KP_0 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_0),
  TK_KEY_KP_PERIOD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERIOD),

  TK_KEY_APPLICATION = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APPLICATION),
  TK_KEY_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_POWER),
  TK_KEY_KP_EQUALS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALS),
  TK_KEY_F13 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F13),
  TK_KEY_F14 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F14),
  TK_KEY_F15 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F15),
  TK_KEY_F16 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F16),
  TK_KEY_F17 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F17),
  TK_KEY_F18 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F18),
  TK_KEY_F19 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F19),
  TK_KEY_F20 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F20),
  TK_KEY_F21 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F21),
  TK_KEY_F22 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F22),
  TK_KEY_F23 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F23),
  TK_KEY_F24 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F24),
  TK_KEY_EXECUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXECUTE),
  TK_KEY_HELP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HELP),
  TK_KEY_MENU = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MENU),
  TK_KEY_SELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SELECT),
  TK_KEY_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_STOP),
  TK_KEY_AGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AGAIN),
  TK_KEY_UNDO = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UNDO),
  TK_KEY_CUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CUT),
  TK_KEY_COPY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COPY),
  TK_KEY_PASTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PASTE),
  TK_KEY_FIND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_FIND),
  TK_KEY_MUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MUTE),
  TK_KEY_VOLUMEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEUP),
  TK_KEY_VOLUMEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEDOWN),
  TK_KEY_KP_COMMA = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COMMA),
  TK_KEY_KP_EQUALSAS400 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALSAS400),

  TK_KEY_ALTERASE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_ALTERASE),
  TK_KEY_SYSREQ = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SYSREQ),
  TK_KEY_CANCEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CANCEL),
  TK_KEY_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEAR),
  TK_KEY_PRIOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRIOR),
  TK_KEY_RETURN2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RETURN2),
  TK_KEY_SEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SEPARATOR),
  TK_KEY_OUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OUT),
  TK_KEY_OPER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OPER),
  TK_KEY_CLEARAGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEARAGAIN),
  TK_KEY_CRSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CRSEL),
  TK_KEY_EXSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXSEL),

  TK_KEY_KP_00 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_00),
  TK_KEY_KP_000 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_000),
  TK_KEY_THOUSANDSSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_THOUSANDSSEPARATOR),
  TK_KEY_DECIMALSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DECIMALSEPARATOR),
  TK_KEY_CURRENCYUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYUNIT),
  TK_KEY_CURRENCYSUBUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYSUBUNIT),
  TK_KEY_KP_LEFTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTPAREN),
  TK_KEY_KP_RIGHTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTPAREN),
  TK_KEY_KP_LEFTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTBRACE),
  TK_KEY_KP_RIGHTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTBRACE),
  TK_KEY_KP_TAB = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_TAB),
  TK_KEY_KP_BACKSPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BACKSPACE),
  TK_KEY_KP_A = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_A),
  TK_KEY_KP_B = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_B),
  TK_KEY_KP_C = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_C),
  TK_KEY_KP_D = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_D),
  TK_KEY_KP_E = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_E),
  TK_KEY_KP_F = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_F),
  TK_KEY_KP_XOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_XOR),
  TK_KEY_KP_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_POWER),
  TK_KEY_KP_PERCENT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERCENT),
  TK_KEY_KP_LESS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LESS),
  TK_KEY_KP_GREATER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_GREATER),
  TK_KEY_KP_AMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AMPERSAND),
  TK_KEY_KP_DBLAMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLAMPERSAND),
  TK_KEY_KP_VERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_VERTICALBAR),
  TK_KEY_KP_DBLVERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLVERTICALBAR),
  TK_KEY_KP_COLON = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COLON),
  TK_KEY_KP_HASH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HASH),
  TK_KEY_KP_SPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_SPACE),
  TK_KEY_KP_AT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AT),
  TK_KEY_KP_EXCLAM = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EXCLAM),
  TK_KEY_KP_MEMSTORE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSTORE),
  TK_KEY_KP_MEMRECALL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMRECALL),
  TK_KEY_KP_MEMCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMCLEAR),
  TK_KEY_KP_MEMADD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMADD),
  TK_KEY_KP_MEMSUBTRACT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSUBTRACT),
  TK_KEY_KP_MEMMULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMMULTIPLY),
  TK_KEY_KP_MEMDIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMDIVIDE),
  TK_KEY_KP_PLUSMINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUSMINUS),
  TK_KEY_KP_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEAR),
  TK_KEY_KP_CLEARENTRY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEARENTRY),
  TK_KEY_KP_BINARY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BINARY),
  TK_KEY_KP_OCTAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_OCTAL),
  TK_KEY_KP_DECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DECIMAL),
  TK_KEY_KP_HEXADECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HEXADECIMAL),

  TK_KEY_LCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LCTRL),
  TK_KEY_LSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LSHIFT),
  TK_KEY_LALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LALT),
  TK_KEY_LGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LGUI),
  TK_KEY_RCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RCTRL),
  TK_KEY_RSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RSHIFT),
  TK_KEY_RALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RALT),
  TK_KEY_RGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RGUI),

  TK_KEY_MODE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MODE),

  TK_KEY_AUDIONEXT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIONEXT),
  TK_KEY_AUDIOPREV = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPREV),
  TK_KEY_AUDIOSTOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOSTOP),
  TK_KEY_AUDIOPLAY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPLAY),
  TK_KEY_AUDIOMUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOMUTE),
  TK_KEY_MEDIASELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MEDIASELECT),
  TK_KEY_WWW = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_WWW),
  TK_KEY_MAIL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MAIL),
  TK_KEY_CALCULATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CALCULATOR),
  TK_KEY_COMPUTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COMPUTER),
  TK_KEY_AC_SEARCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_SEARCH),
  TK_KEY_AC_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_HOME),
  TK_KEY_AC_BACK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BACK),
  TK_KEY_AC_FORWARD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_FORWARD),
  TK_KEY_AC_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_STOP),
  TK_KEY_AC_REFRESH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_REFRESH),
  TK_KEY_AC_BOOKMARKS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BOOKMARKS),

  TK_KEY_BRIGHTNESSDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSDOWN),
  TK_KEY_BRIGHTNESSUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSUP),
  TK_KEY_DISPLAYSWITCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DISPLAYSWITCH),
  TK_KEY_KBDILLUMTOGGLE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMTOGGLE),
  TK_KEY_KBDILLUMDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMDOWN),
  TK_KEY_KBDILLUMUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMUP),
  TK_KEY_EJECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EJECT),
  TK_KEY_SLEEP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SLEEP),
  TK_KEY_APP1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP1),
  TK_KEY_APP2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP2),
  TK_KEY_COMMAND = TK_KEY_RGUI,
#else
  /**
   * @const TK_KEY_LSHIFT
   * TK_KEY_LSHIFT
   */
  TK_KEY_LSHIFT = 0x20 + 127,
  /**
   * @const TK_KEY_RSHIFT
   * TK_KEY_RSHIFT
   */
  TK_KEY_RSHIFT = 0x20 + 128,
  /**
   * @const TK_KEY_LCTRL
   * TK_KEY_LCTRL
   */
  TK_KEY_LCTRL = 0x20 + 129,
  /**
   * @const TK_KEY_RCTRL
   * TK_KEY_RCTRL
   */
  TK_KEY_RCTRL = 0x20 + 130,
  /**
   * @const TK_KEY_LALT
   * TK_KEY_LALT
   */
  TK_KEY_LALT = 0x20 + 131,
  /**
   * @const TK_KEY_RALT
   * TK_KEY_RALT
   */
  TK_KEY_RALT = 0x20 + 132,
  /**
   * @const TK_KEY_CAPSLOCK
   * TK_KEY_CAPSLOCK
   */
  TK_KEY_CAPSLOCK = 0x20 + 133,
  /**
   * @const TK_KEY_HOME
   * TK_KEY_HOME
   */
  TK_KEY_HOME = 0x20 + 134,
  /**
   * @const TK_KEY_END
   * TK_KEY_END
   */
  TK_KEY_END = 0x20 + 135,
  /**
   * @const TK_KEY_INSERT
   * TK_KEY_INSERT
   */
  TK_KEY_INSERT = 0x20 + 137,
  /**
   * @const TK_KEY_UP
   * TK_KEY_UP
   */
  TK_KEY_UP = 0x20 + 138,
  /**
   * @const TK_KEY_DOWN
   * TK_KEY_DOWN
   */
  TK_KEY_DOWN = 0x20 + 139,
  /**
   * @const TK_KEY_LEFT
   * TK_KEY_LEFT
   */
  TK_KEY_LEFT = 0x20 + 140,
  /**
   * @const TK_KEY_RIGHT
   * TK_KEY_RIGHT
   */
  TK_KEY_RIGHT = 0x20 + 141,
  /**
   * @const TK_KEY_PAGEUP
   * TK_KEY_PAGEUP
   */
  TK_KEY_PAGEUP = 0x20 + 142,
  /**
   * @const TK_KEY_PAGEDOWN
   * TK_KEY_PAGEDOWN
   */
  TK_KEY_PAGEDOWN = 0x20 + 143,
  /**
   * @const TK_KEY_F1
   * TK_KEY_F1
   */
  TK_KEY_F1 = 0x20 + 151,
  /**
   * @const TK_KEY_F2
   * TK_KEY_F2
   */
  TK_KEY_F2 = 0x20 + 152,
  /**
   * @const TK_KEY_F3
   * TK_KEY_F3
   */
  TK_KEY_F3 = 0x20 + 153,
  /**
   * @const TK_KEY_F4
   * TK_KEY_F4
   */
  TK_KEY_F4 = 0x20 + 154,
  /**
   * @const TK_KEY_F5
   * TK_KEY_F5
   */
  TK_KEY_F5 = 0x20 + 155,
  /**
   * @const TK_KEY_F6
   * TK_KEY_F6
   */
  TK_KEY_F6 = 0x20 + 156,
  /**
   * @const TK_KEY_F7
   * TK_KEY_F7
   */
  TK_KEY_F7 = 0x20 + 157,
  /**
   * @const TK_KEY_F8
   * TK_KEY_F8
   */
  TK_KEY_F8 = 0x20 + 158,
  /**
   * @const TK_KEY_F9
   * TK_KEY_F9
   */
  TK_KEY_F9 = 0x20 + 159,
  /**
   * @const TK_KEY_F10
   * TK_KEY_F10
   */
  TK_KEY_F10 = 0x20 + 160,
  /**
   * @const TK_KEY_F11
   * TK_KEY_F11
   */
  TK_KEY_F11 = 0x20 + 161,
  /**
   * @const TK_KEY_F12
   * TK_KEY_F12
   */
  TK_KEY_F12 = 0x20 + 162,
  /**
   * @const TK_KEY_MENU
   * TK_KEY_MENU
   */
  TK_KEY_MENU = 0x20 + 163,
  /**
   * @const TK_KEY_COMMAND
   * TK_KEY_COMMAND
   */
  TK_KEY_COMMAND = 0x20 + 164,
#endif

} key_code_t;

END_C_DECLS

#endif /*TK_KEYS_H*/
