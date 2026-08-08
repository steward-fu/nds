/*
 * Ghidra decompilation
 *
 * Function : FUN_080a55a8
 * Address  : 080a55a8
 * Program  : drastic16
 */


undefined8 FUN_080a55a8(undefined4 param_1)

{
  int iVar1;
  wchar_t *__file;
  undefined8 uVar2;
  undefined auStack_2878 [28];
  int iStack_285c;
  char cStack_2818;
  undefined auStack_2018 [8204];
  
  FUN_080a14cc(param_1,auStack_2018,0x800);
  FUN_080afbc8(auStack_2018,&cStack_2818,0x800);
  if (cStack_2818 == '\0') {
    __file = L".Maximum allowed array size (%u) is exceeded";
  }
  else {
    __file = (wchar_t *)&cStack_2818;
  }
  iVar1 = statvfs64((char *)__file,(statvfs64 *)auStack_2878);
  if (iVar1 == 0) {
    uVar2 = CONCAT44(auStack_2878._0_4_ * iStack_285c +
                     (int)((ulonglong)(uint)auStack_2878._0_4_ *
                           (ulonglong)(uint)auStack_2878._24_4_ >> 0x20),
                     (int)((ulonglong)(uint)auStack_2878._0_4_ *
                          (ulonglong)(uint)auStack_2878._24_4_));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


