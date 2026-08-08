/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPasswordeqERS_
 * Address  : 080e4278
 * Program  : drastic
 */


/* DWARF original prototype: bool operator==(SecPassword * this, SecPassword * psw) */

bool __thiscall SecPassword::operator==(SecPassword *this,SecPassword *psw)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  char cVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined2 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  bool Result;
  int iVar11;
  uint Key;
  __pid_t _Var12;
  uint Key_1;
  wchar_t *pwVar13;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  undefined (*unaff_r5) [16];
  bool bVar17;
  undefined auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  wchar Plain1 [128];
  wchar Plain2 [128];
  undefined auStack_20 [4];
  int local_1c;
  wchar_t *pwVar14;
  
  bVar17 = this->PasswordSet != false;
  if (!bVar17) {
    Plain1[0] = 0;
    unaff_r5 = (undefined (*) [16])Plain1;
  }
  local_1c = __stack_chk_guard;
  if (bVar17) {
    unaff_r5 = (undefined (*) [16])Plain1;
    memcpy(unaff_r5,this,0x200);
    _Var12 = getpid();
    cVar5 = (char)_Var12 + 'K';
    auVar22._8_8_ = 0x300000002;
    auVar22._0_8_ = 0x100000000;
    auVar1 = SIMDExpandImmediate(0,0,0x10);
    auVar2 = SIMDExpandImmediate(0,0,4);
    uVar8 = CONCAT11(cVar5,cVar5);
    uVar9 = CONCAT22(uVar8,uVar8);
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_8_ = 0;
    auVar3 = SIMDExpandImmediate(0,0,8);
    auVar4 = SIMDExpandImmediate(0,0,0xc);
    pauVar16 = unaff_r5;
    do {
      auVar21 = VectorAdd(auVar22,auVar2,4);
      auVar25 = VectorAdd(auVar22,auVar4,4);
      pauVar15 = pauVar16 + 1;
      auVar26 = VectorAdd(auVar22,auVar3,4);
      uVar19 = VectorCopyNarrow(auVar22,4);
      uVar20 = VectorCopyNarrow(auVar21,4);
      auVar22 = VectorAdd(auVar22,auVar1,4);
      auVar21._0_8_ = VectorCopyNarrow(auVar26,4);
      auVar21._8_8_ = VectorCopyNarrow(auVar25,4);
      auVar26._8_8_ = uVar20;
      auVar26._0_8_ = uVar19;
      auVar25._0_8_ = VectorCopyNarrow(auVar26,2);
      auVar25._8_8_ = VectorCopyNarrow(auVar21,2);
      auVar26 = VectorAdd(auVar25,auVar18 & auVar18 << 0x40,1);
      *(longlong *)*pauVar16 = SUB168(*pauVar16 ^ auVar26,0);
      *(longlong *)(*pauVar16 + 8) = SUB168(*pauVar16 ^ auVar26,8);
      pauVar16 = pauVar15;
    } while (pauVar15 != (undefined (*) [16])Plain2);
    Plain1[127] = 0;
  }
  if (psw->PasswordSet == false) {
    Plain2[0] = 0;
  }
  else {
    memcpy((undefined (*) [16])Plain2,psw,0x200);
    _Var12 = getpid();
    cVar5 = (char)_Var12 + 'K';
    auVar24._8_8_ = 0x300000002;
    auVar24._0_8_ = 0x100000000;
    auVar1 = SIMDExpandImmediate(0,0,0x10);
    auVar2 = SIMDExpandImmediate(0,0,4);
    uVar8 = CONCAT11(cVar5,cVar5);
    uVar9 = CONCAT22(uVar8,uVar8);
    auVar6._4_4_ = uVar9;
    auVar6._0_4_ = uVar9;
    auVar6._8_8_ = 0;
    auVar3 = SIMDExpandImmediate(0,0,8);
    auVar4 = SIMDExpandImmediate(0,0,0xc);
    pauVar16 = (undefined (*) [16])Plain2;
    do {
      auVar22 = VectorAdd(auVar24,auVar2,4);
      auVar26 = VectorAdd(auVar24,auVar4,4);
      pauVar15 = pauVar16 + 1;
      auVar18 = VectorAdd(auVar24,auVar3,4);
      uVar19 = VectorCopyNarrow(auVar24,4);
      uVar20 = VectorCopyNarrow(auVar22,4);
      auVar24 = VectorAdd(auVar24,auVar1,4);
      auVar23._0_8_ = VectorCopyNarrow(auVar18,4);
      auVar23._8_8_ = VectorCopyNarrow(auVar26,4);
      auVar7._8_8_ = uVar20;
      auVar7._0_8_ = uVar19;
      auVar27._0_8_ = VectorCopyNarrow(auVar7,2);
      auVar27._8_8_ = VectorCopyNarrow(auVar23,2);
      auVar18 = VectorAdd(auVar27,auVar6 & auVar6 << 0x40,1);
      *(longlong *)*pauVar16 = SUB168(*pauVar16 ^ auVar18,0);
      *(longlong *)(*pauVar16 + 8) = SUB168(*pauVar16 ^ auVar18,8);
      pauVar16 = pauVar15;
    } while (pauVar15 != (undefined (*) [16])auStack_20);
    Plain2[127] = 0;
  }
  iVar11 = wcscmp((wchar_t *)unaff_r5,(wchar_t *)Plain2);
  do {
    puVar10 = *unaff_r5;
    (*unaff_r5)[0] = 0;
    unaff_r5 = (undefined (*) [16])(puVar10 + 1);
  } while ((undefined (*) [16])(Plain1 + 0x20) != (undefined (*) [16])(puVar10 + 1));
  pwVar14 = (wchar_t *)Plain2;
  do {
    pwVar13 = (wchar_t *)((int)pwVar14 + 1);
    *(undefined *)pwVar14 = 0;
    pwVar14 = pwVar13;
  } while ((wchar_t *)(Plain2 + 0x20) != pwVar13);
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11 == 0;
}


