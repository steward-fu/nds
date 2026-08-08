/*
 * Ghidra decompilation
 *
 * Function : disasm_arm64_instruction
 * Address  : 00196f30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void disasm_arm64_instruction
               (uint param_1,undefined8 *param_2,long param_3,long *param_4,int param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined8 in_stack_fffffffffffffe30;
  undefined4 uVar57;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar58;
  uint local_150;
  undefined4 local_138;
  undefined local_134;
  undefined4 local_128;
  undefined local_124;
  undefined4 local_118;
  undefined local_114;
  undefined4 local_108;
  undefined local_104;
  long local_8;
  
  uVar58 = (undefined4)((ulong)in_stack_fffffffffffffe38 >> 0x20);
  uVar57 = (undefined4)((ulong)in_stack_fffffffffffffe30 >> 0x20);
  local_8 = ___stack_chk_guard;
  __sprintf_chk(param_2,1,0xffffffffffffffff,"[error/unhandled (%08x)]",param_1);
  uVar20 = param_1 >> 0x19;
  if ((uVar20 & 0x3f) == 0x1a) {
    if ((param_1 & 0x1f) == 0x1f) {
      local_128 = 0x6f72657a;
      local_124 = 0;
    }
    else if ((int)param_1 < 0) {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
    }
    else {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
    }
    if (param_5 != 0) {
      plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
      do {
        if (*param_4 ==
            (-((ulong)(param_1 >> 0x1b) & 1) & 0xfffffffffe000000 |
            ((ulong)(param_1 >> 5) & 0x7fffff) << 2) + param_3) {
          __strcpy_chk(&local_108,param_4[1],0x100);
          goto LAB_0019715c;
        }
        param_4 = param_4 + 2;
      } while (plVar1 != param_4);
    }
    __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_0019715c:
    __sprintf_chk(param_2,1,0xffffffffffffffff,"cb%sz %s, %s",
                  (&n_strs)[(ulong)(param_1 >> 0x18) & 1],&local_128,&local_108);
    goto LAB_00197190;
  }
  if (uVar20 == 0x2a) {
    if (param_5 != 0) {
      plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
      do {
        if (*param_4 ==
            (-((ulong)(param_1 >> 0x17) & 1) & 0xffffffffffe00000 |
            ((ulong)(param_1 >> 5) & 0x7ffff) << 2) + param_3) {
          __strcpy_chk(&local_108,param_4[1],0x100);
          goto LAB_00197488;
        }
        param_4 = param_4 + 2;
      } while (param_4 != plVar1);
    }
    __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_00197488:
    __sprintf_chk(param_2,1,0xffffffffffffffff,"b%s %s",
                  *(undefined8 *)(condition_strs + ((ulong)param_1 & 0xf) * 8),&local_108);
    goto LAB_00197190;
  }
  uVar2 = param_1 >> 0x16;
  uVar19 = (ulong)uVar2;
  if (uVar2 == 0x354) {
    if ((param_1 & 0x1f) == 0x1f) {
      local_128 = 0x6f72657a;
      local_124 = 0;
    }
    else {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
    }
    if (((param_1 >> 0x13 & 3) == 3 && (param_1 >> 0x10 & 7) == 3) &&
       (((param_1 & 0xe0) == 0 && (param_1 >> 0xc & 0xf) == 4) && (param_1 >> 8 & 0xf) == 2)) {
      if ((param_1 >> 0x15 & 1) == 0) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"msr nzcv, %s",&local_128);
      }
      else {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"mrs %s, nzcv",&local_128);
      }
    }
    else {
      *param_2 = 0x726f707075736e75;
      param_2[1] = 0x7473797320646574;
      *(undefined4 *)((long)param_2 + 0xf) = 0x6d6574;
    }
    goto LAB_00197190;
  }
  iVar7 = (int)param_1 >> 0x1f;
  if ((uVar20 & 0x3f) == 0x1b) {
    if (param_5 != 0) {
      plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
      do {
        if (*param_4 ==
            (-((ulong)(param_1 >> 0x12) & 1) & 0xffffffffffff0000 |
            ((ulong)(param_1 >> 5) & 0x3fff) << 2) + param_3) {
          __strcpy_chk(&local_108,param_4[1],0x100);
          goto LAB_00197684;
        }
        param_4 = param_4 + 2;
      } while (plVar1 != param_4);
    }
    __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_00197684:
    if ((param_1 & 0x1f) == 0x1f) {
      local_128 = 0x6f72657a;
      local_124 = 0;
    }
    else if ((int)param_1 < 0) {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
    }
    else {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
    }
    __sprintf_chk(param_2,1,0xffffffffffffffff,"tb%sz %s, %d, %s",
                  (&n_strs)[(ulong)(param_1 >> 0x18) & 1],&local_128,
                  param_1 >> 0x13 & 0x1f | iVar7 * -0x20,&local_108);
    goto LAB_00197190;
  }
  if ((param_1 >> 0x1a & 0x1f) == 5) {
    if (param_5 != 0) {
      plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
      do {
        if (*param_4 ==
            (-((ulong)(param_1 >> 0x19) & 1) & 0xfffffffff0000000 |
            ((ulong)param_1 & 0x3ffffff) << 2) + param_3) {
          __strcpy_chk(&local_108,param_4[1],0x100);
          goto LAB_001975b8;
        }
        param_4 = param_4 + 2;
      } while (param_4 != plVar1);
    }
    __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_001975b8:
    __sprintf_chk(param_2,1,0xffffffffffffffff,"b%s %s",
                  *(undefined8 *)(l_strs + (ulong)(param_1 >> 0x1f) * 8),&local_108);
    goto LAB_00197190;
  }
  if (uVar20 == 0x6b) {
    if ((param_1 >> 5 & 0x1f) == 0x1f) {
      local_118 = 0x6f72657a;
      local_114 = 0;
    }
    else {
      __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
    }
    __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s",
                  *(undefined8 *)(unconditional_branch_ops + ((ulong)(param_1 >> 0x15) & 0xf) * 8),
                  &local_118);
    goto LAB_00197190;
  }
  uVar20 = param_1 >> 0x18;
  if (((uVar20 & 0x3f) == 0x18) && (-1 < (int)param_1)) {
    if (param_5 != 0) {
      plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
      do {
        if (*param_4 ==
            (-((ulong)(param_1 >> 0x17) & 1) & 0xffffffffffe00000 |
            ((ulong)(param_1 >> 5) & 0x7ffff) << 2) + param_3) {
          __strcpy_chk(&local_108,param_4[1],0x100);
          goto LAB_00197274;
        }
        param_4 = param_4 + 2;
      } while (param_4 != plVar1);
    }
    __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_00197274:
    if ((param_1 & 0x1f) == 0x1f) {
      local_128 = 0x6f72657a;
      local_124 = 0;
    }
    else if ((param_1 >> 0x1a & 1) == 0) {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
    }
    else {
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
    }
    __sprintf_chk(param_2,1,0xffffffffffffffff,"ldr %s, [%s]",&local_128,&local_108);
    goto LAB_00197190;
  }
  uVar6 = param_1 >> 0x1b & 7;
  if (uVar6 == 7) {
    uVar6 = param_1 >> 10;
    if ((uVar20 & 3) == 0) {
      if ((uVar6 & 3) == 1) {
        uVar20 = param_1 >> 0x1e;
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else if (uVar20 == 3) {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, [%s], #%d",
                      *(undefined8 *)(load_store_op_strs + (uVar19 & 3) * 8),
                      *(undefined8 *)(load_store_size_strs + (ulong)uVar20 * 8),&local_128,
                      &local_118,
                      CONCAT44(uVar57,(int)((long)((ulong)(param_1 >> 0xc) << 0x37) >> 0x37) <<
                                      (ulong)uVar20));
        goto LAB_00197190;
      }
      if ((uVar6 & 3) == 2) {
        uVar20 = param_1 >> 0xd & 7;
        uVar2 = param_1 >> 0x1e;
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else if (uVar2 == 3) {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
          local_138 = 0x6f72657a;
          local_134 = 0;
        }
        else if ((param_1 >> 0xd & 1) == 0) {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
        }
        else {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
        }
        if (uVar20 == 3) {
          if ((param_1 >> 0xc & 1) == 0) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, [%s, %s]",
                          *(undefined8 *)(load_store_op_strs + (uVar19 & 3) * 8),
                          *(undefined8 *)(load_store_size_strs + (ulong)uVar2 * 8),&local_128,
                          &local_118,&local_138);
            goto LAB_00197190;
          }
          puVar12 = &DAT_002247b8;
        }
        else {
          puVar12 = *(undefined **)(load_store_option_strs + (ulong)uVar20 * 8);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, [%s, %s, %s #%d]",
                      *(undefined8 *)(load_store_op_strs + (uVar19 & 3) * 8),
                      *(undefined8 *)(load_store_size_strs + (ulong)uVar2 * 8),&local_128,&local_118
                      ,&local_138,puVar12,(param_1 >> 0xc & 1) * uVar2);
        goto LAB_00197190;
      }
      if (((uVar20 | uVar6) & 3) == 0) goto LAB_001972f4;
    }
    else {
      if (((uVar20 | uVar6) & 3) == 0) {
LAB_001972f4:
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else if (param_1 >> 0x1e == 3) {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%su%s %s, [%s, #%d]",
                      *(undefined8 *)(load_store_op_strs + (uVar19 & 3) * 8),
                      *(undefined8 *)(load_store_size_strs + (ulong)(param_1 >> 0x1e) * 8),
                      &local_128,&local_118,
                      CONCAT44(uVar57,(int)((long)((ulong)(param_1 >> 0xc) << 0x37) >> 0x37)));
        goto LAB_00197190;
      }
      if ((uVar20 & 3) == 1) {
        uVar20 = param_1 >> 0x1e;
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else if (uVar20 == 3) {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, [%s, #%d]",
                      *(undefined8 *)(load_store_op_strs + (uVar19 & 3) * 8),
                      *(undefined8 *)(load_store_size_strs + (ulong)uVar20 * 8),&local_128,
                      &local_118,CONCAT44(uVar57,(uVar6 & 0xfff) << (ulong)uVar20));
        goto LAB_00197190;
      }
    }
  }
  else if (uVar6 == 5) {
    uVar6 = param_1 >> 0x17 & 7;
    if (uVar6 == 2) {
      if ((param_1 >> 5 & 0x1f) == 0x1f) {
        local_118 = CONCAT13(local_118._3_1_,0x7073);
      }
      else {
        __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
      }
      if ((param_1 & 0x1f) == 0x1f) {
        local_128 = 0x6f72657a;
        local_124 = 0;
      }
      else {
        __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
      }
      if ((param_1 >> 10 & 0x1f) == 0x1f) {
        local_138 = 0x6f72657a;
        local_134 = 0;
      }
      else {
        __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, [%s, #%d]",
                    *(undefined8 *)(stp_ldp_strs + (uVar19 & 1) * 8),&local_128,&local_138,
                    &local_118,
                    CONCAT44(uVar57,(int)((long)((ulong)(param_1 >> 0xf) << 0x39) >> 0x39) << 2));
      goto LAB_00197190;
    }
    if ((param_1 >> 0x1a & 1) == 0) {
      if (uVar6 == 3) {
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        if ((param_1 >> 10 & 0x1f) == 0x1f) {
          local_138 = 0x6f72657a;
          local_134 = 0;
        }
        else {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, [%s, #%d]!",
                      *(undefined8 *)(stp_ldp_strs + (uVar19 & 1) * 8),&local_128,&local_138,
                      &local_118,
                      CONCAT44(uVar57,(int)((long)((ulong)(param_1 >> 0xf) << 0x39) >> 0x39) << 2));
        goto LAB_00197190;
      }
      if (uVar6 == 1) {
        if ((param_1 >> 5 & 0x1f) == 0x1f) {
          local_118 = CONCAT13(local_118._3_1_,0x7073);
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        }
        if ((param_1 & 0x1f) == 0x1f) {
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        else {
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
        }
        if ((param_1 >> 10 & 0x1f) == 0x1f) {
          local_138 = 0x6f72657a;
          local_134 = 0;
        }
        else {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, [%s], #%d",
                      *(undefined8 *)(stp_ldp_strs + (uVar19 & 1) * 8),&local_128,&local_138,
                      &local_118,
                      CONCAT44(uVar57,(int)((long)((ulong)(param_1 >> 0xf) << 0x39) >> 0x39) << 2));
        goto LAB_00197190;
      }
    }
  }
  uVar20 = uVar20 & 0x1f;
  if (uVar20 != 0x11) {
    uVar6 = param_1 >> 0x17 & 0x3f;
    if (uVar6 != 0x26) {
      if (uVar6 == 0x27) {
        uVar2 = uVar2 & param_1 >> 0x1f;
        uVar6 = param_1 >> 5 & 0x1f;
        uVar20 = param_1 & 0x1f;
        if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
          uVar58 = 0x6f72657a;
          uVar5 = 0;
          local_138 = 0x6f72657a;
          local_134 = 0;
          if (uVar6 == 0x1f) {
            local_118 = 0x6f72657a;
            local_114 = 0;
            if (uVar20 == 0x1f) goto LAB_0019882c;
            uVar57 = uVar58;
            uVar9 = uVar5;
            if (uVar2 == 0) goto LAB_001987c8;
          }
          else {
            if (uVar2 == 0) goto LAB_001987a4;
LAB_00197b48:
            local_134 = uVar5;
            local_138 = uVar58;
            __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar6);
            uVar57 = local_138;
            uVar9 = local_134;
            uVar58 = local_118;
            uVar5 = local_114;
            if (uVar20 == 0x1f) goto LAB_0019882c;
          }
LAB_00197b6c:
          local_134 = uVar9;
          local_138 = uVar57;
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
        }
        else if (uVar2 == 0) {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
          if (uVar6 == 0x1f) {
            local_118 = 0x6f72657a;
            local_114 = 0;
            if (uVar20 == 0x1f) goto LAB_00198828;
          }
          else {
LAB_001987a4:
            __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar6);
            uVar58 = local_118;
            uVar5 = local_114;
            if (uVar20 == 0x1f) goto LAB_0019882c;
          }
LAB_001987c8:
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
        }
        else {
          __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
          uVar58 = local_138;
          uVar5 = local_134;
          if (uVar6 != 0x1f) goto LAB_00197b48;
          local_118 = 0x6f72657a;
          local_114 = 0;
          uVar57 = local_138;
          uVar9 = local_134;
          if (uVar20 != 0x1f) goto LAB_00197b6c;
LAB_00198828:
          local_114 = 0;
          local_118 = 0x6f72657a;
          uVar58 = local_118;
          uVar5 = local_114;
LAB_0019882c:
          local_114 = uVar5;
          local_118 = uVar58;
          local_128 = 0x6f72657a;
          local_124 = 0;
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"extr %s, %s, %s, #%d",&local_128,&local_118,
                      &local_138,param_1 >> 10 & 0x3f);
        goto LAB_00197190;
      }
      if (uVar6 != 0x24) {
        if (uVar6 == 0x25) {
          if ((param_1 & 0x1f) == 0x1f) {
            local_128 = 0x6f72657a;
            local_124 = 0;
          }
          else if ((int)param_1 < 0) {
            __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
          }
          else {
            __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
          }
          __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %llx",
                        *(undefined8 *)(move_wide_strs + ((ulong)(param_1 >> 0x1d) & 3) * 8),
                        &local_128,((ulong)(param_1 >> 5) & 0xffff) << ((param_1 >> 0x15 & 3) << 4))
          ;
          goto LAB_00197190;
        }
        if (uVar20 == 0x10) {
          if (param_5 != 0) {
            plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
            do {
              if (*param_4 == ((ulong)(param_1 >> 0xc) & 0xffc) + param_3) {
                __strcpy_chk(&local_108,param_4[1],0x100);
                goto LAB_001978f8;
              }
              param_4 = param_4 + 2;
            } while (plVar1 != param_4);
          }
          __sprintf_chk(&local_108,1,0x100,&DAT_00227b48);
LAB_001978f8:
          __sprintf_chk(param_2,1,0xffffffffffffffff,"adr%s %s",
                        *(undefined8 *)(p_strs + (ulong)(param_1 >> 0x1f) * 8),&local_108);
          goto LAB_00197190;
        }
        if (uVar20 == 0xb) {
          if ((param_1 >> 0x15 & 1) == 0) {
            pcVar18 = "sh-undef";
            if ((uVar2 & 3) != 3) {
              pcVar18 = *(char **)(shift_reg_strs + (uVar19 & 3) * 8);
            }
            uVar20 = param_1 >> 10 & 0x3f;
            uVar2 = param_1 >> 5 & 0x1f;
            if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
              uVar58 = 0x6f72657a;
              uVar5 = 0;
              local_138 = 0x6f72657a;
              local_134 = 0;
              if (uVar2 == 0x1f) {
                local_118 = 0x6f72657a;
                local_114 = 0;
                if ((param_1 & 0x1f) == 0x1f) goto LAB_0019953c;
                local_138 = uVar58;
                local_134 = uVar5;
                if (-1 < (int)param_1) goto LAB_0019936c;
              }
              else {
                local_138 = uVar58;
                local_134 = uVar5;
                if (-1 < (int)param_1) goto LAB_00199340;
LAB_0019807c:
                __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar2);
                uVar58 = local_118;
                uVar5 = local_114;
                if ((param_1 & 0x1f) == 0x1f) goto LAB_0019953c;
              }
LAB_001980a8:
              __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,param_1 & 0x1f);
            }
            else {
              local_150 = param_1 & 0x1f;
              if ((int)param_1 < 0) {
                __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
                if (uVar2 != 0x1f) goto LAB_0019807c;
                local_118 = 0x6f72657a;
                local_114 = 0;
                if (local_150 != 0x1f) goto LAB_001980a8;
LAB_00199b4c:
                local_114 = 0;
                local_118 = 0x6f72657a;
                uVar58 = local_118;
                uVar5 = local_114;
LAB_0019953c:
                local_114 = uVar5;
                local_118 = uVar58;
                local_128 = 0x6f72657a;
                local_124 = 0;
              }
              else {
                __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
                if (uVar2 == 0x1f) {
                  local_118 = 0x6f72657a;
                  local_114 = 0;
                  if (local_150 == 0x1f) goto LAB_00199b4c;
                }
                else {
LAB_00199340:
                  __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar2);
                  uVar58 = local_118;
                  uVar5 = local_114;
                  if ((param_1 & 0x1f) == 0x1f) goto LAB_0019953c;
                }
LAB_0019936c:
                __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,param_1 & 0x1f);
              }
            }
            uVar14 = *(undefined8 *)(add_sub_strs + ((ulong)(param_1 >> 0x1e) & 1) * 8);
            uVar15 = *(undefined8 *)(flag_strs + ((ulong)(param_1 >> 0x1d) & 1) * 8);
            if ((param_1 >> 10 & 0x3f) == 0) goto LAB_00198a88;
          }
          else {
            uVar2 = param_1 >> 0xd;
            local_150 = param_1 >> 10 & 7;
            uVar6 = -iVar7;
            uVar20 = uVar6;
            if ((uVar2 & 7) != 3) {
              uVar20 = 0;
            }
            pcVar18 = *(char **)(ext_reg_option_strs + ((ulong)uVar2 & 7) * 8);
            if (uVar20 == 0) {
              uVar20 = uVar6 ^ 1;
              if ((uVar2 & 7) != 2) {
                uVar20 = 0;
              }
              if (uVar20 != 0) goto LAB_00198b58;
              bVar8 = false;
            }
            else {
LAB_00198b58:
              pcVar18 = "lsl";
              bVar8 = true;
            }
            uVar4 = param_1 >> 0x10 & 0x1f;
            uVar13 = param_1 >> 5 & 0x1f;
            uVar20 = param_1 & 0x1f;
            if ((uVar6 == 0) || ((uVar2 & 3) != 3)) {
              if (uVar4 == 0x1f) goto LAB_00199170;
              __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
LAB_001986c4:
              if (uVar13 == 0x1f) {
                local_118 = CONCAT13(local_118._3_1_,0x7073);
                if (uVar20 == 0x1f) {
LAB_00199804:
LAB_0019948c:
                  local_128 = CONCAT13(local_128._3_1_,0x7073);
                  goto LAB_00198718;
                }
                if (uVar6 != 0) goto LAB_00199150;
              }
              else {
                if (uVar6 != 0) goto LAB_0019912c;
                __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar13);
                if (uVar20 == 0x1f) goto LAB_00199488;
              }
              __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
            }
            else {
              if (uVar4 == 0x1f) {
LAB_00199170:
                local_138 = 0x6f72657a;
                local_134 = 0;
                goto LAB_001986c4;
              }
              __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
              if (uVar13 == 0x1f) {
                local_118 = CONCAT13(local_118._3_1_,0x7073);
                if (uVar20 == 0x1f) goto LAB_00199804;
              }
              else {
LAB_0019912c:
                __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar13);
                if (uVar20 == 0x1f) {
LAB_00199488:
                  goto LAB_0019948c;
                }
              }
LAB_00199150:
              __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
            }
LAB_00198718:
            uVar15 = *(undefined8 *)(flag_strs + ((ulong)(param_1 >> 0x1d) & 1) * 8);
            uVar14 = *(undefined8 *)(add_sub_strs + ((ulong)(param_1 >> 0x1e) & 1) * 8);
            uVar20 = local_150;
            if (local_150 == 0) {
              if (!bVar8) {
                __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, %s, %s %s",uVar14,uVar15,
                              &local_128,&local_118,&local_138,pcVar18);
                goto LAB_00197190;
              }
              goto LAB_00198a88;
            }
          }
          __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, %s, %s, %s #%d",uVar14,uVar15,
                        &local_128,&local_118,&local_138,pcVar18,uVar20);
        }
        else {
          uVar6 = param_1 >> 0x15;
          uVar2 = uVar6 & 0xff;
          if (uVar2 != 0xd0) {
            if (uVar2 == 0xd4) {
              uVar2 = param_1 >> 5 & 0x1f;
              uVar20 = param_1 & 0x1f;
              if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
                uVar58 = 0x6f72657a;
                uVar5 = 0;
                local_138 = 0x6f72657a;
                local_134 = 0;
                if (uVar2 == 0x1f) {
                  local_118 = 0x6f72657a;
                  local_114 = 0;
                  if (uVar20 == 0x1f) goto LAB_00199620;
                  local_138 = uVar58;
                  local_134 = uVar5;
                  if (-1 < (int)param_1) goto LAB_001994e8;
                }
                else {
                  local_138 = uVar58;
                  local_134 = uVar5;
                  if (-1 < (int)param_1) goto LAB_001994c4;
LAB_00198c00:
                  __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar2);
                  uVar58 = local_118;
                  uVar5 = local_114;
                  if (uVar20 == 0x1f) goto LAB_00199620;
                }
LAB_00198c24:
                __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
              }
              else if ((int)param_1 < 0) {
                __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
                if (uVar2 != 0x1f) goto LAB_00198c00;
                local_118 = 0x6f72657a;
                local_114 = 0;
                if (uVar20 != 0x1f) goto LAB_00198c24;
LAB_00199bd0:
                local_114 = 0;
                local_118 = 0x6f72657a;
                uVar58 = local_118;
                uVar5 = local_114;
LAB_00199620:
                local_114 = uVar5;
                local_118 = uVar58;
                local_128 = 0x6f72657a;
                local_124 = 0;
              }
              else {
                __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
                if (uVar2 == 0x1f) {
                  local_118 = 0x6f72657a;
                  local_114 = 0;
                  if (uVar20 == 0x1f) goto LAB_00199bd0;
                }
                else {
LAB_001994c4:
                  __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar2);
                  uVar58 = local_118;
                  uVar5 = local_114;
                  if (uVar20 == 0x1f) goto LAB_00199620;
                }
LAB_001994e8:
                __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
              }
              uVar14 = *(undefined8 *)
                        (csel_op_strs + (ulong)((param_1 >> 0x1e & 1) << 1 | param_1 >> 10 & 1) * 8)
              ;
              puVar11 = *(undefined4 **)(condition_strs + ((ulong)(param_1 >> 0xc) & 0xf) * 8);
LAB_00198c74:
              __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, %s, %s",uVar14,&local_128,
                            &local_118,&local_138,puVar11);
            }
            else {
              if (uVar2 == 0xd6) {
                if ((param_1 >> 0x1e & 1) != 0) {
                  uVar20 = param_1 & 0x1f;
                  if ((param_1 >> 5 & 0x1f) == 0x1f) {
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                    if (uVar20 == 0x1f) goto LAB_00199b58;
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                    if (-1 < (int)param_1) goto LAB_00199888;
LAB_0019922c:
                    __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
                  }
                  else {
                    if ((int)param_1 < 0) {
                      __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
                      if (uVar20 != 0x1f) goto LAB_0019922c;
                    }
                    else {
                      __sprintf_chk(&local_118,1,0x10,&DAT_00227b40);
                      if (uVar20 != 0x1f) {
LAB_00199888:
                        __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
                        goto LAB_00199248;
                      }
                    }
LAB_00199b58:
                    local_128 = 0x6f72657a;
                    local_124 = 0;
                  }
LAB_00199248:
                  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s",
                                *(undefined8 *)(dp1_op_strs + ((ulong)(param_1 >> 10) & 7) * 8),
                                &local_128,&local_118);
                  goto LAB_00197190;
                }
                uVar2 = param_1 >> 5 & 0x1f;
                uVar20 = param_1 & 0x1f;
                if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
                  uVar58 = 0x6f72657a;
                  uVar5 = 0;
                  local_138 = 0x6f72657a;
                  local_134 = 0;
                  if (uVar2 == 0x1f) {
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                    if (uVar20 == 0x1f) goto LAB_00199b78;
                    local_138 = uVar58;
                    local_134 = uVar5;
                    if (-1 < (int)param_1) goto LAB_00199984;
                  }
                  else {
                    local_138 = uVar58;
                    local_134 = uVar5;
                    if (-1 < (int)param_1) goto LAB_00199960;
LAB_00198890:
                    __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar2);
                    uVar58 = local_118;
                    uVar5 = local_114;
                    if (uVar20 == 0x1f) goto LAB_00199b78;
                  }
LAB_001988b4:
                  __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
                }
                else if ((int)param_1 < 0) {
                  __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
                  if (uVar2 != 0x1f) goto LAB_00198890;
                  local_118 = 0x6f72657a;
                  local_114 = 0;
                  if (uVar20 != 0x1f) goto LAB_001988b4;
LAB_00199d00:
                  local_114 = 0;
                  local_118 = 0x6f72657a;
                  uVar58 = local_118;
                  uVar5 = local_114;
LAB_00199b78:
                  local_114 = uVar5;
                  local_118 = uVar58;
                  local_128 = 0x6f72657a;
                  local_124 = 0;
                }
                else {
                  __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
                  if (uVar2 == 0x1f) {
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                    if (uVar20 == 0x1f) goto LAB_00199d00;
                  }
                  else {
LAB_00199960:
                    __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar2);
                    uVar58 = local_118;
                    uVar5 = local_114;
                    if (uVar20 == 0x1f) goto LAB_00199b78;
                  }
LAB_00199984:
                  __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
                }
                uVar14 = *(undefined8 *)(dp2_op_strs + ((ulong)(param_1 >> 10) & 0xf) * 8);
              }
              else {
                if (uVar20 != 0x1b) {
                  if (uVar20 != 10) goto LAB_00197190;
                  uVar4 = param_1 >> 0x10 & 0x1f;
                  uVar13 = param_1 >> 10 & 0x3f;
                  uVar10 = param_1 >> 5 & 0x1f;
                  uVar2 = (param_1 >> 0x1d & 3) << 1 | uVar6 & 1;
                  uVar20 = param_1 & 0x1f;
                  if (uVar4 == 0x1f) {
                    local_138 = 0x6f72657a;
                    local_134 = 0;
                    if (uVar10 == 0x1f) {
                      local_118 = 0x6f72657a;
                      local_114 = 0;
                      if (uVar20 != 0x1f) {
                        uVar57 = 0x6f72657a;
                        uVar5 = 0;
                        if ((int)param_1 < 0) goto LAB_00199060;
                        goto LAB_001997c8;
                      }
                    }
                    else {
                      uVar57 = 0x6f72657a;
                      uVar5 = 0;
                      if (-1 < (int)param_1) goto LAB_001997a8;
LAB_00199040:
                      local_134 = uVar5;
                      local_138 = uVar57;
                      __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar10);
                      uVar57 = local_138;
                      uVar5 = local_134;
                      if (uVar20 != 0x1f) goto LAB_00199060;
                    }
LAB_00199850:
                    local_128 = 0x6f72657a;
                    local_124 = 0;
                  }
                  else if ((int)param_1 < 0) {
                    __sprintf_chk(&local_138,1,0x10,&DAT_00227b38,uVar4);
                    uVar57 = local_138;
                    uVar5 = local_134;
                    if (uVar10 != 0x1f) goto LAB_00199040;
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                    if (uVar20 == 0x1f) goto LAB_00199850;
LAB_00199060:
                    local_134 = uVar5;
                    local_138 = uVar57;
                    __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
                  }
                  else {
                    __sprintf_chk(&local_138,1,0x10,&DAT_00227b40,uVar4);
                    if (uVar10 == 0x1f) {
                      local_118 = 0x6f72657a;
                      local_114 = 0;
                    }
                    else {
LAB_001997a8:
                      __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar10);
                    }
                    if (uVar20 == 0x1f) goto LAB_00199850;
LAB_001997c8:
                    __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
                  }
                  if (uVar13 == 0) {
                    if ((uVar2 == 2) && (uVar10 == 0x1f || uVar4 == 0x1f)) {
                      if (uVar10 == 0x1f) {
                        puVar11 = &local_138;
                      }
                      else {
                        puVar11 = &local_118;
                      }
                      __sprintf_chk(param_2,1,0xffffffffffffffff,"mov %s, %s",&local_128,puVar11);
                    }
                    else {
                      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, %s",
                                    *(undefined8 *)(logical_op_strs + (ulong)uVar2 * 8),&local_128,
                                    &local_118,&local_138);
                    }
                  }
                  else if (uVar2 == 2 && uVar10 == 0x1f) {
                    __sprintf_chk(param_2,1,0xffffffffffffffff,"mov %s, %s, %s #%d",&local_128,
                                  &local_138,*(undefined8 *)(shift_reg_strs + (uVar19 & 3) * 8),
                                  uVar13);
                  }
                  else {
                    __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, %s, %s #%d",
                                  *(undefined8 *)(logical_op_strs + (ulong)uVar2 * 8),&local_128,
                                  &local_118,&local_138,
                                  *(undefined8 *)(shift_reg_strs + (uVar19 & 3) * 8),
                                  CONCAT44(uVar58,param_1 >> 10) & 0xffffffff0000003f);
                  }
                  goto LAB_00197190;
                }
                uVar2 = -iVar7;
                uVar20 = (uVar6 ^ 1) & uVar2;
                uVar19 = (ulong)(param_1 >> 0xf) & 1;
                if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
                  local_138 = 0x6f72657a;
                  local_134 = 0;
                }
                else if (uVar20 == 0) {
                  __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
                }
                else {
                  __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
                }
                uVar4 = param_1 >> 5 & 0x1f;
                if ((param_1 >> 10 & 0x1f) == 0x1f) {
                  local_108 = 0x6f72657a;
                  local_104 = 0;
LAB_00198e54:
                  if (uVar4 == 0x1f) {
LAB_00199660:
                    local_118 = 0x6f72657a;
                    local_114 = 0;
                  }
                  else {
                    if (uVar20 == 0) goto LAB_00199700;
                    __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar4);
                  }
                }
                else {
                  if (uVar2 != 0) {
                    __sprintf_chk(&local_108,1,0x10,&DAT_00227b38);
                    goto LAB_00198e54;
                  }
                  __sprintf_chk(&local_108,1,0x10,&DAT_00227b40);
                  if (uVar4 == 0x1f) goto LAB_00199660;
LAB_00199700:
                  __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar4);
                }
                if ((param_1 & 0x1f) == 0x1f) {
                  local_128 = 0x6f72657a;
                  local_124 = 0;
                  if (uVar2 != 0) goto LAB_00198eb0;
                }
                else if (uVar2 == 0) {
                  __sprintf_chk(&local_128,1,0x10,&DAT_00227b40);
                }
                else {
                  __sprintf_chk(&local_128,1,0x10,&DAT_00227b38);
LAB_00198eb0:
                  uVar19 = (ulong)((uint)uVar19 | (uVar6 & 7) << 1);
                }
                uVar14 = *(undefined8 *)(dp3_op_strs + uVar19 * 8);
                if ((uVar6 & 3) != 2) {
                  puVar11 = &local_108;
                  goto LAB_00198c74;
                }
              }
              __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, %s",uVar14,&local_128,
                            &local_118,&local_138);
            }
            goto LAB_00197190;
          }
          uVar2 = param_1 >> 5 & 0x1f;
          uVar20 = param_1 & 0x1f;
          if ((param_1 >> 0x10 & 0x1f) == 0x1f) {
            uVar58 = 0x6f72657a;
            uVar5 = 0;
            local_138 = 0x6f72657a;
            local_134 = 0;
            if (uVar2 == 0x1f) {
              local_118 = 0x6f72657a;
              local_114 = 0;
              uVar57 = 0x6f72657a;
              uVar9 = 0;
              if (uVar20 == 0x1f) goto LAB_0019955c;
              local_138 = uVar58;
              local_134 = uVar5;
              if (-1 < (int)param_1) goto LAB_001993fc;
            }
            else {
              local_138 = uVar58;
              local_134 = uVar5;
              if (-1 < (int)param_1) goto LAB_001993d8;
LAB_00198a20:
              __sprintf_chk(&local_118,1,0x10,&DAT_00227b38,uVar2);
              uVar57 = local_118;
              uVar9 = local_114;
              if (uVar20 == 0x1f) goto LAB_0019955c;
            }
LAB_00198a44:
            __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
          }
          else if ((int)param_1 < 0) {
            __sprintf_chk(&local_138,1,0x10,&DAT_00227b38);
            if (uVar2 != 0x1f) goto LAB_00198a20;
            local_118 = 0x6f72657a;
            local_114 = 0;
            if (uVar20 != 0x1f) goto LAB_00198a44;
LAB_00199b44:
            local_114 = 0;
            local_118 = 0x6f72657a;
            uVar57 = local_118;
            uVar9 = local_114;
LAB_0019955c:
            local_114 = uVar9;
            local_118 = uVar57;
            local_128 = 0x6f72657a;
            local_124 = 0;
          }
          else {
            __sprintf_chk(&local_138,1,0x10,&DAT_00227b40);
            if (uVar2 == 0x1f) {
              local_118 = 0x6f72657a;
              local_114 = 0;
              if (uVar20 == 0x1f) goto LAB_00199b44;
            }
            else {
LAB_001993d8:
              __sprintf_chk(&local_118,1,0x10,&DAT_00227b40,uVar2);
              uVar57 = local_118;
              uVar9 = local_114;
              if (uVar20 == 0x1f) goto LAB_0019955c;
            }
LAB_001993fc:
            __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
          }
          uVar15 = *(undefined8 *)(flag_strs + ((ulong)(param_1 >> 0x1d) & 1) * 8);
          uVar14 = *(undefined8 *)(adc_sbc_strs + ((ulong)(param_1 >> 0x1e) & 1) * 8);
LAB_00198a88:
          __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, %s, %s",uVar14,uVar15,&local_128,
                        &local_118,&local_138);
        }
        goto LAB_00197190;
      }
      uVar6 = uVar2 & param_1 >> 0x1f;
      uVar4 = param_1 >> 10 & 0x3f;
      uVar20 = uVar2 & 1;
      if ((uVar2 & 1) == 0) {
        uVar13 = 5 - (int)LZCOUNT(~uVar4 << 0x1a);
        uVar10 = 1 << (ulong)(uVar13 & 0x1f);
        uVar4 = uVar4 & uVar10 - 1;
        uVar20 = 0;
        if (uVar10 != 0) {
          uVar20 = 0x40 / uVar10;
        }
        if (uVar4 == 0x3f) {
          uVar16 = 0xffffffffffffffff;
          if (0x40 < uVar10) goto LAB_00198ef0;
LAB_00197c54:
          uVar4 = uVar20;
          if (uVar20 == 0) {
            uVar4 = 1;
          }
          if (uVar20 < 0xb) {
            uVar19 = 0;
            uVar10 = 0;
LAB_00198218:
            uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 << (ulong)(uVar13 & 0x1f)) & 0x3f);
            if (uVar10 + 1 < uVar20) {
              uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 1 << (ulong)(uVar13 & 0x1f)) & 0x3f);
              if (uVar10 + 2 < uVar20) {
                uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 2 << (ulong)(uVar13 & 0x1f)) & 0x3f);
                if (uVar10 + 3 < uVar20) {
                  uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 3 << (ulong)(uVar13 & 0x1f)) & 0x3f)
                  ;
                  if (uVar10 + 4 < uVar20) {
                    uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 4 << (ulong)(uVar13 & 0x1f)) &
                                                0x3f);
                    if (uVar10 + 5 < uVar20) {
                      uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 5 << (ulong)(uVar13 & 0x1f)) &
                                                  0x3f);
                      if (uVar10 + 6 < uVar20) {
                        uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 6 << (ulong)(uVar13 & 0x1f)) &
                                                    0x3f);
                        if (uVar10 + 7 < uVar20) {
                          uVar19 = uVar19 | uVar16 << ((ulong)(uVar10 + 7 << (ulong)(uVar13 & 0x1f))
                                                      & 0x3f);
                          if (uVar10 + 8 < uVar20) {
                            uVar17 = uVar19 | uVar16 << ((ulong)(uVar10 + 8 <<
                                                                (ulong)(uVar13 & 0x1f)) & 0x3f);
                            uVar19 = uVar17 | uVar16 << ((ulong)(uVar10 + 9 <<
                                                                (ulong)(uVar13 & 0x1f)) & 0x3f);
                            if (uVar20 <= uVar10 + 9) {
                              uVar19 = uVar17;
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
          else {
            auVar55._4_4_ = uVar13;
            auVar55._0_4_ = uVar13;
            auVar55._8_4_ = uVar13;
            auVar55._12_4_ = uVar13;
            auVar23._8_8_ = uVar16;
            auVar23._0_8_ = uVar16;
            uVar10 = uVar4 >> 2;
            auVar21 = NEON_sshl(_DAT_0021dca0,auVar55,4);
            auVar24._0_8_ = auVar21._8_8_ & 0xffffffff;
            auVar24._8_8_ = auVar21._8_8_ >> 0x20;
            auVar41._0_8_ = auVar21._0_8_ & 0xffffffff;
            auVar41._8_8_ = auVar21._0_8_ >> 0x20;
            auVar24 = NEON_sshl(auVar23,auVar24,8);
            auVar21 = NEON_sshl(auVar23,auVar41,8);
            auVar22[0] = auVar24[0] | auVar21[0];
            auVar22[1] = auVar24[1] | auVar21[1];
            auVar22[2] = auVar24[2] | auVar21[2];
            auVar22[3] = auVar24[3] | auVar21[3];
            auVar22[4] = auVar24[4] | auVar21[4];
            auVar22[5] = auVar24[5] | auVar21[5];
            auVar22[6] = auVar24[6] | auVar21[6];
            auVar22[7] = auVar24[7] | auVar21[7];
            auVar22[8] = auVar24[8] | auVar21[8];
            auVar22[9] = auVar24[9] | auVar21[9];
            auVar22[10] = auVar24[10] | auVar21[10];
            auVar22[11] = auVar24[11] | auVar21[11];
            auVar22[12] = auVar24[12] | auVar21[12];
            auVar22[13] = auVar24[13] | auVar21[13];
            auVar22[14] = auVar24[14] | auVar21[14];
            auVar22[15] = auVar24[15] | auVar21[15];
            if (uVar10 == 1) {
LAB_001981fc:
              uVar10 = uVar4 & 0xfffffffc;
              auVar21 = NEON_ext(auVar22,ZEXT816(0),8,1);
              uVar19 = CONCAT17(auVar21[7] | auVar22[7],
                                CONCAT16(auVar21[6] | auVar22[6],
                                         CONCAT15(auVar21[5] | auVar22[5],
                                                  CONCAT14(auVar21[4] | auVar22[4],
                                                           CONCAT13(auVar21[3] | auVar22[3],
                                                                    CONCAT12(auVar21[2] | auVar22[2]
                                                                             ,CONCAT11(auVar21[1] |
                                                                                       auVar22[1],
                                                                                       auVar21[0] |
                                                                                       auVar22[0])))
                                                          ))));
              if ((uVar4 & 0xffffff83) != 0) goto LAB_00198218;
            }
            else {
              auVar21 = NEON_sshl(_DAT_00228150,auVar55,4);
              auVar40._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar40._8_8_ = auVar21._8_8_ >> 0x20;
              auVar25._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar25._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar40,8);
              auVar21 = NEON_sshl(auVar23,auVar25,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 2) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228160,auVar55,4);
              auVar42._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar42._8_8_ = auVar21._8_8_ >> 0x20;
              auVar26._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar26._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar42,8);
              auVar21 = NEON_sshl(auVar23,auVar26,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 3) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228170,auVar55,4);
              auVar43._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar43._8_8_ = auVar21._8_8_ >> 0x20;
              auVar27._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar27._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar43,8);
              auVar21 = NEON_sshl(auVar23,auVar27,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 4) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228180,auVar55,4);
              auVar44._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar44._8_8_ = auVar21._8_8_ >> 0x20;
              auVar28._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar28._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar44,8);
              auVar21 = NEON_sshl(auVar23,auVar28,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 5) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228190,auVar55,4);
              auVar45._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar45._8_8_ = auVar21._8_8_ >> 0x20;
              auVar29._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar29._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar45,8);
              auVar21 = NEON_sshl(auVar23,auVar29,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 6) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281a0,auVar55,4);
              auVar46._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar46._8_8_ = auVar21._0_8_ >> 0x20;
              auVar30._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar30._8_8_ = auVar21._8_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar46,8);
              auVar21 = NEON_sshl(auVar23,auVar30,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 7) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281b0,auVar55,4);
              auVar47._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar47._8_8_ = auVar21._0_8_ >> 0x20;
              auVar31._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar31._8_8_ = auVar21._8_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar47,8);
              auVar21 = NEON_sshl(auVar23,auVar31,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 8) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281c0,auVar55,4);
              auVar48._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar48._8_8_ = auVar21._0_8_ >> 0x20;
              auVar32._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar32._8_8_ = auVar21._8_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar48,8);
              auVar21 = NEON_sshl(auVar23,auVar32,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 9) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281d0,auVar55,4);
              auVar49._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar49._8_8_ = auVar21._0_8_ >> 0x20;
              auVar33._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar33._8_8_ = auVar21._8_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar49,8);
              auVar21 = NEON_sshl(auVar23,auVar33,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 10) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281e0,auVar55,4);
              auVar50._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar50._8_8_ = auVar21._8_8_ >> 0x20;
              auVar34._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar34._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar50,8);
              auVar21 = NEON_sshl(auVar23,auVar34,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 0xb) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_002281f0,auVar55,4);
              auVar51._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar51._8_8_ = auVar21._8_8_ >> 0x20;
              auVar35._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar35._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar51,8);
              auVar21 = NEON_sshl(auVar23,auVar35,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 0xc) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228200,auVar55,4);
              auVar52._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar52._8_8_ = auVar21._8_8_ >> 0x20;
              auVar36._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar36._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar52,8);
              auVar21 = NEON_sshl(auVar23,auVar36,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 0xd) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228210,auVar55,4);
              auVar53._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar53._8_8_ = auVar21._8_8_ >> 0x20;
              auVar37._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar37._8_8_ = auVar21._0_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar53,8);
              auVar21 = NEON_sshl(auVar23,auVar37,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 == 0xe) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228220,auVar55,4);
              auVar54._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar54._8_8_ = auVar21._0_8_ >> 0x20;
              auVar38._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar38._8_8_ = auVar21._8_8_ >> 0x20;
              auVar41 = NEON_sshl(auVar23,auVar54,8);
              auVar21 = NEON_sshl(auVar23,auVar38,8);
              auVar22[0] = auVar22[0] | auVar41[0] | auVar21[0];
              auVar22[1] = auVar22[1] | auVar41[1] | auVar21[1];
              auVar22[2] = auVar22[2] | auVar41[2] | auVar21[2];
              auVar22[3] = auVar22[3] | auVar41[3] | auVar21[3];
              auVar22[4] = auVar22[4] | auVar41[4] | auVar21[4];
              auVar22[5] = auVar22[5] | auVar41[5] | auVar21[5];
              auVar22[6] = auVar22[6] | auVar41[6] | auVar21[6];
              auVar22[7] = auVar22[7] | auVar41[7] | auVar21[7];
              auVar22[8] = auVar22[8] | auVar41[8] | auVar21[8];
              auVar22[9] = auVar22[9] | auVar41[9] | auVar21[9];
              auVar22[10] = auVar22[10] | auVar41[10] | auVar21[10];
              auVar22[11] = auVar22[11] | auVar41[11] | auVar21[11];
              auVar22[12] = auVar22[12] | auVar41[12] | auVar21[12];
              auVar22[13] = auVar22[13] | auVar41[13] | auVar21[13];
              auVar22[14] = auVar22[14] | auVar41[14] | auVar21[14];
              auVar22[15] = auVar22[15] | auVar41[15] | auVar21[15];
              if (uVar10 != 0x10) goto LAB_001981fc;
              auVar21 = NEON_sshl(_DAT_00228230,auVar55,4);
              auVar39._0_8_ = auVar21._8_8_ & 0xffffffff;
              auVar39._8_8_ = auVar21._8_8_ >> 0x20;
              auVar56._0_8_ = auVar21._0_8_ & 0xffffffff;
              auVar56._8_8_ = auVar21._0_8_ >> 0x20;
              auVar24 = NEON_sshl(auVar23,auVar39,8);
              auVar41 = NEON_sshl(auVar23,auVar56,8);
              auVar21[0] = auVar24[0] | auVar41[0] | auVar22[0];
              auVar21[1] = auVar24[1] | auVar41[1] | auVar22[1];
              auVar21[2] = auVar24[2] | auVar41[2] | auVar22[2];
              auVar21[3] = auVar24[3] | auVar41[3] | auVar22[3];
              auVar21[4] = auVar24[4] | auVar41[4] | auVar22[4];
              auVar21[5] = auVar24[5] | auVar41[5] | auVar22[5];
              auVar21[6] = auVar24[6] | auVar41[6] | auVar22[6];
              auVar21[7] = auVar24[7] | auVar41[7] | auVar22[7];
              auVar21[8] = auVar24[8] | auVar41[8] | auVar22[8];
              auVar21[9] = auVar24[9] | auVar41[9] | auVar22[9];
              auVar21[10] = auVar24[10] | auVar41[10] | auVar22[10];
              auVar21[11] = auVar24[11] | auVar41[11] | auVar22[11];
              auVar21[12] = auVar24[12] | auVar41[12] | auVar22[12];
              auVar21[13] = auVar24[13] | auVar41[13] | auVar22[13];
              auVar21[14] = auVar24[14] | auVar41[14] | auVar22[14];
              auVar21[15] = auVar24[15] | auVar41[15] | auVar22[15];
              auVar41 = NEON_ext(auVar21,ZEXT816(0),8,1);
              uVar19 = CONCAT17(auVar41[7] | auVar21[7],
                                CONCAT16(auVar41[6] | auVar21[6],
                                         CONCAT15(auVar41[5] | auVar21[5],
                                                  CONCAT14(auVar41[4] | auVar21[4],
                                                           CONCAT13(auVar41[3] | auVar21[3],
                                                                    CONCAT12(auVar41[2] | auVar21[2]
                                                                             ,CONCAT11(auVar41[1] |
                                                                                       auVar21[1],
                                                                                       auVar41[0] |
                                                                                       auVar21[0])))
                                                          ))));
            }
          }
          if ((uVar2 & 1) != 0) goto LAB_00197f3c;
        }
        else {
          uVar3 = uVar10 - 1 & param_1 >> 0x10 & 0x3f;
          uVar19 = (ulong)((1 << (ulong)(uVar4 + 1 & 0x1f)) + -1);
          uVar16 = uVar19 >> uVar3 | uVar19 << ((ulong)(uVar10 - uVar3) & 0x3f);
          if (uVar10 < 0x41) goto LAB_00197c54;
LAB_00198ef0:
          uVar19 = 0;
        }
        uVar19 = uVar19 & 0xffffffff;
      }
      else {
        uVar19 = 0xffffffffffffffff;
        if (uVar4 != 0x3f) {
          uVar16 = (ulong)(param_1 >> 0x10) & 0x3f;
          uVar19 = (ulong)((1 << (ulong)(uVar4 + 1 & 0x1f)) + -1);
          uVar16 = uVar19 >> uVar16 | uVar19 << 0x40 - uVar16;
          uVar13 = 6;
          goto LAB_00197c54;
        }
      }
LAB_00197f3c:
      uVar20 = param_1 & 0x1f;
      if ((param_1 >> 5 & 0x1f) == 0x1f) {
        local_118 = 0x6f72657a;
        local_114 = 0;
        if (uVar20 == 0x1f) goto LAB_00198b1c;
        uVar58 = 0x6f72657a;
        uVar5 = 0;
        if (uVar6 == 0) goto LAB_00198adc;
LAB_00197f74:
        local_114 = uVar5;
        local_118 = uVar58;
        __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
      }
      else {
        if (uVar6 == 0) {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b40);
          if (uVar20 != 0x1f) {
LAB_00198adc:
            __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
            goto LAB_00197f90;
          }
        }
        else {
          __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
          uVar58 = local_118;
          uVar5 = local_114;
          if (uVar20 != 0x1f) goto LAB_00197f74;
        }
LAB_00198b1c:
        local_128 = 0x6f72657a;
        local_124 = 0;
      }
LAB_00197f90:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, #0x%llx",
                    *(undefined8 *)(logical_op_strs + ((ulong)(param_1 >> 0x1d) & 3) * 0x10),
                    &local_128,&local_118,uVar19);
      goto LAB_00197190;
    }
    uVar2 = uVar2 & param_1 >> 0x1f;
    uVar13 = param_1 >> 0x10 & 0x3f;
    uVar6 = param_1 >> 10 & 0x3f;
    uVar4 = param_1 >> 0x1d & 3;
    uVar20 = param_1 & 0x1f;
    if ((param_1 >> 5 & 0x1f) == 0x1f) {
      local_118 = 0x6f72657a;
      local_114 = 0;
      if (uVar20 == 0x1f) goto LAB_00198418;
      uVar58 = 0x6f72657a;
      uVar5 = 0;
      if (uVar2 == 0) goto LAB_001983d8;
LAB_00197a9c:
      local_114 = uVar5;
      local_118 = uVar58;
      __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
    }
    else {
      if (uVar2 == 0) {
        __sprintf_chk(&local_118,1,0x10,&DAT_00227b40);
        if (uVar20 != 0x1f) {
LAB_001983d8:
          __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
          goto LAB_00197ab8;
        }
      }
      else {
        __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
        uVar58 = local_118;
        uVar5 = local_114;
        if (uVar20 != 0x1f) goto LAB_00197a9c;
      }
LAB_00198418:
      local_128 = 0x6f72657a;
      local_124 = 0;
    }
LAB_00197ab8:
    if (uVar6 < uVar13 && uVar4 == 1) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"bfm %s, %s, #%d, #%d",&local_128,&local_118,
                    (uVar2 << 5 | 0x1f) & -uVar13,uVar6 - 1);
    }
    else {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, #%d, #%d",
                    *(undefined8 *)(bitfield_op_strs + (ulong)uVar4 * 8),&local_128,&local_118,
                    uVar13,CONCAT44(uVar57,param_1 >> 10) & 0xffffffff0000003f);
    }
    goto LAB_00197190;
  }
  uVar20 = param_1 & 0x1f;
  if ((param_1 >> 5 & 0x1f) == 0x1f) {
    local_118 = CONCAT13(local_118._3_1_,0x7073);
    if (uVar20 == 0x1f) goto LAB_00198390;
    if (-1 < (int)param_1) goto LAB_00198350;
LAB_001979e4:
    __sprintf_chk(&local_128,1,0x10,&DAT_00227b38,uVar20);
  }
  else {
    if ((int)param_1 < 0) {
      __sprintf_chk(&local_118,1,0x10,&DAT_00227b38);
      if (uVar20 != 0x1f) goto LAB_001979e4;
    }
    else {
      __sprintf_chk(&local_118,1,0x10,&DAT_00227b40);
      if (uVar20 != 0x1f) {
LAB_00198350:
        __sprintf_chk(&local_128,1,0x10,&DAT_00227b40,uVar20);
        goto LAB_00197a00;
      }
    }
LAB_00198390:
    local_128 = CONCAT13(local_128._3_1_,0x7073);
  }
LAB_00197a00:
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s %s, %s, #%x",
                *(undefined8 *)(add_sub_strs + ((ulong)(param_1 >> 0x1e) & 1) * 8),
                *(undefined8 *)(flag_strs + ((ulong)(param_1 >> 0x1d) & 1) * 8),&local_128,
                &local_118,CONCAT44(uVar57,(param_1 >> 10 & 0xfff) << (ulong)((uVar2 & 1) * 0xc)));
LAB_00197190:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


