/*
 * Ghidra decompilation
 *
 * Function : RARCloseArchive
 * Address  : 080d022c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable Data:DataSet *[r0:4] conflicts with parameter, skipped. */

int RARCloseArchive(void *hArcData)

{
  bool bVar1;
  int iVar2;
  int __in_chrg;
  int __in_chrg_00;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  bool Success;
  
  if (hArcData == (void *)0x0) {
    return 0x11;
  }
  bVar1 = File::Close((File *)(Archive *)((int)hArcData + 0x167d8));
  CmdExtract::~CmdExtract((CmdExtract *)((int)hArcData + 0x296c0),__in_chrg);
  Archive::~Archive((Archive *)((int)hArcData + 0x167d8),__in_chrg_00);
  iVar2 = extraout_r1;
  if (*(void **)((int)hArcData + 0x16778) != (void *)0x0) {
    free(*(void **)((int)hArcData + 0x16778));
    iVar2 = extraout_r1_00;
  }
  if (*(void **)((int)hArcData + 0x1671c) != (void *)0x0) {
    free(*(void **)((int)hArcData + 0x1671c));
    iVar2 = extraout_r1_01;
  }
  if (*(void **)((int)hArcData + 0x166c0) != (void *)0x0) {
    free(*(void **)((int)hArcData + 0x166c0));
    iVar2 = extraout_r1_02;
  }
  if (*(void **)((int)hArcData + 0x16664) != (void *)0x0) {
    free(*(void **)((int)hArcData + 0x16664));
    iVar2 = extraout_r1_03;
  }
  if (*(void **)((int)hArcData + 0x16608) != (void *)0x0) {
    free(*(void **)((int)hArcData + 0x16608));
    iVar2 = extraout_r1_04;
  }
  RAROptions::~RAROptions((RAROptions *)hArcData,iVar2);
  operator_delete(hArcData);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}


