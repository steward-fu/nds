/*
 * Ghidra decompilation
 *
 * Function : initialize_spu
 * Address  : 0016d690
 * Program  : drastic64
 */


void initialize_spu(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined uVar7;
  
  *(long *)(param_1 + 0x400c0) = param_2 + 0x35f7da0;
  *(undefined *)(param_1 + 0x400ea) = 0xff;
  *(long *)(param_1 + 0x40188) = param_2 + 0x35f7db0;
  *(undefined *)(param_1 + 0x401b2) = 0;
  *(long *)(param_1 + 0x40250) = param_2 + 0x35f7dc0;
  *(undefined *)(param_1 + 0x4027a) = 0xff;
  *(long *)(param_1 + 0x40318) = param_2 + 0x35f7dd0;
  *(long *)(param_1 + 0x403e0) = param_2 + 0x35f7de0;
  *(undefined *)(param_1 + 0x4040a) = 0xff;
  *(long *)(param_1 + 0x404a8) = param_2 + 0x35f7df0;
  *(undefined *)(param_1 + 0x404d2) = 0xff;
  *(long *)(param_1 + 0x40570) = param_2 + 0x35f7e00;
  *(undefined *)(param_1 + 0x4059a) = 0xff;
  *(long *)(param_1 + 0x40638) = param_2 + 0x35f7e10;
  *(undefined *)(param_1 + 0x40662) = 0xff;
  *(long *)(param_1 + 0x40700) = param_2 + 0x35f7e20;
  *(undefined *)(param_1 + 0x4072a) = 0xff;
  *(long *)(param_1 + 0x407c8) = param_2 + 0x35f7e30;
  *(undefined *)(param_1 + 0x407f2) = 0xff;
  *(long *)(param_1 + 0x40890) = param_2 + 0x35f7e40;
  *(undefined *)(param_1 + 0x408ba) = 0xff;
  *(long *)(param_1 + 0x40958) = param_2 + 0x35f7e50;
  *(undefined *)(param_1 + 0x40982) = 0xff;
  *(long *)(param_1 + 0x40a20) = param_2 + 0x35f7e60;
  *(undefined *)(param_1 + 0x40a4a) = 0xff;
  *(long *)(param_1 + 0x40ae8) = param_2 + 0x35f7e70;
  *(undefined *)(param_1 + 0x40b12) = 0xff;
  *(long *)(param_1 + 0x40bb0) = param_2 + 0x35f7e80;
  *(undefined *)(param_1 + 0x40bda) = 0xff;
  *(undefined *)(param_1 + 0x40ca2) = 0xff;
  *(undefined8 *)(param_1 + 0x40010) = 0xac440000ac44;
  *(long *)(param_1 + 0x40c78) = param_2 + 0x35f7e90;
  *(undefined2 *)(param_1 + 0x40020) = 0x101;
  *(long *)(param_1 + 0x40ce8) = param_2 + 0x35f7da0;
  *(undefined *)(param_1 + 0x40026) = 1;
  *(undefined *)(param_1 + 0x40342) = 1;
  *(long *)(param_1 + 0x40cf0) = param_2;
  *(long *)(param_1 + 0x40cf8) = param_2 + 0x35d4930;
  *(undefined8 *)(param_1 + 0x40d30) = 0;
  initialize_audio(param_1,param_2 + 0x855a8);
  uVar4 = *(uint *)(param_1 + 0x40010);
  uVar2 = 0;
  if ((ulong)uVar4 != 0) {
    uVar2 = 0x1006f43800 / (ulong)uVar4;
  }
  iVar3 = SUB164((ZEXT416(uVar4) * (undefined  [16])0x400000) / (undefined  [16])0x401bd0e,0);
  *(int *)(param_1 + 0x40d18) = (int)uVar2;
  *(int *)(param_1 + 0x40d20) = iVar3;
  __printf_chk((double)(uVar2 & 0xffffffff) * 0.0009765625,(double)iVar3 * 2.384185791015625e-07,1,
               "%lf cycles per output sample (%lf samples per cycle)\n");
  uVar4 = 0x7fff;
  puVar5 = &noise_samples;
  do {
    uVar1 = uVar4 & 1;
    uVar7 = 0x80;
    uVar4 = uVar4 >> 1;
    if (uVar1 != 0) {
      uVar4 = uVar4 ^ 0x6000;
      uVar7 = 0x7f;
    }
    puVar6 = puVar5 + 1;
    *puVar5 = uVar7;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x403151f);
  return;
}


