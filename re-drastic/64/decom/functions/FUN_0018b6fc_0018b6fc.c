/*
 * Ghidra decompilation
 *
 * Function : FUN_0018b6fc
 * Address  : 0018b6fc
 * Program  : drastic64
 */


void FUN_0018b6fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  
  pcVar2 = (char *)SDL_JoystickName(0);
  if (pcVar2 != (char *)0x0) {
    __printf_chk(1,"SDL Input default: joystick name %s\n",pcVar2);
  }
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0xffffffffffffffff;
  param_2[2] = 0xffffffffffffffff;
  param_2[3] = 0xffffffffffffffff;
  param_2[4] = 0xffffffffffffffff;
  param_2[5] = 0xffffffffffffffff;
  param_2[6] = 0xffffffffffffffff;
  param_2[7] = 0xffffffffffffffff;
  param_2[8] = 0xffffffffffffffff;
  param_2[9] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 10) = 0xffff;
  param_1[2] = 0x1e5000d006301e1;
  *(undefined2 *)(param_1 + 3) = 0x68;
  *(undefined8 *)((long)param_1 + 0x24) = 0x80140013e006d;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x610073;
  *(undefined2 *)(param_1 + 6) = 100;
  *(undefined2 *)(param_1 + 7) = 0x13a;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x14e014b;
  *(undefined2 *)(param_1 + 10) = 0x1e1;
  param_1[1] = 0x78007a01e00020;
  *param_1 = 0x14f015001510152;
  *(undefined8 *)((long)param_1 + 0x44) = 0x8001b000d014f;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x15001510152013b;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = strstr(pcVar2,"Cordless RumblePad");
    if ((pcVar3 != (char *)0x0) || (pcVar3 = strstr(pcVar2,"F710"), pcVar3 != (char *)0x0)) {
      puts("SDL input: Setting default controls for Logitech Cordless RumblePad");
      uVar12 = 0x400;
      uVar8 = 0x403;
      uVar1 = 0x405;
      uVar9 = 0x404;
      uVar4 = 0x401;
      uVar5 = 0x402;
      uVar6 = 0x442;
      uVar7 = 0x448;
      uVar10 = 0x444;
      uVar11 = 0x441;
      param_2[2] = 0x408040904050404;
      *(undefined8 *)((long)param_2 + 0x1a) = 0x48004c0048104c1;
      *(undefined4 *)((long)param_2 + 0x22) = 0x4060407;
      param_2[1] = 0x400040304010402;
      *param_2 = 0x442044804440441;
      goto LAB_0018b874;
    }
    pcVar2 = strstr(pcVar2,"PLAYSTATION(R)3");
    if (pcVar2 != (char *)0x0) {
      puts("SDL input: Setting default controls for Playstation 3 controller");
      uVar12 = 0x40f;
      uVar8 = 0x40c;
      uVar1 = 0x40b;
      uVar9 = 0x40a;
      uVar4 = 0x40e;
      uVar5 = 0x40d;
      uVar6 = 0x405;
      uVar7 = 0x407;
      uVar10 = 0x406;
      uVar11 = 0x404;
      param_2[1] = 0x40f040c040e040d;
      *param_2 = 0x405040704060404;
      param_2[3] = 0x4c0048104c10409;
      param_2[2] = 0x4000403040b040a;
      *(undefined4 *)(param_2 + 4) = 0x4080480;
      *(undefined2 *)((long)param_2 + 0x24) = 0x410;
      goto LAB_0018b874;
    }
  }
  puts("SDL input: Setting default controls for Generic X-Box Pad");
  uVar12 = 0x402;
  uVar8 = 0x403;
  uVar1 = 0x405;
  uVar9 = 0x404;
  uVar4 = 0x400;
  uVar5 = 0x401;
  uVar6 = 0x442;
  uVar7 = 0x448;
  uVar10 = 0x444;
  uVar11 = 0x441;
  param_2[1] = 0x402040304000401;
  *param_2 = 0x442044804440441;
  param_2[2] = 0x407040604050404;
  *(undefined8 *)((long)param_2 + 0x1a) = 0x48004c0048104c1;
  *(undefined4 *)((long)param_2 + 0x22) = 0x4820485;
LAB_0018b874:
  *(undefined2 *)((long)param_2 + 0x4e) = uVar9;
  *(undefined2 *)(param_2 + 10) = uVar8;
  *(ulong *)((long)param_2 + 0x46) = CONCAT26(uVar1,CONCAT24(uVar12,CONCAT22(uVar4,uVar5)));
  *(ulong *)((long)param_2 + 0x3e) = CONCAT26(uVar6,CONCAT24(uVar7,CONCAT22(uVar10,uVar11)));
  return;
}


