// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __MENU_NDS_H__
#define __MENU_NDS_H__

#if defined(NDS_ARM32)
#define NDS_VER "DraStic v2.5.0.4 (ARM32)"
#else
#define NDS_VER "DraStic v2.5.2.0 (ARM64)"
#endif

#define MENU_FILE                   100
#define MENU_FILE_OPEN_ROM          102
#define MENU_FILE_OPEN_RECENT       103
#define MENU_FILE_SAVE_STATE        104
#define MENU_FILE_LOAD_STATE        105
#define MENU_FILE_QUIT              106

#define MENU_SYS                    110
#define MENU_SYS_CONTINUE           111
#define MENU_SYS_RESTART            112
#define MENU_SYS_FIRMWARE           113
#define MENU_SYS_DATE_TIME          114
#define MENU_SYS_CHEAT              115
#define MENU_SYS_ROM_INFO           116

#define MENU_VIEW                   120
#define MENU_VIEW_SWAP_SCREENS      121
#define MENU_VIEW_LAYOUT            122
#define MENU_VIEW_FILTER            123

#define MENU_CFG                    130
#define MENU_CFG_STYLE              131
#define MENU_CFG_STYLE_LVGL         132
#define MENU_CFG_STYLE_UCGUI        133
#define MENU_CFG_LANG               134
#define MENU_CFG_LANG_US            135
#define MENU_CFG_LANG_CN            136
#define MENU_CFG_LANG_TW            137

#define MENU_CFG_AUDIO              140
#define MENU_CFG_AUDIO_ON           141
#define MENU_CFG_AUDIO_OFF          142

#define MENU_CFG_SWAP_SCREEN        150
#define MENU_CFG_SWAP_SCREEN_ON     151
#define MENU_CFG_SWAP_SCREEN_OFF    152

#define MENU_CFG_SHOWFPS            160
#define MENU_CFG_SHOWFPS_ON         161
#define MENU_CFG_SHOWFPS_OFF        162

#define MENU_CFG_FRAMESKIP_TYPE     170
#define MENU_CFG_FRAMESKIP_NONE     171
#define MENU_CFG_FRAMESKIP_AUTO     172
#define MENU_CFG_FRAMESKIP_MANUAL   173

#define MENU_CFG_FRAMESKIP_VALUE    180
#define MENU_CFG_FRAMESKIP_0        181
#define MENU_CFG_FRAMESKIP_1        182
#define MENU_CFG_FRAMESKIP_2        183
#define MENU_CFG_FRAMESKIP_3        184
#define MENU_CFG_FRAMESKIP_4        185
#define MENU_CFG_FRAMESKIP_5        186

#define MENU_CFG_FASTFORWARD        190
#define MENU_CFG_FASTFORWARD_0      190
#define MENU_CFG_FASTFORWARD_1      191
#define MENU_CFG_FASTFORWARD_2      192
#define MENU_CFG_FASTFORWARD_3      193
#define MENU_CFG_FASTFORWARD_4      194
#define MENU_CFG_FASTFORWARD_5      195

#define MENU_CFG_HIRES_3D           200
#define MENU_CFG_HIRES_3D_ON        201
#define MENU_CFG_HIRES_3D_OFF       202
#define MENU_CFG_MICROPHONE         203
#define MENU_CFG_TOUCH              204
#define MENU_CFG_KEYPAD             205
#define MENU_CFG_JOYSTICK           206
#define MENU_CFG_HOTKEY             207
#define MENU_CFG_DBG                208
#define MENU_CFG_DBG_ON             209
#define MENU_CFG_DBG_OFF            210

#define MENU_TOOLS                  220
#define MENU_TOOLS_WALKTHROUGH      221

#define MENU_HELP                   230
#define MENU_HELP_ABOUT_EMU         231

typedef enum {
    MENU_ADD = 0,
    MENU_UPDATE,
    MENU_DEL
} MENU_TYPE;

void prehook_cb_menu(void *, uint32_t);

#endif

