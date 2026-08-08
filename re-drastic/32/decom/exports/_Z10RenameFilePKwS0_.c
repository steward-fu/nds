/*
 * Ghidra decompilation
 *
 * Function : _Z10RenameFilePKwS0_
 * Address  : 080d7108
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool RenameFile(wchar *SrcName,wchar *DestName)

{
  int iVar1;
  int iVar2;
  char SrcNameA [2048];
  char DestNameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(SrcName,SrcNameA,0x800);
  WideToChar(DestName,DestNameA,0x800);
  iVar2 = rename(SrcNameA,DestNameA);
  if (iVar1 == __stack_chk_guard) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


