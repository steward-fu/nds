/*
 * Ghidra decompilation
 *
 * Function : SetCryptKeys
 * Address  : 001c16a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptData::SetCryptKeys(bool, CRYPT_METHOD, SecPassword*, unsigned char const*, unsigned char
   const*, unsigned int, unsigned char*, unsigned char*) */

void __thiscall
CryptData::SetCryptKeys
          (CryptData *this,bool param_1,CRYPT_METHOD param_2,SecPassword *param_3,uchar *param_4,
          uchar *param_5,uint param_6,uchar *param_7,uchar *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  wchar_t awStack_288 [128];
  byte local_88;
  byte local_87 [127];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((byte)(param_2 == 0 | (byte)param_3[0x200] ^ 1) == 0) {
    *(CRYPT_METHOD *)(this + 0x9e4) = param_2;
    SecPassword::Get(param_3,awStack_288,0x80);
    WideToChar(awStack_288,(char *)&local_88,0x80);
    if (param_2 == 3) {
      SetKey20(this,(char *)&local_88);
    }
    else if (param_2 < 4) {
      if (param_2 == 1) {
        uVar8 = (uint)local_88;
        *(undefined2 *)(this + 0xffc) = 0;
        this[0xffe] = (CryptData)0x0;
        if (local_88 != 0) {
          uVar10 = 0;
          uVar11 = 0;
          uVar7 = 0;
          pbVar12 = &local_88;
          do {
            uVar10 = uVar10 + uVar8;
            uVar2 = uVar7 + uVar8;
            uVar11 = uVar11 ^ uVar8;
            pbVar12 = pbVar12 + 1;
            uVar8 = (uint)*pbVar12;
            uVar3 = uVar10 >> 7 & 1;
            uVar1 = uVar10 * 2;
            uVar7 = uVar2 & 0xff;
            uVar10 = uVar3 | uVar1 & 0xff;
          } while (uVar8 != 0);
          this[0xffc] = SUB41(uVar2,0);
          this[0xffd] = SUB41(uVar11,0);
          this[0xffe] = (CryptData)((byte)uVar3 | (byte)uVar1);
        }
      }
      else if (param_2 == 2) {
        InitCRC32((uint *)(this + 0xaec));
        sVar6 = strlen((char *)&local_88);
        uVar4 = CRC32(0xffffffff,&local_88,sVar6);
        *(undefined4 *)(this + 0x1000) = uVar4;
        *(undefined4 *)(this + 0x1004) = 0;
        if (local_88 != 0) {
          uVar10 = 0;
          uVar8 = 0;
          pbVar12 = &local_88;
          do {
            uVar9 = (ulong)local_88;
            uVar7 = (uint)local_88;
            pbVar12 = pbVar12 + 1;
            local_88 = *pbVar12;
            uVar11 = uVar8 ^ uVar7 ^ *(uint *)(this + uVar9 * 4 + 0xaec);
            uVar7 = uVar10 + uVar7 + (*(uint *)(this + uVar9 * 4 + 0xaec) >> 0x10);
            uVar8 = uVar11 & 0xffff;
            uVar10 = uVar7 & 0xffff;
          } while (local_88 != 0);
          *(short *)(this + 0x1004) = (short)uVar11;
          *(short *)(this + 0x1006) = (short)uVar7;
        }
      }
    }
    else if (param_2 == 4) {
      SetKey30(this,param_1,param_3,awStack_288,param_4);
    }
    else if ((param_2 == 5) && (param_6 < 0x19)) {
      SetKey50(this,param_1,param_3,awStack_288,param_4,param_5,param_6,param_7,param_8);
    }
    cleandata(&local_88,0x80);
    cleandata(awStack_288,0x200);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,local_8 - ___stack_chk_guard,0);
}


