/*
 * Ghidra decompilation
 *
 * Function : FUN_001f09bc
 * Address  : 001f09bc
 * Program  : drastic64
 */


undefined8 FUN_001f09bc(undefined8 param_1,ComprDataIO *param_2,Archive *param_3,wchar_t *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_3 + 0x11208) == 2) {
    cVar1 = IsLink(*(uint *)(param_3 + 0x878c));
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = ExtractUnixLink30(param_2,param_3,param_4);
    return uVar2;
  }
  if (*(int *)(param_3 + 0x11208) != 3) {
    return 0;
  }
  uVar2 = ExtractUnixLink50(param_4,(FileHeader *)(param_3 + 0x8770));
  return uVar2;
}


