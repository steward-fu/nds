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

#define MENU_VIEW_LAYOUT            120
#define MENU_VIEW_FILTER            121

void prehook_cb_menu(void *, uint32_t);

#endif

