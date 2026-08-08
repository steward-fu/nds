/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_mrs_op
 * Address  : 00193240
 * Program  : drastic64
 */


void cpu_translate_mrs_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = (uint)(param_2 >> 0xc) & 0xf;
  puVar3 = *(undefined8 **)(param_1 + 0x408);
  uVar1 = uVar2 + 0xd;
  if (uVar2 == 0xf) {
    uVar1 = 0;
  }
  if (((uint)param_2 >> 0x16 & 1) == 0) {
    *(uint *)puVar3 = uVar1 | 0xd53b4200;
    *(undefined4 *)((long)puVar3 + 4) = 0xb963c381;
    *(uint *)(puVar3 + 1) = uVar1 | 0x33006c20;
    *(long *)(param_1 + 0x408) = (long)puVar3 + 0xc;
    if (*(char *)(param_1 + 0x479) != '\0') {
      *(uint *)((long)puVar3 + 0xc) = uVar1 | uVar1 << 5 | 0x323b0000;
      *(undefined8 **)(param_1 + 0x408) = puVar3 + 2;
      return;
    }
  }
  else {
    *puVar3 = 0xb9610782d10ba121;
    *(uint *)(puVar3 + 1) = uVar1 | 0xb8625820;
    *(long *)(param_1 + 0x408) = (long)puVar3 + 0xc;
  }
  return;
}


