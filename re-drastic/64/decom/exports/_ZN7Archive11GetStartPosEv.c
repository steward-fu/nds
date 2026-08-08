/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive11GetStartPosEv
 * Address  : 001be3f0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::GetStartPos() */

long Archive::GetStartPos(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Archive *in_x0;
  long lVar4;
  
  uVar1 = *(uint *)(in_x0 + 0x86f4);
  lVar4 = *(long *)(in_x0 + 0x11218);
  if (*(int *)(in_x0 + 0x11208) == 2) {
    return (ulong)uVar1 + lVar4 + (ulong)*(uint *)(in_x0 + 0x8704);
  }
  iVar2 = *(int *)(in_x0 + 0x8744);
  iVar3 = FullHeaderSize(in_x0,(ulong)*(uint *)(in_x0 + 0x8704));
  return (ulong)(uint)(iVar2 + iVar3) + (ulong)uVar1 + lVar4;
}


