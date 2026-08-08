/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_16
 * Address  : 08010b80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_io_register_arm9_16(memory_struct *memory,u32 address)

{
  uint uVar1;
  uint uVar2;
  ushort uVar5;
  u32 rom_control_value;
  u32 uVar3;
  s32 sVar4;
  cpu_struct *pcVar6;
  cpu_struct *cpu;
  system_struct *psVar7;
  u32 result;
  u32 root;
  uint uVar8;
  uint uVar9;
  u32 timer_number;
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
  
  if (address != 0x662) {
    if (0x662 < address) {
      if (address != 0x686) {
        if (address < 0x687) {
          if (address != 0x674) {
            if (address < 0x675) {
              if (address != 0x66a) {
                if (address < 0x66b) {
                  if (((address != 0x666) && (address != 0x668)) && (address != 0x664))
                  goto LAB_08010d98;
                }
                else if (address != 0x66e) {
                  if (address < 0x66f) {
                    if (address != 0x66c) goto LAB_08010d98;
                  }
                  else if ((address != 0x670) && (address != 0x672)) goto LAB_08010d98;
                }
              }
            }
            else if (address != 0x67c) {
              if (0x67c < address) {
                if (address != 0x680) {
                  if (address < 0x681) {
                    if (address != 0x67e) goto LAB_08010d98;
                    goto LAB_08010ef4;
                  }
                  if ((address != 0x682) && (address != 0x684)) goto LAB_08010d98;
                }
                goto LAB_08010fac;
              }
              if ((address != 0x678) && ((address != 0x67a && (address != 0x676))))
              goto LAB_08010d98;
            }
          }
          goto LAB_08010ef4;
        }
        if (address != 0x698) {
          if (address < 0x699) {
            if (address != 0x68e) {
              if (address < 0x68f) {
                if (((address != 0x68a) && (address != 0x68c)) && (address != 0x688))
                goto LAB_08010d98;
              }
              else if (address != 0x692) {
                if (address < 0x693) {
                  if (address != 0x690) goto LAB_08010d98;
                }
                else if ((address != 0x694) && (address != 0x696)) goto LAB_08010d98;
              }
            }
          }
          else if (address != 0x6a2) {
            if (0x6a2 < address) {
              if (address == 0x100002) {
LAB_08010e98:
                uVar3 = ipc_receive(&memory->ipc_receive_arm9);
                return (u16)(uVar3 >> ((address & 2) << 3));
              }
              if (address < 0x100003) {
                if (address == 0x100000) goto LAB_08010e98;
              }
              else if ((address == 0x100010) || (address == 0x100012)) {
                uVar3 = gamecard_read(memory->gamecard);
                return (u16)(uVar3 >> ((address & 2) << 3));
              }
              goto LAB_08010d98;
            }
            if (address != 0x69c) {
              if (address < 0x69d) {
                if (address != 0x69a) goto LAB_08010d98;
              }
              else if ((address != 0x69e) && (address != 0x6a0)) goto LAB_08010d98;
            }
          }
        }
      }
LAB_08010fac:
      sVar4 = geometry_load_direction_matrix_element(memory->geometry,address - 0x680 >> 2);
      *(s32 *)(memory->arm9_io_registers + (address & 0xfffffffc)) = sVar4;
      goto LAB_08010d98;
    }
    if (address == 0x604) {
      uVar3 = geometry_load_polygon_count(memory->geometry);
      return (u16)uVar3;
    }
    if (address < 0x605) {
      if (address != 0x2a4) {
        if (address < 0x2a5) {
          if (address != 0x10c) {
            if (0x10c < address) {
              if (address == 0x204) {
                return *(ushort *)(memory->arm9_io_registers + 0x204) & 0xe8ff | 0x4000;
              }
              if (address < 0x205) {
                if (address == 0x1a6) {
                  psVar15 = memory->system;
                  uVar5 = (ushort)((uint)*(undefined4 *)(memory->arm9_io_registers + 0x1a4) >> 0x10)
                  ;
                  uVar14 = (psVar15->cpu_arm9).cycles_remaining;
                  uVar10 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
                  uVar8 = *(uint *)&psVar15->global_cycles + psVar15->cycles_to_next_event;
                  uVar9 = (*(int *)((int)&psVar15->global_cycles + 4) +
                          (uint)CARRY4(*(uint *)&psVar15->global_cycles,
                                       psVar15->cycles_to_next_event)) -
                          (((int)uVar14 >> 0x1f) + (uint)(uVar8 < uVar14));
                  bVar18 = uVar10 <= uVar9;
                  if (uVar9 == uVar10) {
                    bVar18 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar8 - uVar14;
                  }
                  if (bVar18) {
                    return uVar5;
                  }
                  return uVar5 & 0xff7f;
                }
                goto LAB_08010d98;
              }
              if ((address != 0x2a0) && (address != 0x2a2)) goto LAB_08010d98;
              goto LAB_08010f30;
            }
            if (((address != 0x104) && (address != 0x108)) && (address != 0x100)) goto LAB_08010d98;
          }
          psVar15 = memory->system;
          uVar8 = address - 0x100 >> 2;
          uVar5 = (psVar15->cpu_arm9).timers[uVar8].control;
          if ((uVar5 & 4) == 0) {
            if ((uVar5 & 0x80) != 0) {
              pcVar6 = (psVar15->cpu_arm9).timers[uVar8].cpu;
              psVar7 = pcVar6->system;
              return (psVar15->cpu_arm9).timers[uVar8].reload_value +
                     (short)(((*(int *)&psVar7->global_cycles + psVar7->cycles_to_next_event) -
                             pcVar6->cycles_remaining) -
                             *(int *)&(psVar15->cpu_arm9).timers[uVar8].reload_timestamp >>
                            (psVar15->cpu_arm9).timers[uVar8].prescale);
            }
            return (psVar15->cpu_arm9).timers[uVar8].reload_value;
          }
          goto LAB_08010d98;
        }
        if (address != 0x2ac) {
          if (0x2ac < address) {
            if (address != 0x2b4) {
              if (address < 0x2b5) {
                if (address != 0x2ae) goto LAB_08010d98;
                goto LAB_08010f30;
              }
              if (address != 0x2b6) {
                if (address == 0x600) {
                  uVar3 = geometry_load_gxstat(memory->geometry);
                  return (u16)uVar3;
                }
                goto LAB_08010d98;
              }
            }
            if (memory->sqrt_result_available == '\0') {
              uVar5 = *(ushort *)(memory->arm9_io_registers + 0x2b0);
              memory->sqrt_result_available = '\x01';
              if ((uVar5 & 1) == 0) {
                result = *(u32 *)(memory->arm9_io_registers + 0x2b8);
                if (result != 0) {
                  if (result < 0x40000000) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 0x40000000;
                  }
                  uVar9 = uVar8 | 0x10000000;
                  uVar10 = uVar8 >> 1 | 0x10000000;
                  if (result - uVar8 < uVar9) {
                    uVar9 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = (result - uVar8) - uVar9;
                  uVar14 = uVar10 | 0x4000000;
                  uVar8 = uVar10 >> 1 | 0x4000000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x1000000;
                  uVar10 = uVar8 >> 1 | 0x1000000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 0x400000;
                  uVar8 = uVar10 >> 1 | 0x400000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x100000;
                  uVar10 = uVar8 >> 1 | 0x100000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 0x40000;
                  uVar8 = uVar10 >> 1 | 0x40000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x10000;
                  uVar10 = uVar8 >> 1 | 0x10000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 0x4000;
                  uVar8 = uVar10 >> 1 | 0x4000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x1000;
                  uVar10 = uVar8 >> 1 | 0x1000;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 0x400;
                  uVar8 = uVar10 >> 1 | 0x400;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x100;
                  uVar10 = uVar8 >> 1 | 0x100;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 0x40;
                  uVar8 = uVar10 >> 1 | 0x40;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar8 | 0x10;
                  uVar10 = uVar8 >> 1 | 0x10;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar10 = uVar8 >> 1;
                  }
                  uVar9 = uVar9 - uVar14;
                  uVar14 = uVar10 | 4;
                  uVar8 = uVar10 >> 1 | 4;
                  if (uVar9 < uVar14) {
                    uVar14 = 0;
                    uVar8 = uVar10 >> 1;
                  }
                  result = uVar8 >> 1;
                  if ((uVar8 | 1) <= uVar9 - uVar14) {
                    result = result | 1;
                  }
                }
              }
              else {
                uVar8 = *(uint *)(memory->arm9_io_registers + 0x2b8);
                uVar9 = *(uint *)(memory->arm9_io_registers + 700);
                result = 0;
                if ((uVar8 | uVar9) != 0) {
                  result = 0;
                  uVar14 = 0;
                  iVar16 = 0x1f;
                  uVar11 = 0;
                  uVar10 = 0x10000000;
                  do {
                    uVar13 = uVar10 | uVar14;
                    uVar12 = uVar11 | result;
                    uVar19 = 0;
                    uVar1 = uVar14 >> 1;
                    uVar2 = (uint)((byte)uVar14 & 1) << 0x1f | result >> 1;
                    bVar18 = uVar9 <= uVar13;
                    if (uVar13 == uVar9) {
                      bVar18 = uVar8 <= uVar12;
                    }
                    result = uVar2 | uVar11;
                    uVar14 = uVar1 | uVar10;
                    if (!bVar18 || uVar13 == uVar9 && uVar12 == uVar8) {
                      uVar19 = CONCAT44(uVar13,uVar12);
                    }
                    uVar11 = uVar11 >> 2 | uVar10 << 0x1e;
                    uVar10 = uVar10 >> 2;
                    uVar19 = VectorSub(CONCAT44(uVar9,uVar8),uVar19,8);
                    bVar18 = uVar9 <= uVar13;
                    bVar17 = uVar13 == uVar9;
                    if (bVar17) {
                      bVar18 = uVar8 <= uVar12;
                    }
                    if (bVar18 && (!bVar17 || uVar12 != uVar8)) {
                      result = uVar2;
                    }
                    if (bVar18 && (!bVar17 || uVar12 != uVar8)) {
                      uVar14 = uVar1;
                    }
                    iVar16 = iVar16 + -1;
                    uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
                    uVar8 = (uint)uVar19;
                  } while (iVar16 != 0);
                }
              }
              *(u32 *)(memory->arm9_io_registers + 0x2b4) = result;
            }
            goto LAB_08010d98;
          }
          if (((address != 0x2a8) && (address != 0x2aa)) && (address != 0x2a6)) goto LAB_08010d98;
        }
      }
LAB_08010f30:
      if (memory->divide_result_available == '\0') {
        memory_divide(memory);
      }
      goto LAB_08010d98;
    }
    if (address != 0x64e) {
      if (address < 0x64f) {
        if (address != 0x644) {
          if (address < 0x645) {
            if ((address != 0x640) && (address != 0x642)) {
              if (address == 0x606) {
                uVar3 = geometry_load_vertex_count(memory->geometry);
                return (u16)uVar3;
              }
              goto LAB_08010d98;
            }
          }
          else if (address != 0x648) {
            if (address < 0x649) {
              if (address != 0x646) goto LAB_08010d98;
            }
            else if ((address != 0x64a) && (address != 0x64c)) goto LAB_08010d98;
          }
        }
      }
      else if (address != 0x658) {
        if (address < 0x659) {
          if (address != 0x652) {
            if (address < 0x653) {
              if (address != 0x650) goto LAB_08010d98;
            }
            else if ((address != 0x654) && (address != 0x656)) goto LAB_08010d98;
          }
        }
        else if (address != 0x65c) {
          if (address < 0x65d) {
            if (address != 0x65a) goto LAB_08010d98;
          }
          else if ((address != 0x65e) && (address != 0x660)) goto LAB_08010d98;
        }
      }
    }
  }
LAB_08010ef4:
  sVar4 = geometry_load_clip_matrix_element(memory->geometry,address - 0x640 >> 2);
  *(s32 *)(memory->arm9_io_registers + (address & 0xfffffffc)) = sVar4;
LAB_08010d98:
  return *(u16 *)(memory->arm9_io_registers + (address & 0x7fff));
}


