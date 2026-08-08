/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed_multi_cycles
 * Address  : 0808360c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 queue_geometry_command_packed_multi_cycles
              (geometry_struct *geometry,u32 *packed_command_ptr,u32 packed_words)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  s32 *psVar4;
  undefined8 *puVar5;
  u32 *puVar6;
  int iVar7;
  uint uVar8;
  u32 command;
  u32 packed_command_d;
  s32 *psVar9;
  u32 uVar10;
  uint uVar11;
  u32 incoming_parameters_remaining;
  u8 *puVar12;
  u32 parameter_count;
  u32 packed_command_b;
  u32 *puVar13;
  s32 *psVar14;
  s32 *parameter_store_ptr;
  uint uVar15;
  u32 packed_command_a;
  uint uVar16;
  uint uVar17;
  u8 *command_store_ptr;
  u8 *puVar18;
  u8 *puVar19;
  uint in_lr;
  uint uVar20;
  uint uVar21;
  u32 packed_command_c;
  undefined8 uVar22;
  undefined8 uVar23;
  u8 *command_store_ptr_base;
  u32 local_60;
  u8 *local_5c;
  
  psVar14 = geometry->parameter_store_ptr_advance;
  local_5c = geometry->command_store_ptr_advance;
  bVar1 = geometry->incoming_parameters_remaining;
  uVar11 = (uint)bVar1;
  if (uVar11 == 0) goto LAB_08083794;
  if (packed_words < uVar11) {
    if (packed_words != 0) {
      if (packed_words < 9 || packed_command_ptr < psVar14 + 4 && psVar14 < packed_command_ptr + 4)
      {
        puVar6 = packed_command_ptr + -1;
        uVar10 = 0;
        psVar4 = psVar14;
        do {
          puVar6 = puVar6 + 1;
          uVar10 = uVar10 + 1;
          *psVar4 = *puVar6;
          psVar4 = psVar4 + 1;
        } while (packed_words != uVar10);
      }
      else {
        uVar11 = ((int)packed_command_ptr << 0x1d) >> 0x1f & 3;
        if (packed_words <= uVar11) {
          uVar11 = packed_words;
        }
        psVar4 = psVar14;
        uVar10 = uVar11;
        puVar6 = packed_command_ptr;
        if (uVar11 != 0) {
          *psVar14 = *packed_command_ptr;
          psVar4 = psVar14 + 1;
          puVar6 = packed_command_ptr + 1;
          if (uVar11 != 1) {
            psVar14[1] = packed_command_ptr[1];
            if (uVar11 == 3) {
              psVar14[2] = packed_command_ptr[2];
              psVar4 = psVar14 + 3;
              puVar6 = packed_command_ptr + 3;
            }
            else {
              psVar4 = psVar14 + 2;
              uVar10 = 2;
              puVar6 = packed_command_ptr + 2;
            }
          }
        }
        puVar5 = (undefined8 *)(packed_command_ptr + uVar11);
        uVar15 = 0;
        uVar20 = ((packed_words - uVar11) - 4 >> 2) + 1;
        psVar9 = psVar14 + uVar11;
        do {
          uVar22 = *puVar5;
          uVar23 = puVar5[1];
          uVar15 = uVar15 + 1;
          puVar5 = puVar5 + 2;
          *(undefined8 *)psVar9 = uVar22;
          *(undefined8 *)(psVar9 + 2) = uVar23;
          psVar9 = psVar9 + 4;
        } while (uVar15 < uVar20);
        iVar7 = uVar20 * 4 + uVar10;
        if (((uVar20 * 4 - (packed_words - uVar11) != 0) &&
            (psVar4[uVar20 * 4] = puVar6[uVar20 * 4], iVar7 + 1U < packed_words)) &&
           (psVar4[uVar20 * 4 + 1] = puVar6[uVar20 * 4 + 1], iVar7 + 2U < packed_words)) {
          psVar4[uVar20 * 4 + 2] = puVar6[uVar20 * 4 + 2];
        }
      }
      psVar14 = psVar14 + packed_words;
    }
    geometry->parameter_store_ptr_advance = psVar14;
    geometry->incoming_parameters_remaining = bVar1 - (char)packed_words;
    return 0;
  }
  if (uVar11 < 9 || psVar14 < packed_command_ptr + 4 && packed_command_ptr < psVar14 + 4) {
    puVar6 = packed_command_ptr + -1;
    uVar15 = 0;
    psVar4 = psVar14;
    do {
      puVar6 = puVar6 + 1;
      uVar15 = uVar15 + 1;
      *psVar4 = *puVar6;
      psVar4 = psVar4 + 1;
    } while (uVar11 != uVar15);
  }
  else {
    uVar15 = ((int)packed_command_ptr << 0x1d) >> 0x1f & 3;
    if (uVar11 <= uVar15) {
      uVar15 = uVar11;
    }
    psVar4 = psVar14;
    puVar6 = packed_command_ptr;
    uVar20 = uVar15;
    if (uVar15 != 0) {
      puVar6 = packed_command_ptr + 1;
      if (uVar15 == 1) {
        in_lr = uVar15;
      }
      psVar4 = psVar14 + 1;
      *psVar14 = *packed_command_ptr;
      if (uVar15 != 1) {
        psVar4 = psVar14 + 2;
        puVar6 = packed_command_ptr + 2;
        if (uVar15 != 3) {
          in_lr = 2;
        }
        psVar14[1] = packed_command_ptr[1];
        if (uVar15 == 3) {
          psVar4 = psVar14 + 3;
          puVar6 = packed_command_ptr + 3;
          psVar14[2] = packed_command_ptr[2];
          in_lr = uVar15;
        }
      }
      uVar20 = in_lr;
      if (uVar11 == uVar15) goto LAB_08083be0;
    }
    uVar8 = ((uVar11 - uVar15) - 4 >> 2) + 1;
    if (2 < (uVar11 - 1) - uVar15) {
      uVar16 = 0;
      puVar5 = (undefined8 *)(packed_command_ptr + uVar15);
      psVar9 = psVar14 + uVar15;
      do {
        uVar22 = *puVar5;
        uVar23 = puVar5[1];
        uVar16 = uVar16 + 1;
        puVar5 = puVar5 + 2;
        *(undefined8 *)psVar9 = uVar22;
        *(undefined8 *)(psVar9 + 2) = uVar23;
        psVar9 = psVar9 + 4;
      } while (uVar16 < uVar8);
      uVar20 = uVar20 + uVar8 * 4;
      puVar6 = puVar6 + uVar8 * 4;
      psVar4 = psVar4 + uVar8 * 4;
      if (uVar11 - uVar15 == uVar8 * 4) goto LAB_08083be0;
    }
    *psVar4 = *puVar6;
    if ((uVar20 + 1 < uVar11) && (psVar4[1] = puVar6[1], uVar20 + 2 < uVar11)) {
      psVar4[2] = puVar6[2];
    }
  }
LAB_08083be0:
  packed_words = packed_words - uVar11;
  psVar14 = psVar14 + uVar11;
  packed_command_ptr = packed_command_ptr + uVar11;
  if (packed_words == 0) {
    geometry->command_store_ptr = local_5c;
    geometry->parameter_store_ptr = psVar14;
    geometry->parameter_store_ptr_advance = psVar14;
    geometry->incoming_parameters_remaining = '\0';
    return 0;
  }
LAB_08083794:
  puVar12 = geometry->commands;
  command_store_ptr_base = local_5c + -(int)puVar12;
  local_60 = 0;
  do {
    while( true ) {
      uVar11 = *packed_command_ptr;
      uVar8 = packed_words - 1;
      uVar16 = uVar11 & 0x7f;
      uVar20 = (uVar11 << 0x11) >> 0x19;
      uVar21 = (uVar11 << 9) >> 0x19;
      uVar15 = (uVar11 << 1) >> 0x19;
      bVar1 = ""[uVar20];
      bVar2 = ""[uVar21];
      bVar3 = ""[uVar15];
      uVar17 = (uint)""[uVar16];
      local_60 = (uint)geometry_command_cycles[uVar15] +
                 (uint)geometry_command_cycles[uVar21] +
                 (uint)geometry_command_cycles[uVar16] + (uint)geometry_command_cycles[uVar20] +
                 local_60;
      puVar6 = packed_command_ptr + 1;
      puVar18 = local_5c;
      if (uVar16 != 0) {
        puVar18 = local_5c + 1;
        *local_5c = (byte)uVar16;
      }
      puVar19 = puVar18;
      if (uVar20 != 0) {
        puVar19 = puVar18 + 1;
        *puVar18 = (byte)((uVar11 << 0x11) >> 0x19);
      }
      uVar20 = (uint)bVar3 + (uint)bVar1 + (uint)bVar2 + uVar17;
      puVar18 = puVar19;
      if (uVar21 != 0) {
        puVar18 = puVar19 + 1;
        *puVar19 = (byte)((uVar11 << 9) >> 0x19);
      }
      puVar19 = puVar18;
      if (uVar15 != 0) {
        puVar19 = puVar18 + 1;
        *puVar18 = (byte)((uVar11 << 1) >> 0x19);
      }
      if (uVar8 < uVar20) {
        geometry->parameter_store_ptr = psVar14;
        if (uVar8 != 0) {
          if (uVar8 < 9 || psVar14 < packed_command_ptr + 5 && puVar6 < psVar14 + 4) {
            uVar11 = 0;
            psVar4 = psVar14;
            do {
              packed_command_ptr = packed_command_ptr + 1;
              uVar11 = uVar11 + 1;
              *psVar4 = *packed_command_ptr;
              psVar4 = psVar4 + 1;
            } while (uVar8 != uVar11);
          }
          else {
            uVar11 = (int)puVar6 * 0x20000000 >> 0x1f & 3;
            if (uVar8 <= uVar11) {
              uVar11 = uVar8;
            }
            puVar13 = puVar6;
            uVar15 = uVar11;
            psVar4 = psVar14;
            if (uVar11 != 0) {
              *psVar14 = packed_command_ptr[1];
              puVar13 = packed_command_ptr + 2;
              psVar4 = psVar14 + 1;
              if (uVar11 != 1) {
                if (uVar11 != 3) {
                  uVar17 = 2;
                }
                psVar14[1] = packed_command_ptr[2];
                puVar13 = packed_command_ptr + 3;
                uVar15 = uVar17;
                psVar4 = psVar14 + 2;
                if (uVar11 == 3) {
                  psVar14[2] = packed_command_ptr[3];
                  puVar13 = packed_command_ptr + 4;
                  uVar15 = uVar11;
                  psVar4 = psVar14 + 3;
                }
              }
            }
            puVar5 = (undefined8 *)(puVar6 + uVar11);
            uVar17 = 0;
            uVar16 = ((uVar8 - uVar11) - 4 >> 2) + 1;
            psVar9 = psVar14 + uVar11;
            do {
              uVar22 = *puVar5;
              uVar23 = puVar5[1];
              uVar17 = uVar17 + 1;
              puVar5 = puVar5 + 2;
              *(undefined8 *)psVar9 = uVar22;
              *(undefined8 *)(psVar9 + 2) = uVar23;
              psVar9 = psVar9 + 4;
            } while (uVar17 < uVar16);
            iVar7 = uVar16 * 4 + uVar15;
            if (((uVar16 * 4 - (uVar8 - uVar11) != 0) &&
                (psVar4[uVar16 * 4] = puVar13[uVar16 * 4], iVar7 + 1U < uVar8)) &&
               (psVar4[uVar16 * 4 + 1] = puVar13[uVar16 * 4 + 1], iVar7 + 2U < uVar8)) {
              psVar4[uVar16 * 4 + 2] = puVar13[uVar16 * 4 + 2];
            }
          }
          psVar14 = psVar14 + uVar8;
        }
        geometry->command_store_ptr = local_5c;
        geometry->command_store_ptr_advance = puVar19;
        geometry->parameter_store_ptr_advance = psVar14;
        geometry->incoming_parameters_remaining = (char)uVar20 - (char)uVar8;
        return local_60;
      }
      if (uVar20 != 0) {
        if (uVar20 < 9 || puVar6 < psVar14 + 4 && psVar14 < packed_command_ptr + 5) {
          psVar4 = psVar14;
          do {
            packed_command_ptr = packed_command_ptr + 1;
            psVar9 = psVar4 + 1;
            *psVar4 = *packed_command_ptr;
            psVar4 = psVar9;
          } while (psVar9 != psVar14 + uVar20);
        }
        else {
          uVar11 = (int)puVar6 * 0x20000000 >> 0x1f & 3;
          if (uVar20 <= uVar11) {
            uVar11 = uVar20;
          }
          psVar4 = psVar14;
          puVar13 = puVar6;
          local_5c = (u8 *)uVar11;
          if (uVar11 != 0) {
            *psVar14 = packed_command_ptr[1];
            psVar4 = psVar14 + 1;
            puVar13 = packed_command_ptr + 2;
            if (uVar11 != 1) {
              psVar14[1] = packed_command_ptr[2];
              if (uVar11 == 3) {
                psVar14[2] = packed_command_ptr[3];
                psVar4 = psVar14 + 3;
                puVar13 = packed_command_ptr + 4;
              }
              else {
                local_5c = (u8 *)0x2;
                psVar4 = psVar14 + 2;
                puVar13 = packed_command_ptr + 3;
              }
            }
          }
          uVar15 = ((uVar20 - uVar11) - 4 >> 2) + 1;
          puVar5 = (undefined8 *)(packed_command_ptr + uVar11 + 1);
          psVar9 = psVar14 + uVar11;
          uVar11 = 0;
          do {
            uVar22 = *puVar5;
            uVar23 = puVar5[1];
            uVar11 = uVar11 + 1;
            puVar5 = puVar5 + 2;
            *(undefined8 *)psVar9 = uVar22;
            *(undefined8 *)(psVar9 + 2) = uVar23;
            psVar9 = psVar9 + 4;
          } while (uVar11 < uVar15);
          iVar7 = (int)local_5c + uVar15 * 4;
          if (((uVar20 - uVar11 != uVar15 * 4) &&
              (psVar4[uVar15 * 4] = puVar13[uVar15 * 4], iVar7 + 1U < uVar20)) &&
             (psVar4[uVar15 * 4 + 1] = puVar13[uVar15 * 4 + 1], iVar7 + 2U < uVar20)) {
            psVar4[uVar15 * 4 + 2] = puVar13[uVar15 * 4 + 2];
          }
        }
        psVar14 = psVar14 + uVar20;
        puVar6 = puVar6 + uVar20;
      }
      packed_words = uVar8 - uVar20;
      command_store_ptr_base = command_store_ptr_base + 1;
      packed_command_ptr = puVar6;
      if ((u8 *)0x3ff < command_store_ptr_base) break;
      local_5c = puVar19;
      if (packed_words == 0) goto LAB_08083a34;
    }
    geometry->command_store_ptr = (u8 *)(int)CONCAT44(psVar14,puVar19);
    geometry->parameter_store_ptr = (s32 *)(int)(CONCAT44(psVar14,puVar19) >> 0x20);
    geometry->command_store_ptr_advance = (u8 *)(int)CONCAT44(psVar14,puVar19);
    geometry->parameter_store_ptr_advance = (s32 *)(int)(CONCAT44(psVar14,puVar19) >> 0x20);
    process_geometry(geometry);
    command_store_ptr_base = (u8 *)0x0;
    psVar14 = geometry->parameters;
    local_5c = puVar12;
  } while (packed_words != 0);
LAB_08083a34:
  geometry->command_store_ptr = (u8 *)(int)CONCAT44(psVar14,local_5c);
  geometry->parameter_store_ptr = (s32 *)(int)(CONCAT44(psVar14,local_5c) >> 0x20);
  geometry->command_store_ptr_advance = (u8 *)(int)CONCAT44(psVar14,local_5c);
  geometry->parameter_store_ptr_advance = (s32 *)(int)(CONCAT44(psVar14,local_5c) >> 0x20);
  geometry->incoming_parameters_remaining = (u8)packed_words;
  return local_60;
}


