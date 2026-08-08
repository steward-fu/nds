/*
 * Ghidra decompilation
 *
 * Function : Length
 * Address  : 080e4158
 * Program  : drastic
 */


/* DWARF original prototype: size_t Length(SecPassword * this) */

size_t __thiscall SecPassword::Length(SecPassword *this)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  char cVar5;
  undefined auVar6 [16];
  undefined2 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  size_t Length;
  __pid_t _Var10;
  uint Key;
  wchar_t *pwVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  undefined *unaff_r4;
  wchar_t *__s;
  bool bVar14;
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  wchar Plain [128];
  undefined auStack_18 [4];
  int local_14;
  undefined auStack_10 [4];
  
  __s = (wchar_t *)Plain;
  bVar14 = this->PasswordSet == false;
  if (bVar14) {
    unaff_r4 = auStack_10;
  }
  local_14 = __stack_chk_guard;
  if (bVar14) {
    __s = (wchar_t *)(unaff_r4 + -0x208);
    *__s = L'\0';
  }
  else {
    memcpy(Plain,this,0x200);
    _Var10 = getpid();
    cVar5 = (char)_Var10 + 'K';
    auVar19._8_8_ = 0x300000002;
    auVar19._0_8_ = 0x100000000;
    auVar1 = SIMDExpandImmediate(0,0,0x10);
    auVar2 = SIMDExpandImmediate(0,0,4);
    uVar7 = CONCAT11(cVar5,cVar5);
    uVar8 = CONCAT22(uVar7,uVar7);
    auVar6._4_4_ = uVar8;
    auVar6._0_4_ = uVar8;
    auVar6._8_8_ = 0;
    auVar3 = SIMDExpandImmediate(0,0,8);
    auVar4 = SIMDExpandImmediate(0,0,0xc);
    pauVar12 = (undefined (*) [16])Plain;
    do {
      auVar18 = VectorAdd(auVar19,auVar2,4);
      auVar20 = VectorAdd(auVar19,auVar4,4);
      pauVar13 = pauVar12 + 1;
      auVar15 = VectorAdd(auVar19,auVar3,4);
      uVar16 = VectorCopyNarrow(auVar19,4);
      uVar17 = VectorCopyNarrow(auVar18,4);
      auVar19 = VectorAdd(auVar19,auVar1,4);
      auVar18._0_8_ = VectorCopyNarrow(auVar15,4);
      auVar18._8_8_ = VectorCopyNarrow(auVar20,4);
      auVar15._8_8_ = uVar17;
      auVar15._0_8_ = uVar16;
      auVar20._0_8_ = VectorCopyNarrow(auVar15,2);
      auVar20._8_8_ = VectorCopyNarrow(auVar18,2);
      auVar15 = VectorAdd(auVar20,auVar6 & auVar6 << 0x40,1);
      *(longlong *)*pauVar12 = SUB168(*pauVar12 ^ auVar15,0);
      *(longlong *)(*pauVar12 + 8) = SUB168(*pauVar12 ^ auVar15,8);
      pauVar12 = pauVar13;
    } while (pauVar13 != (undefined (*) [16])auStack_18);
    Plain[127] = 0;
  }
  sVar9 = wcslen(__s);
  do {
    pwVar11 = (wchar_t *)((int)__s + 1);
    *(undefined *)__s = 0;
    __s = pwVar11;
  } while ((wchar_t *)(Plain + 0x20) != pwVar11);
  if (local_14 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar9;
}


