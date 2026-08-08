/*
 * Ghidra decompilation
 *
 * Function : FUN_001a6d1c
 * Address  : 001a6d1c
 * Program  : drastic64
 */


int FUN_001a6d1c(int param_1,char *param_2,undefined8 *param_3,uint param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  ulong __len;
  int *__addr;
  size_t __n;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uStack_10;
  
  if (param_1 < 1) {
    return -1;
  }
  __len = lseek64(param_1,0,2);
  lseek64(param_1,0,0);
  __addr = (int *)mmap64((void *)0x0,__len,1,1,param_1,0);
  if (__addr == (int *)0xffffffffffffffff) {
    puts("unzip error, could not map zip file.");
    return -1;
  }
  if (*__addr == 0x4034b50) {
    piVar1 = (int *)((long)__addr + __len);
    piVar7 = (int *)((long)piVar1 - 0x16);
    if (*(int *)((long)piVar1 - 0x16) == 0x6054b50) {
LAB_001a6e18:
      if (((uint)piVar7[4] < __len) &&
         (piVar8 = (int *)((long)__addr + (ulong)(uint)piVar7[4]), piVar8 < piVar1)) {
        __n = strlen(param_2);
        if (param_4 == 0) {
          while( true ) {
            if (*piVar8 == 0x6054b50) break;
            if (*piVar8 != 0x2014b50) goto LAB_001a6fa4;
            uVar6 = *(uint *)((long)piVar8 + 0x2a);
            uStack_10 = (ulong)uVar6;
            if (__len <= uVar6) goto LAB_001a6fa4;
            uVar2 = *(ushort *)(piVar8 + 7);
            if ((long)((long)piVar7 - ((long)piVar8 + 0x2eU)) < (long)(ulong)uVar2)
            goto LAB_001a6fc4;
            iVar4 = memcmp((void *)((long)piVar8 + 0x2eU + (uVar2 - __n)),param_2,__n);
            if (iVar4 == 0) goto LAB_001a6fdc;
            uVar5 = (ulong)((uint)*(ushort *)((long)piVar8 + 0x1e) + (uint)*(ushort *)(piVar8 + 8) +
                           uVar2 + 0x2e);
            piVar8 = (int *)((long)piVar8 + uVar5);
            if ((__len < uVar5) || (piVar1 <= piVar8)) break;
          }
        }
        else {
          uVar9 = 0;
          while( true ) {
            uVar9 = uVar9 + 1;
            if (*piVar8 == 0x6054b50) break;
            if (*piVar8 != 0x2014b50) goto LAB_001a6fa4;
            uVar6 = *(uint *)((long)piVar8 + 0x2a);
            uStack_10 = (ulong)uVar6;
            if (__len <= uStack_10) goto LAB_001a6fa4;
            if (param_4 < uVar9) {
              iVar4 = -1;
              __printf_chk(1,"unzip error, max search depth reached :%d\n",param_4);
              goto LAB_001a6db0;
            }
            uVar2 = *(ushort *)(piVar8 + 7);
            if ((long)((long)piVar7 - ((long)piVar8 + 0x2eU)) < (long)(ulong)uVar2)
            goto LAB_001a6fc4;
            iVar4 = memcmp((void *)((long)piVar8 + 0x2eU + (uVar2 - __n)),param_2,__n);
            if (iVar4 == 0) goto LAB_001a6fdc;
            uVar5 = (ulong)((uint)*(ushort *)((long)piVar8 + 0x1e) + (uint)*(ushort *)(piVar8 + 8) +
                           uVar2 + 0x2e);
            piVar8 = (int *)((long)piVar8 + uVar5);
            if ((__len < uVar5) || (piVar1 <= piVar8)) break;
          }
        }
      }
    }
    else if (__addr < piVar7) {
      do {
        piVar7 = (int *)((long)piVar7 + -1);
        if (*piVar7 == 0x6054b50) goto LAB_001a6e18;
      } while (__addr != piVar7);
    }
  }
LAB_001a6dac:
  iVar4 = -1;
LAB_001a6db0:
  munmap(__addr,__len);
  return iVar4;
LAB_001a6fa4:
  iVar4 = -1;
  __printf_chk(1,"unzip error, could not find %s file.\n",param_2);
  goto LAB_001a6db0;
LAB_001a6fc4:
  iVar4 = -1;
  puts("unzip error, file name too long.");
  goto LAB_001a6db0;
LAB_001a6fdc:
  if (*(int *)((long)__addr + uStack_10) != 0x4034b50) {
    iVar4 = -1;
    puts("unzip error, wrong file header offset.");
    goto LAB_001a6db0;
  }
  uVar10 = *(undefined8 *)(piVar8 + 5);
  uVar3 = *(undefined2 *)((long)piVar8 + 10);
  uVar6 = (uint)*(ushort *)((long)__addr + uStack_10 + 0x1a) +
          (uint)*(ushort *)((long)__addr + uStack_10 + 0x1c) + uVar6 + 0x1e;
  *(uint *)(param_3 + 1) = uVar6;
  *(undefined2 *)((long)param_3 + 0xc) = uVar3;
  *param_3 = uVar10;
  if (uVar6 != 0) {
    iVar4 = -(uint)(__len <= uVar6);
    goto LAB_001a6db0;
  }
  goto LAB_001a6dac;
}


