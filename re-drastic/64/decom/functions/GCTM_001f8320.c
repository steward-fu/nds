/*
 * Ghidra decompilation
 *
 * Function : GCTM
 * Address  : 001f8320
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GCTM(long param_1,uint param_2)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_18;
  uint local_10;
  undefined4 uStack_c;
  long local_8;
  
  lVar9 = *(long *)(param_1 + 0x18);
  local_18 = *(undefined8 **)(lVar9 + 0x98);
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(lVar9 + 0x98) = *local_18;
  *local_18 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 **)(lVar9 + 0x58) = local_18;
  bVar1 = *(byte *)((long)local_18 + 9);
  *(byte *)((long)local_18 + 9) = bVar1 & 0xf7;
  if ((byte)(*(char *)(lVar9 + 0x55) - 2U) < 4) {
    *(byte *)((long)local_18 + 9) = *(byte *)(lVar9 + 0x54) & 3 | bVar1 & 0xf0;
  }
  local_10 = *(byte *)(local_18 + 1) | 0x40;
  puVar5 = (undefined8 *)luaT_gettmbyobj(param_1,&local_18,2);
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 1) & 0xf) == 6)) {
    uVar2 = *(undefined *)(lVar9 + 0x57);
    uVar3 = *(undefined *)(param_1 + 0xc9);
    *(undefined *)(param_1 + 0xc9) = 0;
    *(undefined *)(lVar9 + 0x57) = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    param_2 = param_2 & 1;
    uVar8 = puVar5[1];
    *puVar7 = *puVar5;
    puVar7[1] = uVar8;
    puVar7[2] = local_18;
    puVar7[3] = CONCAT44(uStack_c,local_10);
    *(undefined8 **)(param_1 + 0x10) = puVar7 + 4;
    iVar4 = luaD_pcall(param_1,dothecall,0,(long)puVar7 - *(long *)(param_1 + 0x38),0);
    *(undefined *)(param_1 + 0xc9) = uVar3;
    *(undefined *)(lVar9 + 0x57) = uVar2;
    if (iVar4 == 0) {
      param_2 = 0;
    }
    if (param_2 != 0) {
      if (iVar4 == 2) {
        if ((*(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf) == 4) {
          pcVar6 = (char *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x20);
        }
        else {
          pcVar6 = "no message";
        }
        luaO_pushfstring(param_1,"error in __gc metamethod (%s)",pcVar6);
        iVar4 = 5;
      }
                    /* WARNING: Subroutine does not return */
      luaD_throw(param_1,iVar4);
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


