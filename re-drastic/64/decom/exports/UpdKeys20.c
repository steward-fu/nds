/*
 * Ghidra decompilation
 *
 * Function : UpdKeys20
 * Address  : 001c0120
 * Program  : drastic64
 */


/* CryptData::UpdKeys20(unsigned char*) */

void __thiscall CryptData::UpdKeys20(CryptData *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(this + 0xfec);
  uVar2 = *(uint *)(this + 0xff0);
  uVar3 = *(uint *)(this + 0xff4);
  uVar4 = *(uint *)(this + (ulong)*param_1 * 4 + 0xaec);
  uVar5 = *(uint *)(this + 0xff8);
  *(uint *)(this + 0xfec) = uVar4 ^ uVar1;
  uVar6 = *(uint *)(this + (ulong)param_1[1] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar2 ^ uVar6;
  uVar7 = *(uint *)(this + (ulong)param_1[2] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar3 ^ uVar7;
  uVar8 = *(uint *)(this + (ulong)param_1[3] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar5 ^ uVar8;
  uVar1 = uVar4 ^ uVar1 ^ *(uint *)(this + (ulong)param_1[4] * 4 + 0xaec);
  *(uint *)(this + 0xfec) = uVar1;
  uVar2 = uVar2 ^ uVar6 ^ *(uint *)(this + (ulong)param_1[5] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar2;
  uVar3 = uVar3 ^ uVar7 ^ *(uint *)(this + (ulong)param_1[6] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar3;
  uVar4 = uVar5 ^ uVar8 ^ *(uint *)(this + (ulong)param_1[7] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar4;
  uVar1 = uVar1 ^ *(uint *)(this + (ulong)param_1[8] * 4 + 0xaec);
  *(uint *)(this + 0xfec) = uVar1;
  uVar2 = uVar2 ^ *(uint *)(this + (ulong)param_1[9] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar2;
  uVar3 = uVar3 ^ *(uint *)(this + (ulong)param_1[10] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar3;
  uVar4 = uVar4 ^ *(uint *)(this + (ulong)param_1[0xb] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar4;
  *(uint *)(this + 0xfec) = *(uint *)(this + (ulong)param_1[0xc] * 4 + 0xaec) ^ uVar1;
  *(uint *)(this + 0xff0) = *(uint *)(this + (ulong)param_1[0xd] * 4 + 0xaec) ^ uVar2;
  *(uint *)(this + 0xff4) = *(uint *)(this + (ulong)param_1[0xe] * 4 + 0xaec) ^ uVar3;
  *(uint *)(this + 0xff8) = *(uint *)(this + (ulong)param_1[0xf] * 4 + 0xaec) ^ uVar4;
  return;
}


