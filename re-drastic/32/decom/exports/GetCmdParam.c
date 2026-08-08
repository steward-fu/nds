/*
 * Ghidra decompilation
 *
 * Function : GetCmdParam
 * Address  : 080d2fa8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * GetCmdParam(wchar *CmdLine,wchar *Param,size_t MaxSize)

{
  uint uVar1;
  wchar wVar2;
  uint uVar3;
  bool bVar4;
  
  wVar2 = *CmdLine;
  if (wVar2 == 0x20 || wVar2 == 9) {
    do {
      CmdLine = CmdLine + 1;
      wVar2 = *CmdLine;
    } while (wVar2 == 0x20 || wVar2 == 9);
  }
  if (wVar2 == 0) {
    return (wchar *)0x0;
  }
  if (Param == (wchar *)0x0) {
    do {
      while( true ) {
        if ((Param == (wchar *)0x0) && (wVar2 == 0x20 || wVar2 == 9)) {
          return CmdLine;
        }
        bVar4 = wVar2 == 0x22;
        wVar2 = CmdLine[1];
        if (bVar4) break;
        CmdLine = CmdLine + 1;
        if (wVar2 == 0) {
          return CmdLine;
        }
      }
      if (wVar2 == 0x22) {
        wVar2 = CmdLine[2];
        CmdLine = CmdLine + 1;
      }
      else {
        Param = (wchar *)((uint)Param ^ 1);
      }
      CmdLine = CmdLine + 1;
    } while (wVar2 != 0);
    return CmdLine;
  }
  bVar4 = false;
  uVar1 = MaxSize - 1;
  uVar3 = 0;
  do {
    if ((!bVar4) && (wVar2 == 9 || wVar2 == 0x20)) break;
    if (wVar2 == 0x22) {
      wVar2 = CmdLine[1];
      if (wVar2 != 0x22) {
        bVar4 = (bool)(bVar4 ^ 1);
        goto LAB_080d2ffc;
      }
      if (uVar3 < uVar1) {
        Param[uVar3] = 0x22;
      }
      wVar2 = CmdLine[2];
      if (uVar3 < uVar1) {
        uVar3 = uVar3 + 1;
      }
      CmdLine = CmdLine + 2;
    }
    else {
      if (uVar3 < uVar1) {
        Param[uVar3] = wVar2;
      }
      wVar2 = CmdLine[1];
      if (uVar3 < uVar1) {
        uVar3 = uVar3 + 1;
      }
LAB_080d2ffc:
      CmdLine = CmdLine + 1;
    }
  } while (wVar2 != 0);
  Param[uVar3] = 0;
  return CmdLine;
}


