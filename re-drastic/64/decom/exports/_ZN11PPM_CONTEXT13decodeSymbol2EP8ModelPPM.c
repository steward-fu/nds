/*
 * Ghidra decompilation
 *
 * Function : _ZN11PPM_CONTEXT13decodeSymbol2EP8ModelPPM
 * Address  : 001e6ed0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PPM_CONTEXT::decodeSymbol2(ModelPPM*) */

void __thiscall PPM_CONTEXT::decodeSymbol2(PPM_CONTEXT *this,ModelPPM *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ModelPPM MVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte **ppbVar17;
  byte **ppbVar18;
  int iVar19;
  short *psVar20;
  byte *pbStack_810;
  byte *local_808 [256];
  long local_8;
  byte *pbVar16;
  
  uVar6 = *(ushort *)this;
  local_8 = ___stack_chk_guard;
  iVar8 = (uint)uVar6 - *(int *)(param_1 + 0x668);
  if (uVar6 == 0x100) {
    psVar20 = (short *)(param_1 + 0x640);
    iVar11 = 1;
    *(undefined4 *)(param_1 + 0x4a9c) = 1;
  }
  else {
    uVar2 = (ulong)(byte)param_1[0xa82] + 4;
    if (*(int *)(param_1 + 0x668) <= iVar8) {
      uVar2 = (ulong)(byte)param_1[0xa82];
    }
    uVar3 = uVar2 + 2;
    if ((uint)uVar6 * 0xb <= (uint)*(ushort *)(this + 2)) {
      uVar3 = uVar2;
    }
    lVar1 = uVar3 * 4 + (ulong)(iVar8 < (int)((uint)**(ushort **)(this + 0xc) - (uint)uVar6)) * 4 +
            (ulong)(byte)param_1[(long)(iVar8 + -1) + 0x780] * 0x40;
    psVar20 = (short *)(param_1 + lVar1);
    iVar11 = (int)(uint)*(ushort *)(param_1 + lVar1) >> (*(byte *)(psVar20 + 1) & 0x1f);
    *(ushort *)(param_1 + lVar1) = *(ushort *)(param_1 + lVar1) - (short)iVar11;
    if (iVar11 == 0) {
      iVar11 = 1;
    }
    *(int *)(param_1 + 0x4a9c) = iVar11;
  }
  ppbVar18 = local_808;
  MVar4 = param_1[0xa80];
  iVar19 = 0;
  pbVar15 = (byte *)(*(long *)(this + 4) + -10);
  ppbVar17 = ppbVar18;
  iVar13 = iVar8;
  do {
    do {
      pbVar16 = pbVar15;
      pbVar15 = pbVar16 + 10;
    } while (param_1[(ulong)*pbVar15 + 0x680] == MVar4);
    bVar5 = pbVar16[0xb];
    *ppbVar17 = pbVar15;
    iVar19 = iVar19 + (uint)bVar5;
    pbVar16 = pbVar15;
    while( true ) {
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) {
        uVar14 = iVar19 + iVar11;
        *(uint *)(param_1 + 0x4a9c) = uVar14;
        uVar12 = 0;
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = *(uint *)(param_1 + 0x4a90) / uVar14;
        }
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = (uint)(*(int *)(param_1 + 0x4a8c) - *(int *)(param_1 + 0x4a88)) / uVar9;
        }
        *(uint *)(param_1 + 0x4a90) = uVar9;
        if ((int)uVar10 < (int)uVar14) {
          if ((int)uVar10 < iVar19) {
            for (uVar14 = (uint)local_808[0][1]; (int)uVar14 <= (int)uVar10;
                uVar14 = uVar14 + local_808[0][1]) {
              ppbVar18 = ppbVar18 + 1;
              local_808[0] = *ppbVar18;
            }
            *(uint *)(param_1 + 0x4a98) = uVar14;
            *(uint *)(param_1 + 0x4a94) = uVar14 - local_808[0][1];
            bVar5 = *(byte *)(psVar20 + 1);
            if ((bVar5 < 7) &&
               (cVar7 = *(char *)((long)psVar20 + 3) + -1, *(char *)((long)psVar20 + 3) = cVar7,
               cVar7 == '\0')) {
              *psVar20 = *psVar20 << 1;
              *(byte *)(psVar20 + 1) = bVar5 + 1;
              *(char *)((long)psVar20 + 3) = (char)(3 << (ulong)(bVar5 & 0x1f));
            }
            *(byte **)(param_1 + 0x660) = local_808[0];
            local_808[0][1] = local_808[0][1] + 4;
            *(short *)(this + 2) = *(short *)(this + 2) + 4;
            if (0x7c < local_808[0][1]) {
              rescale(this,param_1);
            }
            uVar12 = 1;
            *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_1 + 0x67c);
            param_1[0xa80] = (ModelPPM)((char)param_1[0xa80] + '\x01');
          }
          else {
            ppbVar17 = &pbStack_810;
            *(int *)(param_1 + 0x4a94) = iVar19;
            *(uint *)(param_1 + 0x4a98) = uVar14;
            do {
              ppbVar17 = ppbVar17 + 1;
              param_1[(ulong)**ppbVar17 + 0x680] = MVar4;
            } while (ppbVar17 != ppbVar18 + (iVar8 - 1));
            uVar6 = *(ushort *)this;
            *psVar20 = (short)uVar14 + *psVar20;
            uVar12 = 1;
            *(uint *)(param_1 + 0x668) = (uint)uVar6;
          }
        }
        if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar12,local_8 - ___stack_chk_guard,0);
        }
        return;
      }
      pbVar15 = pbVar16 + 10;
      ppbVar17 = ppbVar17 + 1;
      if (param_1[(ulong)*pbVar15 + 0x680] == MVar4) break;
      bVar5 = pbVar16[0xb];
      *ppbVar17 = pbVar15;
      iVar19 = iVar19 + (uint)bVar5;
      pbVar16 = pbVar15;
    }
  } while( true );
}


