/*
 * Ghidra decompilation
 *
 * Function : luaU_undump
 * Address  : 00202670
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long luaU_undump(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined auVar6 [16];
  undefined local_58;
  char local_57;
  char local_56;
  char local_55;
  char local_54;
  char local_53;
  char local_52;
  char local_51;
  float local_50;
  int local_4c;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_30;
  short local_28;
  char local_26;
  int local_18;
  short local_14;
  long local_8;
  
  cVar1 = *param_4;
  local_8 = ___stack_chk_guard;
  if (cVar1 == '@' || cVar1 == '=') {
    local_30 = param_4 + 1;
  }
  else {
    local_30 = "binary string";
    if (cVar1 != '\x1b') {
      local_30 = param_4;
    }
  }
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  lVar2 = luaZ_read(param_2,&local_28,3);
  if (lVar2 == 0) {
    if ((local_28 != 0x754c) || (local_26 != 'a')) {
                    /* WARNING: Subroutine does not return */
      error_isra_0(&local_48,local_30,"not a");
    }
    lVar2 = luaZ_read(local_40,&local_56,1);
    if (lVar2 == 0) {
      if (local_56 != 'S') {
                    /* WARNING: Subroutine does not return */
        error_isra_0(&local_48,local_30,"version mismatch in");
      }
      lVar2 = luaZ_read(local_40,&local_57,1);
      if (lVar2 == 0) {
        if (local_57 != '\0') goto LAB_002029c0;
        lVar2 = luaZ_read(local_40,&local_18,6);
        if (lVar2 == 0) {
          if ((local_18 != 0xa0d9319) || (local_14 != 0xa1a)) {
                    /* WARNING: Subroutine does not return */
            error_isra_0(&local_48,local_30,"corrupted");
          }
          lVar2 = luaZ_read(local_40,&local_51,1);
          if (lVar2 == 0) {
            if (local_51 != '\x04') {
LAB_002029b0:
              fchecksize_part_0(&local_48,&DAT_0022a380);
LAB_002029c0:
                    /* WARNING: Subroutine does not return */
              error_isra_0(&local_48,local_30,"format mismatch in");
            }
            lVar2 = luaZ_read(local_40,&local_52,1);
            if (lVar2 == 0) {
              if (local_52 != '\b') {
LAB_002029a0:
                fchecksize_part_0(&local_48,"size_t");
                goto LAB_002029b0;
              }
              lVar2 = luaZ_read(local_40,&local_53,1);
              if (lVar2 == 0) {
                if (local_53 != '\x04') {
LAB_00202990:
                  fchecksize_part_0(&local_48,"Instruction");
                  goto LAB_002029a0;
                }
                lVar2 = luaZ_read(local_40,&local_54,1);
                if (lVar2 == 0) {
                  if (local_54 != '\x04') {
LAB_00202980:
                    fchecksize_part_0(&local_48,"lua_Integer");
                    goto LAB_00202990;
                  }
                  lVar2 = luaZ_read(local_40,&local_55,1);
                  if (lVar2 == 0) {
                    if (local_55 != '\x04') {
                      fchecksize_part_0(&local_48,"lua_Number");
                      goto LAB_00202980;
                    }
                    lVar2 = luaZ_read(local_40,&local_4c,4);
                    if (lVar2 == 0) {
                      if (local_4c != 0x5678) {
                    /* WARNING: Subroutine does not return */
                        error_isra_0(&local_48,local_30,"endianness mismatch in");
                      }
                      lVar2 = luaZ_read(local_40,&local_50,4);
                      if (lVar2 == 0) {
                        if (local_50 != 370.5) {
                    /* WARNING: Subroutine does not return */
                          error_isra_0(&local_48,local_30,"float format mismatch in");
                        }
                        lVar2 = luaZ_read(local_40,&local_58,1);
                        if (lVar2 == 0) {
                          lVar2 = luaF_newLclosure(param_1,local_58);
                          plVar5 = *(long **)(param_1 + 0x10);
                          lVar3 = *(long *)(param_1 + 0x30);
                          *plVar5 = lVar2;
                          *(undefined4 *)(plVar5 + 1) = 0x46;
                          *(long **)(param_1 + 0x10) = plVar5 + 2;
                          if (lVar3 - (long)(plVar5 + 2) < 1) {
                            luaD_growstack(param_1,0);
                          }
                          uVar4 = luaF_newproto(param_1);
                          *(undefined8 *)(lVar2 + 0x18) = uVar4;
                          LoadFunction(&local_48,uVar4,0);
                          auVar6._8_8_ = 0;
                          auVar6._0_8_ = local_8 - ___stack_chk_guard;
                          if (local_8 - ___stack_chk_guard == 0) {
                            return lVar2;
                          }
                          goto LAB_00202944;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar6 = LoadBlock_part_0(&local_48);
LAB_00202944:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar6._0_8_,auVar6._8_8_);
}


