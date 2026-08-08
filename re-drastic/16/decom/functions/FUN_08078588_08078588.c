/*
 * Ghidra decompilation
 *
 * Function : FUN_08078588
 * Address  : 08078588
 * Program  : drastic16
 */


void FUN_08078588(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FILE *__s;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  size_t __size;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined auStack_528 [256];
  char acStack_428 [1028];
  
  iVar1 = DAT_081c5050;
  puVar9 = *(uint **)(param_3 + 0x5c);
  iVar4 = param_3 + 0x20;
  puVar7 = (uint *)(DAT_081c5050 + 0x83000);
  uVar10 = *(uint *)(param_2 + 0xc);
  puVar8 = (uint *)(DAT_081c5050 + 0x1183000);
  uVar2 = *puVar9;
  if ((puVar7 <= puVar9) && (puVar9 < puVar8)) {
    uVar3 = (uVar2 << 4) >> 0x1d;
    if (uVar3 == 0) {
      if (((((uVar2 & 0x90) == 0x90) && ((uVar2 & 0x60) != 0)) && ((uVar2 & 0x100000) != 0)) &&
         (uVar10 = uVar10 - *(int *)(DAT_081c5050 + 0x26a7f2c), uVar10 < 0x4001000)) {
        *(uint *)(iVar4 + ((uVar2 << 0x10) >> 0x1c) * 4) =
             (uint)*(ushort *)(*(int *)(DAT_081c5050 + 0x25ab724) + (uVar10 & 0x7fff));
        *(uint **)(param_3 + 0x5c) = puVar9 + 1;
        return;
      }
    }
    else if ((uVar3 - 2 < 2) && ((uVar2 & 0x100000) != 0)) {
      uVar10 = uVar10 - *(int *)(DAT_081c5050 + 0x26a7f2c);
      if ((uVar2 & 0x400000) == 0) {
        if (uVar10 < 0x4001000) {
          *(undefined4 *)(iVar4 + ((uVar2 << 0x10) >> 0x1c) * 4) =
               *(undefined4 *)(*(int *)(DAT_081c5050 + 0x25ab724) + (uVar10 & 0x7fff));
          *(uint **)(param_3 + 0x5c) = puVar9 + 1;
          return;
        }
      }
      else if (uVar10 < 0x4001000) {
        *(uint *)(iVar4 + ((uVar2 << 0x10) >> 0x1c) * 4) =
             (uint)*(byte *)(*(int *)(DAT_081c5050 + 0x25ab724) + (uVar10 & 0x7fff));
        *(uint **)(param_3 + 0x5c) = puVar9 + 1;
        return;
      }
    }
  }
  puVar6 = (undefined4 *)(param_3 + 0x1c);
  FUN_08075790(uVar2,auStack_528,puVar9,0,0);
  printf("FATAL: Unhandled SIG_SEGV: caused by instruction %s (at %x), address %x\n",auStack_528,
         puVar9,uVar10);
  puts("Registers:");
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    puVar6 = puVar6 + 1;
    printf(" r%d: %08x\n",iVar4,*puVar6);
    iVar4 = iVar5;
  } while (iVar5 != 0xf);
  putchar(10);
  puts("Emulated ARM9:");
  puVar6 = (undefined4 *)(iVar1 + 0x15a0f20);
  printf(" Mode %02d, IRQ %08x, CPSR %08x, PC %08x, cycles %08d\n",
         *(undefined4 *)(iVar1 + 0x15a0cf4),*(undefined4 *)(iVar1 + 0x15a0cf8),
         *(undefined4 *)(iVar1 + 0x15a0f20),*(undefined4 *)(iVar1 + 0x15a0f1c),
         *(undefined4 *)(iVar1 + 0x15a0f64));
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    puVar6 = puVar6 + 1;
    printf(" r%d: %08x\n",iVar4,*puVar6);
    iVar4 = iVar5;
  } while (iVar5 != 0x10);
  printf(" Debug instruction count: %llx\n\n");
  puts("Emulated ARM7:");
  puVar6 = (undefined4 *)(iVar1 + 0x1da74b0);
  printf(" Mode %02d, IRQ %08x, CPSR %08x, PC %08x, cycles %08d\n",
         *(undefined4 *)(iVar1 + 0x1da7284),*(undefined4 *)(iVar1 + 0x1da7288),
         *(undefined4 *)(iVar1 + 0x1da74b0),*(undefined4 *)(iVar1 + 0x1da74ac),
         *(undefined4 *)(iVar1 + 0x1da74f4));
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    puVar6 = puVar6 + 1;
    printf(" r%d: %08x\n",iVar4,*puVar6);
    iVar4 = iVar5;
  } while (iVar5 != 0x10);
  printf(" Debug instruction count: %llx\n\n");
  puts("Translation cache details:");
  printf(" main: %d + %d bytes\n",*(int *)(iVar1 + 0x14a3000) - (int)puVar7,
         (iVar1 + 0x1083000) - *(int *)(iVar1 + 0x14a3004));
  printf(" itcm: %d + %d bytes\n",*(int *)(iVar1 + 0x14a3008) - (iVar1 + 0x1083000),
         (int)puVar8 - *(int *)(iVar1 + 0x14a300c));
  printf(" alternate: %d + %d bytes\n\n",*(int *)(iVar1 + 0x14a3010) - (int)puVar8,
         (iVar1 + 0x1383000) - *(int *)(iVar1 + 0x14a3014));
  printf("%d texture cache bytes allocated, %d texture cache elements.\n",
         *(undefined4 *)(DAT_081c5050 + 0x282c7a0),*(undefined4 *)(DAT_081c5050 + 0x282c7a4));
  if (*(char *)(DAT_081c5050 + 0x8131c) != '\x02') {
    __size = *(int *)(DAT_081c5050 + 0x812f0) - (DAT_081c5050 + 0x12f0);
    printf("%d input records, attempting to write to input_capture_crash.ir.\n",__size / 10,
           DAT_081c5050 + 0x12f0,__size * -0x33333333);
    sprintf(acStack_428,"%s%cinput_capture_crash.ir",DAT_081c5050 + 0x81c30,0x2f);
    __s = fopen(acStack_428,"wb");
    fwrite((void *)(DAT_081c5050 + 0x12f0),__size,1,__s);
    fclose(__s);
  }
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
  return;
}


