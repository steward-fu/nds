/*
 * Ghidra decompilation
 *
 * Function : FUN_08005414
 * Address  : 08005414
 * Program  : drastic16
 */


void FUN_08005414(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint local_30 [3];
  
  puts("Processing command line options.");
  iVar6 = param_1 + 0x15a0d00;
  iVar5 = param_1 + 0x1da7290;
switchD_08005494_caseD_e:
  do {
    iVar2 = getopt_long(param_2,param_3,"",&DAT_080fa508,local_30);
    if (iVar2 == -1) {
      return;
    }
  } while (iVar2 != 0);
  switch(local_30[0]) {
  case 0:
    printf("debug option %d: %s %s %s\n",0,&DAT_080e56cc,"PC_BREAKPOINT",optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar5,3);
    break;
  case 1:
    printf("debug option %d: %s %s %s\n",1,&DAT_080e56e4,"PC_BREAKPOINT",optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar6,3);
    goto joined_r0x08005670;
  case 2:
    printf("debug option %d: %s %s %s\n",2,&DAT_080e56cc,"COUNTDOWN_BREAKPOINT",optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar5,4);
    break;
  case 3:
    printf("debug option %d: %s %s %s\n",3,&DAT_080e56e4,"COUNTDOWN_BREAKPOINT",optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar6,4);
    goto joined_r0x08005670;
  case 4:
    printf("debug option %d: %s %s %s\n",4,&DAT_080e56cc,&DAT_080e5704,optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar5,0);
    break;
  case 5:
    printf("debug option %d: %s %s %s\n",5,&DAT_080e56e4,&DAT_080e5704,optarg);
    pcVar1 = optarg;
    FUN_080750b0(iVar6,0);
joined_r0x08005670:
    if (pcVar1 != (char *)0x0) {
      uVar8 = strtoull(pcVar1,(char **)0x0,0x10);
      *(ulonglong *)(param_1 + 0x15a0e10) = uVar8;
    }
    goto switchD_08005494_caseD_e;
  case 6:
    puts("Using recompiler.");
    *(undefined *)(param_1 + 0x291646e) = 1;
    goto switchD_08005494_caseD_e;
  case 7:
    lVar3 = strtol(optarg,(char **)0x0,10);
    if (lVar3 == 0x10 || lVar3 == 0x20) {
      printf("Using a color depth of %dbpp.\n",lVar3);
      *(char *)(param_1 + 0x291646f) = (char)lVar3;
    }
    else {
      printf("Invalid color depth %s specified.\n",optarg);
    }
    goto switchD_08005494_caseD_e;
  case 8:
    lVar3 = strtol(optarg,(char **)0x0,10);
    uVar7 = *(undefined4 *)(param_1 + 0x81778);
    uVar4 = 0x7f;
    goto LAB_08005508;
  case 9:
    lVar3 = strtol(optarg,(char **)0x0,10);
    uVar7 = *(undefined4 *)(param_1 + 0x81778);
    uVar4 = 2;
LAB_08005508:
    FUN_08061628(param_1 + 0x817c8,param_1,lVar3,uVar4,uVar7);
switchD_08005494_caseD_a:
    *(undefined4 *)(param_1 + 0x8177c) = 1;
    goto switchD_08005494_caseD_e;
  case 10:
    goto switchD_08005494_caseD_a;
  case 0xb:
    FUN_080782b4(param_1 + 0x12f0,optarg);
    goto switchD_08005494_caseD_e;
  case 0xc:
    FUN_08078318(param_1 + 0x12f0,optarg);
    goto switchD_08005494_caseD_e;
  case 0xd:
    puts("Using interpreter.");
    *(undefined *)(param_1 + 0x291646e) = 0;
  default:
    goto switchD_08005494_caseD_e;
  }
  if (pcVar1 != (char *)0x0) {
    uVar8 = strtoull(pcVar1,(char **)0x0,0x10);
    *(ulonglong *)(param_1 + 0x1da73a0) = uVar8;
  }
  goto switchD_08005494_caseD_e;
}


