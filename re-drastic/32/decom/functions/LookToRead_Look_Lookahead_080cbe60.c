/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Look_Lookahead
 * Address  : 080cbe60
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookToRead_Look_Lookahead(void *pp,void **buf,size_t *size)

{
  int iVar1;
  SRes SVar2;
  uint uVar3;
  int iVar4;
  size_t size2;
  
  iVar1 = __stack_chk_guard;
  iVar4 = *(int *)((int)pp + 0x14);
  uVar3 = *(int *)((int)pp + 0x18) - iVar4;
  if (uVar3 == 0) {
    if (*size == 0) {
      SVar2 = 0;
      goto LAB_080cbec0;
    }
    *(undefined4 *)((int)pp + 0x14) = 0;
    SVar2 = (***(code ***)((int)pp + 0x10))(*(code ***)((int)pp + 0x10),(int)pp + 0x1c);
    uVar3 = 0x4000;
    *(undefined4 *)((int)pp + 0x18) = 0x4000;
  }
  else {
    SVar2 = 0;
  }
  if (uVar3 < *size) {
    *size = uVar3;
  }
  iVar4 = *(int *)((int)pp + 0x14);
LAB_080cbec0:
  *buf = (void *)((int)pp + iVar4 + 0x1c);
  if (iVar1 == __stack_chk_guard) {
    return SVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


