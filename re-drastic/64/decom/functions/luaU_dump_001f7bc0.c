/*
 * Ghidra decompilation
 *
 * Function : luaU_dump
 * Address  : 001f7bc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaU_dump(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,undefined4 param_5)

{
  undefined4 local_2c;
  undefined8 local_28;
  code *pcStack_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  pcStack_20 = param_3;
  local_18 = param_4;
  local_10 = param_5;
  local_c = (*param_3)(param_1,&DAT_002299e8,4);
  local_2c._0_1_ = 0x53;
  if (local_c == 0) {
    local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
    local_2c._0_1_ = 0;
    if (local_c == 0) {
      local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
      if (local_c == 0) {
        local_c = (*pcStack_20)(local_28,&DAT_002299f0,6,local_18);
        local_2c._0_1_ = 4;
        if (local_c == 0) {
          local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
          local_2c._0_1_ = 8;
          if (local_c == 0) {
            local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
            local_2c._0_1_ = 4;
            if (local_c == 0) {
              local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
              local_2c._0_1_ = 4;
              if (local_c == 0) {
                local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
                local_2c._0_1_ = 4;
                if (local_c == 0) {
                  local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
                  local_2c._0_1_ = 0x78;
                  local_2c._1_3_ = 0x56;
                  if (local_c == 0) {
                    local_c = (*pcStack_20)(local_28,&local_2c,4,local_18);
                    local_2c._0_1_ = 0;
                    local_2c._1_3_ = 0x43b940;
                    if (local_c == 0) {
                      local_c = (*pcStack_20)(local_28,&local_2c,4,local_18);
                      local_2c._0_1_ = (undefined)*(undefined4 *)(param_2 + 0x10);
                      if (local_c == 0) {
                        local_c = (*pcStack_20)(local_28,&local_2c,1,local_18);
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
  DumpFunction(param_2,0,&local_28);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c,local_8 - ___stack_chk_guard,0);
}


