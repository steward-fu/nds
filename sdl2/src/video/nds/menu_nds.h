// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __MENU_NDS_H__
#define __MENU_NDS_H__

#if defined(NDS_ARM32)
#define NDS_VER "DraStic DS Emulator v2.5.0.4 (ARM32)"
#else
#define NDS_VER "DraStic DS Emulator v2.5.2.0 (ARM64)"
#endif

void prehook_cb_menu(void *, uint32_t);

#endif

