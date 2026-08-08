/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Look_Exact
 * Address  : 080cbf34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LookToRead_Look_Exact(void *pp,void **buf,size_t *size)

{
  CLookToRead *p;
  SRes SVar1;
  code **ppcVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)pp + 0x14);
  uVar4 = *(int *)((int)pp + 0x18) - iVar3;
  if (uVar4 == 0) {
    if (*size == 0) {
      SVar1 = 0;
      goto LAB_080cbf78;
    }
    *(undefined4 *)((int)pp + 0x14) = 0;
    ppcVar2 = *(code ***)((int)pp + 0x10);
    if (0x4000 < *size) {
      *size = 0x4000;
    }
    SVar1 = (**ppcVar2)(ppcVar2,(int)pp + 0x1c);
    uVar4 = *size;
    *(uint *)((int)pp + 0x18) = uVar4;
  }
  else {
    SVar1 = 0;
  }
  if (uVar4 < *size) {
    *size = uVar4;
  }
  iVar3 = *(int *)((int)pp + 0x14);
LAB_080cbf78:
  *buf = (void *)((int)pp + iVar3 + 0x1c);
  return SVar1;
}


