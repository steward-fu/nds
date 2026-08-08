/*
 * Ghidra decompilation
 *
 * Function : FUN_001f583c
 * Address  : 001f583c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f583c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  long lVar2;
  long **pplVar3;
  undefined4 uVar4;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined2 auStack_f8 [32];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_130 = &uStack_30;
  uStack_b8 = ___stack_chk_guard;
  uStack_128 = 0xffffff80ffffffd0;
  puStack_140 = (undefined *)register0x00000008;
  puStack_138 = (undefined *)register0x00000008;
  uStack_b0 = param_1;
  uStack_a0 = param_2;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_70 = param_5;
  uStack_60 = param_6;
  uStack_50 = param_7;
  uStack_40 = param_8;
  uStack_30 = param_11;
  uStack_28 = param_12;
  uStack_20 = param_13;
  uStack_18 = param_14;
  uStack_10 = param_15;
  uStack_8 = param_16;
  uVar1 = luaO_pushvfstring(param_9,param_10,&puStack_140);
  pplVar3 = *(long ***)(param_9 + 0x20);
  if ((*(byte *)((long)pplVar3 + 0x42) >> 1 & 1) != 0) {
    lVar2 = *(long *)(**pplVar3 + 0x18);
    if (*(long *)(lVar2 + 0x48) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)
               (*(long *)(lVar2 + 0x48) +
               (long)((int)((long)pplVar3[5] - *(long *)(lVar2 + 0x38) >> 2) + -1) * 4);
    }
    if (*(long *)(lVar2 + 0x68) == 0) {
      auStack_f8[0] = 0x3f;
    }
    else {
      luaO_chunkid(auStack_f8,*(long *)(lVar2 + 0x68) + 0x20,0x3c);
    }
    luaO_pushfstring(param_9,"%s:%d: %s",auStack_f8,uVar4,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  luaG_errormsg(param_9);
}


