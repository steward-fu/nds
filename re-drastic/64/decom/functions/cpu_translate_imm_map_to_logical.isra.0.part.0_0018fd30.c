/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_imm_map_to_logical.isra.0.part.0
 * Address  : 0018fd30
 * Program  : drastic64
 */


uint cpu_translate_imm_map_to_logical_isra_0_part_0(ulong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1 & 0xffffffff;
  uVar3 = (uint)param_1;
  if (((uint)(param_1 >> 0x10) & 0xffff) == (uint)(ushort)uVar4) {
    if (((uVar3 ^ uVar3 >> 8) & 0xff) != 0) {
      if ((param_1 & 0xffff) != 0) {
        uVar1 = (uVar3 & 0xaaaa) >> 1 | (uVar3 & 0x5555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar6 = (uint)LZCOUNT((uVar1 >> 8 | (uVar1 & 0xff00ff) << 8) << 0x10);
        uVar3 = ((uVar3 & 0xffff) >> (ulong)(uVar6 & 0x1f)) + 1;
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
          *param_2 = -uVar6 & 0x3f;
          *param_3 = iVar2 - 1U & 0xf | 0x20;
          return 1;
        }
      }
      uVar3 = ~(int)(short)(ushort)uVar4;
      if (uVar3 == 0) {
        return 0;
      }
      uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar3 = (uVar3 >> (ulong)(uVar6 & 0x1f)) + 1;
      uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      if ((int)LZCOUNT(uVar3) + iVar2 != 0x1f) {
        return 0;
      }
      *param_2 = -(uVar6 + iVar2) & 0x3f;
      *param_3 = 0x1fU - iVar2 & 0xf | 0x20;
      return 1;
    }
    if (((uVar3 ^ uVar3 >> 4) & 0xf) != 0) {
      if ((param_1 & 0xff) != 0) {
        uVar1 = (uVar3 & 0xaa) >> 1 | (uVar3 & 0x55) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar6 = (uint)LZCOUNT((uVar1 >> 4 | (uVar1 & 0xf0f0f0f) << 4) << 0x18);
        uVar3 = ((uVar3 & 0xff) >> (ulong)(uVar6 & 0x1f)) + 1;
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
          *param_2 = -uVar6 & 0x3f;
          *param_3 = iVar2 - 1U & 7 | 0x30;
          return 1;
        }
      }
      uVar3 = ~(int)(char)uVar4;
      if (uVar3 != 0) {
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar6 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        uVar3 = (uVar3 >> (ulong)(uVar6 & 0x1f)) + 1;
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((int)LZCOUNT(uVar3) + iVar2 != 0x1f) {
          return 0;
        }
        *param_2 = -(uVar6 + iVar2) & 0x3f;
        *param_3 = 0x1fU - iVar2 & 7 | 0x30;
        return 1;
      }
      return 0;
    }
    if (((uVar3 ^ uVar3 >> 2) & 3) == 0) {
      if ((param_1 & 3) != 0) {
        uVar6 = (uint)LZCOUNT(((uVar3 & 3) >> 1 | (uVar3 & 1) << 1) << 0x1e);
        uVar3 = ((uVar3 & 3) >> (ulong)(uVar6 & 0x1f)) + 1;
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
          *param_2 = -uVar6 & 0x3f;
          *param_3 = iVar2 - 1U & 1 | 0x3c;
          return 1;
        }
      }
      uVar3 = ~(uint)((long)(uVar4 << 0x3e) >> 0x3e);
      if (uVar3 != 0) {
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar6 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        uVar3 = (uVar3 >> (ulong)(uVar6 & 0x1f)) + 1;
        uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((int)LZCOUNT(uVar3) + iVar2 != 0x1f) {
          return 0;
        }
        *param_2 = -(uVar6 + iVar2) & 0x3f;
        *param_3 = 0x1fU - iVar2 & 1 | 0x3c;
        return 1;
      }
      return 0;
    }
    if ((param_1 & 0xf) != 0) {
      uVar1 = (uVar3 & 10) >> 1 | (uVar3 & 5) << 1;
      uVar6 = (uint)LZCOUNT((uVar1 >> 2 | (uVar1 & 0x33333333) << 2) << 0x1c);
      uVar3 = ((uVar3 & 0xf) >> (ulong)(uVar6 & 0x1f)) + 1;
      uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
        uVar3 = iVar2 - 1;
        goto LAB_0018fff8;
      }
    }
    uVar1 = ~(uint)((long)(uVar4 << 0x3c) >> 0x3c);
    if (uVar1 != 0) {
      uVar3 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uVar1 >> (ulong)(uVar6 & 0x1f)) + 1;
      uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      iVar2 = (int)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = 0;
      if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
        uVar6 = uVar6 + iVar2;
        uVar3 = 0x1f - iVar2;
LAB_0018fff8:
        *param_2 = -uVar6 & 0x3f;
        *param_3 = uVar3 & 3 | 0x38;
        return 1;
      }
    }
  }
  else {
    uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar5 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
    uVar1 = (uVar3 >> (ulong)(uVar5 & 0x1f)) + 1;
    uVar6 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    iVar2 = (int)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    if ((int)LZCOUNT(uVar1) + iVar2 == 0x1f) {
      *param_2 = -uVar5 & 0x3f;
      *param_3 = iVar2 - 1U & 0x1f;
      return 1;
    }
    uVar3 = ~uVar3;
    uVar1 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar6 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = 0;
    uVar5 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar3 >> (ulong)(uVar5 & 0x1f)) + 1;
    uVar6 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    iVar2 = (int)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    if ((int)LZCOUNT(uVar3) + iVar2 == 0x1f) {
      *param_2 = -(uVar5 + iVar2) & 0x3f;
      *param_3 = 0x1f - iVar2;
      return 1;
    }
  }
  return uVar1;
}


