/*
 * Ghidra decompilation
 *
 * Function : FUN_08031b14
 * Address  : 08031b14
 * Program  : drastic16
 */


void FUN_08031b14(int param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_34;
  char local_30 [16];
  
  uVar10 = *(uint *)(param_1 + 0x70);
  iVar8 = param_1 + 100;
  iVar9 = param_1 + 0x6c;
  local_34 = 0;
  uVar6 = uVar10 >> 8 & 0xf;
  if ((uVar10 >> 8 & 1) != 0) {
    uVar11 = *(ushort *)(param_1 + 0x108) & 3;
    bVar1 = local_30[uVar11 - 4];
    local_30[uVar11 - 4] = bVar1 + 1;
    local_30[(uint)bVar1 + uVar11 * 4] = '\0';
  }
  if ((uVar6 >> 1 & 1) != 0) {
    uVar11 = *(ushort *)(param_1 + 400) & 3;
    bVar1 = local_30[uVar11 - 4];
    local_30[uVar11 - 4] = bVar1 + 1;
    local_30[(uint)bVar1 + uVar11 * 4] = '\x01';
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar11 = *(ushort *)(param_1 + 0x218) & 3;
    bVar1 = local_30[uVar11 - 4];
    local_30[uVar11 - 4] = bVar1 + 1;
    local_30[(uint)bVar1 + uVar11 * 4] = '\x02';
  }
  if (uVar6 >> 3 != 0) {
    uVar6 = *(ushort *)(param_1 + 0x2a0) & 3;
    bVar1 = local_30[uVar6 - 4];
    local_30[uVar6 - 4] = bVar1 + 1;
    local_30[(uint)bVar1 + uVar6 * 4] = '\x03';
  }
  iVar12 = 0;
  pcVar3 = local_30 + 2;
  uVar6 = uVar10 & 8;
  iVar4 = 0;
  iVar7 = 0;
  do {
    bVar13 = (uVar10 & 0x1000) != 0;
    if (bVar13) {
      *(byte *)(iVar8 + iVar4) = (byte)iVar12 | 4;
    }
    bVar1 = local_30[iVar12 + -4];
    iVar5 = iVar4;
    if (bVar13) {
      iVar5 = iVar4 + 1;
    }
    iVar4 = iVar5;
    if (bVar1 != 0) {
      cVar2 = pcVar3[-2];
      iVar4 = iVar5 + 1;
      *(char *)(iVar8 + iVar5) = cVar2;
      if ((cVar2 != '\0') || (uVar6 == 0)) {
        *(char *)(iVar9 + iVar7) = cVar2;
        iVar7 = iVar7 + 1;
      }
      if (1 < bVar1) {
        cVar2 = pcVar3[-1];
        *(char *)(iVar8 + iVar4) = cVar2;
        if ((cVar2 != '\0') || (uVar6 == 0)) {
          *(char *)(iVar9 + iVar7) = cVar2;
          iVar7 = iVar7 + 1;
        }
        iVar4 = iVar5 + 2;
        if (bVar1 != 2) {
          cVar2 = *pcVar3;
          iVar4 = iVar5 + 3;
          *(char *)(iVar8 + iVar5 + 2) = cVar2;
          if ((cVar2 != '\0') || (uVar6 == 0)) {
            *(char *)(iVar9 + iVar7) = cVar2;
            iVar7 = iVar7 + 1;
          }
          if (bVar1 != 3) {
            cVar2 = pcVar3[1];
            *(char *)(iVar8 + iVar4) = cVar2;
            if ((cVar2 != '\0') || (uVar6 == 0)) {
              *(char *)(iVar9 + iVar7) = cVar2;
              iVar7 = iVar7 + 1;
            }
            iVar4 = iVar5 + 4;
          }
        }
      }
    }
    iVar12 = iVar12 + 1;
    pcVar3 = pcVar3 + 4;
  } while (iVar12 != 4);
  *(char *)(param_1 + 0x93) = (char)iVar4;
  *(char *)(param_1 + 0x92) = (char)iVar7;
  return;
}


