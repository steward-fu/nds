/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3054
 * Address  : 080b3054
 * Program  : drastic16
 */


void FUN_080b3054(int param_1,undefined param_2,void *param_3,undefined4 param_4,void *param_5,
                 int param_6,uint param_7,undefined4 *param_8,void *param_9)

{
  bool bVar1;
  size_t sVar2;
  int extraout_r1;
  int iVar3;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  char acStack_21c [512];
  void *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  char local_9;
  
  if (param_7 < 0x19) {
    local_9 = '\0';
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      local_18 = param_1 + local_10 * 0x278;
      if (((*(uint *)(local_18 + 0x214) == param_7) &&
          (iVar3 = FUN_080b77d0(local_18,param_3), iVar3 != 0)) &&
         (iVar3 = memcmp((void *)(local_18 + 0x204),param_5,0x10), iVar3 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_080b7888(local_18 + 0x218,0x20,0);
        local_27c = *(undefined4 *)(local_18 + 0x218);
        uStack_278 = *(undefined4 *)(local_18 + 0x21c);
        uStack_274 = *(undefined4 *)(local_18 + 0x220);
        uStack_270 = *(undefined4 *)(local_18 + 0x224);
        local_26c = *(undefined4 *)(local_18 + 0x228);
        uStack_268 = *(undefined4 *)(local_18 + 0x22c);
        uStack_264 = *(undefined4 *)(local_18 + 0x230);
        uStack_260 = *(undefined4 *)(local_18 + 0x234);
        FUN_080b7888(local_18 + 0x218,0x20,1);
        local_25c = *(undefined4 *)(local_18 + 0x238);
        uStack_258 = *(undefined4 *)(local_18 + 0x23c);
        uStack_254 = *(undefined4 *)(local_18 + 0x240);
        uStack_250 = *(undefined4 *)(local_18 + 0x244);
        local_24c = *(undefined4 *)(local_18 + 0x248);
        uStack_248 = *(undefined4 *)(local_18 + 0x24c);
        uStack_244 = *(undefined4 *)(local_18 + 0x250);
        uStack_240 = *(undefined4 *)(local_18 + 0x254);
        local_23c = *(undefined4 *)(local_18 + 600);
        uStack_238 = *(undefined4 *)(local_18 + 0x25c);
        uStack_234 = *(undefined4 *)(local_18 + 0x260);
        uStack_230 = *(undefined4 *)(local_18 + 0x264);
        local_22c = *(undefined4 *)(local_18 + 0x268);
        uStack_228 = *(undefined4 *)(local_18 + 0x26c);
        uStack_224 = *(undefined4 *)(local_18 + 0x270);
        uStack_220 = *(undefined4 *)(local_18 + 0x274);
        local_9 = '\x01';
        break;
      }
    }
    if (local_9 != '\x01') {
      FUN_080b0344(param_4,acStack_21c,0x200);
      sVar2 = strlen(acStack_21c);
      FUN_080b2d54(acStack_21c,sVar2,param_5,0x10,&local_27c,&local_23c,&local_25c,
                   1 << (param_7 & 0xff));
      FUN_080b7588(acStack_21c,0x200);
      iVar3 = *(int *)(param_1 + 0x9e0);
      *(int *)(param_1 + 0x9e0) = iVar3 + 1;
      __aeabi_uidivmod(iVar3,4);
      local_1c = (void *)(param_1 + extraout_r1 * 0x278);
      *(uint *)((int)local_1c + 0x214) = param_7;
      memcpy(local_1c,param_3,0x201);
      memcpy((void *)((int)local_1c + 0x204),param_5,0x10);
      *(undefined4 *)((int)local_1c + 0x218) = local_27c;
      *(undefined4 *)((int)local_1c + 0x21c) = uStack_278;
      *(undefined4 *)((int)local_1c + 0x220) = uStack_274;
      *(undefined4 *)((int)local_1c + 0x224) = uStack_270;
      *(undefined4 *)((int)local_1c + 0x228) = local_26c;
      *(undefined4 *)((int)local_1c + 0x22c) = uStack_268;
      *(undefined4 *)((int)local_1c + 0x230) = uStack_264;
      *(undefined4 *)((int)local_1c + 0x234) = uStack_260;
      *(undefined4 *)((int)local_1c + 0x238) = local_25c;
      *(undefined4 *)((int)local_1c + 0x23c) = uStack_258;
      *(undefined4 *)((int)local_1c + 0x240) = uStack_254;
      *(undefined4 *)((int)local_1c + 0x244) = uStack_250;
      *(undefined4 *)((int)local_1c + 0x248) = local_24c;
      *(undefined4 *)((int)local_1c + 0x24c) = uStack_248;
      *(undefined4 *)((int)local_1c + 0x250) = uStack_244;
      *(undefined4 *)((int)local_1c + 0x254) = uStack_240;
      *(undefined4 *)((int)local_1c + 600) = local_23c;
      *(undefined4 *)((int)local_1c + 0x25c) = uStack_238;
      *(undefined4 *)((int)local_1c + 0x260) = uStack_234;
      *(undefined4 *)((int)local_1c + 0x264) = uStack_230;
      *(undefined4 *)((int)local_1c + 0x268) = local_22c;
      *(undefined4 *)((int)local_1c + 0x26c) = uStack_228;
      *(undefined4 *)((int)local_1c + 0x270) = uStack_224;
      *(undefined4 *)((int)local_1c + 0x274) = uStack_220;
      FUN_080b7888((int)local_1c + 0x218,0x20,1);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = local_23c;
      param_8[1] = uStack_238;
      param_8[2] = uStack_234;
      param_8[3] = uStack_230;
      param_8[4] = local_22c;
      param_8[5] = uStack_228;
      param_8[6] = uStack_224;
      param_8[7] = uStack_220;
    }
    if (param_9 != (void *)0x0) {
      memset(param_9,0,8);
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        *(byte *)((int)param_9 + (local_14 & 7)) =
             *(byte *)((int)param_9 + (local_14 & 7)) ^ *(byte *)((int)&local_25c + local_14);
      }
      FUN_080b7588(&local_25c,0x20);
    }
    if (param_6 != 0) {
      FUN_080b7964(param_1 + 0x9e8,param_2,&local_27c,0x100,param_6);
    }
    FUN_080b7588(&local_27c,0x20);
  }
  return;
}


