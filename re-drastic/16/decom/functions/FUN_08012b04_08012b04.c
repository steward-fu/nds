/*
 * Ghidra decompilation
 *
 * Function : FUN_08012b04
 * Address  : 08012b04
 * Program  : drastic16
 */


undefined4 FUN_08012b04(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *__s;
  undefined4 uVar4;
  
  iVar1 = param_2 + 0x159ebf8;
  iVar3 = param_2 + 0x1da5188;
  param_1[0x3ee8b] = param_2 + 0x15a0f78;
  param_1[0x3ee8c] = param_2 + 0x1da7508;
  param_1[0x3ee87] = param_2;
  param_1[0x3ee88] = param_2 + 0x26a7f80;
  param_1[0x3ee89] = param_2 + 0x282c7b0;
  param_1[0x3ee8a] = param_2 + 0x155e000;
  param_1[0x3f1fb] = param_2 + 0xe90;
  param_1[0x3f1fc] = param_2 + 0x12d4;
  param_1[0x3f1fa] = param_2 + 0x1a0;
  *(undefined4 **)(param_2 + 0x1da0f7c) = param_1;
  *(undefined4 **)(param_2 + 0x25a750c) = param_1;
  *(undefined4 **)(param_2 + 0x1da0f78) = param_1 + 0x3ee8d;
  *(undefined4 **)(param_2 + 0x25a7508) = param_1 + 0x3f00d;
  *(int *)(param_2 + 0x1da0f80) = iVar1;
  *(int *)(param_2 + 0x25a7510) = iVar3;
  iVar2 = getpagesize();
  param_1[0x3f200] = iVar2;
  FUN_08012674(param_1);
  FUN_08012928(param_1);
  puts("  Initializing ARM9 bus-level memory map.");
  param_1[0x3ee8d] = 0x1ffff;
  *(undefined *)(param_1 + 0x3ee98) = 3;
  *(undefined *)((int)param_1 + 0xfba61) = 3;
  param_1[0x3ee96] = &LAB_08006888;
  param_1[0x3ee97] = &LAB_08006888;
  param_1[0x3ee94] = 0;
  param_1[0x3ee95] = 0;
  param_1[0x3ee99] = 0x1ffff;
  *(undefined *)(param_1 + 0x3eea4) = 3;
  *(undefined *)((int)param_1 + 0xfba91) = 3;
  param_1[0x3eea2] = &LAB_08006888;
  param_1[0x3eea3] = &LAB_08006888;
  param_1[0x3eea0] = 0;
  param_1[0x3eea1] = 0;
  param_1[0x3eea5] = 0x1ffff;
  *(undefined *)(param_1 + 0x3eeb0) = 3;
  *(undefined *)((int)param_1 + 0xfbac1) = 3;
  param_1[0x3eeae] = &LAB_08006888;
  param_1[0x3eeaf] = &LAB_08006888;
  param_1[0x3eeac] = 0;
  param_1[0x3eead] = 0;
  param_1[0x3eeb1] = 0x1ffff;
  *(undefined *)(param_1 + 0x3eebc) = 3;
  *(undefined *)((int)param_1 + 0xfbaf1) = 3;
  param_1[0x3eeba] = &LAB_08006888;
  param_1[0x3eebb] = &LAB_08006888;
  param_1[0x3eeb8] = 0;
  param_1[0x3eeb9] = 0;
  param_1[0x3eebd] = 0x3fffff;
  *(undefined *)(param_1 + 0x3eec8) = 0;
  uVar4 = *param_1;
  param_1[0x3eec4] = param_1 + 0x2bc10;
  param_1[0x3eebe] = uVar4;
  param_1[0x3eec1] = uVar4;
  param_1[0x3eec5] = param_1 + 0x2bc5f;
  param_1[0x3eec6] = &LAB_08006890;
  param_1[0x3eec7] = &LAB_080068a8;
  *(undefined *)((int)param_1 + 0xfbb21) = 0;
  param_1[0x3eec9] = 0x3fffff;
  param_1[0x3eeca] = uVar4;
  param_1[0x3eecd] = uVar4;
  param_1[0x3eed0] = param_1 + 0x2bc10;
  param_1[0x3eed1] = param_1 + 0x2bc5f;
  param_1[0x3eed2] = &LAB_08006890;
  param_1[0x3eed3] = &LAB_080068a8;
  *(undefined *)(param_1 + 0x3eed4) = 0;
  *(undefined *)((int)param_1 + 0xfbb51) = 0;
  param_1[0x3eed5] = 0x3fff;
  param_1[0x3eedc] = param_1 + 0x2bc52;
  *(undefined *)(param_1 + 0x3eee0) = 1;
  *(undefined *)((int)param_1 + 0xfbb81) = 1;
  param_1[0x3eed6] = &LAB_08006848;
  param_1[0x3eed9] = &LAB_08006848;
  param_1[0x3eedd] = param_1 + 0x3be60;
  param_1[0x3eede] = FUN_08006984;
  param_1[0x3eedf] = FUN_080069e8;
  param_1[0x3eee1] = 0x3fff;
  param_1[0x3eee8] = param_1 + 0x2bc52;
  param_1[0x3eee2] = &LAB_08006848;
  param_1[0x3eee5] = &LAB_08006848;
  param_1[0x3eeeb] = FUN_080069e8;
  *(undefined *)(param_1 + 0x3eeec) = 1;
  *(undefined *)((int)param_1 + 0xfbbb1) = 1;
  param_1[0x3eee9] = param_1 + 0x3be60;
  param_1[0x3eeea] = FUN_08006984;
  param_1[0x3eeed] = 0x7fffff;
  param_1[0x3eeee] = FUN_0800e5ec;
  param_1[0x3eeef] = FUN_0800da14;
  param_1[0x3eef0] = FUN_0800e04c;
  *(undefined *)(param_1 + 0x3eef8) = 2;
  *(undefined *)((int)param_1 + 0xfbbe1) = 2;
  param_1[0x3eef1] = FUN_0800a708;
  param_1[0x3eef2] = FUN_0800b5f4;
  param_1[0x3eef3] = FUN_0800c2bc;
  param_1[0x3eef4] = 0;
  param_1[0x3eef5] = 0;
  param_1[0x3eef6] = &LAB_08006888;
  param_1[0x3eef7] = &LAB_08006888;
  param_1[0x3eef9] = 0x7fffff;
  param_1[0x3eefa] = FUN_0800e5ec;
  param_1[0x3eefb] = FUN_0800da14;
  param_1[0x3eefc] = FUN_0800e04c;
  *(undefined *)(param_1 + 0x3ef04) = 2;
  *(undefined *)((int)param_1 + 0xfbc11) = 2;
  param_1[0x3eefd] = FUN_0800a708;
  param_1[0x3eefe] = FUN_0800b5f4;
  param_1[0x3eeff] = FUN_0800c2bc;
  param_1[0x3ef02] = &LAB_08006888;
  param_1[0x3ef03] = &LAB_08006888;
  param_1[0x3ef00] = 0;
  param_1[0x3ef01] = 0;
  param_1[0x3ef1d] = 0x3fff;
  param_1[0x3ef25] = param_1 + 0x3c460;
  *(undefined *)(param_1 + 0x3ef28) = 1;
  param_1[0x3ef24] = param_1 + 0x2bc54;
  *(undefined *)((int)param_1 + 0xfbca1) = 1;
  param_1[0x3ef1e] = FUN_08006734;
  param_1[0x3ef21] = &LAB_08006758;
  param_1[0x3ef26] = FUN_080068c0;
  param_1[0x3ef27] = FUN_08006924;
  param_1[0x3ef29] = 0x3fff;
  param_1[0x3ef30] = param_1 + 0x2bc54;
  param_1[0x3ef2d] = &LAB_08006758;
  param_1[0x3ef33] = FUN_08006924;
  param_1[0x3ef2a] = FUN_08006734;
  *(undefined *)(param_1 + 0x3ef34) = 1;
  *(undefined *)((int)param_1 + 0xfbcd1) = 1;
  param_1[0x3ef31] = param_1 + 0x3c460;
  param_1[0x3ef32] = FUN_080068c0;
  param_1[0x3ef95] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efa0) = 3;
  *(undefined *)((int)param_1 + 0xfbe81) = 3;
  param_1[0x3ef9e] = &LAB_08006888;
  param_1[0x3ef9f] = &LAB_08006888;
  param_1[0x3ef9c] = 0;
  param_1[0x3ef9d] = 0;
  param_1[0x3efa1] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efac) = 3;
  *(undefined *)((int)param_1 + 0xfbeb1) = 3;
  param_1[0x3efaa] = &LAB_08006888;
  param_1[0x3efab] = &LAB_08006888;
  param_1[0x3efa8] = 0;
  param_1[0x3efa9] = 0;
  param_1[0x3efad] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efb8) = 3;
  *(undefined *)((int)param_1 + 0xfbee1) = 3;
  param_1[0x3efb6] = &LAB_08006888;
  param_1[0x3efb4] = 0;
  param_1[0x3efb5] = 0;
  param_1[0x3efb7] = &LAB_08006888;
  param_1[0x3efb9] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efc4) = 3;
  *(undefined *)((int)param_1 + 0xfbf11) = 3;
  param_1[0x3efc2] = &LAB_08006888;
  param_1[0x3efc3] = &LAB_08006888;
  param_1[0x3efc0] = 0;
  param_1[0x3efc1] = 0;
  param_1[0x3efc5] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efd0) = 3;
  *(undefined *)((int)param_1 + 0xfbf41) = 3;
  param_1[0x3efce] = &LAB_08006888;
  param_1[0x3efcf] = &LAB_08006888;
  param_1[0x3efcc] = 0;
  param_1[0x3efcd] = 0;
  param_1[0x3efd1] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efdc) = 3;
  *(undefined *)((int)param_1 + 0xfbf71) = 3;
  param_1[0x3efda] = &LAB_08006888;
  param_1[0x3efdb] = &LAB_08006888;
  param_1[0x3efd8] = 0;
  param_1[0x3efd9] = 0;
  param_1[0x3efdd] = 0x1ffff;
  *(undefined *)(param_1 + 0x3efe8) = 3;
  *(undefined *)((int)param_1 + 0xfbfa1) = 3;
  param_1[0x3efe6] = &LAB_08006888;
  param_1[0x3efe7] = &LAB_08006888;
  param_1[0x3efe4] = 0;
  param_1[0x3efe5] = 0;
  param_1[0x3efe9] = 0x1ffff;
  *(undefined *)(param_1 + 0x3eff4) = 3;
  *(undefined *)((int)param_1 + 0xfbfd1) = 3;
  param_1[0x3eff2] = &LAB_08006888;
  param_1[0x3eff3] = &LAB_08006888;
  param_1[0x3eff0] = 0;
  param_1[0x3eff1] = 0;
  param_1[0x3eff5] = 0x1ffff;
  *(undefined *)(param_1 + 0x3f000) = 3;
  *(undefined *)((int)param_1 + 0xfc001) = 3;
  param_1[0x3effe] = &LAB_08006888;
  param_1[0x3efff] = &LAB_08006888;
  param_1[0x3effc] = 0;
  param_1[0x3effd] = 0;
  param_1[0x3f001] = 0x1ffff;
  *(undefined *)(param_1 + 0x3f00c) = 3;
  *(undefined *)((int)param_1 + 0xfc031) = 3;
  param_1[0x3f00a] = &LAB_08006888;
  param_1[0x3f00b] = &LAB_08006888;
  param_1[0x3f008] = 0;
  param_1[0x3f009] = 0;
  FUN_08011544(param_1);
  puts("  Initializing CP15.");
  FUN_0801d5f8(param_1 + 0x3f208,iVar1);
  *(undefined4 **)(param_2 + 0x15a0efc) = param_1 + 0x3f208;
  *(undefined4 *)(param_2 + 0x1da748c) = 0;
  *(undefined4 **)(param_2 + 0x15a0c78) = param_1 + 0x6c10;
  *(undefined4 **)(param_2 + 0x1da7208) = param_1 + 0x8c10;
  puts("  Initializing DMA.");
  FUN_0801ac10(param_1 + 0x3f18e,param_1,param_1 + 0x3ee8d,param_1 + 0x6c10,iVar1);
  FUN_0801ac10(param_1 + 0x3f1b0,param_1,param_1 + 0x3f00d,param_1 + 0x8c10,iVar3);
  FUN_0801da44(param_1 + 0x3f1d2,iVar1,param_1 + 0x3f1e6);
  FUN_0801da44(param_1 + 0x3f1e6,iVar3,param_1 + 0x3f1d2);
  *(undefined *)((int)param_1 + 0xfc81e) = 0;
  iVar1 = FUN_08004eb0(param_2,"nds_bios_arm9.bin",param_1 + 0x4004,0x1000);
  if (iVar1 < 0) {
    puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM9 BIOS.");
    iVar1 = FUN_08004eb0(param_2,"drastic_bios_arm9.bin",param_1 + 0x4004,0x1000);
    if (-1 < iVar1) {
      *(byte *)((int)param_1 + 0xfc81e) = *(byte *)((int)param_1 + 0xfc81e) | 2;
      goto LAB_080133ec;
    }
LAB_08013510:
    uVar4 = 0xffffffff;
  }
  else {
LAB_080133ec:
    iVar1 = FUN_08004eb0(param_2,"nds_bios_arm7.bin",param_1 + 0x4404,0x4000);
    if (iVar1 < 0) {
      puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM7 BIOS.");
      iVar1 = FUN_08004eb0(param_2,"drastic_bios_arm7.bin",param_1 + 0x4404,0x4000);
      if (iVar1 < 0) goto LAB_08013510;
      *(byte *)((int)param_1 + 0xfc81e) = *(byte *)((int)param_1 + 0xfc81e) | 1;
    }
    __s = param_1 + 0xac10;
    iVar1 = FUN_08004eb0(param_2,"nds_firmware.bin",__s,0x40000);
    if (iVar1 < 0) {
      memset(__s,0,0x40000);
      FUN_080120c4(__s);
    }
    uVar4 = 0;
    param_1[0x3ee80] = 0;
    param_1[0x2bc50] = 0;
    param_1[0x3bc5f] = 0;
  }
  return uVar4;
}


