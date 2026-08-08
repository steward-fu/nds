/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey30EbP11SecPasswordPKwPKh
 * Address  : 001c02a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptData::SetKey30(bool, SecPassword*, wchar_t const*, unsigned char const*) */

void __thiscall
CryptData::SetKey30(CryptData *this,bool param_1,SecPassword *param_2,wchar_t *param_3,
                   uchar *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  long lVar5;
  SecPassword *this_00;
  ulong uVar6;
  uint uVar7;
  undefined auStack_20120 [130576];
  long local_2a8;
  CryptData *local_2a0;
  uint local_294;
  uint auStack_288 [4];
  undefined4 local_278;
  hash_context ahStack_270 [160];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 auStack_110 [33];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = 0;
  local_294 = (uint)param_1;
  local_2a8 = 0x4f4000;
  this_00 = (SecPassword *)&DAT_004f4490;
  local_2a0 = this;
  if (param_4 == (uchar *)0x0) {
    do {
      cVar3 = SecPassword::operator==(this_00,param_2);
      if ((cVar3 != '\0') && (this_00[0x204] == (SecPassword)0x0)) goto LAB_001c0580;
      lVar5 = lVar5 + 0x230;
      this_00 = this_00 + 0x230;
    } while (lVar5 != 0x8c0);
    WideToRaw(param_3,(uchar *)auStack_110,0x108);
    sVar4 = wcslen(param_3);
    uVar6 = sVar4 << 1;
  }
  else {
    do {
      cVar3 = SecPassword::operator==(this_00,param_2);
      if (((cVar3 != '\0') && (this_00[0x204] != (SecPassword)0x0)) &&
         (*(long *)param_4 == *(long *)(this_00 + 0x205))) goto LAB_001c0580;
      lVar5 = lVar5 + 0x230;
      this_00 = this_00 + 0x230;
    } while (lVar5 != 0x8c0);
    WideToRaw(param_3,(uchar *)auStack_110,0x108);
    sVar4 = wcslen(param_3);
    uVar6 = sVar4 * 2 + 8;
    *(undefined8 *)((long)auStack_110 + sVar4 * 2) = *(undefined8 *)param_4;
  }
  uVar7 = 0;
  hash_initial(ahStack_270);
  do {
    while( true ) {
      hash_process(ahStack_270,(uchar *)auStack_110,uVar6,false);
      hash_process(ahStack_270,(uchar *)&local_130,3,false);
      if ((uVar7 & 0x3fff) == 0) break;
      uVar7 = uVar7 + 1;
      if (uVar7 == 0x40000) goto LAB_001c03e0;
    }
    memcpy(&local_1d0,ahStack_270,0x9c);
    hash_final((hash_context *)&local_1d0,auStack_288,false);
    iVar2 = (int)uVar7 >> 0xe;
    uVar7 = uVar7 + 1;
    *(char *)((long)&local_120 + (long)iVar2) = (char)local_278;
  } while (uVar7 != 0x40000);
LAB_001c03e0:
  hash_final(ahStack_270,(uint *)&local_1d0,false);
  iVar2 = *(int *)(local_2a8 + 0xd30);
  lVar5 = local_2a8 + 0x470 + (long)iVar2 * 0x230;
  local_130 = local_1d0;
  uStack_128 = uStack_1c8;
  memcpy((void *)(lVar5 + 0x20),param_2,0x201);
  *(bool *)(local_2a8 + 0x470 + (long)iVar2 * 0x230 + 0x224) = param_4 != (uchar *)0x0;
  if (param_4 != (uchar *)0x0) {
    *(undefined8 *)(lVar5 + 0x225) = *(undefined8 *)param_4;
  }
  puVar1 = (undefined8 *)(local_2a8 + 0x470 + (long)iVar2 * 0x230);
  *puVar1 = local_130;
  puVar1[1] = uStack_128;
  puVar1[2] = local_120;
  puVar1[3] = uStack_118;
  *(uint *)(local_2a8 + 0xd30) = iVar2 + 1U & 3;
  cleandata(auStack_110,0x108);
LAB_001c0474:
  Rijndael::Init((Rijndael *)(local_2a0 + 0x9e8),(bool)(undefined)local_294,(uchar *)&local_130,0x80
                 ,(uchar *)&local_120);
  cleandata(&local_130,0x10);
  cleandata(&local_120,0x10);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
LAB_001c0580:
  local_130 = *(undefined8 *)((long)&Cache + lVar5);
  uStack_128 = *(undefined8 *)((long)&DAT_004f4478 + lVar5);
  local_120 = *(undefined8 *)((long)&DAT_004f4480 + lVar5);
  uStack_118 = *(undefined8 *)((long)&DAT_004f4488 + lVar5);
  local_294._0_1_ = param_1;
  goto LAB_001c0474;
}


