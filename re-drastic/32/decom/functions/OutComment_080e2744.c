/*
 * Ghidra decompilation
 *
 * Function : OutComment
 * Address  : 080e2744
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void OutComment(wchar *Comment,size_t Size)

{
  int iVar1;
  bool bVar2;
  wchar ch;
  uint uVar3;
  wchar *pwVar4;
  size_t I;
  wchar *pwVar5;
  wchar *pwVar6;
  uint uVar7;
  uint uVar8;
  size_t J;
  wchar Msg [1025];
  
  iVar1 = __stack_chk_guard;
  if (Size != 0) {
    pwVar5 = Comment + 2;
    uVar8 = 2;
    uVar3 = 1;
    do {
      if (((pwVar5[-2] == 0x1b) && (pwVar5[-1] == 0x5b)) && (uVar8 < Size)) {
        ch = *pwVar5;
        if (ch == 0x22) goto LAB_080e282c;
        pwVar4 = pwVar5;
        pwVar6 = pwVar5;
        uVar7 = uVar8;
        while (((bVar2 = IsDigit(ch), bVar2 || (*pwVar4 == 0x3b)) &&
               (uVar7 = uVar7 + 1, Size != uVar7))) {
          pwVar6 = pwVar6 + 1;
          ch = *pwVar6;
          pwVar4 = (wchar *)((int)Comment + (int)pwVar4 + (uVar3 * 4 - (int)pwVar5) + 8);
          if (ch == 0x22) goto LAB_080e282c;
        }
      }
      pwVar5 = pwVar5 + 1;
      uVar8 = uVar8 + 1;
      bVar2 = uVar3 < Size;
      uVar3 = uVar3 + 1;
    } while (bVar2);
    I = 0;
    do {
      uVar3 = Size - I;
      if (0x3ff < uVar3) {
        uVar3 = 0x400;
      }
      I = I + 0x400;
      __wcsncpy_chk(Msg,Comment,uVar3,0x401);
      Comment = Comment + 0x400;
    } while (I < Size);
  }
LAB_080e282c:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


