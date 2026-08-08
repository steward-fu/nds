/*
 * Ghidra decompilation
 *
 * Function : ReadEndOfBlock
 * Address  : 001daa10
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadEndOfBlock() */

undefined8 Unpack::ReadEndOfBlock(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long in_x0;
  undefined8 uVar5;
  
  iVar2 = *(int *)(in_x0 + 8);
  iVar3 = *(int *)(in_x0 + 0xc);
  lVar1 = *(long *)(in_x0 + 0x18) + (long)iVar2;
  uVar4 = ((uint)*(byte *)(lVar1 + 2) |
           (uint)*(byte *)(*(long *)(in_x0 + 0x18) + (long)iVar2) << 0x10 |
          (uint)*(byte *)(lVar1 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f);
  if ((uVar4 >> 0xf & 1) != 0) {
    *(uint *)(in_x0 + 8) = iVar2 + (iVar3 + 1U >> 3);
    *(uint *)(in_x0 + 0xc) = iVar3 + 1U & 7;
    *(undefined *)(in_x0 + 0xe8a8) = 0;
    uVar5 = ReadTables30();
    return uVar5;
  }
  *(uint *)(in_x0 + 8) = iVar2 + (iVar3 + 2U >> 3);
  *(uint *)(in_x0 + 0xc) = iVar3 + 2U & 7;
  *(byte *)(in_x0 + 0xe8a8) = (byte)(((ulong)uVar4 ^ 0x4000) >> 0xe) & 1;
  return 0;
}


