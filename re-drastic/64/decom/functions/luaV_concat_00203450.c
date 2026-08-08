/*
 * Ghidra decompilation
 *
 * Function : luaV_concat
 * Address  : 00203450
 * Program  : drastic64
 */


void luaV_concat(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  size_t __n;
  long lVar9;
  long local_8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  do {
    uVar3 = *(uint *)(lVar6 + -0x18) & 0xf;
    if (uVar3 - 3 < 2) {
      uVar1 = *(uint *)(lVar6 + -8) & 0xf;
      if (uVar1 != 4) {
        if (uVar1 != 3) goto LAB_0020349c;
        luaO_tostring(param_1,lVar6 + -0x10);
        uVar3 = *(uint *)(lVar6 + -0x18) & 0xf;
      }
      lVar9 = *(long *)(*(long *)(lVar6 + -0x10) + 0x10);
      if (lVar9 != 0) {
        if ((uVar3 == 4) && (*(long *)(*(long *)(lVar6 + -0x20) + 0x10) == 0)) {
          param_2 = param_2 + -1;
          lVar7 = -0x10;
          *(undefined8 *)(lVar6 + -0x20) = *(undefined8 *)(lVar6 + -0x10);
          *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(lVar6 + -8);
        }
        else {
          plVar8 = (long *)(lVar6 + -0x20);
          lVar4 = 1;
          lVar7 = lVar4;
          if (param_2 < 2) {
            uVar3 = 1;
            lVar7 = 0;
            local_8 = -0x10;
          }
          else {
            do {
              uVar3 = (uint)lVar7;
              if ((*(uint *)(plVar8 + 1) & 0xf) != 4) {
                if ((*(uint *)(plVar8 + 1) & 0xf) != 3) {
                  lVar4 = (long)(int)uVar3;
                  local_8 = lVar7 * -0x10;
                  param_2 = param_2 - (uVar3 - 1);
                  lVar7 = (1 - lVar7) * 0x10;
                  goto LAB_0020360c;
                }
                luaO_tostring(param_1,plVar8);
              }
              if (0x7fffffffU - lVar9 <= *(ulong *)(*plVar8 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                luaG_runerror(param_1,"string length overflow");
              }
              lVar7 = lVar7 + 1;
              lVar9 = lVar9 + *(ulong *)(*plVar8 + 0x10);
              uVar1 = uVar3 + 1;
              plVar8 = plVar8 + -2;
            } while ((int)lVar7 < param_2);
            lVar4 = (long)(int)uVar1;
            param_2 = param_2 - uVar3;
            lVar7 = (1 - lVar4) * 0x10;
            local_8 = -(-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4);
            uVar3 = uVar1;
          }
LAB_0020360c:
          lVar2 = luaZ_openspace(param_1,*(long *)(param_1 + 0x18) + 0xb0,lVar9);
          lVar9 = 0;
          plVar8 = (long *)(lVar6 + lVar4 * -0x10);
          do {
            plVar5 = plVar8 + 2;
            __n = *(size_t *)(*plVar8 + 0x10);
            memcpy((void *)(lVar2 + lVar9),(void *)(*plVar8 + 0x20),__n);
            lVar9 = lVar9 + __n;
            plVar8 = plVar5;
          } while ((long *)(lVar6 + 0x10 + ((ulong)(uVar3 - 1) - lVar4) * 0x10) != plVar5);
          lVar9 = luaS_newlstr(param_1,lVar2,lVar9);
          *(long *)(lVar6 + local_8) = lVar9;
          *(uint *)(lVar6 + local_8 + 8) = *(byte *)(lVar9 + 8) | 0x40;
        }
        goto LAB_002034b8;
      }
      param_2 = param_2 + -1;
      lVar7 = -0x10;
      if (uVar3 != 3) goto LAB_002034b8;
      luaO_tostring(param_1,lVar6 + -0x20);
      lVar6 = *(long *)(param_1 + 0x10) + -0x10;
      *(long *)(param_1 + 0x10) = lVar6;
    }
    else {
LAB_0020349c:
      param_2 = param_2 + -1;
      lVar7 = -0x10;
      luaT_trybinTM(param_1,lVar6 + -0x20,lVar6 + -0x10,lVar6 + -0x20,0x16);
LAB_002034b8:
      lVar6 = *(long *)(param_1 + 0x10) + lVar7;
      *(long *)(param_1 + 0x10) = lVar6;
    }
    if (param_2 < 2) {
      return;
    }
  } while( true );
}


