/*
 * Ghidra decompilation
 *
 * Function : FUN_001d60dc
 * Address  : 001d60dc
 * Program  : drastic64
 */


undefined FUN_001d60dc(Unpack *param_1)

{
  ModelPPM *this;
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar *__ptr;
  void *pvVar5;
  size_t __size;
  uchar *puVar6;
  uchar *puVar7;
  
  this = (ModelPPM *)(param_1 + 0x9a30);
  uVar2 = ModelPPM::DecodeChar();
  if (uVar2 == 0xffffffff) {
    if (*(long *)(param_1 + 0xe4d8) != 0) {
      *(undefined8 *)(param_1 + 0xe4d8) = 0;
      free(*(void **)(param_1 + 0xe588));
      if ((int)*(long *)(param_1 + 0xe4d8) == 0x100000) goto LAB_001d6258;
      if (*(long *)(param_1 + 0xe4d8) != 0) {
        *(undefined8 *)(param_1 + 0xe4d8) = 0;
        free(*(void **)(param_1 + 0xe588));
      }
    }
    pvVar5 = malloc(0x1aaacc);
    *(void **)(param_1 + 0xe588) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    else {
      *(long *)(param_1 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
      *(undefined8 *)(param_1 + 0xe4d8) = 0x100000;
    }
LAB_001d6258:
    ModelPPM::StartModelRare(this,2);
    *(undefined4 *)(param_1 + 0xe8a4) = 0;
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
      uVar1 = Unpack::AddVMCode(param_1,uVar2,(uchar *)0x0,0);
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
      if (*(long *)(param_1 + 0xe4d8) != 0) {
        *(undefined8 *)(param_1 + 0xe4d8) = 0;
        free(*(void **)(param_1 + 0xe588));
        if ((int)*(long *)(param_1 + 0xe4d8) == 0x100000) goto LAB_001d6364;
        if (*(long *)(param_1 + 0xe4d8) != 0) {
          *(undefined8 *)(param_1 + 0xe4d8) = 0;
          free(*(void **)(param_1 + 0xe588));
        }
      }
      pvVar5 = malloc(0x1aaacc);
      *(void **)(param_1 + 0xe588) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      else {
        *(long *)(param_1 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
        *(undefined8 *)(param_1 + 0xe4d8) = 0x100000;
      }
LAB_001d6364:
      ModelPPM::StartModelRare(this,2);
      *(undefined4 *)(param_1 + 0xe8a4) = 0;
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
    iVar3 = ModelPPM::DecodeChar();
    if (iVar3 == -1) {
      if (*(long *)(param_1 + 0xe4d8) == 0) {
LAB_001d6184:
        pvVar5 = malloc(0x1aaacc);
        *(void **)(param_1 + 0xe588) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        else {
          *(long *)(param_1 + 0xe6e0) = (long)pvVar5 + 0x1aaab8;
          *(undefined8 *)(param_1 + 0xe4d8) = 0x100000;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xe4d8) = 0;
        free(*(void **)(param_1 + 0xe588));
        if ((int)*(long *)(param_1 + 0xe4d8) != 0x100000) {
          if (*(long *)(param_1 + 0xe4d8) != 0) {
            *(undefined8 *)(param_1 + 0xe4d8) = 0;
            free(*(void **)(param_1 + 0xe588));
          }
          goto LAB_001d6184;
        }
      }
      uVar1 = 0;
      ModelPPM::StartModelRare(this,2);
      *(undefined4 *)(param_1 + 0xe8a4) = 0;
      goto LAB_001d61c8;
    }
    puVar6 = puVar7 + 1;
    *puVar7 = (uchar)iVar3;
    puVar7 = puVar6;
  } while (puVar6 != __ptr + (ulong)(iVar4 - 1) + 1);
LAB_001d63c4:
  uVar1 = Unpack::AddVMCode(param_1,uVar2,__ptr,iVar4);
LAB_001d61c8:
  if (__ptr != (uchar *)0x0) {
    free(__ptr);
  }
  return uVar1;
}


