/*
 * Ghidra decompilation
 *
 * Function : get_rlist
 * Address  : 001864a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rlist(uint param_1,undefined *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *__dest;
  char acStack_18 [16];
  long local_8;
  
  bVar5 = false;
  local_8 = ___stack_chk_guard;
  __dest = (undefined2 *)(param_2 + 1);
  *param_2 = 0x7b;
  uVar7 = 0;
  uVar3 = uVar7;
  uVar4 = param_1;
  if ((param_1 & 1) != 0) goto LAB_0018690c;
LAB_00186508:
  uVar3 = uVar7 + 1;
  uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
  uVar8 = (uint)((int)uVar3 < 0x10);
  if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
    uVar3 = uVar7 + 2;
    uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
    uVar8 = (uint)((int)uVar3 < 0x10);
    if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
      uVar3 = uVar7 + 3;
      uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
      uVar8 = (uint)((int)uVar3 < 0x10);
      if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
        uVar3 = uVar7 + 4;
        uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
        uVar8 = (uint)((int)uVar3 < 0x10);
        if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
          uVar3 = uVar7 + 5;
          uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
          uVar8 = (uint)((int)uVar3 < 0x10);
          if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
            uVar3 = uVar7 + 6;
            uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
            uVar8 = (uint)((int)uVar3 < 0x10);
            if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
              uVar3 = uVar7 + 7;
              uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
              uVar8 = (uint)((int)uVar3 < 0x10);
              if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                uVar3 = uVar7 + 8;
                uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                uVar8 = (uint)((int)uVar3 < 0x10);
                if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                  uVar3 = uVar7 + 9;
                  uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                  uVar8 = (uint)((int)uVar3 < 0x10);
                  if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                    uVar3 = uVar7 + 10;
                    uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                    uVar8 = (uint)((int)uVar3 < 0x10);
                    if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                      uVar3 = uVar7 + 0xb;
                      uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                      uVar8 = (uint)((int)uVar3 < 0x10);
                      if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                        uVar3 = uVar7 + 0xc;
                        uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                        uVar8 = (uint)((int)uVar3 < 0x10);
                        if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                          uVar3 = uVar7 + 0xd;
                          uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                          uVar8 = (uint)((int)uVar3 < 0x10);
                          if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                            uVar3 = uVar7 + 0xe;
                            uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                            uVar8 = (uint)((int)uVar3 < 0x10);
                            if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
                              uVar3 = uVar7 + 0xf;
                              uVar4 = param_1 >> (ulong)(uVar3 & 0x1f) & 1;
                              uVar8 = (uint)((int)uVar3 < 0x10);
                              if (((uint)((int)uVar3 < 0x10) & (uVar4 ^ 1)) != 0) {
LAB_001866e8:
                                if (bVar5) {
LAB_001866ec:
                                  __dest = __dest + -1;
                                }
                                *__dest = 0x7d;
                                if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
                                  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
                                }
                                return;
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
      }
    }
  }
  if (uVar3 != 0x10) {
    if ((uVar8 & uVar4) == 0) goto LAB_00186920;
LAB_00186738:
    uVar7 = uVar3 + 1;
    if ((param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) == 0) {
      __sprintf_chk(acStack_18,1,0x10,&DAT_00224320,(&reg_names)[(int)uVar3]);
      goto LAB_001868dc;
    }
    uVar4 = uVar3 + 2;
    uVar8 = uVar4;
    uVar1 = uVar7;
    if ((((((param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0) &&
          (uVar7 = uVar3 + 3, uVar8 = uVar7, uVar1 = uVar4,
          (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0)) &&
         (uVar4 = uVar3 + 4, uVar8 = uVar4, uVar1 = uVar7,
         (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0)) &&
        ((((uVar7 = uVar3 + 5, uVar8 = uVar7, uVar1 = uVar4,
           (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0 &&
           (uVar4 = uVar3 + 6, uVar8 = uVar4, uVar1 = uVar7,
           (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0)) &&
          ((uVar7 = uVar3 + 7, uVar8 = uVar7, uVar1 = uVar4,
           (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0 &&
           ((uVar4 = uVar3 + 8, uVar8 = uVar4, uVar1 = uVar7,
            (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0 &&
            (uVar7 = uVar3 + 9, uVar8 = uVar7, uVar1 = uVar4,
            (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0)))))) &&
         (uVar4 = uVar3 + 10, uVar8 = uVar4, uVar1 = uVar7,
         (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0)))) &&
       ((((uVar7 = uVar3 + 0xb, uVar8 = uVar7, uVar1 = uVar4,
          (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0 &&
          (uVar4 = uVar3 + 0xc, uVar8 = uVar4, uVar1 = uVar7,
          (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0)) &&
         (uVar7 = uVar3 + 0xd, uVar8 = uVar7, uVar1 = uVar4,
         (param_1 >> (ulong)(uVar7 & 0x1f) & (uint)((int)uVar7 < 0x10)) != 0)) &&
        ((uVar4 = uVar3 + 0xe, uVar8 = uVar4, uVar1 = uVar7,
         (param_1 >> (ulong)(uVar4 & 0x1f) & (uint)((int)uVar4 < 0x10)) != 0 &&
         (uVar8 = uVar3 + 0xf, uVar1 = uVar4,
         (param_1 >> (ulong)(uVar8 & 0x1f) & (uint)((int)uVar8 < 0x10)) != 0)))))) {
      uVar8 = 0x10;
      uVar1 = 0xf;
    }
    puVar6 = (&reg_names)[(int)uVar3];
    uVar7 = uVar8;
    if (uVar1 == uVar3) goto LAB_00186938;
    do {
      if (uVar3 - uVar1 == 1) {
        __sprintf_chk(acStack_18,1,0x10,"%s, %s, ",puVar6,(&reg_names)[(int)uVar1]);
      }
      else {
        __sprintf_chk(acStack_18,1,0x10,"%s - %s, ",puVar6,(&reg_names)[(int)uVar1]);
      }
LAB_001868dc:
      while( true ) {
        strcpy((char *)__dest,acStack_18);
        sVar2 = strlen(acStack_18);
        __dest = (undefined2 *)((long)__dest + sVar2);
        bVar5 = true;
        if (uVar7 == 0x10) goto LAB_001866ec;
        uVar4 = param_1 >> (ulong)(uVar7 & 0x1f);
        uVar3 = uVar7;
        if ((uVar4 & 1) == 0) goto LAB_00186508;
LAB_0018690c:
        if ((uVar4 & 1) != 0) goto LAB_00186738;
LAB_00186920:
        uVar1 = uVar3 - 1;
        puVar6 = (&reg_names)[(int)uVar3];
        uVar7 = uVar3;
        if (uVar1 != uVar3) break;
LAB_00186938:
        __sprintf_chk(acStack_18,1,0x10,&DAT_00224320,puVar6);
      }
    } while( true );
  }
  goto LAB_001866e8;
}


