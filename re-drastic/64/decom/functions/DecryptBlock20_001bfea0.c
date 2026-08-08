/*
 * Ghidra decompilation
 *
 * Function : DecryptBlock20
 * Address  : 001bfea0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptData::DecryptBlock20(unsigned char*) */

void __thiscall CryptData::DecryptBlock20(CryptData *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar8 = ___stack_chk_guard;
  uVar12 = 0x1f;
  uVar9 = *(uint *)(this + 0xff8);
  uVar13 = *(ulong *)param_1;
  uVar14 = *(ulong *)(param_1 + 8);
  uVar15 = *(uint *)(param_1 + 4) ^ *(uint *)(this + 0xff0);
  uVar16 = *(uint *)(this + 0xfec) ^ *(uint *)param_1;
  uVar11 = *(uint *)(param_1 + 8) ^ *(uint *)(this + 0xff4);
  uVar10 = uVar9 ^ *(uint *)(param_1 + 0xc);
  while( true ) {
    uVar1 = (uVar10 ^ (uVar11 >> 0xf | uVar11 << 0x11)) + uVar9;
    uVar9 = (uVar10 >> 0x15 | uVar10 << 0xb) + uVar11 ^ uVar9;
    uVar7 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar7;
    uVar2 = ((uint)(byte)this[((ulong)(uVar9 >> 0x10) & 0xff) + 0xeec] << 0x10 |
             (uint)(byte)this[((ulong)(uVar9 >> 8) & 0xff) + 0xeec] << 8 |
            (uint)(byte)this[(ulong)(byte)uVar9 + 0xeec] |
            (uint)(byte)this[(ulong)(uVar9 >> 0x18) + 0xeec] << 0x18) ^ uVar16;
    uVar1 = ((uint)(byte)this[((ulong)(uVar1 >> 0x10) & 0xff) + 0xeec] << 0x10 |
             (uint)(byte)this[((ulong)(uVar1 >> 8) & 0xff) + 0xeec] << 8 |
            (uint)(byte)this[(ulong)(byte)uVar1 + 0xeec] |
            (uint)(byte)this[(ulong)(uVar1 >> 0x18) + 0xeec] << 0x18) ^ uVar15;
    if (uVar7 == 0xffffffff) break;
    uVar9 = *(uint *)(this + (uVar12 & 3) * 4 + 0xfec);
    uVar15 = uVar10;
    uVar16 = uVar11;
    uVar11 = uVar2;
    uVar10 = uVar1;
  }
  *(uint *)param_1 = *(uint *)(this + 0xfec) ^ uVar2;
  *(uint *)(param_1 + 4) = *(uint *)(this + 0xff0) ^ uVar1;
  *(uint *)(param_1 + 8) = *(uint *)(this + 0xff4) ^ uVar11;
  *(uint *)(param_1 + 0xc) = *(uint *)(this + 0xff8) ^ uVar10;
  uVar9 = *(uint *)(this + (uVar13 >> 0x28 & 0xff) * 4 + 0xaec);
  uVar15 = *(uint *)(this + (uVar13 >> 0x38) * 4 + 0xaec);
  uVar16 = *(uint *)(this + (uVar14 >> 0x18 & 0xff) * 4 + 0xaec);
  uVar11 = *(uint *)(this + (uVar13 >> 0x18 & 0xff) * 4 + 0xaec);
  uVar10 = *(uint *)(this + (uVar14 >> 0x28 & 0xff) * 4 + 0xaec);
  uVar1 = *(uint *)(this + (uVar14 >> 0x10 & 0xff) * 4 + 0xaec);
  uVar2 = *(uint *)(this + (uVar14 >> 0x30 & 0xff) * 4 + 0xaec);
  uVar7 = *(uint *)(this + (uVar14 >> 8 & 0xff) * 4 + 0xaec);
  uVar3 = *(uint *)(this + (uVar13 >> 0x10 & 0xff) * 4 + 0xaec);
  uVar4 = *(uint *)(this + (uVar13 >> 8 & 0xff) * 4 + 0xaec);
  uVar5 = *(uint *)(this + (uVar13 >> 0x30 & 0xff) * 4 + 0xaec);
  uVar6 = *(uint *)(this + (uVar14 >> 0x38) * 4 + 0xaec);
  *(uint *)(this + 0xfec) =
       *(uint *)(this + (uVar14 & 0xff) * 4 + 0xaec) ^
       *(uint *)(this + (uVar13 >> 0x20 & 0xff) * 4 + 0xaec) ^
       *(uint *)(this + (uVar13 & 0xff) * 4 + 0xaec) ^ *(uint *)(this + 0xfec) ^
       *(uint *)(this + (uVar14 >> 0x20 & 0xff) * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar7 ^ uVar9 ^ uVar4 ^ *(uint *)(this + 0xff0) ^ uVar10;
  *(uint *)(this + 0xff4) = uVar1 ^ uVar5 ^ uVar3 ^ *(uint *)(this + 0xff4) ^ uVar2;
  *(uint *)(this + 0xff8) = uVar16 ^ uVar15 ^ uVar11 ^ *(uint *)(this + 0xff8) ^ uVar6;
  if (lVar8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8 - ___stack_chk_guard,0);
}


