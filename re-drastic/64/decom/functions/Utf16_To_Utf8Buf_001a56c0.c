/*
 * Ghidra decompilation
 *
 * Function : Utf16_To_Utf8Buf
 * Address  : 001a56c0
 * Program  : drastic64
 */


undefined8 Utf16_To_Utf8Buf(long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  char cVar13;
  
  if (param_3 == 0) {
    if (param_1[1] == 0) {
      Buf_Free(param_1,&g_Alloc);
      iVar3 = Buf_Create(param_1,1,&g_Alloc);
      if (iVar3 == 0) {
        return 2;
      }
      puVar8 = (undefined *)*param_1;
    }
    else {
      puVar8 = (undefined *)*param_1;
    }
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar7 = lVar4 + 1;
      uVar12 = uVar5 + 1;
      uVar1 = *(ushort *)(param_2 + lVar4 * 2);
      uVar6 = (uint)uVar1;
      if (0x7f < uVar6) {
        if (uVar6 - 0xd800 < 0x800) {
          if (0xdbff < uVar6 || param_3 == lVar7) goto LAB_001a5798;
          lVar7 = lVar4 + 2;
          uVar11 = *(ushort *)(param_2 + lVar4 * 2 + 2) - 0xdc00;
          if (0x3ff < uVar11) goto LAB_001a5798;
          iVar3 = (0x1fffff < (uVar11 | (uVar6 - 0xd800) * 0x400) + 0x10000) + 3;
        }
        else {
          iVar3 = (0x7ff < uVar1) + 1;
        }
        uVar12 = (ulong)(iVar3 - 1) + uVar5 + 2;
      }
      uVar5 = uVar12;
      lVar4 = lVar7;
    } while (param_3 != lVar4);
    uVar12 = uVar5 + 1;
LAB_001a5798:
    if ((ulong)param_1[1] < uVar12) {
      Buf_Free(param_1,&g_Alloc);
      iVar3 = Buf_Create(param_1,uVar12,&g_Alloc);
      if (iVar3 == 0) {
        return 2;
      }
    }
    lVar10 = *param_1;
    lVar4 = 0;
    lVar7 = 0;
    do {
      lVar9 = lVar7 + 1;
      uVar1 = *(ushort *)(param_2 + lVar7 * 2);
      uVar6 = (uint)uVar1;
      if (uVar1 < 0x80) {
        if (lVar10 != 0) {
          *(char *)(lVar10 + lVar4) = (char)uVar1;
        }
        lVar4 = lVar4 + 1;
      }
      else {
        if (uVar1 - 0xd800 < 0x800) {
          if (0xdbff < uVar1 || param_3 == lVar9) {
LAB_001a598c:
            *(undefined *)(*param_1 + lVar4) = 0;
            return 0xb;
          }
          lVar9 = lVar7 + 2;
          uVar6 = *(ushort *)(param_2 + lVar7 * 2 + 2) - 0xdc00;
          if (0x3ff < uVar6) goto LAB_001a598c;
          uVar6 = (uVar6 | (uVar1 - 0xd800) * 0x400) + 0x10000;
          uVar11 = 0x18;
          if (uVar6 < 0x200000) {
            uVar11 = 0x12;
          }
          cVar13 = -8;
          if (uVar6 < 0x200000) {
            cVar13 = -0x10;
          }
          iVar3 = 4;
          if (uVar6 < 0x200000) {
            iVar3 = 3;
          }
        }
        else {
          uVar11 = 0xc;
          if (uVar1 < 0x800) {
            uVar11 = 6;
          }
          cVar13 = -0x20;
          if (uVar1 < 0x800) {
            cVar13 = -0x40;
          }
          iVar3 = 2;
          if (uVar1 < 0x800) {
            iVar3 = 1;
          }
        }
        if (lVar10 == 0) {
          lVar4 = (ulong)(iVar3 - 1) + lVar4 + 2;
        }
        else {
          uVar2 = iVar3 - 1;
          *(char *)(lVar10 + lVar4) = cVar13 + (char)(uVar6 >> (ulong)uVar11);
          *(byte *)(lVar10 + lVar4 + 1) = ((byte)(uVar6 >> (ulong)(uVar2 * 6 & 0x1f)) & 0x3f) + 0x80
          ;
          if (uVar2 != 0) {
            *(byte *)(lVar10 + lVar4 + 2) =
                 ((byte)(uVar6 >> (ulong)((iVar3 + -2) * 6 & 0x1f)) & 0x3f) + 0x80;
            if (iVar3 + -2 != 0) {
              *(byte *)(lVar10 + lVar4 + 3) =
                   ((byte)(uVar6 >> (ulong)((iVar3 + -3) * 6 & 0x1f)) & 0x3f) + 0x80;
              if (iVar3 + -3 != 0) {
                *(byte *)(lVar10 + lVar4 + 4) = ((byte)uVar6 & 0x3f) + 0x80;
              }
            }
          }
          lVar4 = lVar4 + 2 + (ulong)uVar2;
        }
      }
      lVar7 = lVar9;
    } while (param_3 != lVar9);
    puVar8 = (undefined *)(*param_1 + lVar4);
  }
  *puVar8 = 0;
  return 0;
}


