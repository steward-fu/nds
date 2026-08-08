/*
 * Ghidra decompilation
 *
 * Function : SPARC_Convert
 * Address  : 001eb1e0
 * Program  : drastic64
 */


ulong SPARC_Convert(long param_1,ulong param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar4 = 0;
  do {
    while( true ) {
      uVar6 = (uint)*(byte *)(param_1 + uVar4);
      iVar3 = (int)uVar4;
      if (uVar6 == 0x40) break;
      if ((uVar6 != 0x7f) ||
         (uVar5 = (uint)*(byte *)(param_1 + (ulong)(iVar3 + 1)), (uVar5 & 0xc0) != 0xc0))
      goto LAB_001eb20c;
LAB_001eb244:
      iVar2 = -(param_3 + iVar3);
      if (param_4 != 0) {
        iVar2 = param_3 + iVar3;
      }
      uVar6 = (uVar5 << 0x10 | (uint)*(byte *)(param_1 + (ulong)(iVar3 + 2U)) << 8 |
              (uint)*(byte *)(param_1 + (ulong)(iVar3 + 3U)) | uVar6 << 0x18) * 4 + iVar2;
      uVar5 = uVar6 >> 2 & 0x3fffff;
      iVar2 = (-(uVar6 >> 0x18 & 1) & 0xff) << 0x16;
      *(byte *)(param_1 + uVar4) = (byte)((uint)iVar2 >> 0x18) | 0x40;
      *(byte *)(param_1 + (ulong)(iVar3 + 1)) = (byte)((uint)iVar2 >> 0x10) | (byte)(uVar5 >> 0x10);
      *(char *)(param_1 + (ulong)(iVar3 + 2U)) = (char)(uVar5 >> 8);
      uVar4 = (ulong)(iVar3 + 4);
      *(char *)(param_1 + (ulong)(iVar3 + 3U)) = (char)uVar5;
      if (param_2 - 4 < uVar4) {
        return uVar4;
      }
    }
    bVar1 = *(byte *)(param_1 + (ulong)(iVar3 + 1));
    uVar5 = (uint)bVar1;
    if ((bVar1 & 0xc0) == 0) goto LAB_001eb244;
LAB_001eb20c:
    uVar4 = (ulong)(iVar3 + 4);
    if (param_2 - 4 < uVar4) {
      return uVar4;
    }
  } while( true );
}


