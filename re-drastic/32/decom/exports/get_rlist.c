/*
 * Ghidra decompilation
 *
 * Function : get_rlist
 * Address  : 080a39b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void get_rlist(u32 opcode,char *rlist_str)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  char *extraout_r1;
  uint uVar4;
  uint uVar5;
  int span_end;
  int i;
  uint uVar6;
  char *rlist_ptr;
  char *__dest;
  char next_str [16];
  
  iVar2 = __stack_chk_guard;
  bVar1 = false;
  __dest = rlist_str + 1;
  *rlist_str = '{';
  i = 0;
  do {
    uVar5 = opcode >> (i & 0xffU) & 1;
    uVar4 = i;
    if (uVar5 == 0) {
      do {
        i = uVar4 + 1;
        uVar6 = opcode >> (i & 0xffU);
        if (0xf < i) {
          rlist_str = (char *)0x0;
        }
        if (i == 0xf || (int)(uVar4 - 0xe) < 0 != SBORROW4(i,0xf)) {
          rlist_str = (char *)0x1;
        }
        uVar5 = uVar6 & 1;
        uVar4 = i;
      } while (((uint)rlist_str & ~uVar6) != 0);
      if (i == 0x10) {
        if (!bVar1) {
          __dest = __dest + 2;
        }
        goto LAB_080a3ad0;
      }
    }
    else {
      rlist_str = (char *)0x1;
    }
    uVar4 = i;
    uVar6 = (uint)rlist_str & uVar5;
    while (uVar6 != 0) {
      uVar6 = uVar4 + 1;
      if (0xf < (int)uVar6) {
        uVar5 = 0;
      }
      if (uVar6 == 0xf || (int)(uVar4 - 0xe) < 0 != SBORROW4(uVar6,0xf)) {
        uVar5 = 1;
      }
      uVar5 = uVar5 & opcode >> (uVar6 & 0xff);
      uVar4 = uVar6;
      uVar6 = uVar5;
    }
    uVar5 = uVar4 - 1;
    if (uVar5 == i) {
      __sprintf_chk(next_str,1,0x10,"%s, ",reg_names[i]);
    }
    else if (i - uVar5 == 1) {
      __sprintf_chk(next_str,1,0x10,"%s, %s, ",reg_names[i],reg_names[uVar5]);
    }
    else {
      __sprintf_chk(next_str,1,0x10,"%s - %s, ",reg_names[i],reg_names[uVar5]);
    }
    strcpy(__dest,next_str);
    sVar3 = strlen(next_str);
    __dest = __dest + sVar3;
    bVar1 = true;
    rlist_str = extraout_r1;
    i = uVar4;
    if (uVar4 == 0x10) {
LAB_080a3ad0:
      *(undefined2 *)(__dest + -2) = 0x7d;
      if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


