// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __MENU_NDS_H__
#define __MENU_NDS_H__

#if defined(NDS_ARM32)
#define NDS_VER "DraStic v2.5.0.4 (ARM32)"
#else
#define NDS_VER "DraStic v2.5.2.0 (ARM64)"
#endif

#define MENU_FILE_OPEN_ROM          100
#define MENU_FILE_OPEN_RECENT       101
#define MENU_FILE_SAVE_STATE        102
#define MENU_FILE_LOAD_STATE        103
#define MENU_FILE_QUIT              104

#define MENU_SYSTEM_CONTINUE        110
#define MENU_SYSTEM_RESET           111
#define MENU_SYSTEM_FIRMWARE        112
#define MENU_SYSTEM_DATE_TIME       113
#define MENU_SYSTEM_CHEAT           114
#define MENU_SYSTEM_ROM_INFO        115

#define MENU_VIEW_SWAP_SCREENS      120
#define MENU_VIEW_LAYOUT            121
#define MENU_VIEW_FILTER            122

#define MENU_CONFIG_LANG_US             130
#define MENU_CONFIG_LANG_CN             131
#define MENU_CONFIG_LANG_TW             132
#define MENU_CONFIG_AUDIO_ON            133
#define MENU_CONFIG_AUDIO_OFF           134
#define MENU_CONFIG_SWAP_SCREEN_ON      135
#define MENU_CONFIG_SWAP_SCREEN_OFF     136
#define MENU_CONFIG_SHOWFPS_ON          137
#define MENU_CONFIG_SHOWFPS_OFF         138

#define MENU_CONFIG_FRAMESKIP_NONE      140
#define MENU_CONFIG_FRAMESKIP_AUTO      141
#define MENU_CONFIG_FRAMESKIP_MANUAL    142
#define MENU_CONFIG_FRAMESKIP_0         143
#define MENU_CONFIG_FRAMESKIP_1         144
#define MENU_CONFIG_FRAMESKIP_2         145
#define MENU_CONFIG_FRAMESKIP_3         146
#define MENU_CONFIG_FRAMESKIP_4         147
#define MENU_CONFIG_FRAMESKIP_5         148

#define MENU_CONFIG_FASTFORWARD_0       150
#define MENU_CONFIG_FASTFORWARD_1       151
#define MENU_CONFIG_FASTFORWARD_2       152
#define MENU_CONFIG_FASTFORWARD_3       153
#define MENU_CONFIG_FASTFORWARD_4       154
#define MENU_CONFIG_FASTFORWARD_5       155

#define MENU_CONFIG_SPEED_NONE          160
#define MENU_CONFIG_SPEED_50            161
#define MENU_CONFIG_SPEED_150           162
#define MENU_CONFIG_SPEED_200           163
#define MENU_CONFIG_SPEED_250           164
#define MENU_CONFIG_SPEED_300           165
#define MENU_CONFIG_SPEED_350           166
#define MENU_CONFIG_SPEED_400           167
#define MENU_CONFIG_HIRES_3D_ON         168
#define MENU_CONFIG_HIRES_3D_OFF        169
#define MENU_CONFIG_KEYPAD              170
#define MENU_CONFIG_JOYSTICK            171
#define MENU_CONFIG_HOTKEY              172
#define MENU_CONFIG_DEBUG_LOG_ON        173
#define MENU_CONFIG_DEBUG_LOG_OFF       174

#define MENU_HELP_ABOUT_EMU         180

void prehook_cb_menu(void *, uint32_t);

#endif

