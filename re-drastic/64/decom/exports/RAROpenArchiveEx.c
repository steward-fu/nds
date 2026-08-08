/*
 * Ghidra decompilation
 *
 * Function : RAROpenArchiveEx
 * Address  : 001b3140
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CommandData * RAROpenArchiveEx(char **param_1)

{
  Archive *this;
  CmdExtract *this_00;
  ulong uVar1;
  CommandData CVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  CommandData *this_01;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  CommandData *pCVar10;
  ulong uVar11;
  wchar_t *local_2830;
  long local_2828;
  undefined8 uStack_2820;
  undefined8 local_2818;
  wchar_t awStack_2808 [2048];
  char local_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
                    /* try { // try from 001b3188 to 001b318b has its CatchHandler @ 001b357c */
  this_01 = (CommandData *)operator_new(0x32430);
                    /* try { // try from 001b3190 to 001b3193 has its CatchHandler @ 001b369c */
  CommandData::CommandData(this_01);
  this = (Archive *)(this_01 + 0x169d0);
                    /* try { // try from 001b31a4 to 001b31a7 has its CatchHandler @ 001b3688 */
  Archive::Archive(this,(RAROptions *)this_01);
  this_00 = (CmdExtract *)(this_01 + 0x29c28);
                    /* try { // try from 001b31b8 to 001b31bb has its CatchHandler @ 001b360c */
  CmdExtract::CmdExtract(this_00,this_01);
  uVar9 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(this_01 + 0x125c0) = 0;
  *(undefined4 *)(this_01 + 0x32428) = uVar9;
                    /* try { // try from 001b31e0 to 001b326f has its CatchHandler @ 001b3540 */
  StringList::AddString((StringList *)(this_01 + 0x16638),L"*");
  local_808[0] = '\0';
  if (*param_1 != (char *)0x0) {
    strncpyz(local_808,*param_1,0x800);
  }
  GetWideName(local_808,(wchar_t *)param_1[1],awStack_2808,0x800);
  CommandData::AddArcName(this_01,awStack_2808);
  pcVar7 = param_1[6];
  *(undefined4 *)(this_01 + 0xc23c) = 1;
  *(undefined4 *)(this_01 + 0xe5a4) = 1;
  *(char **)(this_01 + 0x125c8) = param_1[7];
  *(char **)(this_01 + 0x125d0) = pcVar7;
  cVar3 = File::Open((File *)this,awStack_2808,0);
  if (cVar3 == '\0') {
    *(undefined4 *)((long)param_1 + 0x14) = 0xf;
  }
  else {
    cVar3 = Archive::IsArchive(this,false);
    if (cVar3 != '\0') {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      CVar2 = this_01[0x27bdd];
      if (CVar2 == (CommandData)0x0) {
        uVar8 = 4;
      }
      else {
        uVar8 = 5;
        *(undefined4 *)((long)param_1 + 0x2c) = 1;
      }
      uVar4 = (uint)(CVar2 != (CommandData)0x0);
      if (this_01[0x27bdf] != (CommandData)0x0) {
        *(uint *)((long)param_1 + 0x2c) = uVar8;
        uVar4 = uVar8;
      }
      if (this_01[0x27bdc] != (CommandData)0x0) {
        uVar4 = uVar4 | 8;
        *(uint *)((long)param_1 + 0x2c) = uVar4;
      }
      if (this_01[0x27be2] != (CommandData)0x0) {
        uVar4 = uVar4 | 0x10;
        *(uint *)((long)param_1 + 0x2c) = uVar4;
      }
      if (this_01[0x27be0] != (CommandData)0x0) {
        uVar4 = uVar4 | 0x20;
        *(uint *)((long)param_1 + 0x2c) = uVar4;
      }
      if (this_01[0x27be3] != (CommandData)0x0) {
        uVar4 = uVar4 | 0x40;
        *(uint *)((long)param_1 + 0x2c) = uVar4;
      }
      if (this_01[0x27be4] != (CommandData)0x0) {
        uVar4 = uVar4 | 0x80;
        *(uint *)((long)param_1 + 0x2c) = uVar4;
      }
      if (this_01[0x27be1] != (CommandData)0x0) {
        *(uint *)((long)param_1 + 0x2c) = uVar4 | 0x100;
      }
      local_2830 = (wchar_t *)0x0;
      local_2828 = 0;
      uStack_2820 = 0;
      local_2818 = 0;
      if ((*(int *)(param_1 + 4) == 0) ||
         (cVar3 = Archive::GetComment(this,(Array *)&local_2830), cVar3 == '\0')) {
        *(undefined8 *)((long)param_1 + 0x24) = 0;
      }
      else {
        uVar11 = local_2828 * 4;
        uVar1 = uVar11 + 1;
        sVar6 = uVar1;
        if (uVar1 < 0x20) {
          sVar6 = 0x20;
        }
        pcVar7 = (char *)malloc(sVar6);
        if (pcVar7 == (char *)0x0) {
                    /* try { // try from 001b3538 to 001b353b has its CatchHandler @ 001b36a8 */
          ErrorHandler::MemoryError();
        }
        memset(pcVar7,0,uVar1);
                    /* try { // try from 001b3498 to 001b349b has its CatchHandler @ 001b3554 */
        WideToChar(local_2830,pcVar7,uVar11);
        sVar6 = strlen(pcVar7);
        uVar11 = (ulong)*(uint *)(param_1 + 4);
        uVar1 = sVar6 + 1;
        uVar9 = 0x14;
        if (uVar1 <= uVar11) {
          uVar9 = 1;
        }
        if (uVar1 < uVar11) {
          uVar11 = uVar1;
        }
        *(int *)((long)param_1 + 0x24) = (int)uVar11;
        *(undefined4 *)(param_1 + 5) = uVar9;
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 2;
        memcpy(param_1[3],pcVar7,(ulong)((int)uVar11 - 1));
        if (uVar1 <= *(uint *)(param_1 + 4)) {
          param_1[3][*(int *)((long)param_1 + 0x24) - 1] = '\0';
        }
        free(pcVar7);
      }
                    /* try { // try from 001b332c to 001b344f has its CatchHandler @ 001b36a8 */
      CmdExtract::ExtractArchiveInit(this_00,this_01,this);
      pCVar10 = this_01;
      if (local_2830 != (wchar_t *)0x0) {
        free(local_2830);
      }
      goto LAB_001b333c;
    }
    iVar5 = *(int *)(this_01 + 0x125c0);
    if (iVar5 == 0) {
      if (1 < ErrHandler) {
        if (ErrHandler < 0xc) {
          *(undefined4 *)((long)param_1 + 0x14) =
               *(undefined4 *)(&CSWTCH_33 + (ulong)ErrHandler * 4);
        }
        else {
          *(undefined4 *)((long)param_1 + 0x14) = 0x15;
        }
        goto LAB_001b33c4;
      }
      iVar5 = 0xd;
    }
    *(int *)((long)param_1 + 0x14) = iVar5;
  }
LAB_001b33c4:
  CmdExtract::~CmdExtract(this_00);
  Archive::~Archive(this);
  if (*(void **)(this_01 + 0x16918) != (void *)0x0) {
    free(*(void **)(this_01 + 0x16918));
  }
  if (*(void **)(this_01 + 0x16860) != (void *)0x0) {
    free(*(void **)(this_01 + 0x16860));
  }
  if (*(void **)(this_01 + 0x167a8) != (void *)0x0) {
    free(*(void **)(this_01 + 0x167a8));
  }
  if (*(void **)(this_01 + 0x166f0) != (void *)0x0) {
    free(*(void **)(this_01 + 0x166f0));
  }
  if (*(void **)(this_01 + 0x16638) != (void *)0x0) {
    free(*(void **)(this_01 + 0x16638));
  }
  RAROptions::~RAROptions((RAROptions *)this_01);
  pCVar10 = (CommandData *)0x0;
  operator_delete(this_01,0x32430);
LAB_001b333c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return pCVar10;
}


