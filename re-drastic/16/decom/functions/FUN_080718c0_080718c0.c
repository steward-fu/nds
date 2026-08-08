/*
 * Ghidra decompilation
 *
 * Function : FUN_080718c0
 * Address  : 080718c0
 * Program  : drastic16
 */


void FUN_080718c0(int *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = *param_1;
  iVar5 = *(int *)(iVar3 + 0x20fc);
  uVar2 = *(uint *)(iVar3 + 9000);
  uVar6 = *(undefined4 *)(iVar3 + (iVar5 + 0x838) * 4);
  pcVar4 = (&PTR_DAT_080ea028)[iVar5];
  if ((uVar2 & 0x1f) == 0x1f) {
    pcVar4 = "system";
  }
  printf("\n ");
  printf("N: %d",uVar2 >> 0x1f);
  if ((param_2 & 8) == 0) {
    pcVar1 = "* ";
  }
  else {
    pcVar1 = "  ";
  }
  printf(pcVar1);
  printf("Z: %d",(uVar2 << 1) >> 0x1f);
  if ((param_2 & 4) == 0) {
    pcVar1 = "* ";
  }
  else {
    pcVar1 = "  ";
  }
  printf(pcVar1);
  printf("C: %d",(uVar2 << 2) >> 0x1f);
  if ((param_2 & 2) == 0) {
    pcVar1 = "* ";
  }
  else {
    pcVar1 = "  ";
  }
  printf(pcVar1);
  printf("V: %d",(uVar2 << 3) >> 0x1f);
  if ((param_2 & 1) == 0) {
    pcVar1 = "* ";
  }
  else {
    pcVar1 = "  ";
  }
  printf(pcVar1);
  printf("Q: %d I: %d\n CPSR: %08x  SPSR: %08x  mode: (%x) %s  state: %02x",(uVar2 << 4) >> 0x1f,
         (uVar2 << 0x18) >> 0x1f,uVar2,uVar6,iVar5,pcVar4,(uint)*(byte *)(iVar3 + 0x2105));
  if (*(char *)((int)param_1 + 0x133) != '\0') {
    iVar5 = param_1[0x4b];
    uVar6 = FUN_080101a4(iVar3 + 0x2380,iVar5);
    printf(" watch %08x: %08x",iVar5,uVar6);
  }
  putchar(10);
  return;
}


