/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM16IsStandardFilterEPhj
 * Address  : 0810b208
 * Program  : drastic
 */


/* DWARF original prototype: VM_StandardFilters IsStandardFilter(RarVM * this, byte * Code, uint
   CodeSize) */

VM_StandardFilters __thiscall RarVM::IsStandardFilter(RarVM *this,byte *Code,uint CodeSize)

{
  uint uVar1;
  uint CodeCRC;
  VM_StandardFilters VVar2;
  int iVar3;
  
  uVar1 = CRC32(0xffffffff,Code,CodeSize);
  if (uVar1 == 0x52a89778) {
    if (CodeSize != 0x35) goto LAB_0810b240;
    iVar3 = 0;
LAB_0810b29c:
    VVar2 = IsStandardFilter::StdList[iVar3].Type;
  }
  else {
    if (uVar1 == 0xc3281a81) {
      if (CodeSize == 0x39) {
        iVar3 = 1;
        goto LAB_0810b29c;
      }
LAB_0810b250:
      if (uVar1 != 0xf1f9f882) goto LAB_0810b260;
      if (CodeSize == 0x1d) {
        iVar3 = 3;
        goto LAB_0810b29c;
      }
LAB_0810b270:
      if ((uVar1 == 0x437a18fe) && (CodeSize == 0xd8)) {
        iVar3 = 5;
        goto LAB_0810b29c;
      }
    }
    else {
LAB_0810b240:
      if (uVar1 != 0xc89676c0) goto LAB_0810b250;
      if (CodeSize == 0x78) {
        iVar3 = 2;
        goto LAB_0810b29c;
      }
LAB_0810b260:
      if (uVar1 != 0xe3d3a237) goto LAB_0810b270;
      if (CodeSize == 0x95) {
        iVar3 = 4;
        goto LAB_0810b29c;
      }
    }
    VVar2 = VMSF_NONE;
  }
  return VVar2;
}


