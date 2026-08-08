/*
 * Ghidra decompilation
 *
 * Function : FUN_080a389c
 * Address  : 080a389c
 * Program  : drastic16
 */


void FUN_080a389c(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined auStack_2260 [8787];
  char local_d;
  uint local_c;
  
  local_c = 1;
  do {
    FUN_080a0620(auStack_2260,param_1,0x894);
    local_d = '\0';
    FUN_080a2980(auStack_2260,param_3,local_c,&local_d);
    if (local_d != '\x01') {
LAB_080a3a44:
      FUN_080a0620(param_1,auStack_2260,param_2);
      return;
    }
    cVar1 = FUN_080a5704(auStack_2260);
    if (cVar1 != '\x01') {
      if ((param_4 != '\x01') && (1 < local_c)) {
        uVar2 = FUN_0809fcc0(param_1);
        FUN_080a0620(auStack_2260,uVar2,0x894);
        FUN_080a2980(auStack_2260,param_3,local_c - 1,&local_d);
      }
      goto LAB_080a3a44;
    }
    local_c = local_c + 1;
  } while( true );
}


