/*
 * Ghidra decompilation
 *
 * Function : FUN_0805ae28
 * Address  : 0805ae28
 * Program  : drastic16
 */


undefined4 FUN_0805ae28(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint __n;
  int iVar8;
  int iVar9;
  size_t sVar10;
  int iVar11;
  char *__s;
  void *__src;
  int iVar12;
  char *local_654;
  char acStack_638 [12];
  undefined local_62c;
  char acStack_628 [12];
  int local_61c;
  ushort uStack_618;
  byte local_616;
  byte local_614;
  byte local_60a;
  byte local_609;
  int local_608;
  undefined4 local_604;
  uint local_600;
  undefined4 local_5fc;
  int local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5c8;
  ushort uStack_592;
  char acStack_588 [12];
  char acStack_57c [178];
  undefined2 uStack_4ca;
  undefined2 uStack_42a;
  char acStack_428 [1028];
  
  iVar8 = *(int *)(param_1 + 0x880);
  __src = *(void **)(*(int *)(param_1 + 0x884) + 4);
  __n = *(uint *)(*(int *)(param_1 + 0x884) + 8);
  iVar6 = *(int *)(iVar8 + 0x25ab720);
  memcpy(acStack_628,__src,0x200);
  strncpy(acStack_638,acStack_628,0xc);
  iVar11 = local_61c;
  iVar9 = iVar8 + 0x25ab720;
  iVar7 = (0x20000 << local_614) - 1;
  *(int *)(param_1 + 0x894) = local_61c;
  *(int *)(param_1 + 0x88c) = iVar7;
  local_62c = 0;
  if ((uint)(0x20000 << local_614) < __n) {
    do {
      iVar12 = iVar7 * 2;
      iVar7 = iVar12 + 1;
    } while (iVar12 + 2U < __n);
    *(int *)(param_1 + 0x88c) = iVar7;
  }
  if (*(int *)(iVar8 + 0x817a4) != 0) {
    *(int *)(param_1 + 0x88c) = ~(-1 << (0x20U - LZCOUNT(__n + 1) & 0xff));
    printf("Ignoring gamecard header mask: using game card mask of %x\n");
  }
  printf("Gamecard title:  \'%s\'\n",acStack_638);
  printf("Game code:       %04x\n",iVar11);
  printf("Maker code:      %02x\n",(uint)uStack_618);
  printf("Unit code:       %01x\n",(uint)local_616);
  printf("Chip size:       %dKB\n",0x80 << (uint)local_614);
  printf("ROM version:     %d\n",(uint)local_60a);
  printf("Autostart:       %d\n",(uint)local_609);
  printf("ROMCTRL          %08x\n",local_5c8);
  if (iVar11 == 0x23232323) {
    iVar12 = *(int *)(param_1 + 0x880);
    iVar7 = *(int *)(iVar12 + 0x25ab720);
    puts("Homebrew recognized. Setting up R4 flashcart emulation.");
    __s = (char *)(iVar7 + 0x3e0000);
    if (-1 < *(int *)(param_1 + 0x898)) {
      close(*(int *)(param_1 + 0x898));
    }
    sprintf(acStack_428,"%s%cdrastic_dldi.img",iVar12 + 0x82030,0x2f);
    iVar5 = open(acStack_428,2);
    *(int *)(param_1 + 0x898) = iVar5;
    if (iVar5 < 0) {
      perror("Couldn\'t load drastic_dldi.img: ");
    }
    sprintf(__s,"fat:/%s",iVar12 + 0x82430);
    printf("Using NitroFS path \'%s\'.\n",__s);
    *(undefined4 *)(iVar7 + 0x3ffe70) = 0x5f617267;
    *(undefined4 *)(iVar7 + 0x3ffe74) = 0x27e0000;
    sVar10 = strlen(__s);
    *(size_t *)(iVar7 + 0x3ffe78) = sVar10 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x898) = 0xffffffff;
  }
  local_654 = acStack_428;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  uVar1 = FUN_0805f7a8(acStack_628,0x200);
  printf("ARM9 ROM offset: %04x\n",local_608);
  printf("ARM9 entry PC:   %04x\n",local_604);
  printf("ARM9 RAM offset: %04x\n",local_600);
  printf("ARM9 size:       %04x\n",local_5fc);
  printf("ARM7 ROM offset: %04x\n",local_5f8);
  printf("ARM7 entry PC:   %04x\n",local_5f4);
  printf("ARM7 RAM offset: %04x\n",local_5f0);
  printf("ARM7 size:       %04x\n",local_5ec);
  FUN_08009c5c(*(undefined4 *)(*(int *)(iVar8 + 0x26a714c) + 0x800000),iVar9,local_600,
               (int)__src + local_608,local_5fc);
  FUN_08009c5c(*(undefined4 *)(*(int *)(iVar8 + 0x26a7150) + 0x800000),iVar9,local_5f0,
               (int)__src + local_5f8,local_5ec);
  *(undefined2 *)(iVar6 + 0x3ff808) = uStack_4ca;
  memcpy((void *)(iVar6 + 0x3ffe00),acStack_628,0x170);
  *(undefined4 *)(iVar8 + 0x15a0f1c) = local_604;
  *(undefined4 *)(iVar8 + 0x1da74ac) = local_5f4;
  *(undefined *)(param_1 + 0xce6) = 0;
  if (((local_608 == 0x4000) && (local_600 + 0xfe000000 < 0x1000000)) &&
     ((iVar7 = iVar6 + (local_600 & 0x3fffff),
      *(int *)(iVar6 + (local_600 & 0x3fffff)) != -0x18002101 ||
      (*(int *)(iVar7 + 4) != -0x18002101)))) {
    puts("Decrypting secure region.");
    if ((*(byte *)(iVar8 + 0x26a7f3e) & 1) == 0) {
      FUN_0805a114(iVar7,local_61c,iVar8 + 0x25bc760);
    }
    else {
      puts("Can\'t decrypt game, need original BIOS for this.");
      *(undefined *)(param_1 + 0xce6) = 1;
    }
  }
  snprintf(local_654,0x400,"%s/backup/%s.dsv",iVar8 + 0x82030,iVar8 + 0x82830);
  puVar2 = (undefined4 *)FUN_0805f474(param_1,iVar11,acStack_638);
  if (puVar2 == (undefined4 *)0x0) {
    puts("Couldn\'t find game entry by code + title, trying CRC32.");
    uVar3 = FUN_0805f7a8(__src,*(undefined4 *)(*(int *)(param_1 + 0x884) + 8));
    printf("Got game CRC32 %x\n",uVar3);
    puVar2 = (undefined4 *)FUN_0805f634(param_1,uVar3);
    if (puVar2 == (undefined4 *)0x0) {
      puts("Couldn\'t find game in database. Using 512KB flash just to be safe.");
      pvVar4 = malloc(0x80000);
      *(void **)(param_1 + 0xcd4) = pvVar4;
      FUN_0805dac8(param_1 + 0x8b4,1,pvVar4,0x80000,local_654);
      *(undefined *)(param_1 + 0xcc4) = 0x13;
      *(undefined *)(param_1 + 0xcc7) = 0;
      *(undefined *)(param_1 + 0xcc5) = 0x40;
      *(undefined *)(param_1 + 0xcc6) = 0x20;
      goto switchD_0805b194_caseD_4;
    }
  }
  sVar10 = puVar2[7];
  printf("Found game in database: titled %s. ",*puVar2);
  iVar6 = param_1 + 0x8b4;
  switch(*(undefined *)(puVar2 + 0xb)) {
  case 0:
    puts("No save backup. Using 512KB flash just to be safe.");
    pvVar4 = malloc(0x80000);
    *(void **)(param_1 + 0xcd4) = pvVar4;
    FUN_0805dac8(iVar6,1,pvVar4,0x80000,local_654);
    *(undefined *)(param_1 + 0xcc4) = 0x13;
    *(undefined *)(param_1 + 0xcc5) = 0x40;
    *(undefined *)(param_1 + 0xcc6) = 0x20;
    *(undefined *)(param_1 + 0xcc7) = 0;
    break;
  case 1:
    uVar3 = puVar2[9];
    printf("Flash backup: %x bytes, ID %08x\n",sVar10,uVar3);
    pvVar4 = malloc(sVar10);
    *(void **)(param_1 + 0xcd4) = pvVar4;
    FUN_0805dac8(iVar6,1,pvVar4,sVar10,local_654);
    *(char *)(param_1 + 0xcc4) = (char)uVar3;
    *(char *)(param_1 + 0xcc5) = (char)((uint)uVar3 >> 8);
    *(char *)(param_1 + 0xcc6) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_1 + 0xcc7) = (char)((uint)uVar3 >> 0x18);
    break;
  case 2:
    printf("EEPROM backup: %x bytes\n",sVar10);
    pvVar4 = malloc(sVar10);
    *(void **)(param_1 + 0xcd4) = pvVar4;
    FUN_0805dac8(iVar6,2,pvVar4,sVar10,local_654);
    break;
  case 3:
    printf("NAND backup: %x bytes\n",sVar10);
    *(undefined *)(param_1 + 0xce7) = 0;
    *(undefined *)(param_1 + 0xce8) = 0;
    *(uint *)(param_1 + 0xcdc) = (uint)uStack_592 << 0x11;
    pvVar4 = malloc(sVar10);
    *(void **)(param_1 + 0xcd4) = pvVar4;
    FUN_0805dac8(iVar6,3,pvVar4,sVar10,local_654);
  }
switchD_0805b194_caseD_4:
  FUN_08068d70(param_1 + 0x14,iVar8);
  if (*(int *)(param_1 + 0x430) != 0) {
    FUN_08068904(param_1 + 0x14,iVar11,~uVar1);
  }
  iVar11 = *(int *)(iVar8 + 0x25ab720);
  uVar1 = ((*(int *)(param_1 + 0x88c) + 1U >> 0x14) - 1) * 0x100 | 0xc2;
  *(uint *)(param_1 + 0x8a8) = uVar1;
  *(uint *)(iVar11 + 0x3ff800) = uVar1;
  *(undefined4 *)(*(int *)(iVar8 + 0x25ab720) + 0x3ff804) = *(undefined4 *)(param_1 + 0x8a8);
  *(undefined4 *)(*(int *)(iVar8 + 0x25ab720) + 0x3ffc00) = *(undefined4 *)(param_1 + 0x8a8);
  *(undefined2 *)(*(int *)(iVar8 + 0x25ab720) + 0x3ff808) = uStack_42a;
  iVar11 = FUN_0805ab48(param_1,iVar8 + 0x82830);
  if (iVar11 == -1) {
    FUN_0805ab48(param_1,"slot2_gamepak");
  }
  if (((*(char *)(param_1 + 0x873) == '\0') &&
      (iVar11 = strncmp(acStack_588,"SRAM_V110",9), iVar11 == 0)) &&
     (iVar11 = strncmp(acStack_57c,"PASS",4), iVar11 == 0)) {
    iVar11 = FUN_08010900(iVar9);
    if (iVar11 == -1) {
      puts("Couldn\'t setup slot 2 RAM.");
      return 0xffffffff;
    }
    puts("Auto-loading game to slot 2 RAM.");
    memcpy(*(void **)(iVar8 + 0x26a7120),__src,__n);
  }
  FUN_0801264c(iVar9,__src);
  return 0;
}


