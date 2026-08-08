/*
 * Ghidra decompilation
 *
 * Function : FUN_08059938
 * Address  : 08059938
 * Program  : drastic16
 */


void FUN_08059938(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar7 = (uint *)(param_1 + 0x400b4);
  do {
    uVar2 = (*(uint **)(param_2 + 0x10))[1];
    puVar7[-7] = **(uint **)(param_2 + 0x10);
    puVar7[-6] = uVar2;
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 8;
    puVar4 = (uint *)(iVar3 + 0xc);
    *(uint **)(param_2 + 0x10) = puVar4;
    *puVar7 = *puVar4;
    puVar4 = (uint *)(*(int *)(param_2 + 0x10) + 4);
    *(uint **)(param_2 + 0x10) = puVar4;
    puVar7[1] = *puVar4;
    puVar4 = (uint *)(*(int *)(param_2 + 0x10) + 4);
    *(uint **)(param_2 + 0x10) = puVar4;
    puVar7[2] = *puVar4;
    puVar5 = (undefined2 *)(*(int *)(param_2 + 0x10) + 4);
    *(undefined2 **)(param_2 + 0x10) = puVar5;
    *(undefined2 *)(puVar7 + 4) = *puVar5;
    puVar5 = (undefined2 *)(*(int *)(param_2 + 0x10) + 2);
    *(undefined2 **)(param_2 + 0x10) = puVar5;
    *(undefined2 *)((int)puVar7 + 0x12) = *puVar5;
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 2;
    *(undefined *)((int)puVar7 + 0x17) = *(undefined *)(iVar3 + 2);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(puVar7 + 6) = *(undefined *)(iVar3 + 1);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)((int)puVar7 + 0x19) = *(undefined *)(iVar3 + 1);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)(puVar7 + 5) = *(undefined *)(iVar3 + 1);
    iVar3 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar3 + 1;
    *(undefined *)((int)puVar7 + 0x16) = *(undefined *)(iVar3 + 1);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    cVar1 = *(char *)(puVar7 + 5);
    switch(cVar1) {
    case '\0':
    case '\x01':
    case '\x02':
      if (param_3 < 7) {
        uVar2 = *puVar7;
        iVar3 = **(int **)(param_1 + 0x40bdc);
        *puVar7 = uVar2 + 0x2000000;
        puVar7[-1] = iVar3 + uVar2;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x40bdc) + (*puVar7 >> 0x17) * 0x30;
        if (*(char *)(iVar3 + 0xfc060) == '\0') {
          puVar7[-1] = *(int *)(iVar3 + 0xfc038) + (*puVar7 & *(uint *)(iVar3 + 0xfc034));
        }
        else if (*(char *)(iVar3 + 0xfc060) == '\x01') {
          uVar2 = (**(code **)(iVar3 + 0xfc038))();
          cVar1 = *(char *)(puVar7 + 5);
          puVar7[-1] = uVar2;
        }
        else {
          puVar7[-1] = 0;
          *(undefined *)((int)puVar7 + 0x16) = 0;
        }
      }
      if (cVar1 == '\x02') {
        uVar8 = puVar7[-6];
        uVar2 = uVar8 - 0x40;
        uVar2 = uVar2 & ~((int)uVar2 >> 0x1f) & 0xfffffff8;
        puVar7[-3] = uVar2;
        while (uVar2 <= uVar8) {
          FUN_08058a58(puVar7 + -0x27);
          uVar2 = puVar7[-3];
        }
      }
      break;
    case '\x03':
      puVar7[-1] = (*(byte *)(puVar7[-2] + 3) & 7) * 0x10 + 0x80fa6c0;
      break;
    case '\x04':
      puVar7[-1] = (uint)&DAT_0aaed110;
    }
    *(undefined *)((int)puVar7 + 0x15) = 3;
    puVar7 = puVar7 + 0x2e;
  } while (puVar7 != (uint *)(param_1 + 0x40c34));
  uVar6 = (*(undefined4 **)(param_2 + 0x10))[1];
  *(undefined4 *)(param_1 + 0x40be0) = **(undefined4 **)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x40be4) = uVar6;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 8;
  FUN_0807797c(param_1);
  return;
}


