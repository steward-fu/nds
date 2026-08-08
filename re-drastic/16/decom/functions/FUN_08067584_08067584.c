/*
 * Ghidra decompilation
 *
 * Function : FUN_08067584
 * Address  : 08067584
 * Program  : drastic16
 */


undefined4 FUN_08067584(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *__ptr;
  FILE *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  char acStack_428 [1028];
  
  sprintf(acStack_428,"%s%cconfig%c%s",param_1 + 0x82030,0x2f,0x2f,param_2);
  __ptr = (undefined4 *)malloc(0x4000);
  printf("Saving config to %s\n",acStack_428);
  __s = fopen(acStack_428,"wb");
  __ptr[1] = 7;
  *__ptr = 0x46435344;
  __ptr[2] = uStack_430;
  __ptr[3] = uStack_42c;
  __ptr[4] = *(undefined4 *)(param_1 + 0x81760);
  __ptr[5] = *(undefined4 *)(param_1 + 0x81764);
  __ptr[6] = *(undefined4 *)(param_1 + 0x81768);
  __ptr[7] = *(undefined4 *)(param_1 + 0x8176c);
  __ptr[8] = *(undefined4 *)(param_1 + 0x81770);
  __ptr[9] = *(undefined4 *)(param_1 + 0x81774);
  __ptr[10] = *(undefined4 *)(param_1 + 0x8177c);
  __ptr[0xb] = *(undefined4 *)(param_1 + 0x81780);
  __ptr[0xc] = *(undefined4 *)(param_1 + 0x81784);
  __ptr[0xd] = *(undefined4 *)(param_1 + 0x81788);
  __ptr[0xe] = *(undefined4 *)(param_1 + 0x8178c);
  __ptr[0xf] = *(undefined4 *)(param_1 + 0x81790);
  __ptr[0x10] = *(undefined4 *)(param_1 + 0x81794);
  puVar1 = __ptr + 0x11;
  puVar7 = (undefined4 *)(param_1 + 0x81320);
  do {
    puVar6 = puVar7;
    puVar5 = puVar1;
    puVar7 = puVar6 + 4;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar1 = puVar5 + 4;
  } while (puVar7 != (undefined4 *)(param_1 + 0x81340));
  uVar2 = puVar6[5];
  uVar3 = puVar6[6];
  puVar5[4] = *puVar7;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  __ptr[0x1c] = *(undefined4 *)(param_1 + 0x8134c);
  __ptr[0x1d] = *(undefined4 *)(param_1 + 0x81350);
  __ptr[0x1e] = *(undefined4 *)(param_1 + 0x81354);
  __ptr[0x1f] = *(undefined4 *)(param_1 + 0x81358);
  __ptr[0x20] = *(undefined4 *)(param_1 + 0x81798);
  __ptr[0x21] = *(undefined4 *)(param_1 + 0x8179c);
  __ptr[0x22] = *(undefined4 *)(param_1 + 0x817a0);
  __ptr[0x23] = *(undefined4 *)(param_1 + 0x817a8);
  __ptr[0x24] = *(undefined4 *)(param_1 + 0x817b4);
  __ptr[0x25] = *(undefined4 *)(param_1 + 0x817bc);
  __ptr[0x26] = *(undefined4 *)(param_1 + 0x817c0);
  __ptr[0x27] = *(undefined4 *)(param_1 + 0x817c4);
  __ptr[0x28] = *(undefined4 *)(param_1 + 0x817b8);
  fwrite(__ptr,0xa4,1,__s);
  fclose(__s);
  free(__ptr);
  return 0;
}


