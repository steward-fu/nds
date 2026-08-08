/*
 * Ghidra decompilation
 *
 * Function : FUN_080779b4
 * Address  : 080779b4
 * Program  : drastic16
 */


void FUN_080779b4(int param_1)

{
  char cVar1;
  void *__ptr;
  void *__ptr_00;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char acStack_420 [1028];
  
  piVar11 = *(int **)(param_1 + 0x80004);
  cVar1 = *(char *)(param_1 + 0x80014);
  FUN_08079758();
  uVar10 = *(uint *)(param_1 + 0x80008);
  if (*(char *)(param_1 + 0x8002c) == '\x02') {
    piVar6 = *(int **)(param_1 + 0x80000);
    if (piVar11[1] == 0 && *piVar6 == *piVar11) {
      uVar10 = piVar6[1];
      *(byte *)(param_1 + 0x80015) = (byte)(uVar10 >> 0x1f);
      uVar10 = uVar10 & 0x7fffffff;
      *(uint *)(param_1 + 0x8000c) = (uint)*(byte *)(piVar6 + 2);
      *(uint *)(param_1 + 0x80010) = (uint)*(byte *)((int)piVar6 + 9);
      *(uint *)(param_1 + 0x80008) = uVar10;
      *(int *)(param_1 + 0x80000) = (int)piVar6 + 10;
    }
  }
  else if (((*(uint *)(param_1 + 0x80018) != uVar10) ||
           (*(char *)(param_1 + 0x80024) != *(char *)(param_1 + 0x80015))) ||
          ((*(char *)(param_1 + 0x80024) != '\0' &&
           ((*(int *)(param_1 + 0x8000c) != *(int *)(param_1 + 0x8001c) ||
            (*(int *)(param_1 + 0x80010) != *(int *)(param_1 + 0x80020))))))) {
    piVar6 = *(int **)(param_1 + 0x80000);
    if (piVar6 < (int *)(param_1 + 0x7ffec)) {
      *piVar6 = *piVar11;
      piVar6[1] = uVar10 & 0x7fffffff | (uint)*(byte *)(param_1 + 0x80015) << 0x1f;
      *(char *)(piVar6 + 2) = (char)*(undefined4 *)(param_1 + 0x8000c);
      *(char *)((int)piVar6 + 9) = (char)*(undefined4 *)(param_1 + 0x80010);
      if (*(FILE **)(param_1 + 0x80028) != (FILE *)0x0) {
        fwrite(piVar6,10,1,*(FILE **)(param_1 + 0x80028));
        fflush(*(FILE **)(param_1 + 0x80028));
      }
      *(int *)(param_1 + 0x80000) = (int)piVar6 + 10;
    }
    *(uint *)(param_1 + 0x80018) = uVar10;
    *(undefined *)(param_1 + 0x80024) = *(undefined *)(param_1 + 0x80015);
    *(undefined4 *)(param_1 + 0x8001c) = *(undefined4 *)(param_1 + 0x8000c);
    *(undefined4 *)(param_1 + 0x80020) = *(undefined4 *)(param_1 + 0x80010);
  }
  if ((uVar10 & 0x40000) != 0) {
    FUN_080750b0(piVar11 + 0x568340,0);
    *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xfffbffff;
  }
  if ((uVar10 & 0x80000) != 0) {
    FUN_080750b0(piVar11 + 0x769ca4,0);
    *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xfff7ffff;
  }
  if ((uVar10 & 0x200000) != 0) {
    sprintf(acStack_420,"%s%cprofiles%c%s_translation_post.txt",piVar11 + 0x2070c,0x2f,0x2f,
            piVar11 + 0x20a0c);
    printf("Logging recompiled block information to %s.\n",acStack_420);
    FUN_080711e8(piVar11,acStack_420);
  }
  if ((uVar10 & 0x2000) != 0) {
    __ptr = malloc(0x18000);
    __ptr_00 = malloc(0x18000);
    FUN_080771e4(__ptr,0);
    FUN_080771e4(__ptr_00,1);
    FUN_08060398(piVar11,piVar11[0x205de],__ptr,__ptr_00);
    free(__ptr);
    free(__ptr_00);
    *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xffffdfff;
  }
  if ((uVar10 & 0x4000) != 0) {
    iVar7 = piVar11[0x769ce6];
    iVar9 = piVar11[0x769ce7];
    iVar4 = piVar11[0x568382];
    iVar5 = piVar11[0x568383];
    *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xffffbfff;
    printf("load state @ %llx, %llx in.\n",param_1 + 0x80000,iVar4,iVar5,iVar7,iVar9);
    if (*(char *)((int)piVar11 + 0x15a0e31) == '\a') {
      FUN_080750b0(piVar11 + 0x568340,0);
    }
    if (*(char *)((int)piVar11 + 0x1da73c1) == '\a') {
      FUN_080750b0(piVar11 + 0x769ca4,0);
    }
    iVar4 = FUN_08060414(piVar11,piVar11[0x205de],0,0,0);
    if (iVar4 == 0) {
      return;
    }
  }
  if ((uVar10 & 0x1000) != 0) {
    *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xffffefff;
    FUN_08066730(piVar11,0);
    return;
  }
  if ((uVar10 & 0x2000000) == 0) {
    if ((uVar10 & 0x20000) != 0) {
      uVar3 = piVar11[0x205df];
      *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xfffdffff;
      piVar11[0x205df] = uVar3 ^ 1;
    }
    if ((uVar10 & 0x400000) != 0) {
      uVar3 = piVar11[0x205dd];
      *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xffbfffff;
      piVar11[0x205dd] = uVar3 ^ 1;
      FUN_0807a0c0(uVar3 ^ 1);
    }
    if ((uVar10 & 0x800000) != 0) {
      uVar3 = piVar11[0x205db];
      *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xff7fffff;
      piVar11[0x205db] = uVar3 ^ 1;
      FUN_0807a0a8(uVar3 ^ 1);
    }
    if ((uVar10 & 0x1000000) != 0) {
      uVar3 = piVar11[0x205db];
      *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xfeffffff;
      piVar11[0x205db] = uVar3 ^ 2;
      FUN_0807a0a8(uVar3 ^ 2);
    }
    if ((uVar10 & 0x100000) == 0) {
      uVar3 = (uVar10 << 0x1b) >> 0x1f;
      if ((uVar10 & 0x20) != 0) {
        uVar3 = uVar3 | 2;
      }
      if ((uVar10 & 1) != 0) {
        uVar3 = uVar3 | 0x40;
      }
      if ((uVar10 & 2) != 0) {
        uVar3 = uVar3 | 0x80;
      }
      if ((uVar10 & 4) != 0) {
        uVar3 = uVar3 | 0x20;
      }
      if ((uVar10 & 8) != 0) {
        uVar3 = uVar3 | 0x10;
      }
      if ((uVar10 & 0x100) != 0) {
        uVar3 = uVar3 | 0x200;
      }
      if ((uVar10 & 0x200) != 0) {
        uVar3 = uVar3 | 0x100;
      }
      if ((uVar10 & 0x400) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((uVar10 & 0x800) != 0) {
        uVar3 = uVar3 | 4;
      }
      uVar2 = 0xff02;
      uVar8 = 0xff01;
      if ((uVar10 & 0x40) == 0) {
        uVar8 = 0xff00;
      }
      else {
        uVar2 = 0xff03;
      }
      if ((uVar10 & 0x80) != 0) {
        uVar8 = uVar2;
      }
      if (*(char *)(param_1 + 0x80014) == '\0') {
        uVar8 = uVar8 | 0x80;
      }
      if (*(char *)(param_1 + 0x80015) != '\0') {
        uVar8 = uVar8 | 0x40;
        FUN_0805c7c0(piVar11 + 0x4ac,*(undefined4 *)(param_1 + 0x8000c),
                     *(undefined4 *)(param_1 + 0x80010));
      }
      uVar2 = *(ushort *)((int)piVar11 + 0x25c6892);
      if ((uVar2 & 0x4000) != 0) {
        puts("irq input");
        if ((uVar2 & 0x8000) == 0) {
          if (uVar3 == (uVar3 & uVar2)) {
            iVar4 = piVar11[0x56831e];
            uVar10 = *(uint *)(iVar4 + 0x214) | 0x1000;
            *(uint *)(iVar4 + 0x214) = uVar10;
            if ((*(byte *)((int)piVar11 + 0x15a0cfd) & 4) == 0) {
              piVar11[0x56833e] = uVar10 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
            }
          }
        }
        else if ((uVar3 & uVar2) != 0) {
          iVar4 = piVar11[0x56831e];
          uVar10 = *(uint *)(iVar4 + 0x214) | 0x1000;
          *(uint *)(iVar4 + 0x214) = uVar10;
          if ((*(byte *)((int)piVar11 + 0x15a0cfd) & 4) == 0) {
            piVar11[0x56833e] = uVar10 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
          }
        }
      }
      uVar2 = *(ushort *)((int)piVar11 + 0x25ce892);
      if ((uVar2 & 0x4000) != 0) {
        puts("irq input");
        if ((uVar2 & 0x8000) == 0) {
          if (uVar3 == (uVar3 & uVar2)) {
            iVar4 = piVar11[0x769c82];
            uVar10 = *(uint *)(iVar4 + 0x214) | 0x1000;
            *(uint *)(iVar4 + 0x214) = uVar10;
            if ((*(byte *)((int)piVar11 + 0x1da728d) & 4) == 0) {
              piVar11[0x769ca2] = uVar10 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
            }
          }
        }
        else if ((uVar3 & uVar2) != 0) {
          iVar4 = piVar11[0x769c82];
          uVar10 = *(uint *)(iVar4 + 0x214) | 0x1000;
          *(uint *)(iVar4 + 0x214) = uVar10;
          if ((*(byte *)((int)piVar11 + 0x1da728d) & 4) == 0) {
            piVar11[0x769ca2] = uVar10 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
          }
        }
      }
      uVar2 = (ushort)uVar3 ^ 0x3ff;
      *(ushort *)(piVar11 + 0x971a24) = uVar2;
      *(ushort *)(piVar11 + 0x973a24) = uVar2;
      *(ushort *)((int)piVar11 + 0x25ce896) = ~uVar8;
      if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x80014) == '\0')) {
        iVar4 = piVar11[0x769c82];
        uVar10 = *(uint *)(iVar4 + 0x214) | 0x400000;
        *(uint *)(iVar4 + 0x214) = uVar10;
        if ((*(byte *)((int)piVar11 + 0x1da728d) & 4) == 0) {
          piVar11[0x769ca2] = uVar10 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_08004cd4(*(undefined4 *)(param_1 + 0x80004));
  }
  *(uint *)(param_1 + 0x80008) = *(uint *)(param_1 + 0x80008) & 0xfdffffff;
  FUN_08066730(piVar11,1);
  return;
}


