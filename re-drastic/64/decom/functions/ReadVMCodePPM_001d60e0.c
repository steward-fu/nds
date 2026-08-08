/*
 * Ghidra decompilation
 *
 * Function : ReadVMCodePPM
 * Address  : 001d60e0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadVMCodePPM() */

undefined Unpack::ReadVMCodePPM(void)

{
  ModelPPM *this;
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Unpack *in_x0;
  uchar *__ptr;
  void *pvVar5;
  size_t __size;
  uchar *puVar6;
  uchar *puVar7;
  
  this = (ModelPPM *)(in_x0 + 0x9a30);
  uVar2 = ModelPPM::DecodeChar();
  if (uVar2 == 0xffffffff) {
    if (*(long *)(in_x0 + 0xe4d8) != 0) {
      *(undefined8 *)(in_x0 + 0xe4d8) = 0;
      free(*(void **)(in_x0 + 0xe588));
      if ((int)*(long *)(in_x0 + 0xe4d8) == 0x100000) goto LAB_001d6258;
      if (*(long *)(in_x0 + 0xe4d8) != 0) {
        *(undefined8 *)(in_x0 + 0xe4d8) = 0;
        free(*(void **)(in_x0 + 0xe588));
      }
    }
    pvVar5 = malloc(0x1aaacc);
    *(void **)(in_x0 + 0xe588) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    else {
      *(long *)(in_x0 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
      *(undefined8 *)(in_x0 + 0xe4d8) = 0x100000;
    }
LAB_001d6258:
    ModelPPM::StartModelRare(this,2);
    *(undefined4 *)(in_x0 + 0xe8a4) = 0;
    return 0;
  }
  iVar4 = (uVar2 & 7) + 1;
  if ((uVar2 & 7) == 6) {
    iVar3 = ModelPPM::DecodeChar();
    iVar4 = iVar3 + 7;
    if (iVar3 == -1) goto LAB_001d6328;
LAB_001d62c4:
    __size = (size_t)iVar4;
    if (iVar4 == 0) {
      uVar1 = AddVMCode(in_x0,uVar2,(uchar *)0x0,0);
      return uVar1;
    }
    if (__size < 0x20) {
      __size = 0x20;
    }
    __ptr = (uchar *)malloc(__size);
    if (__ptr == (uchar *)0x0) goto LAB_001d63ac;
LAB_001d63bc:
    if (iVar4 < 1) goto LAB_001d63c4;
  }
  else {
    if (iVar4 == 8) {
      iVar4 = ModelPPM::DecodeChar();
      if (iVar4 != -1) {
        iVar3 = ModelPPM::DecodeChar();
        iVar4 = iVar3 + iVar4 * 0x100;
        if (iVar3 != -1) goto LAB_001d62c4;
      }
LAB_001d6328:
      if (*(long *)(in_x0 + 0xe4d8) != 0) {
        *(undefined8 *)(in_x0 + 0xe4d8) = 0;
        free(*(void **)(in_x0 + 0xe588));
        if ((int)*(long *)(in_x0 + 0xe4d8) == 0x100000) goto LAB_001d6364;
        if (*(long *)(in_x0 + 0xe4d8) != 0) {
          *(undefined8 *)(in_x0 + 0xe4d8) = 0;
          free(*(void **)(in_x0 + 0xe588));
        }
      }
      pvVar5 = malloc(0x1aaacc);
      *(void **)(in_x0 + 0xe588) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      else {
        *(long *)(in_x0 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
        *(undefined8 *)(in_x0 + 0xe4d8) = 0x100000;
      }
LAB_001d6364:
      ModelPPM::StartModelRare(this,2);
      *(undefined4 *)(in_x0 + 0xe8a4) = 0;
      return 0;
    }
    __ptr = (uchar *)malloc(0x20);
    if (__ptr == (uchar *)0x0) {
LAB_001d63ac:
      __ptr = (uchar *)0x0;
      ErrorHandler::MemoryError();
      goto LAB_001d63bc;
    }
  }
  puVar7 = __ptr;
  do {
                    /* try { // try from 001d6164 to 001d6167 has its CatchHandler @ 001d643c */
    iVar3 = ModelPPM::DecodeChar();
    if (iVar3 == -1) {
      if (*(long *)(in_x0 + 0xe4d8) == 0) {
LAB_001d6184:
        pvVar5 = malloc(0x1aaacc);
        *(void **)(in_x0 + 0xe588) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        else {
          *(long *)(in_x0 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
          *(undefined8 *)(in_x0 + 0xe4d8) = 0x100000;
        }
      }
      else {
        *(undefined8 *)(in_x0 + 0xe4d8) = 0;
        free(*(void **)(in_x0 + 0xe588));
        if ((int)*(long *)(in_x0 + 0xe4d8) != 0x100000) {
          if (*(long *)(in_x0 + 0xe4d8) != 0) {
            *(undefined8 *)(in_x0 + 0xe4d8) = 0;
            free(*(void **)(in_x0 + 0xe588));
          }
          goto LAB_001d6184;
        }
      }
      uVar1 = 0;
      ModelPPM::StartModelRare(this,2);
      *(undefined4 *)(in_x0 + 0xe8a4) = 0;
      goto LAB_001d61c8;
    }
    puVar6 = puVar7 + 1;
    *puVar7 = (uchar)iVar3;
    puVar7 = puVar6;
  } while (puVar6 != __ptr + (ulong)(iVar4 - 1) + 1);
LAB_001d63c4:
                    /* try { // try from 001d63d4 to 001d6417 has its CatchHandler @ 001d643c */
  uVar1 = AddVMCode(in_x0,uVar2,__ptr,iVar4);
LAB_001d61c8:
  if (__ptr != (uchar *)0x0) {
    free(__ptr);
  }
  return uVar1;
}


