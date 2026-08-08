/*
 * Ghidra decompilation
 *
 * Function : UnpackDecodeThread
 * Address  : 001dbb30
 * Program  : drastic64
 */


/* UnpackDecodeThread(void*) */

void UnpackDecodeThread(void *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)((long)param_1 + 8) != 0) {
    uVar3 = 0;
    do {
                    /* WARNING: Load size is inaccurate */
      lVar2 = uVar3 * 0x95f;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      Unpack::UnpackDecode(**param_1,(UnpackThreadData *)(*param_1 + lVar2));
    } while (uVar1 < *(uint *)((long)param_1 + 8));
  }
  return;
}


