/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive17ConvertFileHeaderEP10FileHeader
 * Address  : 001bc2d0
 * Program  : drastic64
 */


/* Archive::ConvertFileHeader(FileHeader*) */

void __thiscall Archive::ConvertFileHeader(Archive *this,FileHeader *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2104);
  iVar2 = *(int *)(this + 0x11208);
  if (((iVar2 == 2) && ((byte)param_1[0x19] < 0x14)) && ((*(uint *)(param_1 + 0x1c) >> 4 & 1) != 0))
  {
    param_1[0x20f1] = (FileHeader)0x1;
    if (iVar1 != 2) goto LAB_001bc2ec;
  }
  else {
    if (iVar1 != 2) goto LAB_001bc2ec;
    if (param_1[0x20f1] == (FileHeader)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0x20;
      goto LAB_001bc2ec;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
LAB_001bc2ec:
  iVar4 = *(int *)(param_1 + 0x20);
  piVar3 = (int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    do {
      while ((iVar4 != 0x5c || iVar1 != 0) || iVar2 != 3) {
        if ((*piVar3 != 0x2f) && (*piVar3 != 0x5c || iVar2 == 3)) goto LAB_001bc320;
        *piVar3 = 0x2f;
        piVar3 = piVar3 + 1;
        iVar4 = *piVar3;
        if (iVar4 == 0) {
          return;
        }
      }
      *piVar3 = 0x5f;
LAB_001bc320:
      piVar3 = piVar3 + 1;
      iVar4 = *piVar3;
    } while (iVar4 != 0);
  }
  return;
}


