/*
 * Ghidra decompilation
 *
 * Function : FUN_08005dd4
 * Address  : 08005dd4
 * Program  : drastic16
 */


void FUN_08005dd4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint local_428;
  int iStack_424;
  char acStack_420 [1024];
  
  sprintf(acStack_420,"%s.cfg",param_1 + 0x10506);
  uVar4 = *(undefined4 *)(param_1 + 0x102f3);
  iVar1 = FUN_0806706c(param_1,acStack_420);
  if (iVar1 == -1) {
    FUN_0806706c(param_1,"drastic.cfg");
  }
  puVar2 = param_1 + 0x2b3d7f;
  puVar3 = param_1 + 0x3b4a31;
  *(undefined4 *)(param_1 + 0x102f3) = uVar4;
  FUN_0801c798(puVar2);
  FUN_0801c798(puVar3);
  FUN_08071470(puVar2);
  FUN_0808973c(param_1 + 0x10600);
  FUN_0801351c(param_1 + 0x4b56e4);
  FUN_080233c0(param_1 + 0x4d4ff0);
  FUN_0805c314(param_1 + 0x34);
  FUN_0805ca90(param_1 + 0x1d2);
  FUN_0805989c(param_1 + 0x2abc00);
  FUN_0807840c(param_1 + 0x25e);
  FUN_0805d104((int)param_1 + 0x12d4,*(undefined4 *)((int)param_1 + 0x817bc),
               *(undefined4 *)(param_1 + 0x102f8));
  FUN_080154b8(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 0x14) = 0x106;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 0x2916467) = 0;
  FUN_0807b014();
  FUN_0801464c(param_1,0);
  FUN_08014c08(param_1,0);
  FUN_080790a8(param_1 + 0x2abc00);
  FUN_0805ae28(param_1 + 0x34);
  FUN_08005bdc(param_1);
  if (*(char *)((int)param_1 + 0x291646e) == '\0') {
    *(undefined4 *)(param_1 + 0x2b41ed) = 0;
    *(undefined4 *)(param_1 + 0x3b4e9f) = 0;
    *(undefined **)((int)param_1 + 0x15a0f6c) = &DAT_08004c18;
    *(code **)((int)param_1 + 0x1da74fc) = FUN_08004c44;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x15a0efc) + 8);
    *(undefined4 *)((int)param_1 + 0x15a0f6c) = 0x807b9d0;
    *(undefined4 *)((int)param_1 + 0x1da74fc) = 0x807ba70;
    printf("Performing recompiler base block translation (%x %x).\n",
           *(undefined4 *)((int)param_1 + 0x15a0f1c),*(undefined4 *)((int)param_1 + 0x1da74ac));
    uVar4 = FUN_0806d394(puVar2,iVar1 + 8);
    *(undefined4 *)(param_1 + 0x2b41e3) = uVar4;
    uVar4 = FUN_0806d394(puVar2,iVar1 + 0x18);
    *(undefined4 *)((int)param_1 + 0x15a0f14) = uVar4;
    uVar4 = FUN_0806d394(puVar3,8);
    *(undefined4 *)(param_1 + 0x3b4e95) = uVar4;
    uVar4 = FUN_0806d394(puVar3,0x18);
    *(undefined4 *)((int)param_1 + 0x1da74a4) = uVar4;
    iVar1 = FUN_0806d394(puVar2,*(undefined4 *)((int)param_1 + 0x15a0f1c));
    *(int *)(param_1 + 0x2b41ed) = iVar1 + 8;
    iVar1 = FUN_0806d394(puVar3,*(undefined4 *)((int)param_1 + 0x1da74ac));
    *(int *)(param_1 + 0x3b4e9f) = iVar1 + 8;
  }
  FUN_080771a0();
  FUN_0807a058();
  FUN_0807b7f0(&local_428);
  *(uint *)(param_1 + 0x522c89) = local_428 * 3;
  *(uint *)((int)param_1 + 0x291644c) =
       iStack_424 * 3 + (uint)CARRY4(local_428,local_428) + (uint)CARRY4(local_428,local_428 * 2);
  param_1[0x522c8a] = 0;
  *(undefined *)((int)param_1 + 0x291646d) = 0;
  *(undefined *)((int)param_1 + 0x291646a) = 0;
  *(undefined *)((int)param_1 + 0x291646b) = 0;
  *(undefined *)((int)param_1 + 0x291646c) = 0;
  *(undefined *)(param_1 + 0x522c8d) = 0;
  return;
}


