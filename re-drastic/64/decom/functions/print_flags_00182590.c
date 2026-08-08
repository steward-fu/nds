/*
 * Ghidra decompilation
 *
 * Function : print_flags
 * Address  : 00182590
 * Program  : drastic64
 */


int print_flags(long *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  uVar2 = *(uint *)(lVar7 + 0x2104);
  uVar3 = *(uint *)(lVar7 + 0x23c0);
  pcVar1 = "system";
  if ((uVar3 & 0x1f) != 0x1f) {
    pcVar1 = (&cpu_mode_names)[uVar2];
  }
  uVar4 = *(undefined4 *)(lVar7 + (ulong)uVar2 * 4 + 0x20e8);
  __printf_chk(1,&DAT_00222f98);
  __printf_chk(1,"N: %d",uVar3 >> 0x1f);
  if ((param_2 >> 3 & 1) == 0) {
    __printf_chk(1,&DAT_00222fa8);
    __printf_chk(1,"Z: %d",uVar3 >> 0x1e & 1);
  }
  else {
    __printf_chk(1,"  ");
    __printf_chk(1,"Z: %d",uVar3 >> 0x1e & 1);
  }
  if ((param_2 >> 2 & 1) == 0) {
    __printf_chk(1,&DAT_00222fa8);
    __printf_chk(1,"C: %d",uVar3 >> 0x1d & 1);
  }
  else {
    __printf_chk(1,"  ");
    __printf_chk(1,"C: %d",uVar3 >> 0x1d & 1);
  }
  if ((param_2 >> 1 & 1) == 0) {
    __printf_chk(1,&DAT_00222fa8);
    __printf_chk(1,"V: %d",uVar3 >> 0x1c & 1);
  }
  else {
    __printf_chk(1,"  ");
    __printf_chk(1,"V: %d",uVar3 >> 0x1c & 1);
  }
  if ((param_2 & 1) == 0) {
    __printf_chk(1,&DAT_00222fa8);
  }
  else {
    __printf_chk(1,"  ");
  }
  __printf_chk(1,"Q: %d I: %d\n CPSR: %08x  SPSR: %08x  mode: (%x) %s  state: %02x",
               uVar3 >> 0x1b & 1,uVar3 >> 7 & 1,uVar3,uVar4,uVar2,pcVar1,
               *(undefined4 *)(lVar7 + 0x2110));
  if (*(char *)((long)param_1 + 0x133) != '\0') {
    uVar4 = *(undefined4 *)((long)param_1 + 300);
    uVar6 = load_memory32(lVar7 + 0x23d0,uVar4);
    __printf_chk(1," watch %08x: %08x",uVar4,uVar6);
    iVar5 = putchar(10);
    return iVar5;
  }
  iVar5 = putchar(10);
  return iVar5;
}


