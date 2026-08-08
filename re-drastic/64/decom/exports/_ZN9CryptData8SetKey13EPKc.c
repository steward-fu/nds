/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey13EPKc
 * Address  : 001bf870
 * Program  : drastic64
 */


/* CryptData::SetKey13(char const*) */

void __thiscall CryptData::SetKey13(CryptData *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  *(undefined2 *)(this + 0xffc) = 0;
  this[0xffe] = (CryptData)0x0;
  uVar5 = (uint)(byte)*param_1;
  if (*param_1 != 0) {
    uVar7 = 0;
    uVar4 = 0;
    uVar6 = 0;
    pbVar8 = (byte *)(param_1 + 1);
    do {
      uVar2 = uVar6 + uVar5;
      uVar3 = uVar5 + uVar4 >> 7 & 1;
      uVar1 = (uVar5 + uVar4) * 2;
      uVar7 = uVar7 ^ uVar5;
      uVar6 = uVar2 & 0xff;
      uVar4 = uVar3 | uVar1 & 0xff;
      this[0xffc] = SUB41(uVar2,0);
      this[0xffd] = SUB41(uVar7,0);
      this[0xffe] = (CryptData)((byte)uVar3 | (byte)uVar1);
      uVar5 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar5 != 0);
  }
  return;
}


