/*
 * Ghidra decompilation
 *
 * Function : rescale
 * Address  : 001ccb20
 * Program  : drastic64
 */


/* PPM_CONTEXT::rescale(ModelPPM*) */

void __thiscall PPM_CONTEXT::rescale(PPM_CONTEXT *this,ModelPPM *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  byte bVar6;
  PPM_CONTEXT PVar7;
  ModelPPM MVar8;
  ModelPPM MVar9;
  ushort uVar10;
  short sVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  
  uVar10 = *(ushort *)this;
  puVar19 = *(undefined8 **)(param_1 + 0x660);
  if (*(undefined8 **)(this + 4) == puVar19) {
    cVar12 = *(char *)((long)puVar19 + 1);
  }
  else {
    do {
      puVar24 = puVar19;
      puVar19 = (undefined8 *)((long)puVar24 + -10);
      uVar5 = *(undefined *)puVar24;
      *puVar24 = *puVar19;
      *(undefined2 *)(puVar24 + 1) = *(undefined2 *)((long)puVar24 + -2);
      *(undefined *)puVar19 = uVar5;
      *(undefined *)((long)puVar24 + -9) = *(undefined *)((long)puVar24 + 1);
      puVar24[-1] = *(undefined8 *)((long)puVar24 + 2);
    } while (*(undefined8 **)(this + 4) != puVar19);
    cVar12 = *(char *)((long)puVar24 + -9);
  }
  *(char *)((long)puVar19 + 1) = cVar12 + '\x04';
  uVar15 = (ulong)(uVar10 - 2);
  sVar11 = *(short *)(this + 2);
  iVar4 = *(int *)(param_1 + 0x670);
  *(ushort *)(this + 2) = sVar11 + 4U;
  bVar6 = *(byte *)((long)puVar19 + 1);
  uVar13 = (uint)bVar6;
  if (iVar4 != 0) {
    uVar13 = uVar13 + 1;
  }
  *(char *)((long)puVar19 + 1) = (char)((int)uVar13 >> 1);
  iVar22 = (uint)(ushort)(sVar11 + 4U) - (uint)bVar6;
  puVar24 = (undefined8 *)((long)puVar19 + (uVar15 + 1) * 10);
  *(short *)(this + 2) = (short)((int)uVar13 >> 1);
  puVar21 = puVar19;
  do {
    while( true ) {
      puVar2 = (undefined8 *)((long)puVar21 + 10);
      iVar22 = iVar22 - (uint)*(byte *)((long)puVar21 + 0xb);
      iVar3 = (int)((uint)*(byte *)((long)puVar21 + 0xb) + (uint)(iVar4 != 0)) >> 1;
      *(char *)((long)puVar21 + 0xb) = (char)iVar3;
      *(short *)(this + 2) = (short)iVar3 + *(short *)(this + 2);
      bVar6 = *(byte *)((long)puVar21 + 0xb);
      if (bVar6 <= *(byte *)((long)puVar21 + 1)) break;
      uVar5 = *(undefined *)puVar2;
      uVar23 = *(undefined8 *)((long)puVar21 + 0xc);
      puVar18 = puVar2;
      do {
        puVar17 = puVar18;
        *puVar17 = *puVar21;
        puVar18 = (undefined8 *)((long)puVar17 + -10);
        *(undefined2 *)(puVar17 + 1) = *(undefined2 *)(puVar21 + 1);
        puVar21 = (undefined8 *)((long)puVar21 + -10);
        if (*(undefined8 **)(this + 4) == puVar18) break;
      } while (*(byte *)((long)puVar17 + -0x13) < bVar6);
      *(undefined *)puVar18 = uVar5;
      *(byte *)((long)puVar17 + -9) = bVar6;
      puVar17[-1] = uVar23;
      puVar21 = puVar2;
      if (puVar2 == puVar24) goto LAB_001ccc7c;
    }
    puVar21 = puVar2;
  } while (puVar2 != puVar24);
LAB_001ccc7c:
  uVar16 = (uint)*(ushort *)this;
  puVar24 = *(undefined8 **)(this + 4);
  puVar20 = (undefined *)((long)puVar19 + (uVar15 + 1) * 10);
  uVar13 = (uint)(byte)puVar20[1];
  if (puVar20[1] == 0) {
    do {
      pcVar1 = puVar20 + -9;
      puVar20 = puVar20 + -10;
      uVar13 = uVar13 + 1;
    } while (*pcVar1 == '\0');
    uVar14 = uVar16 - uVar13;
    uVar16 = uVar14 & 0xffff;
    *(short *)this = (short)uVar14;
    iVar22 = iVar22 + uVar13;
    if (uVar16 == 1) {
      PVar7 = *(PPM_CONTEXT *)puVar24;
      uVar13 = (uint)(byte)*(PPM_CONTEXT *)((long)puVar24 + 1);
      uVar23 = *(undefined8 *)((long)puVar24 + 2);
      do {
        uVar16 = uVar13 - (uVar13 >> 1);
        iVar22 = iVar22 >> 1;
        uVar13 = uVar16 & 0xff;
      } while (1 < iVar22);
      MVar8 = param_1[(long)(((int)(uVar10 + 1) >> 1) + -1) + 0x4ad6];
      *puVar24 = *(undefined8 *)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70);
      *(undefined8 **)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70) = puVar24;
      *(PPM_CONTEXT **)(param_1 + 0x660) = this + 2;
      this[2] = PVar7;
      this[3] = SUB41(uVar16,0);
      *(undefined8 *)(this + 4) = uVar23;
      return;
    }
  }
  *(short *)(this + 2) = ((short)iVar22 - (short)(iVar22 >> 1)) + *(short *)(this + 2);
  uVar13 = (int)(uVar16 + 1) >> 1;
  if (uVar13 != uVar10 + 1 >> 1) {
    MVar8 = param_1[(long)(((int)(uVar10 + 1) >> 1) + -1) + 0x4ad6];
    MVar9 = param_1[(long)(int)(uVar13 - 1) + 0x4ad6];
    puVar19 = puVar24;
    if (MVar8 != MVar9) {
      puVar19 = *(undefined8 **)(param_1 + (ulong)(byte)MVar9 * 8 + 0x4b70);
      if (puVar19 == (undefined8 *)0x0) {
        uVar16 = (uint)(byte)param_1[(ulong)(byte)MVar8 + 0x4ab0] -
                 (uint)(byte)param_1[(ulong)(byte)MVar9 + 0x4ab0];
        uVar13 = (uint)(byte)param_1[(ulong)(byte)MVar9 + 0x4ab0] * 0x14;
        puVar19 = (undefined8 *)((long)puVar24 + (ulong)uVar13);
        MVar8 = param_1[(long)(int)(uVar16 - 1) + 0x4ad6];
        uVar14 = (uint)(byte)param_1[(ulong)(byte)param_1[(long)(int)(uVar16 - 1) + 0x4ad6] + 0x4ab0
                                    ];
        if (uVar16 != (byte)param_1[(ulong)(byte)param_1[(long)(int)(uVar16 - 1) + 0x4ad6] + 0x4ab0]
           ) {
          *(undefined8 *)((long)puVar24 + (ulong)uVar13) =
               *(undefined8 *)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b68);
          *(undefined8 **)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b68) = puVar19;
          uVar14 = uVar16 - (byte)param_1[(long)(int)((byte)MVar8 - 1) + 0x4ab0];
          puVar19 = (undefined8 *)
                    ((long)puVar19 +
                    (ulong)((uint)(byte)param_1[(long)(int)((byte)MVar8 - 1) + 0x4ab0] * 0x14));
        }
        MVar8 = param_1[(long)(int)(uVar14 - 1) + 0x4ad6];
        *puVar19 = *(undefined8 *)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70);
        *(undefined8 **)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70) = puVar19;
        *(undefined8 **)(this + 4) = puVar24;
        goto LAB_001cccc4;
      }
      *(undefined8 *)(param_1 + (ulong)(byte)MVar9 * 8 + 0x4b70) = *puVar19;
      puVar19 = (undefined8 *)memcpy(puVar19,puVar24,(ulong)(uVar13 * 0x14));
      *puVar24 = *(undefined8 *)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70);
      *(undefined8 **)(param_1 + (ulong)(byte)MVar8 * 8 + 0x4b70) = puVar24;
    }
    *(undefined8 **)(this + 4) = puVar19;
    puVar24 = puVar19;
  }
LAB_001cccc4:
  *(undefined8 **)(param_1 + 0x660) = puVar24;
  return;
}


