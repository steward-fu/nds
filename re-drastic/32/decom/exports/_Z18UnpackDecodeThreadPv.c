/*
 * Ghidra decompilation
 *
 * Function : _Z18UnpackDecodeThreadPv
 * Address  : 080f5538
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable DL:UnpackThreadDataList *[r0:4] conflicts with parameter, skipped. */

void UnpackDecodeThread(void *Data)

{
  UnpackThreadData *D;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)Data + 4) == 0) {
    return;
  }
  iVar1 = 0;
  uVar2 = 0;
  do {
                    /* WARNING: Load size is inaccurate */
    uVar2 = uVar2 + 1;
    D = (UnpackThreadData *)((int)*Data + iVar1);
    iVar1 = iVar1 + 0x4ae4;
    Unpack::UnpackDecode(**Data,D);
  } while (uVar2 < *(uint *)((int)Data + 4));
  return;
}


