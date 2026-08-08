/*
 * Ghidra decompilation
 *
 * Function : platform_set_default_controls
 * Address  : 080a98d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void platform_set_default_controls(u16 *controls_a,u16 *controls_b)

{
  u16 uVar1;
  char *pcVar2;
  char *joystick_name;
  char *pcVar3;
  u16 uVar4;
  u16 uVar5;
  u16 uVar6;
  u16 uVar7;
  u16 uVar8;
  u16 uVar9;
  u16 uVar10;
  u16 uVar11;
  u16 local_2c;
  
  pcVar2 = (char *)SDL_JoystickName(0);
  if (pcVar2 != (char *)0x0) {
    __printf_chk(1,"SDL Input default: joystick name %s\n",pcVar2);
  }
  memset(controls_a,0xff,0x50);
  memset(controls_b,0xff,0x50);
  controls_a[6] = 0x7a;
  controls_a[9] = 99;
  controls_a[1] = 0x151;
  controls_a[0x1f] = 0x151;
  controls_a[0xb] = 0x1e5;
  *controls_a = 0x152;
  controls_a[2] = 0x150;
  controls_a[0x12] = 0x6d;
  controls_a[4] = 0x20;
  controls_a[0x16] = 0x73;
  controls_a[0x14] = 0x140;
  controls_a[0x1e] = 0x152;
  controls_a[3] = 0x14f;
  controls_a[0x1b] = 0x13a;
  controls_a[5] = 0x1e0;
  controls_a[7] = 0x78;
  controls_a[0x1d] = 0x13b;
  controls_a[0x18] = 100;
  controls_a[0x13] = 0x13e;
  controls_a[0x20] = 0x150;
  controls_a[0x17] = 0x61;
  controls_a[8] = 0x1e1;
  controls_a[10] = 0xd;
  controls_a[0xc] = 0x68;
  controls_a[0x15] = 8;
  controls_a[0x21] = 0x14f;
  controls_a[0x22] = 0xd;
  controls_a[0x23] = 0x1b;
  controls_a[0x24] = 8;
  controls_a[0x25] = 0x14b;
  controls_a[0x26] = 0x14e;
  controls_a[0x27] = 0x1e1;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = strstr(pcVar2,"Cordless RumblePad");
    if ((pcVar3 != (char *)0x0) || (pcVar3 = strstr(pcVar2,"F710"), pcVar3 != (char *)0x0)) {
      puts("SDL input: Setting default controls for Logitech Cordless RumblePad");
      controls_b[6] = 0x403;
      local_2c = 0x403;
      uVar10 = 0x441;
      uVar1 = 0x444;
      uVar4 = 0x448;
      uVar5 = 0x442;
      uVar6 = 0x402;
      *controls_b = 0x441;
      uVar9 = 0x401;
      uVar8 = 0x400;
      controls_b[10] = 0x409;
      uVar11 = 0x404;
      uVar7 = 0x405;
      controls_b[0xb] = 0x408;
      controls_b[0xd] = 0x4c1;
      controls_b[0xe] = 0x481;
      controls_b[1] = 0x444;
      controls_b[2] = 0x448;
      controls_b[3] = 0x442;
      controls_b[4] = 0x402;
      controls_b[5] = 0x401;
      controls_b[7] = 0x400;
      controls_b[8] = 0x404;
      controls_b[9] = 0x405;
      controls_b[0xf] = 0x4c0;
      controls_b[0x10] = 0x480;
      controls_b[0x11] = 0x407;
      controls_b[0x12] = 0x406;
      goto LAB_080a9ae0;
    }
    pcVar2 = strstr(pcVar2,"PLAYSTATION(R)3");
    if (pcVar2 != (char *)0x0) {
      puts("SDL input: Setting default controls for Playstation 3 controller");
      controls_b[6] = 0x40c;
      local_2c = 0x40c;
      controls_b[10] = 0x403;
      uVar10 = 0x404;
      *controls_b = 0x404;
      controls_b[0xb] = 0x400;
      controls_b[0xc] = 0x409;
      controls_b[0xd] = 0x4c1;
      uVar1 = 0x406;
      controls_b[1] = 0x406;
      controls_b[0xe] = 0x481;
      uVar4 = 0x407;
      controls_b[2] = 0x407;
      uVar5 = 0x405;
      controls_b[3] = 0x405;
      uVar6 = 0x40d;
      controls_b[4] = 0x40d;
      uVar9 = 0x40e;
      controls_b[5] = 0x40e;
      uVar8 = 0x40f;
      controls_b[7] = 0x40f;
      uVar11 = 0x40a;
      controls_b[8] = 0x40a;
      uVar7 = 0x40b;
      controls_b[9] = 0x40b;
      controls_b[0xf] = 0x4c0;
      controls_b[0x10] = 0x480;
      controls_b[0x11] = 0x408;
      controls_b[0x12] = 0x410;
      goto LAB_080a9ae0;
    }
  }
  puts("SDL input: Setting default controls for Generic X-Box Pad");
  uVar9 = 0x400;
  controls_b[5] = 0x400;
  controls_b[6] = 0x403;
  uVar8 = 0x402;
  controls_b[7] = 0x402;
  uVar11 = 0x404;
  controls_b[8] = 0x404;
  local_2c = 0x403;
  uVar7 = 0x405;
  controls_b[9] = 0x405;
  uVar10 = 0x441;
  *controls_b = 0x441;
  controls_b[10] = 0x406;
  controls_b[0xb] = 0x407;
  controls_b[0xe] = 0x481;
  controls_b[0xd] = 0x4c1;
  uVar1 = 0x444;
  controls_b[1] = 0x444;
  uVar4 = 0x448;
  controls_b[2] = 0x448;
  uVar5 = 0x442;
  controls_b[3] = 0x442;
  uVar6 = 0x401;
  controls_b[4] = 0x401;
  controls_b[0xf] = 0x4c0;
  controls_b[0x10] = 0x480;
  controls_b[0x11] = 0x485;
  controls_b[0x12] = 0x482;
LAB_080a9ae0:
  controls_b[0x1e] = uVar10;
  controls_b[0x22] = uVar6;
  controls_b[0x1f] = uVar1;
  controls_b[0x20] = uVar4;
  controls_b[0x21] = uVar5;
  controls_b[0x23] = uVar9;
  controls_b[0x24] = uVar8;
  controls_b[0x25] = uVar7;
  controls_b[0x26] = uVar11;
  controls_b[0x27] = local_2c;
  return;
}


