/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFolderStreamPos
 * Address  : 080ca350
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt64 SzArEx_GetFolderStreamPos(CSzArEx *p,UInt32 folderIndex,UInt32 indexInFolder)

{
  uint uVar1;
  
  uVar1 = *(uint *)(p->PackStreamStartPositions +
                   indexInFolder + p->FolderStartPackStreamIndex[folderIndex]);
  return CONCAT44(*(int *)((int)(p->PackStreamStartPositions +
                                indexInFolder + p->FolderStartPackStreamIndex[folderIndex]) + 4) +
                  *(int *)((int)&p->dataPos + 4) + (uint)CARRY4(uVar1,*(uint *)&p->dataPos),
                  uVar1 + *(uint *)&p->dataPos);
}


