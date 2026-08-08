/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFolderFullPackSize
 * Address  : 080ca384
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int SzArEx_GetFolderFullPackSize(CSzArEx *p,UInt32 folderIndex,UInt64 *resSize)

{
  uint uVar1;
  uint uVar2;
  UInt32 packStreamIndex;
  UInt32 UVar3;
  uint uVar4;
  uint uVar5;
  UInt64 *pUVar6;
  UInt32 UVar7;
  bool bVar8;
  
  UVar7 = (p->db).Folders[folderIndex].NumPackStreams;
  if (UVar7 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    UVar3 = 0;
    pUVar6 = (p->db).PackSizes + p->FolderStartPackStreamIndex[folderIndex];
    uVar4 = *(uint *)pUVar6;
    uVar5 = *(uint *)((int)pUVar6 + 4);
    while (UVar3 = UVar3 + 1, UVar3 != UVar7) {
      uVar1 = *(uint *)(pUVar6 + 1);
      uVar2 = uVar1 + uVar4;
      uVar1 = *(int *)((int)pUVar6 + 0xc) + uVar5 + (uint)CARRY4(uVar1,uVar4);
      bVar8 = uVar5 <= uVar1;
      if (uVar1 == uVar5) {
        bVar8 = uVar4 <= uVar2;
      }
      uVar4 = uVar2;
      uVar5 = uVar1;
      pUVar6 = pUVar6 + 1;
      if (!bVar8) {
        return 0xb;
      }
    }
  }
  *(uint *)resSize = uVar4;
  *(uint *)((int)resSize + 4) = uVar5;
  return 0;
}


