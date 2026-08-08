/*
 * Ghidra decompilation
 *
 * Function : FUN_080dae00
 * Address  : 080dae00
 * Program  : drastic16
 */


int FUN_080dae00(uint *param_1,int param_2,undefined *param_3,undefined4 param_4)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_c;
  
  sVar2 = wcslen((wchar_t *)(param_2 + 0x20));
  if (sVar2 < 0x800) {
    cVar1 = *(char *)(param_2 + 0x20e1);
    iVar3 = FUN_080da7a8(param_1,param_2 + 0x20,cVar1,0,1);
    if (iVar3 == 0) {
      uVar7 = FUN_080dac5c(param_1,param_2 + 0x2030);
      if ((((int)uVar7 == 0) && ((*(uint *)(param_2 + 0x1c) & *param_1) == 0)) &&
         ((*(char *)(param_1 + 2) == '\0' || ((*(uint *)(param_2 + 0x1c) & param_1[1]) != 0)))) {
        if ((cVar1 == '\x01') ||
           (iVar3 = FUN_080dad40(param_1,(int)((ulonglong)uVar7 >> 0x20),
                                 *(undefined4 *)(param_2 + 0x2050),*(undefined4 *)(param_2 + 0x2054)
                                ), iVar3 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) {
          FUN_0809f8d8(param_1 + 0x5982);
          local_c = 1;
          while (iVar3 = FUN_0809f7d4(param_1 + 0x5982), iVar3 != 0) {
            iVar4 = FUN_080e0618(iVar3,param_2 + 0x20,param_4);
            if (iVar4 != 0) {
              if (param_3 != (undefined *)0x0) {
                iVar3 = FUN_080a058c(iVar3,param_2 + 0x20);
                bVar6 = iVar3 != 0;
                if (bVar6) {
                  iVar3 = 0;
                }
                uVar5 = (undefined)iVar3;
                if (!bVar6) {
                  uVar5 = 1;
                }
                *param_3 = uVar5;
                return local_c;
              }
              return local_c;
            }
            local_c = local_c + 1;
          }
        }
      }
    }
  }
  return 0;
}


