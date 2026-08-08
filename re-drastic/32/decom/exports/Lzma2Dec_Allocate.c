/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_Allocate
 * Address  : 080cf3f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable dicSize:UInt32[r1:4] conflicts with parameter, skipped. */

SRes Lzma2Dec_Allocate(CLzma2Dec *p,Byte prop,ISzAlloc *alloc)

{
  int iVar1;
  int iVar2;
  SRes SVar3;
  uint uVar4;
  Byte props [5];
  
  iVar2 = __stack_chk_guard;
  uVar4 = (uint)prop;
  if (uVar4 < 0x29) {
    if (uVar4 == 0x28) {
      props[1] = 0xff;
      props[2] = props[1];
      props[3] = props[1];
      props[4] = props[1];
    }
    else {
      iVar1 = (uVar4 & 1 | 2) << (prop >> 1) + 0xb;
      props[1] = (Byte)iVar1;
      props[2] = (Byte)((uint)iVar1 >> 8);
      props[3] = (Byte)((uint)iVar1 >> 0x10);
      props[4] = (Byte)((uint)iVar1 >> 0x18);
    }
    props[0] = '\x04';
    SVar3 = LzmaDec_Allocate(&p->decoder,props,5,alloc);
  }
  else {
    SVar3 = 4;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar3;
}


