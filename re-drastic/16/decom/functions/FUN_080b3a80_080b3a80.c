/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3a80
 * Address  : 080b3a80
 * Program  : drastic16
 */


void FUN_080b3a80(void *param_1,size_t param_2)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  clock_t cVar4;
  size_t sVar5;
  uint uVar6;
  longlong lVar7;
  undefined auStack_38 [28];
  FILE *local_1c;
  uint local_18;
  char local_11;
  
  local_11 = '\0';
  local_1c = fopen64("/dev/urandom","r");
  if (local_1c != (FILE *)0x0) {
    sVar3 = fread(param_1,param_2,1,local_1c);
    sVar5 = param_2;
    if (sVar3 != param_2) {
      sVar5 = 0;
    }
    local_11 = (char)sVar5;
    if (sVar3 == param_2) {
      local_11 = '\x01';
    }
    fclose(local_1c);
  }
  if (local_11 != '\x01') {
    FUN_080b525c(auStack_38);
    FUN_080b5b88(auStack_38);
    lVar7 = FUN_080b5504(auStack_38);
    cVar4 = clock();
    uVar6 = (uint)((ulonglong)(lVar7 + cVar4) >> 0x20);
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      iVar1 = (local_18 & 7) * 8;
      cVar2 = (char)DAT_081cd978;
      DAT_081cd978 = DAT_081cd978 + 1;
      *(byte *)((int)param_1 + local_18) =
           ((byte)local_18 ^
           ((byte)((uint)(lVar7 + cVar4) >> iVar1) |
            (byte)(uVar6 << ((local_18 & 7) * -8 + 0x20 & 0xff)) |
           (byte)(uVar6 >> (iVar1 - 0x20U & 0xff)))) + cVar2;
    }
  }
  return;
}


