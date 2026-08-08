/*
 * Ghidra decompilation
 *
 * Function : FUN_080d3efc
 * Address  : 080d3efc
 * Program  : drastic16
 */


void FUN_080d3efc(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  ushort *puVar3;
  
  pbVar2 = (byte *)(param_1 + 2);
  *(undefined *)(param_2 + 0xa6e) =
       *(undefined *)(param_2 + (uint)**(byte **)(param_2 + 0x650) + 0x96c);
  puVar3 = (ushort *)
           (param_2 +
           ((*(byte *)(param_1 + 3) - 1) * 0x40 +
            (uint)*(byte *)(param_2 + 0xa6d) +
            (uint)*(byte *)(param_2 + (uint)**(ushort **)(param_1 + 8) + 0x86b) +
            (uint)*(byte *)(param_2 + 0xa6e) + (uint)*(byte *)(param_2 + (uint)*pbVar2 + 0x96c) * 2
            + (*(int *)(param_2 + 0x664) >> 0x1a & 0x20U) + 0x538) * 2);
  uVar1 = FUN_080d2960(param_2 + 0x4a70,0xe);
  if (uVar1 < *puVar3) {
    *(byte **)(param_2 + 0x650) = pbVar2;
    *(char *)(param_1 + 3) =
         *(char *)(param_1 + 3) + (char)((~(uint)*(byte *)(param_1 + 3) & 0xff) >> 7);
    *(undefined4 *)(param_2 + 0x4a7c) = 0;
    *(uint *)(param_2 + 0x4a80) = (uint)*puVar3;
    *puVar3 = (*puVar3 - (short)((int)(*puVar3 + 0x20) >> 7)) + 0x80;
    *(undefined *)(param_2 + 0xa6d) = 1;
    *(int *)(param_2 + 0x664) = *(int *)(param_2 + 0x664) + 1;
  }
  else {
    *(uint *)(param_2 + 0x4a7c) = (uint)*puVar3;
    *puVar3 = *puVar3 - (short)((int)(*puVar3 + 0x20) >> 7);
    *(undefined4 *)(param_2 + 0x4a80) = 0x4000;
    *(uint *)(param_2 + 0x658) = (uint)(byte)(&DAT_080ee590)[(int)(uint)*puVar3 >> 10];
    *(undefined4 *)(param_2 + 0x654) = 1;
    *(undefined *)(param_2 + (uint)*pbVar2 + 0x66c) = *(undefined *)(param_2 + 0xa6c);
    *(undefined *)(param_2 + 0xa6d) = 0;
    *(undefined4 *)(param_2 + 0x650) = 0;
  }
  return;
}


