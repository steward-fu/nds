// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_LANG_H__
#define __COMMON_LANG_H__

int init_lang(void);
int quit_lang(void);
const char* l10n(const char *);
int utf8_to_gbk(const char *, char *, int);
int gbk_to_utf8(const char *, char *, int);

#endif

