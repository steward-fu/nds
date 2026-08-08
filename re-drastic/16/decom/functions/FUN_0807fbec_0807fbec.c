/*
 * Ghidra decompilation
 *
 * Function : FUN_0807fbec
 * Address  : 0807fbec
 * Program  : drastic16
 */


undefined4 FUN_0807fbec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  *(BADSPACEBASE **)(param_1 + 0x1da743c) = register0x00000054;
  *(BADSPACEBASE **)(param_1 + 0x15a0eac) = register0x00000054;
  do {
    FUN_08015acc(param_1);
    if (*(int *)(param_1 + 0x15a0cf8) != 0) {
      if ((*(uint *)(param_1 + 0x15a0f20) & 0x80) == 0) {
        if (*(int *)(param_1 + 0x15a0f68) != 0) {
          *(undefined4 *)(param_1 + 0x15a0f1c) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x15a0f68) + -0xc) + 4);
        }
        *(uint *)(param_1 + 0x15a0f20) =
             *(uint *)(param_1 + 0x15a0ef8) & 0xf0000000 |
             *(uint *)(param_1 + 0x15a0f20) & 0xfffffff;
        FUN_0801bc18(param_1 + 0x159ebf8);
        iVar1 = *(int *)(param_1 + 0x15a0f14);
      }
      else {
        if (*(char *)(param_1 + 0x15a0cfd) == '\0') goto LAB_0807bb4c;
        iVar1 = FUN_0806d394(param_1 + 0x159ebf8,*(undefined4 *)(param_1 + 0x15a0f1c));
      }
      *(undefined *)(param_1 + 0x15a0cfd) = 0;
      *(int *)(param_1 + 0x15a0f68) = iVar1 + 8;
    }
LAB_0807bb4c:
    if (*(int *)(param_1 + 0x1da7288) != 0) {
      if ((*(uint *)(param_1 + 0x1da74b0) & 0x80) == 0) {
        if (*(int *)(param_1 + 0x1da74f8) != 0) {
          *(undefined4 *)(param_1 + 0x1da74ac) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1da74f8) + -0xc) + 4);
        }
        if ((*(char *)(param_1 + 0x1da728d) != '\0') &&
           (FUN_0801464c(param_1), (*(byte *)(param_1 + 0x1da728d) & 2) != 0)) {
          *(char *)(param_1 + 0x15a0cfd) = *(char *)(param_1 + 0x15a0cfd) + -2;
        }
        *(uint *)(param_1 + 0x1da74b0) =
             *(uint *)(param_1 + 0x1da7488) & 0xf0000000 |
             *(uint *)(param_1 + 0x1da74b0) & 0xfffffff;
        FUN_0801bc18(param_1 + 0x1da5188);
        iVar1 = *(int *)(param_1 + 0x1da74a4);
      }
      else {
        if (*(char *)(param_1 + 0x1da728d) == '\0') goto LAB_0807bc10;
        FUN_0801464c(param_1);
        if ((*(byte *)(param_1 + 0x1da728d) & 2) != 0) {
          *(char *)(param_1 + 0x15a0cfd) = *(char *)(param_1 + 0x15a0cfd) + -2;
        }
        iVar1 = FUN_0806d394(param_1 + 0x1da5188,*(undefined4 *)(param_1 + 0x1da74ac));
      }
      *(undefined *)(param_1 + 0x1da728d) = 0;
      *(int *)(param_1 + 0x1da74f8) = iVar1 + 8;
    }
LAB_0807bc10:
    iVar1 = **(int **)(param_1 + 0x198);
    *(int *)(param_1 + 0x10) = iVar1;
    bVar4 = SCARRY4(*(int *)(param_1 + 0x15a0f64),iVar1);
    iVar1 = *(int *)(param_1 + 0x15a0f64) + iVar1;
    if (-1 < iVar1) {
      bVar4 = false;
      if (*(char *)(param_1 + 0x15a0cfd) == '\0') {
        return *(undefined4 *)(param_1 + 0x15a0eb4);
      }
      iVar1 = -1;
    }
    *(undefined4 *)(param_1 + 0x15a0f68) = *(undefined4 *)(param_1 + 0x15a0f68);
    if (bVar4) {
      uVar3 = 0x10000000;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x15a0eb4) = uVar3;
    *(undefined4 *)(param_1 + 0x15a0f24) = *(undefined4 *)(param_1 + 0x15a0f24);
    *(undefined4 *)(param_1 + 0x15a0f28) = *(undefined4 *)(param_1 + 0x15a0f28);
    *(undefined4 *)(param_1 + 0x15a0f2c) = *(undefined4 *)(param_1 + 0x15a0f2c);
    *(undefined4 *)(param_1 + 0x15a0f30) = *(undefined4 *)(param_1 + 0x15a0f30);
    *(undefined4 *)(param_1 + 0x15a0f34) = *(undefined4 *)(param_1 + 0x15a0f34);
    *(undefined4 *)(param_1 + 0x15a0f38) = *(undefined4 *)(param_1 + 0x15a0f38);
    *(undefined4 *)(param_1 + 0x15a0f3c) = *(undefined4 *)(param_1 + 0x15a0f3c);
    *(undefined4 *)(param_1 + 0x15a0f54) = *(undefined4 *)(param_1 + 0x15a0f54);
    *(undefined4 *)(param_1 + 0x15a0f58) = *(undefined4 *)(param_1 + 0x15a0f58);
    *(undefined4 *)(param_1 + 0x15a0f5c) = *(undefined4 *)(param_1 + 0x15a0f5c);
    *(int *)(param_1 + 0x15a0f64) = iVar1;
    iVar2 = *(int *)(param_1 + 0x15a0f70);
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2308) + 0x10);
    bVar4 = SCARRY4(*(int *)(iVar2 + 0x236c),iVar1);
    iVar1 = *(int *)(iVar2 + 0x236c) + iVar1;
    if (-1 < iVar1) {
      bVar4 = false;
      if (*(char *)(iVar2 + 0x2105) == '\0') {
        return *(undefined4 *)(iVar2 + 0x22bc);
      }
      iVar1 = -1;
    }
    *(undefined4 *)(iVar2 + 0x2370) = *(undefined4 *)(iVar2 + 0x2370);
    if (bVar4) {
      uVar3 = 0x10000000;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(iVar2 + 0x22bc) = uVar3;
    *(undefined4 *)(iVar2 + 0x232c) = *(undefined4 *)(iVar2 + 0x232c);
    *(undefined4 *)(iVar2 + 0x2330) = *(undefined4 *)(iVar2 + 0x2330);
    *(undefined4 *)(iVar2 + 0x2334) = *(undefined4 *)(iVar2 + 0x2334);
    *(undefined4 *)(iVar2 + 0x2338) = *(undefined4 *)(iVar2 + 0x2338);
    *(undefined4 *)(iVar2 + 0x233c) = *(undefined4 *)(iVar2 + 0x233c);
    *(undefined4 *)(iVar2 + 0x2340) = *(undefined4 *)(iVar2 + 0x2340);
    *(undefined4 *)(iVar2 + 0x2344) = *(undefined4 *)(iVar2 + 0x2344);
    *(undefined4 *)(iVar2 + 0x235c) = *(undefined4 *)(iVar2 + 0x235c);
    *(undefined4 *)(iVar2 + 0x2360) = *(undefined4 *)(iVar2 + 0x2360);
    *(undefined4 *)(iVar2 + 0x2364) = *(undefined4 *)(iVar2 + 0x2364);
    param_1 = *(int *)(iVar2 + 0x2308);
    *(int *)(iVar2 + 0x236c) = iVar1;
  } while( true );
}


