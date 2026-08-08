/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_32
 * Address  : 08011458
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 load_io_register_arm9_32(memory_struct *memory,u32 address)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  system_struct *psVar4;
  uint uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 rom_control_value;
  system_struct *psVar8;
  cpu_struct *pcVar9;
  cpu_struct *cpu;
  u32 timer_number;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  u32 result;
  u32 root;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  
  if (address == 0x658) goto LAB_08011798;
  if (0x658 < address) {
    if (address != 0x680) {
      if (address < 0x681) {
        if (address != 0x66c) {
          if (address < 0x66d) {
            if (address != 0x660) {
              if (address < 0x661) {
                if (address == 0x65c) goto LAB_08011798;
              }
              else if ((address == 0x664) || (address == 0x668)) goto LAB_08011798;
              goto LAB_08011500;
            }
          }
          else if (address != 0x674) {
            if (address < 0x675) {
              if (address == 0x670) goto LAB_08011798;
            }
            else if ((address == 0x678) || (address == 0x67c)) goto LAB_08011798;
            goto LAB_08011500;
          }
        }
        goto LAB_08011798;
      }
      if (address != 0x694) {
        if (address < 0x695) {
          if (address != 0x688) {
            if (address < 0x689) {
              if (address == 0x684) goto LAB_08011698;
            }
            else if ((address == 0x68c) || (address == 0x690)) goto LAB_08011698;
            goto LAB_08011500;
          }
        }
        else if (address != 0x6a0) {
          if (address < 0x6a1) {
            if ((address == 0x698) || (address == 0x69c)) goto LAB_08011698;
          }
          else {
            if (address == 0x100000) {
              uVar6 = ipc_receive(&memory->ipc_receive_arm9);
              return uVar6;
            }
            if (address == 0x100010) {
              uVar6 = gamecard_read(memory->gamecard);
              return uVar6;
            }
          }
          goto LAB_08011500;
        }
      }
    }
LAB_08011698:
    uVar6 = geometry_load_direction_matrix_element(memory->geometry,address - 0x680 >> 2);
    return uVar6;
  }
  if (address != 0x2ac) {
    if (0x2ac < address) {
      if (address != 0x644) {
        if (address < 0x645) {
          if (address == 0x600) {
            uVar6 = geometry_load_gxstat(memory->geometry);
            return uVar6;
          }
          if (address < 0x601) {
            if ((address == 0x2b4) && (memory->sqrt_result_available == '\0')) {
              uVar3 = *(ushort *)(memory->arm9_io_registers + 0x2b0);
              memory->sqrt_result_available = '\x01';
              if ((uVar3 & 1) == 0) {
                result = *(u32 *)(memory->arm9_io_registers + 0x2b8);
                if (result != 0) {
                  if (result < 0x40000000) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = 0x40000000;
                  }
                  uVar11 = result - uVar5;
                  uVar10 = uVar5 | 0x10000000;
                  bVar18 = uVar11 < uVar10;
                  if (bVar18) {
                    uVar10 = 0;
                  }
                  uVar15 = uVar5 >> 1 | 0x10000000;
                  if (bVar18) {
                    uVar15 = uVar5 >> 1;
                  }
                  uVar12 = uVar15 | 0x4000000;
                  uVar5 = uVar15 >> 1 | 0x4000000;
                  if (uVar11 - uVar10 < uVar12) {
                    uVar12 = 0;
                    uVar5 = uVar15 >> 1;
                  }
                  uVar12 = (uVar11 - uVar10) - uVar12;
                  uVar11 = uVar5 | 0x1000000;
                  uVar10 = uVar5 >> 1 | 0x1000000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 0x400000;
                  uVar5 = uVar10 >> 1 | 0x400000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar5 | 0x100000;
                  uVar10 = uVar5 >> 1 | 0x100000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 0x40000;
                  uVar5 = uVar10 >> 1 | 0x40000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar5 | 0x10000;
                  uVar10 = uVar5 >> 1 | 0x10000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 0x4000;
                  uVar5 = uVar10 >> 1 | 0x4000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar5 | 0x1000;
                  uVar10 = uVar5 >> 1 | 0x1000;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 0x400;
                  uVar5 = uVar10 >> 1 | 0x400;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar5 | 0x100;
                  uVar10 = uVar5 >> 1 | 0x100;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 0x40;
                  uVar5 = uVar10 >> 1 | 0x40;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar5 | 0x10;
                  uVar10 = uVar5 >> 1 | 0x10;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar10 = uVar5 >> 1;
                  }
                  uVar12 = uVar12 - uVar11;
                  uVar11 = uVar10 | 4;
                  uVar5 = uVar10 >> 1 | 4;
                  if (uVar12 < uVar11) {
                    uVar11 = 0;
                    uVar5 = uVar10 >> 1;
                  }
                  result = uVar5 >> 1;
                  if ((uVar5 | 1) <= uVar12 - uVar11) {
                    result = result | 1;
                  }
                }
              }
              else {
                uVar5 = *(uint *)(memory->arm9_io_registers + 0x2b8);
                uVar10 = *(uint *)(memory->arm9_io_registers + 700);
                if ((uVar5 | uVar10) == 0) {
                  result = 0;
                }
                else {
                  result = 0;
                  uVar15 = 0;
                  iVar16 = 0x1f;
                  uVar12 = 0;
                  uVar11 = 0x10000000;
                  do {
                    uVar14 = uVar15 | uVar11;
                    uVar1 = uVar15 >> 1;
                    uVar2 = (uint)((byte)uVar15 & 1) << 0x1f | result >> 1;
                    uVar19 = 0;
                    uVar13 = result | uVar12;
                    bVar18 = uVar10 <= uVar14;
                    if (uVar14 == uVar10) {
                      bVar18 = uVar5 <= uVar13;
                    }
                    result = uVar2 | uVar12;
                    uVar15 = uVar1 | uVar11;
                    if (!bVar18 || uVar14 == uVar10 && uVar13 == uVar5) {
                      uVar19 = CONCAT44(uVar14,uVar13);
                    }
                    uVar12 = uVar12 >> 2 | uVar11 << 0x1e;
                    uVar11 = uVar11 >> 2;
                    uVar19 = VectorSub(CONCAT44(uVar10,uVar5),uVar19,8);
                    bVar18 = uVar10 <= uVar14;
                    bVar17 = uVar14 == uVar10;
                    if (bVar17) {
                      bVar18 = uVar5 <= uVar13;
                    }
                    if (bVar18 && (!bVar17 || uVar13 != uVar5)) {
                      uVar15 = uVar1;
                    }
                    if (bVar18 && (!bVar17 || uVar13 != uVar5)) {
                      result = uVar2;
                    }
                    iVar16 = iVar16 + -1;
                    uVar10 = (uint)((ulonglong)uVar19 >> 0x20);
                    uVar5 = (uint)uVar19;
                  } while (iVar16 != 0);
                }
              }
              *(u32 *)(memory->arm9_io_registers + 0x2b4) = result;
            }
          }
          else {
            if (address == 0x604) {
              uVar6 = geometry_load_polygon_count(memory->geometry);
              uVar7 = geometry_load_vertex_count(memory->geometry);
              return uVar6 | uVar7 << 0x10;
            }
            if (address == 0x640) goto LAB_08011798;
          }
          goto LAB_08011500;
        }
        if (address != 0x64c) {
          if (address < 0x64d) {
            if (address == 0x648) goto LAB_08011798;
          }
          else if ((address == 0x650) || (address == 0x654)) goto LAB_08011798;
          goto LAB_08011500;
        }
      }
LAB_08011798:
      uVar6 = geometry_load_clip_matrix_element(memory->geometry,address - 0x640 >> 2);
      return uVar6;
    }
    if (address == 0x1a4) {
      psVar4 = memory->system;
      uVar15 = (psVar4->cpu_arm9).cycles_remaining;
      uVar11 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
      uVar5 = *(uint *)&psVar4->global_cycles + psVar4->cycles_to_next_event;
      uVar10 = (*(int *)((int)&psVar4->global_cycles + 4) +
               (uint)CARRY4(*(uint *)&psVar4->global_cycles,psVar4->cycles_to_next_event)) -
               (((int)uVar15 >> 0x1f) + (uint)(uVar5 < uVar15));
      bVar18 = uVar11 <= uVar10;
      if (uVar10 == uVar11) {
        bVar18 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar5 - uVar15;
      }
      if (bVar18) {
        return *(uint *)(memory->arm9_io_registers + 0x1a4);
      }
      return *(uint *)(memory->arm9_io_registers + 0x1a4) & 0xff7fffff;
    }
    if (address < 0x1a5) {
      if (address != 0x104) {
        if (address < 0x105) {
          if (address != 0x100) goto LAB_08011500;
        }
        else if ((address != 0x108) && (address != 0x10c)) goto LAB_08011500;
      }
      psVar4 = memory->system;
      uVar5 = address - 0x100 >> 2;
      uVar3 = (psVar4->cpu_arm9).timers[uVar5].control;
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 0x80) == 0) {
          uVar5 = (uint)(psVar4->cpu_arm9).timers[uVar5].reload_value;
        }
        else {
          pcVar9 = (psVar4->cpu_arm9).timers[uVar5].cpu;
          psVar8 = pcVar9->system;
          uVar5 = (uint)(psVar4->cpu_arm9).timers[uVar5].reload_value +
                  (((*(int *)&psVar8->global_cycles + psVar8->cycles_to_next_event) -
                   pcVar9->cycles_remaining) -
                   *(int *)&(psVar4->cpu_arm9).timers[uVar5].reload_timestamp >>
                  (psVar4->cpu_arm9).timers[uVar5].prescale) & 0xffff;
        }
        return *(ushort *)(memory->arm9_io_registers + address + 2) | uVar5;
      }
      goto LAB_08011500;
    }
    if (address != 0x2a0) {
      if (address < 0x2a1) {
        if (address == 0x204) {
          return *(uint *)(memory->arm9_io_registers + 0x204) & 0xe8ff | 0x4000;
        }
        goto LAB_08011500;
      }
      if ((address != 0x2a4) && (address != 0x2a8)) goto LAB_08011500;
    }
  }
  if (memory->divide_result_available == '\0') {
    memory_divide(memory);
  }
LAB_08011500:
  return *(u32 *)(memory->arm9_io_registers + (address & 0x7fff));
}


