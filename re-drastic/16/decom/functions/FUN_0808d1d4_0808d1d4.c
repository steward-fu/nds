/*
 * Ghidra decompilation
 *
 * Function : FUN_0808d1d4
 * Address  : 0808d1d4
 * Program  : drastic16
 */


byte * FUN_0808d1d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,
                   byte *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_4 == (byte *)0x0) {
    pbVar8 = param_5;
    do {
      uVar11 = *param_2;
      uVar12 = param_2[1];
      uVar13 = param_2[2];
      uVar14 = param_2[3];
      param_2 = param_2 + 4;
      *param_3 = uVar11;
      param_3[1] = uVar12;
      param_3[2] = uVar13;
      param_3[3] = uVar14;
      param_3 = param_3 + 4;
      pbVar5 = pbVar8 + -0x20;
      bVar1 = 0x1f < (int)pbVar8;
      pbVar8 = pbVar5;
    } while (pbVar5 != (byte *)0x0 && bVar1);
    return param_5;
  }
  pbVar8 = param_4;
  if (param_5 == (byte *)0x0) {
    do {
      uVar11 = *param_1;
      uVar12 = param_1[1];
      uVar13 = param_1[2];
      uVar14 = param_1[3];
      param_1 = param_1 + 4;
      *param_3 = uVar11;
      param_3[1] = uVar12;
      param_3[2] = uVar13;
      param_3[3] = uVar14;
      param_3 = param_3 + 4;
      pbVar5 = pbVar8 + -0x20;
      bVar1 = 0x1f < (int)pbVar8;
      pbVar8 = pbVar5;
    } while (pbVar5 != (byte *)0x0 && bVar1);
    return param_4;
  }
  bVar9 = *(byte *)param_1;
  bVar6 = *(byte *)param_2;
  puVar3 = param_3;
  do {
    while (bVar9 < bVar6) {
      puVar4 = (undefined8 *)((int)puVar3 + 1);
      *(byte *)puVar3 = bVar9;
      param_1 = (undefined8 *)((int)param_1 + 1);
      bVar9 = *(byte *)param_1;
      param_4 = param_4 + -1;
      puVar3 = puVar4;
      if (param_4 == (byte *)0x0) {
        do {
          puVar2 = (undefined4 *)((int)param_2 + 4);
          uVar10 = *(undefined4 *)param_2;
          param_2 = param_2 + 1;
          uVar7 = *puVar2;
          puVar2 = (undefined4 *)((int)puVar4 + 4);
          *(undefined4 *)puVar4 = uVar10;
          pbVar8 = param_5 + -8;
          puVar4 = puVar4 + 1;
          *puVar2 = uVar7;
          bVar1 = 7 < (int)param_5;
          param_5 = pbVar8;
        } while (pbVar8 != (byte *)0x0 && bVar1);
        return (byte *)((int)puVar4 + ((int)pbVar8 - (int)param_3));
      }
    }
    puVar4 = puVar3;
    if (bVar9 != bVar6) {
      puVar4 = (undefined8 *)((int)puVar3 + 1);
      *(byte *)puVar3 = bVar6;
    }
    param_2 = (undefined8 *)((int)param_2 + 1);
    bVar6 = *(byte *)param_2;
    param_5 = param_5 + -1;
    puVar3 = puVar4;
  } while (param_5 != (byte *)0x0);
  do {
    puVar2 = (undefined4 *)((int)param_1 + 4);
    uVar10 = *(undefined4 *)param_1;
    param_1 = param_1 + 1;
    uVar7 = *puVar2;
    puVar2 = (undefined4 *)((int)puVar4 + 4);
    *(undefined4 *)puVar4 = uVar10;
    pbVar8 = param_4 + -8;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar7;
    bVar1 = 7 < (int)param_4;
    param_4 = pbVar8;
  } while (pbVar8 != (byte *)0x0 && bVar1);
  return (byte *)((int)puVar4 + ((int)pbVar8 - (int)param_3));
}


