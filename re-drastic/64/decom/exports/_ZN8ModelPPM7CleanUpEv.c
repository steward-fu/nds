/*
 * Ghidra decompilation
 *
 * Function : _ZN8ModelPPM7CleanUpEv
 * Address  : 001cce80
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ModelPPM::CleanUp() */

void ModelPPM::CleanUp(void)

{
  ModelPPM *in_x0;
  void *pvVar1;
  
  if (*(long *)(in_x0 + 0x4aa8) != 0) {
    *(undefined8 *)(in_x0 + 0x4aa8) = 0;
    free(*(void **)(in_x0 + 0x4b58));
    if ((int)*(long *)(in_x0 + 0x4aa8) == 0x100000) goto LAB_001ccec0;
    if (*(long *)(in_x0 + 0x4aa8) != 0) {
      *(undefined8 *)(in_x0 + 0x4aa8) = 0;
      free(*(void **)(in_x0 + 0x4b58));
    }
  }
  pvVar1 = malloc(0x1aaacc);
  *(void **)(in_x0 + 0x4b58) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    ErrorHandler::MemoryError();
  }
  else {
    *(undefined8 *)(in_x0 + 0x4aa8) = 0x100000;
    *(long *)(in_x0 + 0x4cb0) = (long)pvVar1 + 0x1aaab8;
  }
LAB_001ccec0:
  StartModelRare(in_x0,2);
  return;
}


