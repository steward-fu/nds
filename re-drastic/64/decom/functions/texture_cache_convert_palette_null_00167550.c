/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_null
 * Address  : 00167550
 * Program  : drastic64
 */


void texture_cache_convert_palette_null(long param_1,ushort *param_2,int param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 0x18);
  *(undefined *)(param_1 + 0x4a) = 1;
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)malloc((ulong)(uint)(param_4 << 2));
    *(uint **)(param_1 + 0x18) = puVar4;
  }
  uVar2 = *param_2;
  uVar3 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
  uVar3 = (uVar3 + 0x1f1f1f >> 5 & 0x10101) + uVar3 * 2;
  uVar1 = uVar3 | 0x1f000000;
  if (param_3 != 0) {
    uVar1 = uVar3;
  }
  *puVar4 = uVar1;
  return;
}


