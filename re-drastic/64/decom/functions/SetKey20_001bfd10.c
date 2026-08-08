/*
 * Ghidra decompilation
 *
 * Function : SetKey20
 * Address  : 001bfd10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptData::SetKey20(char const*) */

void __thiscall CryptData::SetKey20(CryptData *this,char *param_1)

{
  ulong uVar1;
  uint uVar2;
  CryptData CVar3;
  CryptData CVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong extraout_x18;
  uchar *__s;
  uchar auStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = auStack_88;
  InitCRC32((uint *)(this + 0xaec));
  strncpyz((char *)__s,param_1,0x80);
  sVar5 = strlen((char *)__s);
  *(undefined8 *)(this + 0xff4) = 0xa4e7f1237515a235;
  *(undefined8 *)(this + 0xfec) = 0x3f6d12f7d3a3b879;
  memcpy(this + 0xeec,&InitSubstTable20,0x100);
  if (sVar5 != 0) {
    iVar9 = 0;
    do {
      uVar8 = 0;
      do {
        uVar6 = (ulong)(byte)this[(ulong)(byte)(param_1[uVar8] - (char)iVar9) * 4 + 0xaec];
        CVar3 = this[(ulong)(byte)(param_1[uVar8 + 1] + (char)iVar9) * 4 + 0xaec];
        if ((uint)(byte)CVar3 !=
            (uint)(byte)this[(ulong)(byte)(param_1[uVar8] - (char)iVar9) * 4 + 0xaec]) {
          lVar7 = 1;
          do {
            uVar1 = lVar7 + uVar6 + uVar8 & 0xff;
            uVar2 = (int)uVar6 + 1;
            CVar4 = this[uVar6 + 0xeec];
            this[uVar6 + 0xeec] = this[uVar1 + 0xeec];
            this[uVar1 + 0xeec] = CVar4;
            lVar7 = lVar7 + 1;
            uVar6 = (ulong)(uVar2 & 0xff);
          } while ((uint)(byte)CVar3 != (uVar2 & 0xff));
        }
        uVar8 = uVar8 + 2;
      } while (uVar8 < sVar5);
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    if (((sVar5 & 0xf) != 0) && (sVar5 <= (sVar5 | 0xf))) {
      memset(__s + sVar5,0,((sVar5 | 0xf) - sVar5) + 1);
    }
    do {
      EncryptBlock20(this,__s);
      __s = __s + 0x10;
    } while (extraout_x18 < sVar5);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


