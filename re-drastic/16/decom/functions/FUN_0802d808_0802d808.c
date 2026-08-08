/*
 * Ghidra decompilation
 *
 * Function : FUN_0802d808
 * Address  : 0802d808
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0802d820) */

void FUN_0802d808(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,uint param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 auStack_230 [64];
  undefined8 uStack_30;
  
  uVar3 = param_7 & 1;
  if (param_7 != 0) {
    iVar9 = 0;
    puVar7 = (undefined8 *)(param_4 + 0x10);
    puVar5 = (undefined8 *)0x0;
    uVar6 = uVar3;
    iVar8 = param_3;
    do {
      puVar4 = puVar5;
      if ((uVar6 != 0) && (bVar10 = iVar9 != 0, iVar9 = iVar9 + 1, puVar4 = puVar7, bVar10)) {
        FUN_0808eba0(auStack_230,puVar5,puVar7,iVar8);
        puVar4 = auStack_230;
      }
      param_7 = param_7 >> 1;
      puVar7 = puVar7 + 0x44;
      uVar6 = param_7 & 1;
      iVar8 = iVar8 + 0x20;
      puVar5 = puVar4;
    } while (param_7 != 0);
    if (iVar9 != 0) {
      FUN_0808ec30(auStack_230,puVar4,**(undefined2 **)(param_1 + 0xc),param_3 + 0xa0);
      goto LAB_0802d8d8;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0xc);
  bVar11 = auStack_230 <= (undefined8 *)((int)puVar5 + 2);
  bVar10 = (undefined8 *)((int)puVar5 + 2) == auStack_230;
  if (bVar11 && !bVar10) {
    bVar11 = puVar5 <= &uStack_30;
    bVar10 = &uStack_30 == puVar5;
  }
  puVar7 = auStack_230;
  if (bVar11 && !bVar10) {
    iVar8 = 0;
    do {
      *(undefined2 *)((int)auStack_230 + iVar8) = *(undefined2 *)puVar5;
      iVar8 = iVar8 + 2;
    } while (iVar8 != 0x200);
  }
  else {
    do {
      uVar2 = CONCAT22(*(undefined2 *)puVar5,*(undefined2 *)puVar5);
      uVar1 = CONCAT44(uVar2,uVar2);
      *puVar7 = uVar1;
      puVar7[1] = uVar1;
      puVar7 = puVar7 + 2;
    } while (&uStack_30 != puVar7);
  }
LAB_0802d8d8:
  FUN_0808ed90(param_2,auStack_230);
  if (param_5 == 0) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_0808ecc0(param_2,param_6,param_5,param_3);
  }
  return;
}


