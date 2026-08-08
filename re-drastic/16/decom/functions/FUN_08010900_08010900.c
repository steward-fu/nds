/*
 * Ghidra decompilation
 *
 * Function : FUN_08010900
 * Address  : 08010900
 * Program  : drastic16
 */


undefined4 FUN_08010900(int param_1)

{
  void *__ptr;
  void *pvVar1;
  undefined4 uVar2;
  
  __ptr = malloc(0x2000000);
  *(void **)(param_1 + 0xfba00) = __ptr;
  *(undefined *)(param_1 + 0xfba18) = 0;
  *(undefined4 *)(param_1 + 0xfba14) = 0x2000000;
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pvVar1 = malloc(0x800);
    *(void **)(param_1 + 0xaf140) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      free(__ptr);
      uVar2 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xfba00) = 0;
    }
    else {
      pvVar1 = malloc(0x200000);
      *(void **)(param_1 + 0xef17c) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        free(__ptr);
        free(*(void **)(param_1 + 0xaf140));
        uVar2 = 0xffffffff;
        *(undefined4 *)(param_1 + 0xfba00) = 0;
        *(undefined4 *)(param_1 + 0xaf140) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xfbd34) = 0x7fffff;
        *(undefined *)(param_1 + 0xfbd60) = 0;
        *(undefined *)(param_1 + 0xfbd61) = 0;
        *(undefined4 *)(param_1 + 0xfbd38) = *(undefined4 *)(param_1 + 0xfba00);
        *(undefined4 *)(param_1 + 0xfbd44) = *(undefined4 *)(param_1 + 0xfba00);
        *(undefined4 *)(param_1 + 0xfbd50) = *(undefined4 *)(param_1 + 0xaf140);
        *(undefined4 *)(param_1 + 0xfbd54) = *(undefined4 *)(param_1 + 0xef17c);
        *(undefined **)(param_1 + 0xfbd58) = &LAB_08006890;
        *(undefined **)(param_1 + 0xfbd5c) = &LAB_080068a8;
        *(undefined4 *)(param_1 + 0xfbd64) = 0x7fffff;
        *(undefined *)(param_1 + 0xfbd90) = 0;
        *(undefined *)(param_1 + 0xfbd91) = 0;
        *(int *)(param_1 + 0xfbd68) = *(int *)(param_1 + 0xfba00) + 0x800000;
        *(int *)(param_1 + 0xfbd74) = *(int *)(param_1 + 0xfba00) + 0x800000;
        *(int *)(param_1 + 0xfbd80) = *(int *)(param_1 + 0xaf140) + 0x200;
        *(undefined **)(param_1 + 0xfbd88) = &LAB_08006890;
        *(int *)(param_1 + 0xfbd84) = *(int *)(param_1 + 0xef17c) + 0x80000;
        *(undefined **)(param_1 + 0xfbd8c) = &LAB_080068a8;
        *(undefined4 *)(param_1 + 0xfbd94) = 0x7fffff;
        *(undefined *)(param_1 + 0xfbdc0) = 0;
        *(undefined *)(param_1 + 0xfbdc1) = 0;
        *(int *)(param_1 + 0xfbd98) = *(int *)(param_1 + 0xfba00) + 0x1000000;
        *(int *)(param_1 + 0xfbda4) = *(int *)(param_1 + 0xfba00) + 0x1000000;
        *(int *)(param_1 + 0xfbdb0) = *(int *)(param_1 + 0xaf140) + 0x400;
        *(undefined **)(param_1 + 0xfbdb8) = &LAB_08006890;
        *(int *)(param_1 + 0xfbdb4) = *(int *)(param_1 + 0xef17c) + 0x100000;
        *(undefined **)(param_1 + 0xfbdbc) = &LAB_080068a8;
        *(undefined4 *)(param_1 + 0xfbdc4) = 0x7fffff;
        *(undefined *)(param_1 + 0xfbdf0) = 0;
        *(undefined *)(param_1 + 0xfbdf1) = 0;
        *(int *)(param_1 + 0xfbdc8) = *(int *)(param_1 + 0xfba00) + 0x1800000;
        *(int *)(param_1 + 0xfbdd4) = *(int *)(param_1 + 0xfba00) + 0x1800000;
        *(int *)(param_1 + 0xfbde0) = *(int *)(param_1 + 0xaf140) + 0x600;
        *(undefined **)(param_1 + 0xfbde8) = &LAB_08006890;
        *(undefined **)(param_1 + 0xfbdec) = &LAB_080068a8;
        *(int *)(param_1 + 0xfbde4) = *(int *)(param_1 + 0xef17c) + 0x180000;
        *(undefined4 *)(param_1 + 0xfc334) = 0x7fffff;
        *(undefined *)(param_1 + 0xfc360) = 0;
        *(undefined *)(param_1 + 0xfc361) = 0;
        *(undefined4 *)(param_1 + 0xfc338) = *(undefined4 *)(param_1 + 0xfba00);
        *(undefined4 *)(param_1 + 0xfc344) = *(undefined4 *)(param_1 + 0xfba00);
        *(undefined4 *)(param_1 + 0xfc350) = *(undefined4 *)(param_1 + 0xaf140);
        *(undefined4 *)(param_1 + 0xfc354) = *(undefined4 *)(param_1 + 0xef17c);
        *(undefined **)(param_1 + 0xfc358) = &LAB_08006890;
        *(undefined **)(param_1 + 0xfc35c) = &LAB_080068a8;
        *(undefined4 *)(param_1 + 0xfc364) = 0x7fffff;
        *(undefined *)(param_1 + 0xfc390) = 0;
        *(undefined *)(param_1 + 0xfc391) = 0;
        *(int *)(param_1 + 0xfc368) = *(int *)(param_1 + 0xfba00) + 0x800000;
        *(int *)(param_1 + 0xfc374) = *(int *)(param_1 + 0xfba00) + 0x800000;
        *(int *)(param_1 + 0xfc380) = *(int *)(param_1 + 0xaf140) + 0x200;
        *(undefined **)(param_1 + 0xfc388) = &LAB_08006890;
        *(undefined **)(param_1 + 0xfc38c) = &LAB_080068a8;
        *(int *)(param_1 + 0xfc384) = *(int *)(param_1 + 0xef17c) + 0x80000;
        *(undefined4 *)(param_1 + 0xfc394) = 0x7fffff;
        *(undefined *)(param_1 + 0xfc3c0) = 0;
        *(undefined *)(param_1 + 0xfc3c1) = 0;
        *(int *)(param_1 + 0xfc398) = *(int *)(param_1 + 0xfba00) + 0x1000000;
        *(int *)(param_1 + 0xfc3a4) = *(int *)(param_1 + 0xfba00) + 0x1000000;
        *(undefined **)(param_1 + 0xfc3b8) = &LAB_08006890;
        *(int *)(param_1 + 0xfc3b0) = *(int *)(param_1 + 0xaf140) + 0x400;
        *(undefined **)(param_1 + 0xfc3bc) = &LAB_080068a8;
        uVar2 = 0;
        *(int *)(param_1 + 0xfc3b4) = *(int *)(param_1 + 0xef17c) + 0x100000;
        *(undefined4 *)(param_1 + 0xfc3c4) = 0x7fffff;
        *(undefined *)(param_1 + 0xfc3f0) = 0;
        *(undefined *)(param_1 + 0xfc3f1) = 0;
        *(int *)(param_1 + 0xfc3c8) = *(int *)(param_1 + 0xfba00) + 0x1800000;
        *(int *)(param_1 + 0xfc3d4) = *(int *)(param_1 + 0xfba00) + 0x1800000;
        *(undefined **)(param_1 + 0xfc3e8) = &LAB_08006890;
        *(int *)(param_1 + 0xfc3e0) = *(int *)(param_1 + 0xaf140) + 0x600;
        *(int *)(param_1 + 0xfc3e4) = *(int *)(param_1 + 0xef17c) + 0x180000;
        *(undefined **)(param_1 + 0xfc3ec) = &LAB_080068a8;
      }
    }
  }
  return uVar2;
}


