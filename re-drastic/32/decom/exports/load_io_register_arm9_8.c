/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_8
 * Address  : 08011b7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 load_io_register_arm9_8(memory_struct *memory,u32 address)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  u32 rom_control_value;
  u32 uVar4;
  s32 sVar5;
  uint uVar6;
  u32 timer_number;
  system_struct *psVar7;
  u32 result;
  u32 root;
  uint uVar8;
  cpu_struct *pcVar9;
  cpu_struct *cpu;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  system_struct *psVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  
  uVar6 = address & 0xfffffffe;
  if (uVar6 == 0x662) goto LAB_08011f04;
  if (0x662 < uVar6) {
    if (uVar6 != 0x686) {
      if (uVar6 < 0x687) {
        if (uVar6 != 0x674) {
          if (uVar6 < 0x675) {
            if (uVar6 != 0x66a) {
              if (uVar6 < 0x66b) {
                if (((uVar6 != 0x666) && (uVar6 != 0x668)) && (uVar6 != 0x664)) goto LAB_08011da4;
              }
              else if (uVar6 != 0x66e) {
                if (uVar6 < 0x66f) {
                  if (uVar6 == 0x66c) goto LAB_08011f04;
                }
                else if ((uVar6 == 0x670) || (uVar6 == 0x672)) goto LAB_08011f04;
                goto LAB_08011da4;
              }
            }
          }
          else if (uVar6 != 0x67c) {
            if (0x67c < uVar6) {
              if (uVar6 != 0x680) {
                if (uVar6 < 0x681) {
                  if (uVar6 == 0x67e) goto LAB_08011f04;
                }
                else if ((uVar6 == 0x682) || (uVar6 == 0x684)) goto LAB_08011fbc;
                goto LAB_08011da4;
              }
              goto LAB_08011fbc;
            }
            if ((uVar6 != 0x678) && ((uVar6 != 0x67a && (uVar6 != 0x676)))) goto LAB_08011da4;
          }
        }
        goto LAB_08011f04;
      }
      if (uVar6 != 0x698) {
        if (uVar6 < 0x699) {
          if (uVar6 != 0x68e) {
            if (uVar6 < 0x68f) {
              if (((uVar6 != 0x68a) && (uVar6 != 0x68c)) && (uVar6 != 0x688)) goto LAB_08011da4;
            }
            else if (uVar6 != 0x692) {
              if (uVar6 < 0x693) {
                if (uVar6 == 0x690) goto LAB_08011fbc;
              }
              else if ((uVar6 == 0x694) || (uVar6 == 0x696)) goto LAB_08011fbc;
              goto LAB_08011da4;
            }
          }
        }
        else if (uVar6 != 0x6a2) {
          if (0x6a2 < uVar6) {
            if (uVar6 == 0x100002) {
LAB_08011ea8:
              uVar4 = ipc_receive(&memory->ipc_receive_arm9);
              uVar6 = uVar4 >> ((address & 2) << 3) & 0xffff;
              goto LAB_08011c44;
            }
            if (uVar6 < 0x100003) {
              if (uVar6 == 0x100000) goto LAB_08011ea8;
            }
            else if ((uVar6 == 0x100010) || (uVar6 == 0x100012)) {
              uVar4 = gamecard_read(memory->gamecard);
              uVar6 = uVar4 >> ((address & 2) << 3) & 0xffff;
              goto LAB_08011c44;
            }
            goto LAB_08011da4;
          }
          if (uVar6 != 0x69c) {
            if (uVar6 < 0x69d) {
              if (uVar6 == 0x69a) goto LAB_08011fbc;
            }
            else if ((uVar6 == 0x69e) || (uVar6 == 0x6a0)) goto LAB_08011fbc;
            goto LAB_08011da4;
          }
        }
      }
    }
LAB_08011fbc:
    sVar5 = geometry_load_direction_matrix_element(memory->geometry,uVar6 - 0x680 >> 2);
    *(s32 *)(memory->arm9_io_registers + (address & 0xfffffffc)) = sVar5;
    goto LAB_08011da4;
  }
  if (uVar6 == 0x604) {
    uVar6 = geometry_load_polygon_count(memory->geometry);
LAB_08011f70:
    uVar6 = uVar6 & 0xffff;
    goto LAB_08011c44;
  }
  if (0x604 < uVar6) {
    if (uVar6 != 0x64e) {
      if (uVar6 < 0x64f) {
        if (uVar6 != 0x644) {
          if (uVar6 < 0x645) {
            if ((uVar6 != 0x640) && (uVar6 != 0x642)) {
              if (uVar6 == 0x606) {
                uVar4 = geometry_load_vertex_count(memory->geometry);
                uVar6 = uVar4 & 0xffff;
                goto LAB_08011c44;
              }
              goto LAB_08011da4;
            }
          }
          else if (uVar6 != 0x648) {
            if (uVar6 < 0x649) {
              if (uVar6 == 0x646) goto LAB_08011f04;
            }
            else if ((uVar6 == 0x64a) || (uVar6 == 0x64c)) goto LAB_08011f04;
            goto LAB_08011da4;
          }
        }
      }
      else if (uVar6 != 0x658) {
        if (uVar6 < 0x659) {
          if (uVar6 != 0x652) {
            if (uVar6 < 0x653) {
              if (uVar6 == 0x650) goto LAB_08011f04;
            }
            else if ((uVar6 == 0x654) || (uVar6 == 0x656)) goto LAB_08011f04;
            goto LAB_08011da4;
          }
        }
        else if (uVar6 != 0x65c) {
          if (uVar6 < 0x65d) {
            if (uVar6 == 0x65a) goto LAB_08011f04;
          }
          else if ((uVar6 == 0x65e) || (uVar6 == 0x660)) goto LAB_08011f04;
          goto LAB_08011da4;
        }
      }
    }
LAB_08011f04:
    sVar5 = geometry_load_clip_matrix_element(memory->geometry,uVar6 - 0x640 >> 2);
    *(s32 *)(memory->arm9_io_registers + (address & 0xfffffffc)) = sVar5;
    goto LAB_08011da4;
  }
  if (uVar6 == 0x2a4) {
LAB_08011f40:
    if (memory->divide_result_available == '\0') {
      memory_divide(memory);
    }
  }
  else {
    if (0x2a4 < uVar6) {
      if (uVar6 != 0x2ac) {
        if (0x2ac < uVar6) {
          if (uVar6 == 0x2b4) {
LAB_08011e40:
            if (memory->sqrt_result_available == '\0') {
              uVar3 = *(ushort *)(memory->arm9_io_registers + 0x2b0);
              memory->sqrt_result_available = '\x01';
              if ((uVar3 & 1) == 0) {
                result = *(u32 *)(memory->arm9_io_registers + 0x2b8);
                if (result != 0) {
                  if (result < 0x40000000) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = 0x40000000;
                  }
                  uVar10 = uVar6 | 0x10000000;
                  uVar8 = uVar6 >> 1 | 0x10000000;
                  if (result - uVar6 < uVar10) {
                    uVar10 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = (result - uVar6) - uVar10;
                  uVar6 = uVar8 | 0x4000000;
                  uVar11 = uVar8 >> 1 | 0x4000000;
                  if (uVar10 < uVar6) {
                    uVar6 = 0;
                    uVar11 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar6;
                  uVar8 = uVar11 | 0x1000000;
                  uVar6 = uVar11 >> 1 | 0x1000000;
                  if (uVar10 < uVar8) {
                    uVar8 = 0;
                    uVar6 = uVar11 >> 1;
                  }
                  uVar10 = uVar10 - uVar8;
                  uVar11 = uVar6 | 0x400000;
                  uVar8 = uVar6 >> 1 | 0x400000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar8 | 0x100000;
                  uVar6 = uVar8 >> 1 | 0x100000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar6 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar6 | 0x40000;
                  uVar8 = uVar6 >> 1 | 0x40000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar8 | 0x10000;
                  uVar6 = uVar8 >> 1 | 0x10000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar6 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar6 | 0x4000;
                  uVar8 = uVar6 >> 1 | 0x4000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar8 | 0x1000;
                  uVar6 = uVar8 >> 1 | 0x1000;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar6 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar6 | 0x400;
                  uVar8 = uVar6 >> 1 | 0x400;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar8 | 0x100;
                  uVar6 = uVar8 >> 1 | 0x100;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar6 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar6 | 0x40;
                  uVar8 = uVar6 >> 1 | 0x40;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar8 | 0x10;
                  uVar6 = uVar8 >> 1 | 0x10;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar6 = uVar8 >> 1;
                  }
                  uVar10 = uVar10 - uVar11;
                  uVar11 = uVar6 | 4;
                  uVar8 = uVar6 >> 1 | 4;
                  if (uVar10 < uVar11) {
                    uVar11 = 0;
                    uVar8 = uVar6 >> 1;
                  }
                  result = uVar8 >> 1;
                  if ((uVar8 | 1) <= uVar10 - uVar11) {
                    result = result | 1;
                  }
                }
              }
              else {
                uVar6 = *(uint *)(memory->arm9_io_registers + 0x2b8);
                uVar8 = *(uint *)(memory->arm9_io_registers + 700);
                result = 0;
                if ((uVar6 | uVar8) != 0) {
                  result = 0;
                  uVar11 = 0;
                  iVar16 = 0x1f;
                  uVar14 = 0;
                  uVar10 = 0x10000000;
                  do {
                    uVar13 = uVar10 | uVar11;
                    uVar12 = uVar14 | result;
                    uVar19 = 0;
                    uVar1 = uVar11 >> 1;
                    uVar2 = (uint)((byte)uVar11 & 1) << 0x1f | result >> 1;
                    bVar18 = uVar8 <= uVar13;
                    if (uVar13 == uVar8) {
                      bVar18 = uVar6 <= uVar12;
                    }
                    result = uVar2 | uVar14;
                    uVar11 = uVar1 | uVar10;
                    if (!bVar18 || uVar13 == uVar8 && uVar12 == uVar6) {
                      uVar19 = CONCAT44(uVar13,uVar12);
                    }
                    uVar14 = uVar14 >> 2 | uVar10 << 0x1e;
                    uVar10 = uVar10 >> 2;
                    uVar19 = VectorSub(CONCAT44(uVar8,uVar6),uVar19,8);
                    bVar18 = uVar8 <= uVar13;
                    bVar17 = uVar13 == uVar8;
                    if (bVar17) {
                      bVar18 = uVar6 <= uVar12;
                    }
                    if (bVar18 && (!bVar17 || uVar12 != uVar6)) {
                      result = uVar2;
                    }
                    if (bVar18 && (!bVar17 || uVar12 != uVar6)) {
                      uVar11 = uVar1;
                    }
                    iVar16 = iVar16 + -1;
                    uVar8 = (uint)((ulonglong)uVar19 >> 0x20);
                    uVar6 = (uint)uVar19;
                  } while (iVar16 != 0);
                }
              }
              *(u32 *)(memory->arm9_io_registers + 0x2b4) = result;
            }
          }
          else if (uVar6 < 0x2b5) {
            if (uVar6 == 0x2ae) goto LAB_08011f40;
          }
          else {
            if (uVar6 == 0x2b6) goto LAB_08011e40;
            if (uVar6 == 0x600) {
              uVar4 = geometry_load_gxstat(memory->geometry);
              uVar6 = uVar4 & 0xffff;
              goto LAB_08011c44;
            }
          }
          goto LAB_08011da4;
        }
        if (((uVar6 != 0x2a8) && (uVar6 != 0x2aa)) && (uVar6 != 0x2a6)) goto LAB_08011da4;
      }
      goto LAB_08011f40;
    }
    if (uVar6 == 0x10c) {
LAB_08011db4:
      psVar15 = memory->system;
      uVar6 = uVar6 - 0x100 >> 2;
      uVar3 = (psVar15->cpu_arm9).timers[uVar6].control;
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 0x80) == 0) {
          uVar6 = (uint)(psVar15->cpu_arm9).timers[uVar6].reload_value;
        }
        else {
          pcVar9 = (psVar15->cpu_arm9).timers[uVar6].cpu;
          psVar7 = pcVar9->system;
          uVar6 = (uint)(psVar15->cpu_arm9).timers[uVar6].reload_value +
                  (((*(int *)&psVar7->global_cycles + psVar7->cycles_to_next_event) -
                   pcVar9->cycles_remaining) -
                   *(int *)&(psVar15->cpu_arm9).timers[uVar6].reload_timestamp >>
                  (psVar15->cpu_arm9).timers[uVar6].prescale) & 0xffff;
        }
        goto LAB_08011f70;
      }
    }
    else if (uVar6 < 0x10d) {
      if (((uVar6 == 0x104) || (uVar6 == 0x108)) || (uVar6 == 0x100)) goto LAB_08011db4;
    }
    else {
      if (uVar6 == 0x204) {
        uVar6 = *(ushort *)(memory->arm9_io_registers + 0x204) & 0xffffe8ff | 0x4000;
        goto LAB_08011c44;
      }
      if (uVar6 < 0x205) {
        if (uVar6 == 0x1a6) {
          psVar15 = memory->system;
          uVar6 = *(uint *)(memory->arm9_io_registers + 0x1a4);
          uVar14 = (psVar15->cpu_arm9).cycles_remaining;
          uVar11 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
          uVar8 = *(uint *)&psVar15->global_cycles + psVar15->cycles_to_next_event;
          uVar10 = (*(int *)((int)&psVar15->global_cycles + 4) +
                   (uint)CARRY4(*(uint *)&psVar15->global_cycles,psVar15->cycles_to_next_event)) -
                   (((int)uVar14 >> 0x1f) + (uint)(uVar8 < uVar14));
          bVar18 = uVar11 <= uVar10;
          if (uVar10 == uVar11) {
            bVar18 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar8 - uVar14;
          }
          if (!bVar18) {
            uVar6 = uVar6 & 0xff7fffff;
          }
          uVar6 = uVar6 >> 0x10;
          goto LAB_08011c44;
        }
      }
      else if ((uVar6 == 0x2a0) || (uVar6 == 0x2a2)) goto LAB_08011f40;
    }
  }
LAB_08011da4:
  uVar6 = (uint)*(ushort *)(memory->arm9_io_registers + (address & 0x7ffe));
LAB_08011c44:
  if ((address & 1) != 0) {
    uVar6 = uVar6 >> 8;
  }
  return (u8)uVar6;
}


