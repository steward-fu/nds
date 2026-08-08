/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack10ReadTablesER8BitInputR17UnpackBlockHeaderR17UnpackBlockTables
 * Address  : 001dfb90
 * Program  : drastic64
 */


/* Unpack::ReadTables(BitInput&, UnpackBlockHeader&, UnpackBlockTables&) */

ulong __thiscall
Unpack::ReadTables(Unpack *this,BitInput *param_1,UnpackBlockHeader *param_2,
                  UnpackBlockTables *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_2[0x11] == (UnpackBlockHeader)0x0) {
    return 1;
  }
  if ((param_1[8] == (BitInput)0x0) && (*(int *)(this + 0xd0) + -0x18 <= *(int *)param_1)) {
    bVar1 = UnpReadBuf();
    if (bVar1 == 0) {
      return (ulong)bVar1;
    }
  }
  uVar2 = ReadTables((BitInput *)this,(UnpackBlockHeader *)param_1,param_3);
  return uVar2;
}


