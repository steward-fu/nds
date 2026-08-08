/*
 * Ghidra decompilation
 *
 * Function : FUN_0805a114
 * Address  : 0805a114
 * Program  : drastic16
 */


undefined4 FUN_0805a114(ulonglong *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined uStack_1090;
  undefined local_108f;
  undefined local_108e;
  undefined local_108d;
  undefined local_108c;
  undefined local_108b;
  undefined local_108a;
  undefined local_1089;
  undefined local_1088;
  uint uStack_1080;
  uint local_107c;
  uint local_1078;
  uint uStack_1070;
  uint local_106c;
  uint auStack_1068 [15];
  uint local_102c [257];
  int aiStack_c28 [256];
  uint auStack_828 [256];
  int aiStack_428 [257];
  
  local_107c = param_2 >> 1;
  local_1078 = param_2 << 1;
  uStack_1080 = param_2;
  memcpy(&uStack_1070,param_3,0x1048);
  FUN_08059f34(&uStack_1070,&uStack_1080);
  FUN_08059f34(&uStack_1070,&uStack_1080);
  puVar3 = local_102c + 1;
  uVar7 = *(uint *)((int)param_1 + 4);
  uVar1 = *(uint *)param_1;
  do {
    puVar3 = puVar3 + -1;
    uVar4 = uVar7 ^ *puVar3;
    uVar7 = uVar1 ^ (local_102c[(uVar4 >> 0x18) + 1] + aiStack_c28[(uVar4 << 8) >> 0x18] ^
                    auStack_828[(uVar4 << 0x10) >> 0x18]) + aiStack_428[uVar4 & 0xff];
    uVar1 = uVar4;
  } while (puVar3 != auStack_1068);
  *(uint *)param_1 = uVar7 ^ local_106c;
  *(uint *)((int)param_1 + 4) = uVar4 ^ uStack_1070;
  local_107c = local_107c << 1;
  local_1078 = local_1078 >> 1;
  FUN_08059f34(&uStack_1070,&uStack_1080);
  puVar3 = local_102c + 1;
  uVar7 = *(uint *)((int)param_1 + 4);
  uVar1 = *(uint *)param_1;
  do {
    puVar3 = puVar3 + -1;
    uVar4 = uVar7 ^ *puVar3;
    uVar7 = uVar1 ^ (local_102c[(uVar4 >> 0x18) + 1] + aiStack_c28[(uVar4 << 8) >> 0x18] ^
                    auStack_828[(uVar4 << 0x10) >> 0x18]) + aiStack_428[uVar4 & 0xff];
    uVar1 = uVar4;
  } while (auStack_1068 != puVar3);
  uVar7 = uVar7 ^ local_106c;
  *(uint *)param_1 = uVar7;
  uVar4 = uVar4 ^ uStack_1070;
  *(uint *)((int)param_1 + 4) = uVar4;
  uStack_1090 = (undefined)uVar7;
  local_108c = (undefined)uVar4;
  local_108f = (undefined)(uVar7 >> 8);
  local_108e = (undefined)(uVar7 >> 0x10);
  local_108d = (undefined)(uVar7 >> 0x18);
  local_108b = (undefined)(uVar4 >> 8);
  local_108a = (undefined)(uVar4 >> 0x10);
  local_1089 = (undefined)(uVar4 >> 0x18);
  local_1088 = 0;
  iVar2 = memcmp(&uStack_1090,"encryObj",8);
  if (iVar2 == 0) {
    iVar2 = 2;
    puVar6 = param_1;
    do {
      puVar5 = puVar6 + 1;
      puVar3 = local_102c + 1;
      uVar7 = *(uint *)((int)puVar6 + 0xc);
      uVar1 = *(uint *)puVar5;
      do {
        puVar3 = puVar3 + -1;
        uVar4 = uVar7 ^ *puVar3;
        uVar7 = uVar1 ^ (local_102c[(uVar4 >> 0x18) + 1] + aiStack_c28[(uVar4 << 8) >> 0x18] ^
                        auStack_828[(uVar4 << 0x10) >> 0x18]) + aiStack_428[uVar4 & 0xff];
        uVar1 = uVar4;
      } while (auStack_1068 != puVar3);
      iVar2 = iVar2 + 2;
      *puVar5 = CONCAT44(uVar4,uVar7) ^ CONCAT44(uStack_1070,local_106c);
      puVar6 = puVar5;
    } while (iVar2 != 0x200);
    *(uint *)param_1 = 0xe7ffdeff;
    *(uint *)((int)param_1 + 4) = 0xe7ffdeff;
    return 0;
  }
  printf("ERROR: Secure area ID should contain \'encryObj\', instead contains \'%s\'\n",&uStack_1090
        );
  return 0xffffffff;
}


