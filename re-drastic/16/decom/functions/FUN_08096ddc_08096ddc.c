/*
 * Ghidra decompilation
 *
 * Function : FUN_08096ddc
 * Address  : 08096ddc
 * Program  : drastic16
 */


undefined4
FUN_08096ddc(undefined4 param_1,char *param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 auStack_3900 [2];
  undefined4 local_38f8;
  int local_38f4;
  uint local_38e0;
  undefined auStack_3860 [5120];
  char acStack_2460 [5132];
  uint uStack_1054;
  undefined4 uStack_1034;
  
  *param_3 = 0;
  memset(auStack_3900,0,0x9c);
  local_38f8 = 1;
  auStack_3900[0] = param_1;
  uVar1 = FUN_0809cec4(auStack_3900);
  if (local_38f4 == 0) {
    if ((local_38e0 & 0x1c5) == 0) {
      uStack_1034 = 0;
      while( true ) {
        iVar2 = FUN_0809dd8c(uVar1,auStack_3860);
        if (iVar2 != 0) break;
        pcVar3 = strrchr(acStack_2460,0x2e);
        if ((pcVar3 != (char *)0x0) && (iVar2 = strcasecmp(pcVar3 + 1,param_2), iVar2 == 0)) {
          uVar6 = (uint)(param_5 == 0 || param_4 == 0);
          *param_3 = uStack_1054;
          if (param_5 != 0 && param_4 != 0) {
            if (uStack_1054 < (uint)(param_5 + param_6)) break;
            DAT_081c507c = param_5;
            DAT_081c5080 = param_6;
            DAT_081c5078 = param_4;
            DAT_081c5084 = uVar6;
            FUN_0809ec78(uVar1,&UINT_080944d4);
            uVar4 = FUN_0809eb48(uVar1,1,uVar6,uVar6);
            if (DAT_081c507c != 0) {
              uVar5 = 0xffffffff;
              printf("ERROR: %d/%d bytes remaining. %d\n",DAT_081c507c,param_5,uVar4);
              goto LAB_08096ed0;
            }
          }
          uVar5 = 0;
          goto LAB_08096ed0;
        }
        FUN_0809eb48(uVar1,0,0,0);
      }
      uVar5 = 0xffffffff;
LAB_08096ed0:
      FUN_0809da0c(uVar1);
    }
    else {
      FUN_0809da0c();
      puts("ERROR: RAR file not supported");
      uVar5 = 0xffffffff;
    }
  }
  else {
    FUN_0809da0c();
    puts("ERROR: could not open RAR");
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


