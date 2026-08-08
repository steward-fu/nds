/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1
 * Address  : 001639f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_load_savestate_v1(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint6 uVar16;
  uint6 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined *puVar21;
  undefined *puVar22;
  uint *puVar23;
  long lVar24;
  void *pvVar25;
  ulong uVar26;
  void *pvVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  uint *puVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  undefined4 *puVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined *puVar37;
  undefined8 *puVar38;
  undefined *extraout_x8;
  uint *puVar39;
  long extraout_x9;
  undefined4 *extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x12;
  long lVar40;
  long extraout_x13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined4 *puVar41;
  ulong uVar42;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint *puVar43;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  char cVar44;
  char cVar45;
  undefined uVar46;
  undefined uVar47;
  char cVar48;
  undefined uVar49;
  undefined uVar50;
  char cVar51;
  byte bVar52;
  char cVar53;
  char cVar54;
  uint5 uVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  short sVar58;
  uint5 uVar59;
  short sVar63;
  short sVar64;
  undefined8 uVar60;
  uint uVar65;
  short sVar66;
  undefined auVar61 [16];
  undefined auVar62 [16];
  ushort uVar67;
  short sVar68;
  short sVar72;
  short sVar73;
  uint5 uVar69;
  short sVar74;
  short sVar75;
  undefined auVar70 [16];
  undefined auVar71 [16];
  uint5 uVar76;
  undefined8 uVar77;
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  char cVar81;
  undefined uVar82;
  undefined uVar83;
  char cVar84;
  char cVar85;
  uint5 uVar86;
  undefined8 uVar87;
  undefined auVar88 [16];
  undefined auVar89 [16];
  uint7 uVar90;
  undefined8 unaff_d8;
  byte bVar92;
  undefined auVar91 [16];
  undefined8 unaff_d9;
  undefined auVar93 [16];
  undefined8 unaff_d10;
  undefined auVar94 [16];
  undefined8 unaff_d11;
  undefined auVar95 [16];
  undefined8 unaff_d12;
  undefined auVar96 [16];
  undefined8 unaff_d13;
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined8 unaff_d14;
  undefined auVar99 [16];
  uint5 uVar100;
  undefined8 uVar101;
  undefined auVar102 [16];
  undefined auVar103 [16];
  uint5 uVar104;
  undefined auVar105 [16];
  undefined auVar106 [16];
  uint5 uVar107;
  undefined auVar108 [16];
  undefined auVar109 [16];
  uint5 uVar110;
  undefined auVar111 [16];
  undefined auVar112 [16];
  char cVar113;
  char cVar114;
  char cVar115;
  undefined auVar116 [16];
  undefined auVar117 [16];
  char cVar118;
  char cVar119;
  char cVar120;
  ushort uVar121;
  undefined auVar122 [16];
  ushort uVar123;
  uint7 uVar124;
  byte bVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  undefined auVar125 [16];
  uint3 uVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  ushort uVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  ushort uVar138;
  uint3 uVar139;
  short sVar141;
  short sVar142;
  undefined8 uVar140;
  short sVar143;
  ushort uVar144;
  short sVar145;
  short sVar146;
  short sVar147;
  char cVar148;
  char cVar149;
  char cVar150;
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auStack_80000 [524288];
  
  puVar1 = (undefined *)register0x00000008;
  do {
    puVar21 = puVar1;
    *(undefined8 *)(puVar21 + -0xfc00) = 0;
    puVar1 = puVar21 + -0x10000;
  } while (puVar21 + -0x10000 != auStack_80000);
  *(undefined8 *)(puVar21 + -0x147e0) = unaff_x29;
  *(undefined8 *)(puVar21 + -0x147d8) = unaff_x30;
  *(undefined8 *)(puVar21 + -0x147d0) = unaff_x19;
  *(undefined8 *)(puVar21 + -0x147c8) = unaff_x20;
  *(undefined8 *)(puVar21 + -0x147b0) = unaff_x23;
  *(undefined8 *)(puVar21 + -0x147a8) = unaff_x24;
  puVar1 = puVar21 + 0xfbf0;
  *(undefined8 *)(puVar21 + -0x147c0) = unaff_x21;
  *(undefined8 *)(puVar21 + -0x147b8) = unaff_x22;
  *(undefined8 *)(puVar21 + -0x147a0) = unaff_x25;
  *(undefined8 *)(puVar21 + -0x14798) = unaff_x26;
  *(undefined8 *)(puVar21 + -0x14790) = unaff_x27;
  *(undefined8 *)(puVar21 + -0x14788) = unaff_x28;
  puVar37 = puVar21 + 0x3fdf0;
  *(undefined8 *)(puVar21 + -0x14780) = unaff_d8;
  *(undefined8 *)(puVar21 + -0x14778) = unaff_d9;
  *(undefined8 *)(puVar21 + -0x14770) = unaff_d10;
  *(undefined8 *)(puVar21 + -0x14768) = unaff_d11;
  lVar40 = -0x30200;
  *(undefined8 *)(puVar21 + -0x14760) = unaff_d12;
  *(undefined8 *)(puVar21 + -0x14758) = unaff_d13;
  *(undefined8 *)(puVar21 + -0x14750) = unaff_d14;
  *(long *)(puVar21 + 0x6fff8) = ___stack_chk_guard;
  *(undefined **)(puVar21 + -0x14708) = puVar21 + -0x14410;
  do {
    puVar37 = puVar37 + lVar40;
    do {
      puVar22 = puVar37 + 0x20;
      param_2 = geometry_load_savestate_v1_vertex(param_2,puVar37);
      puVar37 = puVar22;
    } while (puVar22 != extraout_x8);
    puVar41 = *(undefined4 **)(param_2 + 0x20);
    puVar34 = extraout_x10 + 1;
    puVar2 = puVar41;
    puVar36 = extraout_x10;
    do {
      puVar28 = puVar2;
      uVar6 = *puVar28;
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 1;
      uVar8 = *(undefined2 *)(puVar28 + 1);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 6;
      uVar9 = *(undefined2 *)((long)puVar28 + 6);
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 2;
      uVar10 = *(undefined2 *)(puVar28 + 2);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 10;
      uVar11 = *(undefined2 *)((long)puVar28 + 10);
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 3;
      uVar12 = *(undefined2 *)(puVar28 + 3);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0xe;
      uVar13 = *(undefined2 *)((long)puVar28 + 0xe);
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 4;
      *puVar36 = uVar6;
      uVar14 = *(undefined2 *)(puVar28 + 4);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0x12;
      uVar15 = *(undefined2 *)((long)puVar28 + 0x12);
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 5;
      *(undefined2 *)puVar34 = uVar8;
      uVar8 = *(undefined2 *)(puVar28 + 5);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0x16;
      *(undefined2 *)((long)puVar34 + 2) = uVar9;
      *(undefined2 *)(puVar34 + 1) = uVar10;
      *(undefined2 *)((long)puVar34 + 6) = uVar11;
      *(undefined2 *)(puVar34 + 2) = uVar12;
      *(undefined2 *)((long)puVar34 + 10) = uVar13;
      *(undefined2 *)(puVar34 + 3) = uVar14;
      *(undefined2 *)((long)puVar34 + 0xe) = uVar15;
      *(undefined2 *)(puVar34 + 4) = uVar8;
      puVar36[6] = *(undefined4 *)((long)puVar28 + 0x16);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0x1a;
      uVar8 = *(undefined2 *)((long)puVar28 + 0x1a);
      *(undefined4 **)(param_2 + 0x20) = puVar28 + 7;
      uVar46 = *(undefined *)(puVar28 + 7);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0x1d;
      uVar47 = *(undefined *)((long)puVar28 + 0x1d);
      *(long *)(param_2 + 0x20) = (long)puVar28 + 0x1e;
      *(undefined2 *)(puVar36 + 7) = uVar8;
      uVar49 = *(undefined *)((long)puVar28 + 0x1e);
      puVar2 = (undefined4 *)((long)puVar28 + 0x1f);
      *(undefined *)((long)puVar36 + 0x1e) = uVar46;
      *(undefined *)((long)puVar36 + 0x1f) = uVar47;
      *(undefined *)(puVar36 + 8) = uVar49;
      *(undefined4 **)(param_2 + 0x20) = puVar2;
      puVar34 = puVar34 + 9;
      puVar36 = puVar36 + 9;
    } while (puVar2 != (undefined4 *)((long)puVar41 + extraout_x12));
    puVar37 = extraout_x8 + extraout_x9;
    lVar40 = extraout_x13;
  } while (extraout_x11 != 0x9000);
  uVar6 = puVar41[0x3e00];
  *(undefined4 **)(param_2 + 0x20) = puVar41 + 0x3e01;
  *(undefined **)(puVar21 + -0x14700) = puVar21 + -0x14610;
  *(undefined4 *)(puVar21 + 0x6fff0) = uVar6;
  memcpy(puVar21 + -0x14610,(void *)((long)puVar28 + 0x23),0x200);
  *(undefined4 **)(param_2 + 0x20) = puVar41 + 0x3e81;
  memcpy((void *)(param_1 + 0x8628),puVar41 + 0x3e81,0x1000);
  lVar40 = *(long *)(param_2 + 0x20);
  *(undefined8 **)(param_2 + 0x20) = (undefined8 *)(lVar40 + 0x1000);
  uVar29 = *(undefined8 *)(lVar40 + 0x1008);
  *(undefined8 *)(param_1 + 0x9628) = *(undefined8 *)(lVar40 + 0x1000);
  *(undefined8 *)(param_1 + 0x9630) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x1018);
  *(undefined8 *)(param_1 + 0x9638) = *(undefined8 *)(lVar40 + 0x1010);
  *(undefined8 *)(param_1 + 0x9640) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x1028);
  *(undefined8 *)(param_1 + 0x9648) = *(undefined8 *)(lVar40 + 0x1020);
  *(undefined8 *)(param_1 + 0x9650) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x1038);
  *(undefined8 *)(param_1 + 0x9658) = *(undefined8 *)(lVar40 + 0x1030);
  *(undefined8 *)(param_1 + 0x9660) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x40;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x9764) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x976c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x58);
  *(undefined8 *)(param_1 + 0x9774) = *(undefined8 *)(lVar40 + 0x50);
  *(undefined8 *)(param_1 + 0x977c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x68);
  *(undefined8 *)(param_1 + 0x9784) = *(undefined8 *)(lVar40 + 0x60);
  *(undefined8 *)(param_1 + 0x978c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x78);
  *(undefined8 *)(param_1 + 0x9794) = *(undefined8 *)(lVar40 + 0x70);
  *(undefined8 *)(param_1 + 0x979c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x88);
  *(undefined8 *)(param_1 + 0x97a4) = *(undefined8 *)(lVar40 + 0x80);
  *(undefined8 *)(param_1 + 0x97ac) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x98);
  *(undefined8 *)(param_1 + 0x97b4) = *(undefined8 *)(lVar40 + 0x90);
  *(undefined8 *)(param_1 + 0x97bc) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0xa8);
  *(undefined8 *)(param_1 + 0x97c4) = *(undefined8 *)(lVar40 + 0xa0);
  *(undefined8 *)(param_1 + 0x97cc) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0xb8);
  *(undefined8 *)(param_1 + 0x97d4) = *(undefined8 *)(lVar40 + 0xb0);
  *(undefined8 *)(param_1 + 0x97dc) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x80;
  uVar29 = *(undefined8 *)(lVar40 + 0x88);
  *(undefined8 *)(param_1 + 0x9824) = *(undefined8 *)(lVar40 + 0x80);
  *(undefined8 *)(param_1 + 0x982c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x98);
  *(undefined8 *)(param_1 + 0x9834) = *(undefined8 *)(lVar40 + 0x90);
  *(undefined8 *)(param_1 + 0x983c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0xa8);
  *(undefined8 *)(param_1 + 0x9844) = *(undefined8 *)(lVar40 + 0xa0);
  *(undefined8 *)(param_1 + 0x984c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0xb8);
  *(undefined8 *)(param_1 + 0x9854) = *(undefined8 *)(lVar40 + 0xb0);
  *(undefined8 *)(param_1 + 0x985c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x40;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x9864) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x986c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x58);
  *(undefined8 *)(param_1 + 0x9874) = *(undefined8 *)(lVar40 + 0x50);
  *(undefined8 *)(param_1 + 0x987c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x68);
  *(undefined8 *)(param_1 + 0x9884) = *(undefined8 *)(lVar40 + 0x60);
  *(undefined8 *)(param_1 + 0x988c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x78);
  *(undefined8 *)(param_1 + 0x9894) = *(undefined8 *)(lVar40 + 0x70);
  *(undefined8 *)(param_1 + 0x989c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x40;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x97e4) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x97ec) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x58);
  *(undefined8 *)(param_1 + 0x97f4) = *(undefined8 *)(lVar40 + 0x50);
  *(undefined8 *)(param_1 + 0x97fc) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x68);
  *(undefined8 *)(param_1 + 0x9804) = *(undefined8 *)(lVar40 + 0x60);
  *(undefined8 *)(param_1 + 0x980c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x78);
  *(undefined8 *)(param_1 + 0x9814) = *(undefined8 *)(lVar40 + 0x70);
  *(undefined8 *)(param_1 + 0x981c) = uVar29;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x40;
  uVar29 = geometry_load_savestate_v1_vertex(param_2,puVar21 + -0x146f0);
  geometry_load_savestate_v1_vertex(uVar29,extraout_x10_00 + 0x20);
  puVar38 = *(undefined8 **)(param_2 + 0x20);
  uVar29 = puVar38[1];
  *(undefined8 *)(param_1 + 0x98a4) = *puVar38;
  *(undefined8 *)(param_1 + 0x98ac) = uVar29;
  uVar29 = puVar38[3];
  *(undefined8 *)(param_1 + 0x98b4) = puVar38[2];
  *(undefined8 *)(param_1 + 0x98bc) = uVar29;
  uVar29 = puVar38[5];
  *(undefined8 *)(param_1 + 0x98c4) = puVar38[4];
  *(undefined8 *)(param_1 + 0x98cc) = uVar29;
  uVar29 = puVar38[7];
  *(undefined8 *)(param_1 + 0x98d4) = puVar38[6];
  *(undefined8 *)(param_1 + 0x98dc) = uVar29;
  uVar29 = puVar38[9];
  *(undefined8 *)(param_1 + 0x98e4) = puVar38[8];
  *(undefined8 *)(param_1 + 0x98ec) = uVar29;
  uVar29 = puVar38[0xb];
  *(undefined8 *)(param_1 + 0x98f4) = puVar38[10];
  *(undefined8 *)(param_1 + 0x98fc) = uVar29;
  uVar29 = puVar38[0xd];
  *(undefined8 *)(param_1 + 0x9904) = puVar38[0xc];
  *(undefined8 *)(param_1 + 0x990c) = uVar29;
  uVar29 = puVar38[0xf];
  *(undefined8 *)(param_1 + 0x9914) = puVar38[0xe];
  *(undefined8 *)(param_1 + 0x991c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x80;
  uVar29 = *(undefined8 *)(lVar40 + 0x88);
  *(undefined8 *)(param_1 + 0x96c8) = *(undefined8 *)(lVar40 + 0x80);
  *(undefined8 *)(param_1 + 0x96d0) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x98);
  *(undefined8 *)(param_1 + 0x96d8) = *(undefined8 *)(lVar40 + 0x90);
  *(undefined8 *)(param_1 + 0x96e0) = uVar29;
  puVar39 = (uint *)(param_1 + 0x21ad4);
  uVar29 = *(undefined8 *)(lVar40 + 0xa8);
  *(undefined8 *)(param_1 + 0x96e8) = *(undefined8 *)(lVar40 + 0xa0);
  *(undefined8 *)(param_1 + 0x96f0) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x30;
  uVar29 = *(undefined8 *)(lVar40 + 0x38);
  *(undefined8 *)(param_1 + 0x96f8) = *(undefined8 *)(lVar40 + 0x30);
  *(undefined8 *)(param_1 + 0x9700) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x9708) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x9710) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x58);
  *(undefined8 *)(param_1 + 0x9718) = *(undefined8 *)(lVar40 + 0x50);
  *(undefined8 *)(param_1 + 0x9720) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x30;
  uVar29 = *(undefined8 *)(lVar40 + 0x38);
  *(undefined8 *)(param_1 + 0x96b8) = *(undefined8 *)(lVar40 + 0x30);
  *(undefined8 *)(param_1 + 0x96c0) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x10;
  uVar3 = *(uint *)(lVar40 + 0x10);
  *(uint *)(param_1 + 0x9a48) = uVar3;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(undefined4 *)(param_1 + 0x9a4c) = *(undefined4 *)(lVar40 + 4);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  uVar33 = *(uint *)(lVar40 + 4);
  *(uint *)(param_1 + 0x9a50) = uVar33;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(undefined4 *)(param_1 + 0x9a54) = *(undefined4 *)(lVar40 + 4);
  lVar40 = *(long *)(param_2 + 0x20);
  puVar38 = (undefined8 *)(lVar40 + 4);
  *(undefined8 **)(param_2 + 0x20) = puVar38;
  uVar29 = *(undefined8 *)(lVar40 + 0xc);
  *(undefined8 *)(param_1 + 0x9924) = *puVar38;
  *(undefined8 *)(param_1 + 0x992c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x10;
  uVar29 = *(undefined8 *)(lVar40 + 0x18);
  *(undefined8 *)(param_1 + 0x9934) = *(undefined8 *)(lVar40 + 0x10);
  *(undefined8 *)(param_1 + 0x993c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x28);
  *(undefined8 *)(param_1 + 0x9944) = *(undefined8 *)(lVar40 + 0x20);
  *(undefined8 *)(param_1 + 0x994c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x38);
  *(undefined8 *)(param_1 + 0x9954) = *(undefined8 *)(lVar40 + 0x30);
  *(undefined8 *)(param_1 + 0x995c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x9964) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x996c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x40;
  uVar29 = *(undefined8 *)(lVar40 + 0x48);
  *(undefined8 *)(param_1 + 0x9974) = *(undefined8 *)(lVar40 + 0x40);
  *(undefined8 *)(param_1 + 0x997c) = uVar29;
  uVar29 = *(undefined8 *)(lVar40 + 0x58);
  *(undefined8 *)(param_1 + 0x9984) = *(undefined8 *)(lVar40 + 0x50);
  *(undefined8 *)(param_1 + 0x998c) = uVar29;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 0x20;
  *(undefined4 *)(param_1 + 0x9a88) = *(undefined4 *)(lVar40 + 0x20);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(undefined4 *)(param_1 + 0x9a8c) = *(undefined4 *)(lVar40 + 4);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(undefined4 *)(param_1 + 0x9a9c) = *(undefined4 *)(lVar40 + 4);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  uVar6 = *(undefined4 *)(lVar40 + 4);
  *(long *)(param_2 + 0x20) = lVar40 + 8;
  *(undefined4 *)(puVar21 + -0x14718) = uVar6;
  *(undefined4 *)(param_1 + 0x9a90) = *(undefined4 *)(lVar40 + 8);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  uVar6 = *(undefined4 *)(lVar40 + 4);
  *(undefined4 *)(param_1 + 0x9a94) = uVar6;
  *(undefined4 *)(puVar21 + -0x1470c) = uVar6;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(undefined2 *)(param_1 + 0x9aa6) = *(undefined2 *)(lVar40 + 4);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9aa8) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9aaa) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9aac) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9aa2) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9aa4) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9a98) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9a9a) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  uVar121 = *(ushort *)(lVar40 + 2);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  uVar123 = *(ushort *)(lVar40 + 4);
  *(ushort *)(param_1 + 0x9aae) = uVar123;
  *(uint *)(puVar21 + -0x14714) = (uint)uVar121;
  *(uint *)(puVar21 + -0x14710) = (uint)uVar123;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  uVar121 = *(ushort *)(lVar40 + 2);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  uVar123 = *(ushort *)(lVar40 + 4);
  *(long *)(param_2 + 0x20) = lVar40 + 6;
  uVar67 = *(ushort *)(lVar40 + 6);
  *(long *)(param_2 + 0x20) = lVar40 + 8;
  uVar134 = *(ushort *)(lVar40 + 8);
  *(long *)(param_2 + 0x20) = lVar40 + 10;
  uVar138 = *(ushort *)(lVar40 + 10);
  *(long *)(param_2 + 0x20) = lVar40 + 0xc;
  uVar144 = *(ushort *)(lVar40 + 0xc);
  *(long *)(param_2 + 0x20) = lVar40 + 0xe;
  *(uint *)(puVar21 + -0x1472c) = (uint)uVar144;
  *(undefined2 *)(param_1 + 0x9ab0) = *(undefined2 *)(lVar40 + 0xe);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9ab2) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9ab4) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined2 *)(param_1 + 0x9ab6) = *(undefined2 *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(undefined *)(param_1 + 0x9abf) = *(undefined *)(lVar40 + 2);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  bVar92 = *(byte *)(lVar40 + 1);
  *(long *)(param_2 + 0x20) = lVar40 + 2;
  *(uint *)(puVar21 + -0x14728) = (uint)bVar92;
  bVar92 = *(byte *)(lVar40 + 2);
  *(long *)(param_2 + 0x20) = lVar40 + 3;
  bVar126 = *(byte *)(lVar40 + 3);
  *(long *)(param_2 + 0x20) = lVar40 + 4;
  *(uint *)(puVar21 + -0x14720) = (uint)bVar92;
  bVar92 = *(byte *)(lVar40 + 4);
  *(long *)(param_2 + 0x20) = lVar40 + 5;
  bVar52 = *(byte *)(lVar40 + 5);
  *(long *)(param_2 + 0x20) = lVar40 + 6;
  *(ushort *)(param_1 + 0x9ab8) = (ushort)bVar126;
  *(ushort *)(param_1 + 0x9aba) = (ushort)bVar92;
  *(ushort *)(param_1 + 0x9abc) = (ushort)bVar52;
  bVar92 = *(byte *)(lVar40 + 6);
  uVar42 = (ulong)bVar92;
  *(byte *)(param_1 + 0x9ac0) = bVar92;
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  bVar126 = *(byte *)(lVar40 + 1);
  *(long *)(param_2 + 0x20) = lVar40 + 3;
  *(uint *)(puVar21 + -0x1471c) = (uint)bVar126;
  bVar126 = *(byte *)(lVar40 + 3);
  *(long *)(param_2 + 0x20) = lVar40 + 5;
  *(uint *)(puVar21 + -0x14740) = (uint)bVar126;
  *(undefined *)(param_1 + 0x9ac2) = *(undefined *)(lVar40 + 5);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9ac4) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9ac5) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9ac6) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9ac8) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9acc) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9acd) = *(undefined *)(lVar40 + 1);
  lVar40 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar40 + 1;
  *(undefined *)(param_1 + 0x9ace) = *(undefined *)(lVar40 + 1);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  *(uint *)(param_1 + uVar42 * 0x18004 + 0x21ad4) = (uint)uVar144;
  *(uint *)(param_1 + (long)(int)(bVar92 ^ 1) * 0x18004 + 0x21ad4) = (uint)uVar67;
  puVar37 = puVar1;
  do {
    uVar4 = *puVar39;
    if (uVar4 != 0) {
      puVar30 = puVar39 + -0x6000;
      uVar65 = 0;
      puVar22 = puVar37;
      do {
        *(ushort *)((long)puVar30 + 6) = (ushort)(byte)puVar22[0x1e];
        iVar35 = *(int *)(puVar22 + 0x10);
        *puVar30 = *(uint *)(puVar22 + 0xc);
        uVar8 = *(undefined2 *)(puVar22 + 0x18);
        *(short *)((long)puVar30 + 10) = (short)*(undefined4 *)(puVar22 + 0x14);
        *(undefined2 *)(puVar30 + 3) = uVar8;
        uVar65 = uVar65 + 1;
        *(short *)(puVar30 + 2) = (short)((ulong)((long)(iVar35 >> 8) * 0x7fff) >> 0x10);
        *(undefined2 *)(puVar30 + 1) = *(undefined2 *)(puVar22 + 0x1c);
        *(undefined2 *)((long)puVar30 + 0xe) = *(undefined2 *)(puVar22 + 0x1a);
        puVar22 = puVar22 + 0x20;
        puVar30 = puVar30 + 4;
      } while (uVar65 < uVar4);
    }
    puVar39 = puVar39 + 0x6001;
    puVar37 = puVar37 + 0x30200;
  } while (puVar39 != (uint *)(param_1 + 0x51adc));
  lVar40 = param_1 + uVar42 * 0x10008;
  lVar24 = param_1 + (long)(int)(bVar92 ^ 1) * 0x10008;
  *(uint *)(lVar40 + 0x49ae0) = (uint)uVar134;
  *(uint *)(lVar24 + 0x49ae0) = (uint)uVar121;
  puVar43 = *(uint **)(puVar21 + -0x14708);
  puVar39 = (uint *)(param_1 + 0x49ae0);
  puVar30 = (uint *)(param_1 + 0x69af0);
  *(uint *)(lVar40 + 0x69af0) = 0x7ff - (uint)uVar138;
  lVar40 = 0;
  *(undefined **)(puVar21 + -0x146f8) = puVar21 + -0x14406;
  *(uint *)(lVar24 + 0x69af0) = 0x7ff - (uint)uVar123;
  *(undefined **)(puVar21 + -0x14738) = puVar21 + -0x14408;
  do {
    uVar4 = *puVar39;
    if (uVar4 != 0) {
      puVar31 = puVar39 + -0x4000;
      uVar65 = 0;
      puVar23 = puVar43;
      do {
        while( true ) {
          uVar32 = *puVar23;
          sVar73 = *(short *)(puVar23 + 1);
          *puVar31 = puVar23[6];
          puVar31[1] = uVar32;
          *(undefined2 *)(puVar31 + 6) = *(undefined2 *)(puVar23 + 7);
          bVar92 = *(byte *)((long)puVar23 + 0x1e);
          iVar35 = (int)sVar73;
          *(short *)((long)puVar31 + 0x1a) = sVar73;
          uVar32 = (uint)bVar92;
          if (uVar32 == 3) break;
          if ((((uVar32 == 4) && ((int)*(short *)((long)puVar23 + 6) == iVar35 + 1)) &&
              ((int)*(short *)((long)puVar23 + 10) == *(short *)((long)puVar23 + 6) + 1)) &&
             ((int)*(short *)(puVar23 + 2) == *(short *)((long)puVar23 + 10) + 1)) {
            uVar32 = 0x44;
          }
LAB_00164394:
          puVar31[2] = uVar32;
          uVar65 = uVar65 + 1;
          puVar23 = puVar23 + 9;
          puVar31 = puVar31 + 8;
          if (uVar4 <= uVar65) goto LAB_00164414;
        }
        sVar73 = *(short *)((long)puVar23 + 6);
        if ((iVar35 != sVar73 + 1) || ((int)*(short *)(puVar23 + 2) != iVar35 + 1))
        goto LAB_00164394;
        puVar31[2] = 0x43;
        *(short *)((long)puVar31 + 0x1a) = sVar73;
        uVar65 = uVar65 + 1;
        puVar23 = puVar23 + 9;
        puVar31 = puVar31 + 8;
      } while (uVar65 < uVar4);
    }
LAB_00164414:
    uVar4 = *puVar30;
    if (uVar4 != 0) {
      puVar23 = puVar39 + 0x4004;
      uVar65 = 0;
      do {
        while( true ) {
          lVar24 = lVar40 * 0x12000 + (ulong)(0x7ff - uVar65) * 0x24;
          uVar32 = *(uint *)(puVar21 + -0x14410 + lVar24);
          sVar73 = *(short *)(puVar21 + lVar24 + -0x1440c);
          *puVar23 = *(uint *)(puVar21 + lVar24 + -0x143f8);
          puVar23[1] = uVar32;
          *(undefined2 *)(puVar23 + 6) = *(undefined2 *)(puVar21 + lVar24 + -0x143f4);
          bVar92 = puVar21[lVar24 + -0x143f2];
          iVar35 = (int)sVar73;
          *(short *)((long)puVar23 + 0x1a) = sVar73;
          uVar32 = (uint)bVar92;
          if (uVar32 == 3) break;
          if (((uVar32 == 4) && ((int)*(short *)(puVar21 + lVar24 + -0x1440a) == iVar35 + 1)) &&
             (((int)*(short *)(*(long *)(puVar21 + -0x146f8) + lVar24) ==
               *(short *)(puVar21 + lVar24 + -0x1440a) + 1 &&
              ((int)*(short *)(*(long *)(puVar21 + -0x14738) + lVar24) ==
               *(short *)(*(long *)(puVar21 + -0x146f8) + lVar24) + 1)))) {
            uVar32 = 0x44;
          }
LAB_00164454:
          puVar23[2] = uVar32;
          uVar65 = uVar65 + 1;
          puVar23 = puVar23 + 8;
          if (uVar4 <= uVar65) goto LAB_001644d8;
        }
        sVar73 = *(short *)(puVar21 + lVar24 + -0x1440a);
        if ((iVar35 != sVar73 + 1) ||
           ((int)*(short *)(*(long *)(puVar21 + -0x14738) + lVar24) != iVar35 + 1))
        goto LAB_00164454;
        puVar23[2] = 0x43;
        *(short *)((long)puVar23 + 0x1a) = sVar73;
        uVar65 = uVar65 + 1;
        puVar23 = puVar23 + 8;
      } while (uVar65 < uVar4);
    }
LAB_001644d8:
    puVar39 = puVar39 + 0x4002;
    puVar43 = puVar43 + 0x4800;
    puVar30 = puVar30 + 0x4002;
    if ((int)lVar40 != 0) {
      bVar92 = puVar21[-0x1471c];
      pvVar27 = (void *)(param_1 + 0x79b00);
      memcpy(pvVar27,puVar21 + 0x6fff0,(ulong)bVar92);
      pvVar25 = memcpy((void *)(param_1 + 0x81b00),*(void **)(puVar21 + -0x14700),
                       (ulong)(byte)puVar21[-0x14740]);
      uVar26 = *(ulong *)(puVar21 + -0x14740);
      *(ulong *)(param_1 + 0x9a78) = (long)pvVar27 + (ulong)bVar92;
      *(void **)(param_1 + 0x9a68) = pvVar27;
      *(void **)(param_1 + 0x9a70) = pvVar25;
      *(void **)(param_1 + 0x9a80) = (void *)((long)pvVar25 + (uVar26 & 0xff) * 4);
      *(undefined4 *)(param_1 + 0x310) = 0xff;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x300) = 0xff00000000;
      *(long *)(param_1 + 0x318) = param_1 + 0x33c;
      *(long *)(param_1 + 800) = param_1 + 0x44c;
      *(long *)(param_1 + 0x328) = param_1 + 0x4dc;
      *(undefined8 *)(param_1 + 0x330) = 0x100000000;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(puVar21 + -0x1470c);
      *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(puVar21 + -0x14710);
      *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(puVar21 + -0x14714);
      *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(puVar21 + -0x14718);
      *(undefined *)(param_1 + 0x79f5) = 0;
      pvVar27 = memcpy(puVar21 + -0x146b0,&DAT_0021e3d0,0xa0);
      lVar40 = (*(ulong *)(puVar21 + -0x14728) & 0xff) * 0x10;
      uVar4 = *(uint *)(puVar21 + lVar40 + -0x146ac);
      uVar6 = *(undefined4 *)(puVar21 + lVar40 + -0x146a8);
      iVar7 = *(int *)((long)pvVar27 + lVar40);
      iVar35 = *(int *)(puVar21 + -0x14720);
      *(char *)(param_1 + 0x79f4) = (char)*(undefined4 *)(puVar21 + lVar40 + -0x146a4);
      *(char *)(param_1 + 0x79f7) = (char)uVar6;
      if (uVar4 != 0) {
        uVar140 = *(undefined8 *)(puVar21 + -0x146f0);
        uVar6 = *(undefined4 *)(puVar21 + -0x146dc);
        uVar60 = *(undefined8 *)(puVar21 + -0x146c8);
        uVar29 = *(undefined8 *)(puVar21 + -0x146d0);
        *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(puVar21 + -0x146e8);
        *(undefined8 *)(param_1 + 0x650) = uVar140;
        uVar46 = puVar21[-0x146d1];
        *(short *)(param_1 + 0x1354) = (short)uVar6;
        *(undefined4 *)(param_1 + 0x14dc) = uVar6;
        *(undefined *)(param_1 + 0x1290) = uVar46;
        uVar6 = *(undefined4 *)(puVar21 + -0x146bc);
        uVar46 = puVar21[-0x146b1];
        *(undefined8 *)(param_1 + 0x668) = uVar60;
        *(undefined8 *)(param_1 + 0x660) = uVar29;
        *(short *)(param_1 + 0x1356) = (short)uVar6;
        *(undefined4 *)(param_1 + 0x14e0) = uVar6;
        *(undefined *)(param_1 + 0x1291) = uVar46;
      }
      if (iVar7 - iVar35 != 0) {
        iVar5 = *(int *)(puVar21 + -0x1472c);
        uVar65 = uVar4 + (iVar7 - iVar35);
        uVar3 = uVar4 << 2;
        uVar33 = uVar4;
        while( true ) {
          uVar26 = (ulong)uVar33;
          lVar40 = ((ulong)((uVar33 - uVar4) + iVar5 + -1) + uVar42 * 0x1810) * 0x20;
          uVar29 = *(undefined8 *)(puVar1 + lVar40);
          uVar33 = uVar33 + 1;
          uVar6 = *(undefined4 *)(puVar21 + lVar40 + 0xfc04);
          uVar46 = puVar21[lVar40 + 0xfc0f];
          puVar38 = (undefined8 *)(param_1 + 0x650 + (ulong)uVar3 * 4);
          puVar38[1] = *(undefined8 *)((long)(puVar1 + lVar40) + 8);
          *puVar38 = uVar29;
          uVar3 = uVar3 + 4;
          *(short *)(param_1 + uVar26 * 2 + 0x1354) = (short)uVar6;
          *(undefined4 *)(param_1 + uVar26 * 4 + 0x14dc) = uVar6;
          *(undefined *)(param_1 + uVar26 + 0x1290) = uVar46;
          if (uVar65 == uVar33) break;
          uVar42 = (ulong)*(byte *)(param_1 + 0x9ac0);
        }
        uVar3 = *(uint *)(param_1 + 0x9a48);
        uVar33 = *(uint *)(param_1 + 0x9a50);
        uVar4 = uVar65;
      }
      *(uint *)(param_1 + 0x330) = uVar4;
      *(uint *)(param_1 + 0x338) = uVar4;
      uVar29 = *(undefined8 *)(param_1 + 0x96b8);
      uVar60 = *(undefined8 *)(param_1 + 0x96c0);
      uVar121 = (ushort)uVar3 & 0x1f;
      uVar4 = (uint)((ulong)uVar29 >> 0x20);
      uVar65 = (uint)((ulong)uVar60 >> 0x20);
      uVar17 = (uint6)CONCAT14((char)(uVar4 >> 5),(uint)uVar29 >> 5) & 0xffff0000ffff;
      uVar123 = (ushort)(uVar3 >> 5) & 0x1f;
      uVar67 = (ushort)uVar33 & 0x1f;
      uVar26 = CONCAT26((short)((ulong)uVar60 >> 0x20),
                        CONCAT24((short)uVar60,
                                 CONCAT22((short)((ulong)uVar29 >> 0x20),(short)uVar29))) &
               0x1f001f001f001f;
      uVar16 = (uint6)CONCAT14((char)(uVar4 >> 10),(uint)uVar29 >> 10) & 0xffff0000ffff;
      uVar42 = (ulong)CONCAT16((char)(uVar65 >> 5),
                               (uint6)CONCAT14((char)((uint)uVar60 >> 5),
                                               (uint)CONCAT12((char)(uVar17 >> 0x20),(short)uVar17))
                              ) & 0x1f001f001f001f;
      bVar92 = (byte)(uVar42 >> 0x10);
      bVar126 = (byte)(uVar42 >> 0x20);
      bVar52 = (byte)(uVar42 >> 0x30);
      sVar73 = (short)uVar26 * uVar121;
      sVar72 = (short)(uVar26 >> 0x10);
      sVar58 = sVar72 * uVar121;
      uVar46 = (undefined)sVar58;
      uVar47 = (undefined)((ushort)sVar58 >> 8);
      sVar74 = (short)(uVar26 >> 0x20);
      sVar58 = sVar74 * uVar121;
      uVar49 = (undefined)sVar58;
      uVar50 = (undefined)((ushort)sVar58 >> 8);
      sVar75 = (short)(uVar26 >> 0x30);
      sVar58 = sVar75 * uVar121;
      uVar82 = (undefined)sVar58;
      uVar83 = (undefined)((ushort)sVar58 >> 8);
      sVar68 = (short)uVar26 * uVar67;
      sVar72 = sVar72 * uVar67;
      auVar109._2_2_ = sVar72;
      auVar109._0_2_ = sVar68;
      sVar74 = sVar74 * uVar67;
      auVar109._4_2_ = sVar74;
      sVar75 = sVar75 * uVar67;
      auVar109._6_2_ = sVar75;
      uVar121 = (ushort)(uVar33 >> 5) & 0x1f;
      uVar29 = CONCAT26(bVar52 * uVar123,
                        CONCAT24(bVar126 * uVar123,CONCAT22(bVar92 * uVar123,(byte)uVar42 * uVar123)
                                ));
      auVar122[2] = uVar46;
      auVar122._0_2_ = sVar73;
      auVar122[3] = uVar47;
      auVar122[4] = uVar49;
      auVar122[5] = uVar50;
      auVar122[6] = uVar82;
      auVar122[7] = uVar83;
      uVar123 = (ushort)(uVar33 >> 10) & 0x1f;
      sVar58 = (byte)uVar42 * uVar121;
      sVar63 = bVar92 * uVar121;
      auVar109._10_2_ = sVar63;
      auVar109._8_2_ = sVar58;
      sVar64 = bVar126 * uVar121;
      auVar109._12_2_ = sVar64;
      sVar66 = bVar52 * uVar121;
      auVar109._14_2_ = sVar66;
      uVar121 = (ushort)(uVar3 >> 10) & 0x1f;
      uVar42 = (ulong)CONCAT16((char)(uVar65 >> 10),
                               (uint6)CONCAT14((char)((uint)uVar60 >> 10),
                                               (uint)CONCAT12((char)(uVar16 >> 0x20),(short)uVar16))
                              ) & 0x1f001f001f001f;
      auVar97[10] = uVar46;
      auVar97._8_2_ = sVar73;
      auVar97[11] = uVar47;
      auVar97[12] = uVar49;
      auVar97[13] = uVar50;
      auVar97[14] = uVar82;
      auVar97[15] = uVar83;
      auVar97._0_8_ = uVar29;
      auVar122._8_8_ = uVar29;
      auVar98._0_8_ = a64_TBL(ZEXT816(0),auVar97,0x5040d0c09080302);
      auVar71[2] = (char)sVar63;
      auVar71._0_2_ = sVar58;
      auVar71[3] = (char)((ushort)sVar63 >> 8);
      auVar71[4] = (char)sVar64;
      auVar71[5] = (char)((ushort)sVar64 >> 8);
      auVar71[6] = (char)sVar66;
      auVar71[7] = (char)((ushort)sVar66 >> 8);
      auVar71[8] = (char)sVar68;
      auVar71[9] = (char)((ushort)sVar68 >> 8);
      auVar71[10] = (char)sVar72;
      auVar71[11] = (char)((ushort)sVar72 >> 8);
      auVar71[12] = (char)sVar74;
      auVar71[13] = (char)((ushort)sVar74 >> 8);
      auVar71[14] = (char)sVar75;
      auVar71[15] = (char)((ushort)sVar75 >> 8);
      uVar29 = a64_TBL(ZEXT816(0),auVar71,0x5040d0c09080302);
      uVar60 = a64_TBL(ZEXT816(0),auVar122,0x302010009080100);
      uVar77 = a64_TBL(ZEXT816(0),auVar109,0x302010009080100);
      sVar74 = (short)uVar42 * uVar123;
      sVar73 = (short)(uVar42 >> 0x10);
      sVar75 = sVar73 * uVar123;
      auVar99._2_2_ = sVar75;
      auVar99._0_2_ = sVar74;
      sVar58 = (short)(uVar42 >> 0x20);
      sVar63 = sVar58 * uVar123;
      auVar99._4_2_ = sVar63;
      sVar72 = (short)(uVar42 >> 0x30);
      sVar64 = sVar72 * uVar123;
      auVar99._6_2_ = sVar64;
      sVar66 = (short)uVar42 * uVar121;
      sVar73 = sVar73 * uVar121;
      sVar58 = sVar58 * uVar121;
      sVar72 = sVar72 * uVar121;
      uVar140 = CONCAT26(sVar72,CONCAT24(sVar58,CONCAT22(sVar73,sVar66)));
      uVar87 = a64_TBL(ZEXT816(0),auVar109,0x1000f0e07060100);
      uVar101 = a64_TBL(ZEXT816(0),auVar122,0x1000f0e07060100);
      auVar99._8_8_ = uVar87;
      auVar125._8_8_ = uVar101;
      auVar125._0_8_ = uVar140;
      auVar98._8_8_ = uVar140;
      uVar46 = (undefined)((ushort)sVar74 >> 8);
      uVar47 = (undefined)((ushort)sVar75 >> 8);
      uVar49 = (undefined)((ushort)sVar63 >> 8);
      uVar50 = (undefined)((ushort)sVar64 >> 8);
      uVar87 = a64_TBL(ZEXT816(0),auVar98,0x70605040b0a0100);
      auVar57[8] = (char)sVar74;
      auVar57._0_8_ = uVar29;
      auVar57[9] = uVar46;
      auVar57[10] = (char)sVar75;
      auVar57[11] = uVar47;
      auVar57[12] = (char)sVar63;
      auVar57[13] = uVar49;
      auVar57[14] = (char)sVar64;
      auVar57[15] = uVar50;
      uVar29 = a64_TBL(ZEXT816(0),auVar57,0x70605040b0a0100);
      auVar91[8] = (char)sVar66;
      auVar91._0_8_ = uVar60;
      auVar91[9] = (char)((ushort)sVar66 >> 8);
      auVar91[10] = (char)sVar73;
      auVar91[11] = (char)((ushort)sVar73 >> 8);
      auVar91[12] = (char)sVar58;
      auVar91[13] = (char)((ushort)sVar58 >> 8);
      auVar91[14] = (char)sVar72;
      auVar91[15] = (char)((ushort)sVar72 >> 8);
      uVar140 = a64_TBL(ZEXT816(0),auVar91,0x706090803020100);
      auVar79[8] = (char)sVar74;
      auVar79._0_8_ = uVar77;
      auVar79[9] = uVar46;
      auVar79[10] = (char)sVar75;
      auVar79[11] = uVar47;
      auVar79[12] = (char)sVar63;
      auVar79[13] = uVar49;
      auVar79[14] = (char)sVar64;
      auVar79[15] = uVar50;
      uVar60 = a64_TBL(ZEXT816(0),auVar79,0x706090803020100);
      uVar101 = a64_TBL(ZEXT816(0),auVar125,0x7060d0c0b0a0504);
      uVar77 = a64_TBL(ZEXT816(0),auVar99,0x7060d0c0b0a0504);
      *(undefined8 *)(param_1 + 0x9728) = uVar140;
      *(undefined8 *)(param_1 + 0x9730) = uVar87;
      *(undefined8 *)(param_1 + 0x9738) = uVar101;
      *(undefined8 *)(param_1 + 0x9740) = uVar60;
      *(undefined8 *)(param_1 + 0x9748) = uVar29;
      *(undefined8 *)(param_1 + 0x9750) = uVar77;
      geometry_update_base_color_cache(param_1);
      uVar87 = *(undefined8 *)(param_1 + 0x993c);
      uVar140 = *(undefined8 *)(param_1 + 0x9934);
      uVar60 = *(undefined8 *)(param_1 + 0x994c);
      uVar29 = *(undefined8 *)(param_1 + 0x9944);
      auVar57 = *(undefined (*) [16])(param_1 + 0x9954);
      auVar62 = *(undefined (*) [16])(param_1 + 0x9964);
      uVar55 = CONCAT14((char)((ushort)((ulong)uVar87 >> 0x10) >> 5),
                        (uint)((byte)((ushort)uVar87 >> 5) & 0x1f)) & 0x1fffffffff;
      uVar90 = CONCAT16(auVar62[6],
                        (uint6)(CONCAT14(auVar62[4],
                                         (uint)(CONCAT12(auVar62[2],(ushort)(auVar62[0] & 0x1f)) &
                                               0x1f00ff)) & 0x1f00ffffff)) & 0x1f00ffffffffff;
      bVar92 = auVar62[8] & 0x1f;
      iVar20 = (uint)((byte)((ushort)uVar140 >> 5) & 0x1f) << 1;
      cVar148 = ((byte)((ushort)((ulong)uVar140 >> 0x10) >> 5) & 0x1f) * '\x02';
      cVar149 = ((byte)((ushort)((ulong)uVar140 >> 0x20) >> 5) & 0x1f) * '\x02';
      cVar150 = ((byte)(ushort)((ulong)uVar140 >> 0x35) & 0x1f) * '\x02';
      auVar116._0_4_ = (int)uVar55 << 1;
      auVar116._4_4_ = (uint)(byte)(uVar55 >> 0x20) << 1;
      auVar116._8_4_ = (uint)((byte)((ushort)((ulong)uVar87 >> 0x20) >> 5) & 0x1f) << 1;
      auVar116._12_4_ = (uint)((byte)(ushort)((ulong)uVar87 >> 0x35) & 0x1f) << 1;
      uVar139 = CONCAT12((char)((ulong)uVar140 >> 0x10),(ushort)((byte)uVar140 & 0x1f)) & 0x1f00ff;
      uVar69 = CONCAT14((char)((ulong)uVar87 >> 0x20),
                        (uint)(CONCAT12((char)((ulong)uVar87 >> 0x10),(ushort)((byte)uVar87 & 0x1f))
                              & 0x1f00ff)) & 0x1f00ffffff;
      uVar26 = (ulong)CONCAT16((char)((ulong)uVar87 >> 0x30),(uint6)uVar69) & 0x1fffffffffffff;
      uVar130 = CONCAT12((char)((ulong)uVar29 >> 0x10),(ushort)((byte)uVar29 & 0x1f)) & 0x1f00ff;
      uVar59 = CONCAT14((char)((ulong)uVar60 >> 0x20),
                        (uint)(CONCAT12((char)((ulong)uVar60 >> 0x10),(ushort)((byte)uVar60 & 0x1f))
                              & 0x1f00ff)) & 0x1f00ffffff;
      uVar42 = (ulong)CONCAT16((char)((ulong)uVar60 >> 0x30),(uint6)uVar59) & 0x1fffffffffffff;
      uVar124 = CONCAT16(auVar57[6],
                         (uint6)(CONCAT14(auVar57[4],
                                          (uint)(CONCAT12(auVar57[2],(ushort)(auVar57[0] & 0x1f)) &
                                                0x1f00ff)) & 0x1f00ffffff)) & 0x1f00ffffffffff;
      bVar126 = auVar57[8] & 0x1f;
      uVar121 = (short)uVar90 << 1;
      sVar73 = (short)(uVar90 >> 0x10) << 1;
      sVar58 = (short)(uVar90 >> 0x20) << 1;
      sVar72 = (ushort)(byte)(uVar90 >> 0x30) << 1;
      sVar74 = (ushort)(auVar62[10] & 0x1f) << 1;
      sVar75 = (ushort)(auVar62[12] & 0x1f) << 1;
      sVar63 = (ushort)(auVar62[14] & 0x1f) << 1;
      uVar110 = CONCAT14((char)((ushort)((ulong)uVar60 >> 0x10) >> 5),
                         (uint)((byte)((ushort)uVar60 >> 5) & 0x1f)) & 0x1fffffffff;
      uVar100 = CONCAT14((byte)((ulong)uVar140 >> 0x18) >> 2,
                         (uint)((byte)((ulong)uVar140 >> 8) >> 2 & 0x1f)) & 0x1fffffffff;
      uVar86 = CONCAT14((byte)((ulong)uVar87 >> 0x18) >> 2,
                        (uint)((byte)((ulong)uVar87 >> 8) >> 2 & 0x1f)) & 0x1fffffffff;
      uVar76 = CONCAT14((byte)((ulong)uVar60 >> 0x18) >> 2,
                        (uint)((byte)((ulong)uVar60 >> 8) >> 2 & 0x1f)) & 0x1fffffffff;
      uVar55 = CONCAT14((char)(auVar62._10_2_ >> 5),(uint)((byte)(auVar62._8_2_ >> 5) & 0x1f)) &
               0x1fffffffff;
      uVar104 = CONCAT14((char)(auVar57._10_2_ >> 5),(uint)((byte)(auVar57._8_2_ >> 5) & 0x1f)) &
                0x1fffffffff;
      uVar107 = CONCAT14((char)(auVar62._2_2_ >> 5),(uint)((byte)(auVar62._0_2_ >> 5) & 0x1f)) &
                0x1fffffffff;
      uVar138 = (short)uVar139 << 1;
      sVar141 = (ushort)(byte)(uVar139 >> 0x10) << 1;
      sVar142 = (ushort)((byte)((ulong)uVar140 >> 0x20) & 0x1f) << 1;
      sVar143 = (ushort)((byte)((ulong)uVar140 >> 0x30) & 0x1f) << 1;
      uVar144 = (short)uVar69 << 1;
      sVar145 = (short)(uVar26 >> 0x10) << 1;
      sVar146 = (short)(uVar26 >> 0x20) << 1;
      sVar147 = (short)(uVar26 >> 0x30) << 1;
      uVar67 = (short)uVar130 << 1;
      sVar131 = (ushort)(byte)(uVar130 >> 0x10) << 1;
      sVar132 = (ushort)((byte)((ulong)uVar29 >> 0x20) & 0x1f) << 1;
      sVar133 = (ushort)((byte)((ulong)uVar29 >> 0x30) & 0x1f) << 1;
      uVar134 = (short)uVar59 << 1;
      sVar135 = (short)(uVar42 >> 0x10) << 1;
      sVar136 = (short)(uVar42 >> 0x20) << 1;
      sVar137 = (short)(uVar42 >> 0x30) << 1;
      uVar123 = (short)uVar124 << 1;
      sVar64 = (short)(uVar124 >> 0x10) << 1;
      sVar66 = (short)(uVar124 >> 0x20) << 1;
      sVar68 = (ushort)(byte)(uVar124 >> 0x30) << 1;
      sVar127 = (ushort)(auVar57[10] & 0x1f) << 1;
      sVar128 = (ushort)(auVar57[12] & 0x1f) << 1;
      sVar129 = (ushort)(auVar57[14] & 0x1f) << 1;
      uVar69 = CONCAT14(auVar57[3] >> 2,(uint)(auVar57[1] >> 2 & 0x1f)) & 0x1fffffffff;
      uVar59 = CONCAT14(auVar62[3] >> 2,(uint)(auVar62[1] >> 2 & 0x1f)) & 0x1fffffffff;
      auVar95[4] = cVar148;
      auVar95._0_4_ = iVar20;
      auVar95._5_3_ = 0;
      auVar95[8] = cVar149;
      auVar95._9_3_ = 0;
      auVar95[12] = cVar150;
      auVar95._13_3_ = 0;
      auVar95 = NEON_cmeq(auVar95,0,2);
      auVar97 = NEON_cmeq(auVar116,0,2);
      iVar19 = (uint)((byte)((ushort)uVar29 >> 5) & 0x1f) << 1;
      cVar118 = ((byte)((ushort)((ulong)uVar29 >> 0x10) >> 5) & 0x1f) * '\x02';
      cVar119 = ((byte)((ushort)((ulong)uVar29 >> 0x20) >> 5) & 0x1f) * '\x02';
      cVar120 = ((byte)(ushort)((ulong)uVar29 >> 0x35) & 0x1f) * '\x02';
      auVar117._0_4_ = (uint)bVar92 << 1;
      auVar117._4_2_ = sVar74;
      auVar117._6_2_ = 0;
      auVar117._8_2_ = sVar75;
      auVar117._10_2_ = 0;
      auVar117._12_2_ = sVar63;
      auVar117._14_2_ = 0;
      auVar111._0_4_ = (int)uVar110 << 1;
      auVar111._4_4_ = (uint)(byte)(uVar110 >> 0x20) << 1;
      auVar111._8_4_ = (uint)((byte)((ushort)((ulong)uVar60 >> 0x20) >> 5) & 0x1f) << 1;
      auVar111._12_4_ = (uint)((byte)(ushort)((ulong)uVar60 >> 0x35) & 0x1f) << 1;
      auVar102._0_4_ = (int)uVar100 << 1;
      auVar102._4_4_ = (uint)(byte)(uVar100 >> 0x20) << 1;
      auVar102._8_4_ = (uint)((byte)((ulong)uVar140 >> 0x28) >> 2 & 0x1f) << 1;
      auVar102._12_4_ = (uint)((byte)((ulong)uVar140 >> 0x3a) & 0x1f) << 1;
      iVar5 = (uint)((byte)((ulong)uVar29 >> 8) >> 2 & 0x1f) << 1;
      cVar81 = ((byte)((ulong)uVar29 >> 0x18) >> 2 & 0x1f) * '\x02';
      cVar84 = ((byte)((ulong)uVar29 >> 0x28) >> 2 & 0x1f) * '\x02';
      cVar85 = ((byte)((ulong)uVar29 >> 0x3a) & 0x1f) * '\x02';
      auVar88._0_4_ = (int)uVar86 << 1;
      auVar88._4_4_ = (uint)(byte)(uVar86 >> 0x20) << 1;
      auVar88._8_4_ = (uint)((byte)((ulong)uVar87 >> 0x28) >> 2 & 0x1f) << 1;
      auVar88._12_4_ = (uint)((byte)((ulong)uVar87 >> 0x3a) & 0x1f) << 1;
      auVar78._0_4_ = (int)uVar76 << 1;
      auVar78._4_4_ = (uint)(byte)(uVar76 >> 0x20) << 1;
      auVar78._8_4_ = (uint)((byte)((ulong)uVar60 >> 0x28) >> 2 & 0x1f) << 1;
      auVar78._12_4_ = (uint)((byte)((ulong)uVar60 >> 0x3a) & 0x1f) << 1;
      iVar18 = (uint)((byte)(auVar57._0_2_ >> 5) & 0x1f) << 1;
      cVar113 = ((byte)(auVar57._2_2_ >> 5) & 0x1f) * '\x02';
      cVar114 = ((byte)(auVar57._4_2_ >> 5) & 0x1f) * '\x02';
      cVar115 = ((byte)(auVar57._6_2_ >> 5) & 0x1f) * '\x02';
      auVar108._0_4_ = (int)uVar107 << 1;
      auVar108._4_4_ = (uint)(byte)(uVar107 >> 0x20) << 1;
      auVar108._8_4_ = (uint)((byte)(auVar62._4_2_ >> 5) & 0x1f) << 1;
      auVar108._12_4_ = (uint)((byte)(auVar62._6_2_ >> 5) & 0x1f) << 1;
      auVar105._0_4_ = (int)uVar104 << 1;
      auVar105._4_4_ = (uint)(byte)(uVar104 >> 0x20) << 1;
      auVar105._8_4_ = (uint)((byte)(auVar57._12_2_ >> 5) & 0x1f) << 1;
      auVar105._12_4_ = (uint)((byte)(auVar57._14_2_ >> 5) & 0x1f) << 1;
      auVar56._0_4_ = (int)uVar55 << 1;
      auVar56._4_4_ = (uint)(byte)(uVar55 >> 0x20) << 1;
      auVar56._8_4_ = (uint)((byte)(auVar62._12_2_ >> 5) & 0x1f) << 1;
      auVar56._12_4_ = (uint)((byte)(auVar62._14_2_ >> 5) & 0x1f) << 1;
      auVar70._0_4_ = (int)uVar69 << 1;
      auVar70._4_4_ = (uint)(byte)(uVar69 >> 0x20) << 1;
      auVar70._8_4_ = (uint)(auVar57[5] >> 2 & 0x1f) << 1;
      auVar70._12_4_ = (uint)(auVar57[7] >> 2 & 0x1f) << 1;
      iVar7 = (uint)(auVar57[9] >> 2 & 0x1f) << 1;
      cVar51 = (auVar57[11] >> 2 & 0x1f) * '\x02';
      cVar53 = (auVar57[13] >> 2 & 0x1f) * '\x02';
      cVar54 = (auVar57[15] >> 2 & 0x1f) * '\x02';
      auVar61._0_4_ = (int)uVar59 << 1;
      auVar61._4_4_ = (uint)(byte)(uVar59 >> 0x20) << 1;
      auVar61._8_4_ = (uint)(auVar62[5] >> 2 & 0x1f) << 1;
      auVar61._12_4_ = (uint)(auVar62[7] >> 2 & 0x1f) << 1;
      iVar35 = (uint)(auVar62[9] >> 2 & 0x1f) << 1;
      cVar44 = (auVar62[11] >> 2 & 0x1f) * '\x02';
      cVar45 = (auVar62[13] >> 2 & 0x1f) * '\x02';
      cVar48 = (auVar62[15] >> 2 & 0x1f) * '\x02';
      auVar156._2_2_ = 0;
      auVar156._0_2_ = uVar138;
      auVar156._4_2_ = sVar141;
      auVar156._6_2_ = 0;
      auVar156._8_2_ = sVar142;
      auVar156._10_2_ = 0;
      auVar156._12_2_ = sVar143;
      auVar156._14_2_ = 0;
      auVar154._2_2_ = 0;
      auVar154._0_2_ = uVar144;
      auVar154._4_2_ = sVar145;
      auVar154._6_2_ = 0;
      auVar154._8_2_ = sVar146;
      auVar154._10_2_ = 0;
      auVar154._12_2_ = sVar147;
      auVar154._14_2_ = 0;
      auVar152._2_2_ = 0;
      auVar152._0_2_ = uVar67;
      auVar152._4_2_ = sVar131;
      auVar152._6_2_ = 0;
      auVar152._8_2_ = sVar132;
      auVar152._10_2_ = 0;
      auVar152._12_2_ = sVar133;
      auVar152._14_2_ = 0;
      auVar157._2_2_ = 0;
      auVar157._0_2_ = uVar134;
      auVar157._4_2_ = sVar135;
      auVar157._6_2_ = 0;
      auVar157._8_2_ = sVar136;
      auVar157._10_2_ = 0;
      auVar157._12_2_ = sVar137;
      auVar157._14_2_ = 0;
      auVar155._2_2_ = 0;
      auVar155._0_2_ = uVar123;
      auVar155._4_2_ = sVar64;
      auVar155._6_2_ = 0;
      auVar155._8_2_ = sVar66;
      auVar155._10_2_ = 0;
      auVar155._12_2_ = sVar68;
      auVar155._14_2_ = 0;
      auVar153._0_4_ = (uint)bVar126 << 1;
      auVar153._4_2_ = sVar127;
      auVar153._6_2_ = 0;
      auVar153._8_2_ = sVar128;
      auVar153._10_2_ = 0;
      auVar153._12_2_ = sVar129;
      auVar153._14_2_ = 0;
      auVar151._2_2_ = 0;
      auVar151._0_2_ = uVar121;
      auVar151._4_2_ = sVar73;
      auVar151._6_2_ = 0;
      auVar151._8_2_ = sVar58;
      auVar151._10_2_ = 0;
      auVar151._12_2_ = sVar72;
      auVar151._14_2_ = 0;
      auVar117 = NEON_cmeq(auVar117,0,2);
      auVar96[4] = cVar118;
      auVar96._0_4_ = iVar19;
      auVar96._5_3_ = 0;
      auVar96[8] = cVar119;
      auVar96._9_3_ = 0;
      auVar96[12] = cVar120;
      auVar96._13_3_ = 0;
      auVar122 = NEON_cmeq(auVar96,0,2);
      auVar125 = NEON_cmeq(auVar102,0,2);
      auVar93[4] = cVar81;
      auVar93._0_4_ = iVar5;
      auVar93._5_3_ = 0;
      auVar93[8] = cVar84;
      auVar93._9_3_ = 0;
      auVar93[12] = cVar85;
      auVar93._13_3_ = 0;
      auVar103 = NEON_cmeq(auVar93,0,2);
      auVar94[4] = cVar113;
      auVar94._0_4_ = iVar18;
      auVar94._5_3_ = 0;
      auVar94[8] = cVar114;
      auVar94._9_3_ = 0;
      auVar94[12] = cVar115;
      auVar94._13_3_ = 0;
      auVar96 = NEON_cmeq(auVar94,0,2);
      auVar94 = NEON_cmeq(auVar156,0,2);
      auVar93 = NEON_cmeq(auVar154,0,2);
      auVar98 = NEON_cmeq(auVar108,0,2);
      auVar109 = NEON_cmeq(auVar70,0,2);
      auVar89[4] = cVar51;
      auVar89._0_4_ = iVar7;
      auVar89._5_3_ = 0;
      auVar89[8] = cVar53;
      auVar89._9_3_ = 0;
      auVar89[12] = cVar54;
      auVar89._13_3_ = 0;
      auVar99 = NEON_cmeq(auVar89,0,2);
      auVar71 = NEON_cmeq(auVar61,0,2);
      auVar91 = NEON_cmeq(auVar152,0,2);
      auVar62[4] = cVar44;
      auVar62._0_4_ = iVar35;
      auVar62._5_3_ = 0;
      auVar62[8] = cVar45;
      auVar62._9_3_ = 0;
      auVar62[12] = cVar48;
      auVar62._13_3_ = 0;
      auVar62 = NEON_cmeq(auVar62,0,2);
      auVar157 = NEON_cmeq(auVar157,0,2);
      auVar156 = NEON_cmeq(auVar155,0,2);
      auVar154 = NEON_cmeq(auVar153,0,2);
      auVar152 = NEON_cmeq(auVar151,0,2);
      auVar112 = NEON_cmeq(auVar111,0,2);
      auVar89 = NEON_cmeq(auVar88,0,2);
      auVar79 = NEON_cmeq(auVar78,0,2);
      auVar106 = NEON_cmeq(auVar105,0,2);
      auVar57 = NEON_cmeq(auVar56,0,2);
      auVar80._0_8_ =
           CONCAT17((char)auVar116._12_4_ + 1U & ~auVar97[12],
                    CONCAT16((char)auVar116._8_4_ + 1U & ~auVar97[8],
                             CONCAT15((char)auVar116._4_4_ + 1U & ~auVar97[4],
                                      CONCAT14((char)auVar116._0_4_ + 1U & ~auVar97[0],
                                               CONCAT13(cVar150 + 1U & ~auVar95[12],
                                                        CONCAT12(cVar149 + 1U & ~auVar95[8],
                                                                 CONCAT11(cVar148 + 1U & ~auVar95[4]
                                                                          ,(char)iVar20 + 1U &
                                                                           ~auVar95[0])))))));
      auVar80[8] = (char)iVar19 + 1U & ~auVar122[0];
      auVar80[9] = cVar118 + 1U & ~auVar122[4];
      auVar80[10] = cVar119 + 1U & ~auVar122[8];
      auVar80[11] = cVar120 + 1U & ~auVar122[12];
      auVar80[12] = (char)auVar111._0_4_ + 1U & ~auVar112[0];
      auVar80[13] = (char)auVar111._4_4_ + 1U & ~auVar112[4];
      auVar80[14] = (char)auVar111._8_4_ + 1U & ~auVar112[8];
      auVar80[15] = (char)auVar111._12_4_ + 1U & ~auVar112[12];
      auVar112._0_8_ =
           CONCAT17((char)auVar88._12_4_ + 1U & ~auVar89[12],
                    CONCAT16((char)auVar88._8_4_ + 1U & ~auVar89[8],
                             CONCAT15((char)auVar88._4_4_ + 1U & ~auVar89[4],
                                      CONCAT14((char)auVar88._0_4_ + 1U & ~auVar89[0],
                                               CONCAT13((char)auVar102._12_4_ + 1U & ~auVar125[12],
                                                        CONCAT12((char)auVar102._8_4_ + 1U &
                                                                 ~auVar125[8],
                                                                 CONCAT11((char)auVar102._4_4_ + 1U
                                                                          & ~auVar125[4],
                                                                          (char)auVar102._0_4_ + 1U
                                                                          & ~auVar125[0])))))));
      auVar112[8] = (char)iVar5 + 1U & ~auVar103[0];
      auVar112[9] = cVar81 + 1U & ~auVar103[4];
      auVar112[10] = cVar84 + 1U & ~auVar103[8];
      auVar112[11] = cVar85 + 1U & ~auVar103[12];
      auVar112[12] = (char)auVar78._0_4_ + 1U & ~auVar79[0];
      auVar112[13] = (char)auVar78._4_4_ + 1U & ~auVar79[4];
      auVar112[14] = (char)auVar78._8_4_ + 1U & ~auVar79[8];
      auVar112[15] = (char)auVar78._12_4_ + 1U & ~auVar79[12];
      auVar103._0_8_ =
           CONCAT17((char)auVar105._12_4_ + 1U & ~auVar106[12],
                    CONCAT16((char)auVar105._8_4_ + 1U & ~auVar106[8],
                             CONCAT15((char)auVar105._4_4_ + 1U & ~auVar106[4],
                                      CONCAT14((char)auVar105._0_4_ + 1U & ~auVar106[0],
                                               CONCAT13(cVar115 + 1U & ~auVar96[12],
                                                        CONCAT12(cVar114 + 1U & ~auVar96[8],
                                                                 CONCAT11(cVar113 + 1U & ~auVar96[4]
                                                                          ,(char)iVar18 + 1U &
                                                                           ~auVar96[0])))))));
      auVar103[8] = (char)auVar108._0_4_ + 1U & ~auVar98[0];
      auVar103[9] = (char)auVar108._4_4_ + 1U & ~auVar98[4];
      auVar103[10] = (char)auVar108._8_4_ + 1U & ~auVar98[8];
      auVar103[11] = (char)auVar108._12_4_ + 1U & ~auVar98[12];
      auVar103[12] = (char)auVar56._0_4_ + 1U & ~auVar57[0];
      auVar103[13] = (char)auVar56._4_4_ + 1U & ~auVar57[4];
      auVar103[14] = (char)auVar56._8_4_ + 1U & ~auVar57[8];
      auVar103[15] = (char)auVar56._12_4_ + 1U & ~auVar57[12];
      auVar106._0_8_ =
           CONCAT17((char)sVar147 + 1U & ~auVar93[12],
                    CONCAT16((char)sVar146 + 1U & ~auVar93[8],
                             CONCAT15((char)sVar145 + 1U & ~auVar93[4],
                                      CONCAT14((char)uVar144 + 1U & ~auVar93[0],
                                               CONCAT13((char)sVar143 + 1U & ~auVar94[12],
                                                        CONCAT12((char)sVar142 + 1U & ~auVar94[8],
                                                                 CONCAT11((char)sVar141 + 1U &
                                                                          ~auVar94[4],
                                                                          (char)uVar138 + 1U &
                                                                          ~auVar94[0])))))));
      auVar106[8] = (char)uVar67 + 1U & ~auVar91[0];
      auVar106[9] = (char)sVar131 + 1U & ~auVar91[4];
      auVar106[10] = (char)sVar132 + 1U & ~auVar91[8];
      auVar106[11] = (char)sVar133 + 1U & ~auVar91[12];
      auVar106[12] = (char)uVar134 + 1U & ~auVar157[0];
      auVar106[13] = (char)sVar135 + 1U & ~auVar157[4];
      auVar106[14] = (char)sVar136 + 1U & ~auVar157[8];
      auVar106[15] = (char)sVar137 + 1U & ~auVar157[12];
      *(long *)(param_1 + 0x99f4) = auVar80._8_8_;
      *(undefined8 *)(param_1 + 0x99ec) = auVar80._0_8_;
      *(long *)(param_1 + 0x99d4) = auVar106._8_8_;
      *(undefined8 *)(param_1 + 0x99cc) = auVar106._0_8_;
      *(ulong *)(param_1 + 0x99e4) =
           CONCAT17((char)sVar63 + 1U & ~auVar117[12],
                    CONCAT16((char)sVar75 + 1U & ~auVar117[8],
                             CONCAT15((char)sVar74 + 1U & ~auVar117[4],
                                      CONCAT14(bVar92 * '\x02' + 1 & ~auVar117[0],
                                               CONCAT13((char)sVar72 + 1U & ~auVar152[12],
                                                        CONCAT12((char)sVar58 + 1U & ~auVar152[8],
                                                                 CONCAT11((char)sVar73 + 1U &
                                                                          ~auVar152[4],
                                                                          (char)uVar121 + 1U &
                                                                          ~auVar152[0])))))));
      *(ulong *)(param_1 + 0x99dc) =
           CONCAT17((char)sVar129 + 1U & ~auVar154[12],
                    CONCAT16((char)sVar128 + 1U & ~auVar154[8],
                             CONCAT15((char)sVar127 + 1U & ~auVar154[4],
                                      CONCAT14(bVar126 * '\x02' + 1 & ~auVar154[0],
                                               CONCAT13((char)sVar68 + 1U & ~auVar156[12],
                                                        CONCAT12((char)sVar66 + 1U & ~auVar156[8],
                                                                 CONCAT11((char)sVar64 + 1U &
                                                                          ~auVar156[4],
                                                                          (char)uVar123 + 1U &
                                                                          ~auVar156[0])))))));
      *(long *)(param_1 + 0x9a04) = auVar103._8_8_;
      *(undefined8 *)(param_1 + 0x99fc) = auVar103._0_8_;
      *(long *)(param_1 + 0x9a14) = auVar112._8_8_;
      *(undefined8 *)(param_1 + 0x9a0c) = auVar112._0_8_;
      *(ulong *)(param_1 + 0x9a24) =
           CONCAT17(cVar48 + 1U & ~auVar62[12],
                    CONCAT16(cVar45 + 1U & ~auVar62[8],
                             CONCAT15(cVar44 + 1U & ~auVar62[4],
                                      CONCAT14((char)iVar35 + 1U & ~auVar62[0],
                                               CONCAT13((char)auVar61._12_4_ + 1U & ~auVar71[12],
                                                        CONCAT12((char)auVar61._8_4_ + 1U &
                                                                 ~auVar71[8],
                                                                 CONCAT11((char)auVar61._4_4_ + 1U &
                                                                          ~auVar71[4],
                                                                          (char)auVar61._0_4_ + 1U &
                                                                          ~auVar71[0])))))));
      *(ulong *)(param_1 + 0x9a1c) =
           CONCAT17(cVar54 + 1U & ~auVar99[12],
                    CONCAT16(cVar53 + 1U & ~auVar99[8],
                             CONCAT15(cVar51 + 1U & ~auVar99[4],
                                      CONCAT14((char)iVar7 + 1U & ~auVar99[0],
                                               CONCAT13((char)auVar70._12_4_ + 1U & ~auVar109[12],
                                                        CONCAT12((char)auVar70._8_4_ + 1U &
                                                                 ~auVar109[8],
                                                                 CONCAT11((char)auVar70._4_4_ + 1U &
                                                                          ~auVar109[4],
                                                                          (char)auVar70._0_4_ + 1U &
                                                                          ~auVar109[0])))))));
      *(undefined *)(param_1 + 0x9acf) = 1;
      *(undefined2 *)(param_1 + 0x9ad0) = 0xf01;
      if (*(long *)(puVar21 + 0x6fff8) - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,puVar21 + 0x6f870,
                         *(long *)(puVar21 + 0x6fff8) - ___stack_chk_guard,0);
      }
      return;
    }
    lVar40 = 1;
  } while( true );
}


