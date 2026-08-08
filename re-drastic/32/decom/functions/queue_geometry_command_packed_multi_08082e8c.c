/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed_multi
 * Address  : 08082e8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void queue_geometry_command_packed_multi
               (geometry_struct *geometry,u32 *packed_command_ptr,u32 packed_words)

{
  byte bVar1;
  u32 packed_command_c;
  s32 *psVar2;
  int iVar3;
  u32 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  s32 *psVar7;
  u32 command;
  u32 packed_command_d;
  u32 uVar8;
  u32 *puVar9;
  uint uVar10;
  u32 incoming_parameters_remaining;
  u8 *puVar11;
  u32 parameter_count;
  u32 *puVar12;
  u32 *puVar13;
  uint unaff_r5;
  uint uVar14;
  u32 packed_command_b;
  u32 *puVar15;
  uint uVar16;
  u32 packed_command_a;
  u8 *puVar17;
  u8 *command_store_ptr;
  uint uVar18;
  u8 *command_store_ptr_base;
  u32 *puVar19;
  uint uVar20;
  s32 *psVar21;
  s32 *parameter_store_ptr;
  u8 *puVar22;
  u8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  u32 *local_60;
  
  psVar21 = geometry->parameter_store_ptr_advance;
  puVar17 = geometry->command_store_ptr_advance;
  bVar1 = geometry->incoming_parameters_remaining;
  uVar10 = (uint)bVar1;
  if (uVar10 == 0) goto LAB_08083008;
  if (packed_words < uVar10) {
    if (packed_words != 0) {
      if (packed_words < 9 || packed_command_ptr < psVar21 + 4 && psVar21 < packed_command_ptr + 4)
      {
        puVar12 = packed_command_ptr + -1;
        uVar8 = 0;
        psVar2 = psVar21;
        do {
          puVar12 = puVar12 + 1;
          uVar8 = uVar8 + 1;
          *psVar2 = *puVar12;
          psVar2 = psVar2 + 1;
        } while (packed_words != uVar8);
      }
      else {
        uVar10 = ((int)packed_command_ptr << 0x1d) >> 0x1f & 3;
        if (packed_words <= uVar10) {
          uVar10 = packed_words;
        }
        psVar2 = psVar21;
        uVar8 = uVar10;
        puVar12 = packed_command_ptr;
        if (uVar10 != 0) {
          *psVar21 = *packed_command_ptr;
          psVar2 = psVar21 + 1;
          puVar12 = packed_command_ptr + 1;
          if (uVar10 != 1) {
            psVar21[1] = packed_command_ptr[1];
            if (uVar10 == 3) {
              psVar21[2] = packed_command_ptr[2];
              psVar2 = psVar21 + 3;
              puVar12 = packed_command_ptr + 3;
            }
            else {
              psVar2 = psVar21 + 2;
              uVar8 = 2;
              puVar12 = packed_command_ptr + 2;
            }
          }
        }
        puVar5 = (undefined8 *)(packed_command_ptr + uVar10);
        uVar18 = 0;
        uVar14 = ((packed_words - uVar10) - 4 >> 2) + 1;
        psVar7 = psVar21 + uVar10;
        do {
          uVar24 = *puVar5;
          uVar25 = puVar5[1];
          uVar18 = uVar18 + 1;
          puVar5 = puVar5 + 2;
          *(undefined8 *)psVar7 = uVar24;
          *(undefined8 *)(psVar7 + 2) = uVar25;
          psVar7 = psVar7 + 4;
        } while (uVar18 < uVar14);
        iVar3 = uVar14 * 4 + uVar8;
        if (((uVar14 * 4 - (packed_words - uVar10) != 0) &&
            (psVar2[uVar14 * 4] = puVar12[uVar14 * 4], iVar3 + 1U < packed_words)) &&
           (psVar2[uVar14 * 4 + 1] = puVar12[uVar14 * 4 + 1], iVar3 + 2U < packed_words)) {
          psVar2[uVar14 * 4 + 2] = puVar12[uVar14 * 4 + 2];
        }
      }
      psVar21 = psVar21 + packed_words;
    }
    geometry->parameter_store_ptr_advance = psVar21;
    geometry->incoming_parameters_remaining = bVar1 - (char)packed_words;
    return;
  }
  if (uVar10 < 9 || psVar21 < packed_command_ptr + 4 && packed_command_ptr < psVar21 + 4) {
    puVar12 = packed_command_ptr + -1;
    uVar14 = 0;
    psVar2 = psVar21;
    do {
      puVar12 = puVar12 + 1;
      uVar14 = uVar14 + 1;
      *psVar2 = *puVar12;
      psVar2 = psVar2 + 1;
    } while (uVar10 != uVar14);
  }
  else {
    uVar14 = ((int)packed_command_ptr << 0x1d) >> 0x1f & 3;
    if (uVar10 <= uVar14) {
      uVar14 = uVar10;
    }
    psVar2 = psVar21;
    uVar18 = uVar14;
    puVar12 = packed_command_ptr;
    if (uVar14 != 0) {
      puVar12 = packed_command_ptr + 1;
      if (uVar14 == 1) {
        unaff_r5 = uVar14;
      }
      psVar2 = psVar21 + 1;
      *psVar21 = *packed_command_ptr;
      if (uVar14 != 1) {
        psVar2 = psVar21 + 2;
        puVar12 = packed_command_ptr + 2;
        if (uVar14 != 3) {
          unaff_r5 = 2;
        }
        psVar21[1] = packed_command_ptr[1];
        if (uVar14 == 3) {
          psVar2 = psVar21 + 3;
          puVar12 = packed_command_ptr + 3;
          psVar21[2] = packed_command_ptr[2];
          unaff_r5 = uVar14;
        }
      }
      uVar18 = unaff_r5;
      if (uVar10 == uVar14) goto LAB_080833f4;
    }
    uVar6 = ((uVar10 - uVar14) - 4 >> 2) + 1;
    if (2 < (uVar10 - 1) - uVar14) {
      uVar20 = 0;
      puVar5 = (undefined8 *)(packed_command_ptr + uVar14);
      psVar7 = psVar21 + uVar14;
      do {
        uVar24 = *puVar5;
        uVar25 = puVar5[1];
        uVar20 = uVar20 + 1;
        puVar5 = puVar5 + 2;
        *(undefined8 *)psVar7 = uVar24;
        *(undefined8 *)(psVar7 + 2) = uVar25;
        psVar7 = psVar7 + 4;
      } while (uVar20 < uVar6);
      uVar18 = uVar18 + uVar6 * 4;
      puVar12 = puVar12 + uVar6 * 4;
      psVar2 = psVar2 + uVar6 * 4;
      if (uVar10 - uVar14 == uVar6 * 4) goto LAB_080833f4;
    }
    *psVar2 = *puVar12;
    if ((uVar18 + 1 < uVar10) && (psVar2[1] = puVar12[1], uVar18 + 2 < uVar10)) {
      psVar2[2] = puVar12[2];
    }
  }
LAB_080833f4:
  packed_words = packed_words - uVar10;
  psVar21 = psVar21 + uVar10;
  packed_command_ptr = packed_command_ptr + uVar10;
  if (packed_words == 0) {
    geometry->command_store_ptr = puVar17;
    geometry->parameter_store_ptr = psVar21;
    geometry->parameter_store_ptr_advance = psVar21;
    geometry->incoming_parameters_remaining = '\0';
    return;
  }
LAB_08083008:
  puVar11 = geometry->commands;
  uVar10 = (int)puVar17 - (int)puVar11;
  do {
    while( true ) {
      uVar18 = *packed_command_ptr;
      puVar19 = (u32 *)(packed_words - 1);
      uVar20 = (uVar18 << 0x11) >> 0x19;
      uVar14 = (uVar18 << 9) >> 0x19;
      uVar16 = uVar18 & 0x7f;
      uVar6 = (uVar18 << 1) >> 0x19;
      puVar12 = (u32 *)((uint)""[uVar6] + (uint)""[uVar20] + (uint)""[uVar14] + (uint)""[uVar16]);
      puVar22 = puVar17;
      if (uVar16 != 0) {
        puVar22 = puVar17 + 1;
        *puVar17 = (byte)uVar16;
      }
      puVar23 = puVar22;
      if (uVar20 != 0) {
        puVar23 = puVar22 + 1;
        *puVar22 = (byte)((uVar18 << 0x11) >> 0x19);
      }
      puVar22 = puVar23;
      if (uVar14 != 0) {
        puVar22 = puVar23 + 1;
        *puVar23 = (byte)((uVar18 << 9) >> 0x19);
      }
      puVar23 = puVar22;
      if (uVar6 != 0) {
        puVar23 = puVar22 + 1;
        *puVar22 = (byte)((uVar18 << 1) >> 0x19);
      }
      puVar9 = packed_command_ptr + 1;
      if (puVar19 < puVar12) {
        geometry->parameter_store_ptr = psVar21;
        if (puVar19 != (u32 *)0x0) {
          if (puVar19 < (u32 *)0x9 || psVar21 < packed_command_ptr + 5 && puVar9 < psVar21 + 4) {
            puVar9 = (u32 *)0x0;
            psVar2 = psVar21;
            do {
              packed_command_ptr = packed_command_ptr + 1;
              puVar9 = (u32 *)((int)puVar9 + 1);
              *psVar2 = *packed_command_ptr;
              psVar2 = psVar2 + 1;
            } while (puVar19 != puVar9);
          }
          else {
            puVar4 = (u32 *)((int)puVar9 * 0x20000000 >> 0x1f & 3);
            if (puVar19 <= puVar4) {
              puVar4 = puVar19;
            }
            puVar13 = puVar4;
            psVar2 = psVar21;
            puVar15 = puVar9;
            if (puVar4 != (u32 *)0x0) {
              *psVar21 = packed_command_ptr[1];
              psVar2 = psVar21 + 1;
              puVar15 = packed_command_ptr + 2;
              if (puVar4 != (u32 *)0x1) {
                puVar13 = packed_command_ptr + 2;
                puVar15 = packed_command_ptr + 3;
                if (puVar4 != (u32 *)0x3) {
                  packed_command_ptr = (u32 *)0x2;
                }
                psVar21[1] = *puVar13;
                puVar13 = packed_command_ptr;
                psVar2 = psVar21 + 2;
                if (puVar4 == (u32 *)0x3) {
                  psVar21[2] = packed_command_ptr[3];
                  puVar13 = puVar4;
                  psVar2 = psVar21 + 3;
                  puVar15 = packed_command_ptr + 4;
                }
              }
            }
            puVar5 = (undefined8 *)(puVar9 + (int)puVar4);
            uVar14 = 0;
            uVar10 = (((int)puVar19 - (int)puVar4) - 4U >> 2) + 1;
            psVar7 = psVar21 + (int)puVar4;
            iVar3 = uVar10 * 4;
            do {
              uVar24 = *puVar5;
              uVar25 = puVar5[1];
              uVar14 = uVar14 + 1;
              puVar5 = puVar5 + 2;
              *(undefined8 *)psVar7 = uVar24;
              *(undefined8 *)(psVar7 + 2) = uVar25;
              psVar7 = psVar7 + 4;
            } while (uVar14 < uVar10);
            if (((iVar3 - ((int)puVar19 - (int)puVar4) != 0) &&
                (psVar2[uVar10 * 4] = puVar15[uVar10 * 4],
                (u32 *)((int)puVar13 + iVar3 + 1) < puVar19)) &&
               (psVar2[uVar10 * 4 + 1] = puVar15[uVar10 * 4 + 1],
               (u32 *)((int)puVar13 + iVar3 + 2) < puVar19)) {
              psVar2[uVar10 * 4 + 2] = puVar15[uVar10 * 4 + 2];
            }
          }
          psVar21 = psVar21 + (int)puVar19;
        }
        geometry->command_store_ptr = puVar17;
        geometry->command_store_ptr_advance = puVar23;
        geometry->parameter_store_ptr_advance = psVar21;
        geometry->incoming_parameters_remaining = (char)puVar12 - (char)puVar19;
        return;
      }
      if (puVar12 != (u32 *)0x0) {
        if (puVar12 < (u32 *)0x9 || psVar21 < packed_command_ptr + 5 && puVar9 < psVar21 + 4) {
          psVar2 = psVar21;
          do {
            packed_command_ptr = packed_command_ptr + 1;
            psVar7 = psVar2 + 1;
            *psVar2 = *packed_command_ptr;
            psVar2 = psVar7;
          } while (psVar7 != psVar21 + (int)puVar12);
        }
        else {
          puVar4 = (u32 *)((int)puVar9 * 0x20000000 >> 0x1f & 3);
          if (puVar12 <= puVar4) {
            puVar4 = puVar12;
          }
          psVar2 = psVar21;
          puVar13 = puVar9;
          local_60 = puVar4;
          if (puVar4 != (u32 *)0x0) {
            *psVar21 = packed_command_ptr[1];
            psVar2 = psVar21 + 1;
            puVar13 = packed_command_ptr + 2;
            if (puVar4 != (u32 *)0x1) {
              psVar21[1] = packed_command_ptr[2];
              if (puVar4 == (u32 *)0x3) {
                psVar21[2] = packed_command_ptr[3];
                psVar2 = psVar21 + 3;
                puVar13 = packed_command_ptr + 4;
              }
              else {
                local_60 = (u32 *)0x2;
                psVar2 = psVar21 + 2;
                puVar13 = packed_command_ptr + 3;
              }
            }
          }
          puVar5 = (undefined8 *)(packed_command_ptr + (int)puVar4 + 1);
          uVar14 = (((int)puVar12 - (int)puVar4) - 4U >> 2) + 1;
          psVar7 = psVar21 + (int)puVar4;
          iVar3 = uVar14 * 4;
          uVar18 = 0;
          do {
            uVar24 = *puVar5;
            uVar25 = puVar5[1];
            uVar18 = uVar18 + 1;
            puVar5 = puVar5 + 2;
            *(undefined8 *)psVar7 = uVar24;
            *(undefined8 *)(psVar7 + 2) = uVar25;
            psVar7 = psVar7 + 4;
          } while (uVar18 < uVar14);
          if ((((int)puVar12 - (int)puVar4 != iVar3) &&
              (psVar2[uVar14 * 4] = puVar13[uVar14 * 4],
              (u32 *)((int)local_60 + iVar3 + 1) < puVar12)) &&
             (psVar2[uVar14 * 4 + 1] = puVar13[uVar14 * 4 + 1],
             (u32 *)((int)local_60 + iVar3 + 2) < puVar12)) {
            psVar2[uVar14 * 4 + 2] = puVar13[uVar14 * 4 + 2];
          }
        }
        psVar21 = psVar21 + (int)puVar12;
        puVar9 = puVar9 + (int)puVar12;
      }
      uVar10 = uVar10 + 1;
      packed_words = (int)puVar19 - (int)puVar12;
      packed_command_ptr = puVar9;
      if (0x3ff < uVar10) break;
      puVar17 = puVar23;
      if (packed_words == 0) goto LAB_0808324c;
    }
    uVar10 = 0;
    geometry->command_store_ptr = (u8 *)(int)CONCAT44(psVar21,puVar23);
    geometry->parameter_store_ptr = (s32 *)(int)(CONCAT44(psVar21,puVar23) >> 0x20);
    geometry->command_store_ptr_advance = (u8 *)(int)CONCAT44(psVar21,puVar23);
    geometry->parameter_store_ptr_advance = (s32 *)(int)(CONCAT44(psVar21,puVar23) >> 0x20);
    process_geometry(geometry);
    puVar17 = puVar11;
    puVar23 = puVar11;
    psVar21 = geometry->parameters;
  } while (packed_words != 0);
LAB_0808324c:
  geometry->command_store_ptr = (u8 *)(int)CONCAT44(psVar21,puVar23);
  geometry->parameter_store_ptr = (s32 *)(int)(CONCAT44(psVar21,puVar23) >> 0x20);
  geometry->command_store_ptr_advance = (u8 *)(int)CONCAT44(psVar21,puVar23);
  geometry->parameter_store_ptr_advance = (s32 *)(int)(CONCAT44(psVar21,puVar23) >> 0x20);
  geometry->incoming_parameters_remaining = (u8)packed_words;
  return;
}


