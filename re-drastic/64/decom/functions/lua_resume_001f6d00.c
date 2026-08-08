/*
 * Ghidra decompilation
 *
 * Function : lua_resume
 * Address  : 001f6d00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int lua_resume(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = *(undefined2 *)(param_1 + 0xc4);
  sVar4 = 1;
  if (param_2 != 0) {
    sVar4 = *(short *)(param_2 + 0xc6) + 1;
  }
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(short *)(param_1 + 0xc6) = sVar4;
  local_c = luaD_rawrunprotected(param_1,resume,*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
  if (local_c == -1) {
    iVar12 = 2;
  }
  else {
    iVar12 = local_c;
    if (1 < local_c) {
      do {
        iVar12 = local_c;
        lVar5 = *(long *)(param_1 + 0x20);
        lVar11 = lVar5;
        while( true ) {
          if (lVar11 == 0) {
            *(char *)(param_1 + 10) = (char)local_c;
            plVar10 = *(long **)(param_1 + 0x10);
            if (local_c == 4) {
              lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0xf0);
              *plVar10 = lVar11;
              *(uint *)(plVar10 + 1) = *(byte *)(lVar11 + 8) | 0x40;
            }
            else if (local_c == 6) {
              lVar11 = luaS_newlstr(param_1,"error in error handling",0x17);
              *plVar10 = lVar11;
              lVar5 = *(long *)(param_1 + 0x20);
              *(uint *)(plVar10 + 1) = *(byte *)(lVar11 + 8) | 0x40;
            }
            else {
              *plVar10 = plVar10[-2];
              plVar10[1] = plVar10[-1];
            }
            *(long **)(param_1 + 0x10) = plVar10 + 2;
            *(long **)(lVar5 + 8) = plVar10 + 2;
            iVar12 = local_c;
            goto LAB_001f6ea8;
          }
          if ((*(byte *)(lVar11 + 0x42) >> 4 & 1) != 0) break;
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        lVar13 = *(long *)(param_1 + 0x38);
        lVar5 = *(long *)(lVar11 + 0x38);
        puVar8 = (undefined8 *)(lVar13 + lVar5);
        luaF_close(param_1,puVar8);
        if (iVar12 == 4) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0xf0);
          *(long *)(lVar13 + lVar5) = lVar6;
          *(uint *)(puVar8 + 1) = *(byte *)(lVar6 + 8) | 0x40;
        }
        else if (iVar12 == 6) {
          lVar6 = luaS_newlstr(param_1,"error in error handling",0x17);
          *(long *)(lVar13 + lVar5) = lVar6;
          *(uint *)(puVar8 + 1) = *(byte *)(lVar6 + 8) | 0x40;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
          *puVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
          puVar8[1] = uVar7;
        }
        puVar8 = puVar8 + 2;
        *(undefined8 **)(param_1 + 0x10) = puVar8;
        *(long *)(param_1 + 0x20) = lVar11;
        bVar2 = *(byte *)(lVar11 + 0x42);
        *(undefined2 *)(param_1 + 0xc4) = 0;
        *(byte *)(param_1 + 0xc9) = bVar2 & 1;
        lVar5 = lVar11;
        do {
          puVar1 = (undefined8 *)(lVar5 + 8);
          lVar5 = *(long *)(lVar5 + 0x10);
          if (puVar8 < (undefined8 *)*puVar1) {
            puVar8 = (undefined8 *)*puVar1;
          }
        } while (lVar5 != 0);
        iVar9 = (int)((long)puVar8 - *(long *)(param_1 + 0x38) >> 4);
        iVar12 = iVar9 + 1;
        if (*(int *)(param_1 + 0xb8) < 0xf4241) {
          luaE_shrinkCI(param_1);
        }
        else {
          luaE_freeCI();
        }
        if (iVar12 < 0xf4241) {
          iVar9 = iVar9 + 8;
          if (-1 < iVar12) {
            iVar9 = iVar12;
          }
          iVar12 = iVar12 + (iVar9 >> 3) + 10;
          if (1000000 < iVar12) {
            iVar12 = 1000000;
          }
          if (iVar12 < *(int *)(param_1 + 0xb8)) {
            luaD_reallocstack(param_1);
          }
        }
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar11 + 0x28);
        local_c = luaD_rawrunprotected_constprop_0(param_1,&local_c);
        iVar12 = local_c;
      } while (1 < local_c);
    }
  }
LAB_001f6ea8:
  *(undefined2 *)(param_1 + 0xc4) = uVar3;
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


