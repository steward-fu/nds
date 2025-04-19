// LGPL-2.1 License
// (C) 2025 Steward Fu <steward.fu@gmail.com>

#ifndef __COMMON_FILE_H__
#define __COMMON_FILE_H__

#define BIOS_PATH           "/system"
#define NDS_FIRMWARE        "nds_firmware"
#define NDS_BIOS_ARM7       "nds_bios_arm7"
#define NDS_BIOS_ARM9       "nds_bios_arm9"
#define DRASTIC_BIOS_ARM7   "drastic_bios_arm7"
#define DRASTIC_BIOS_ARM9   "drastic_bios_arm9"

int create_bios_files(void);
int get_file_size(const char *);
int get_file_line(const char *);
int read_file(const char *, void *, int);
int write_file(const char *, const void *, int);

#endif

