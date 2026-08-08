/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_32
 * Address  : 001174e0
 * Program  : drastic64
 */


ulong load_io_register_arm9_32(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar1 = (uint)param_2;
  if (0x6a0 < uVar1) {
    if (uVar1 == 0x100000) {
      uVar5 = ipc_receive(param_1 + 0xfd3f8);
      return uVar5;
    }
    if (uVar1 != 0x100010) {
      return (ulong)*(uint *)(param_1 + (param_2 & 0x7fff) + 0x1b070);
    }
    uVar5 = gamecard_read(*(undefined8 *)(param_1 + 0xfd4b8));
    return uVar5;
  }
  if (uVar1 < 0x600) {
    if (uVar1 == 0x204) {
      return (ulong)(*(uint *)(param_1 + 0x1b274) & 0xe8ff | 0x4000);
    }
    if (uVar1 < 0x205) {
      if (uVar1 < 0x10d) {
        if ((0xff < uVar1) && ((1L << (param_2 & 0x3f) & 0x1111U) != 0)) {
          lVar7 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar1 - 0x100 >> 2) * 0x20;
          if ((*(ushort *)(nds_system + lVar7 + 0x10cbd6a) >> 2 & 1) == 0) {
            uVar9 = (uint)*(ushort *)(nds_system + lVar7 + 0x10cbd68);
            if ((*(ushort *)(nds_system + lVar7 + 0x10cbd6a) >> 7 & 1) != 0) {
              lVar6 = *(long *)(*(long *)(nds_system + lVar7 + 0x10cbd50) + 0x2258);
              uVar9 = ((uint)(((int)*(undefined8 *)(lVar6 + 8) -
                              *(int *)(*(long *)(nds_system + lVar7 + 0x10cbd50) + 0x2290)) +
                             (*(int *)(lVar6 + 0x10) -
                             (int)*(undefined8 *)(nds_system + lVar7 + 0x10cbd58))) >>
                      (ulong)((byte)nds_system[lVar7 + 0x10cbd6c] & 0x1f)) +
                      (uint)*(ushort *)(nds_system + lVar7 + 0x10cbd68) & 0xffff;
            }
            return (ulong)(*(ushort *)(param_1 + (ulong)(uVar1 + 2) + 0x1b070) | uVar9);
          }
        }
      }
      else if (uVar1 == 0x1a4) {
        lVar7 = *(long *)(param_1 + 0xfba68);
        uVar1 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
        if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
            ((ulong)*(uint *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) -
            (long)*(int *)(nds_system + lVar7 + 0x10cdfe0)) {
          uVar1 = *(uint *)(param_1 + 0x1b214);
        }
        return (ulong)uVar1;
      }
    }
    else if (uVar1 - 0x2a0 < 0x15) {
      uVar5 = 1L << ((ulong)(uVar1 - 0x2a0) & 0x3f);
      if ((uVar5 & 0x1111) == 0) {
        if ((((uint)uVar5 >> 0x14 & 1) != 0) && (*(char *)(param_1 + 0xfd511) == '\0')) {
          *(undefined *)(param_1 + 0xfd511) = 1;
          if ((*(ushort *)(param_1 + 0x1b320) & 1) == 0) {
            uVar1 = *(uint *)(param_1 + 0x1b328);
            if (uVar1 != 0) {
              uVar9 = 0;
              if (0x3fffffff < uVar1) {
                uVar1 = uVar1 + 0xc0000000;
                uVar9 = 0x40000000;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x10000000) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x10000000);
                uVar3 = uVar3 | 0x10000000;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x4000000) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x4000000);
                uVar9 = uVar9 | 0x4000000;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x1000000) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x1000000);
                uVar3 = uVar3 | 0x1000000;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x400000) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x400000);
                uVar9 = uVar9 | 0x400000;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x100000) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x100000);
                uVar3 = uVar3 | 0x100000;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x40000) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x40000);
                uVar9 = uVar9 | 0x40000;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x10000) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x10000);
                uVar3 = uVar3 | 0x10000;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x4000) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x4000);
                uVar9 = uVar9 | 0x4000;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x1000) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x1000);
                uVar3 = uVar3 | 0x1000;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x400) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x400);
                uVar9 = uVar9 | 0x400;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x100) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x100);
                uVar3 = uVar3 | 0x100;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 0x40) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 0x40);
                uVar9 = uVar9 | 0x40;
              }
              uVar3 = uVar9 >> 1;
              if ((uVar9 | 0x10) <= uVar1) {
                uVar1 = uVar1 - (uVar9 | 0x10);
                uVar3 = uVar3 | 0x10;
              }
              uVar9 = uVar3 >> 1;
              if ((uVar3 | 4) <= uVar1) {
                uVar1 = uVar1 - (uVar3 | 4);
                uVar9 = uVar9 | 4;
              }
              uVar3 = uVar9 >> 1 | 1;
              if (uVar1 < (uVar9 | 1)) {
                uVar3 = uVar9 >> 1;
              }
              *(uint *)(param_1 + 0x1b324) = uVar3;
              goto switchD_00117688_caseD_601;
            }
          }
          else {
            uVar5 = *(ulong *)(param_1 + 0x1b328);
            uVar1 = 0;
            if (uVar5 != 0) {
              iVar2 = 0x1f;
              uVar4 = 0x1000000000000000;
              uVar8 = 0;
              do {
                uVar10 = uVar8 | uVar4;
                uVar8 = uVar8 >> 1;
                if (uVar10 <= uVar5) {
                  uVar5 = uVar5 - uVar10;
                  uVar8 = uVar8 | uVar4;
                }
                uVar4 = uVar4 >> 2;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              uVar1 = (uint)uVar8;
            }
          }
          *(uint *)(param_1 + 0x1b324) = uVar1;
        }
      }
      else if (*(char *)(param_1 + 0xfd510) == '\0') {
        memory_divide();
        param_2 = param_2 & 0xffffffff;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0x600:
      uVar5 = geometry_load_gxstat(*(undefined8 *)(param_1 + 0xfba78));
      return uVar5;
    case 0x604:
      uVar1 = geometry_load_polygon_count(*(undefined8 *)(param_1 + 0xfba78));
      iVar2 = geometry_load_vertex_count(*(undefined8 *)(param_1 + 0xfba78));
      return (ulong)(uVar1 | iVar2 << 0x10);
    case 0x640:
    case 0x644:
    case 0x648:
    case 0x64c:
    case 0x650:
    case 0x654:
    case 0x658:
    case 0x65c:
    case 0x660:
    case 0x664:
    case 0x668:
    case 0x66c:
    case 0x670:
    case 0x674:
    case 0x678:
    case 0x67c:
      uVar5 = geometry_load_clip_matrix_element
                        (*(undefined8 *)(param_1 + 0xfba78),uVar1 - 0x640 >> 2);
      return uVar5;
    case 0x680:
    case 0x684:
    case 0x688:
    case 0x68c:
    case 0x690:
    case 0x694:
    case 0x698:
    case 0x69c:
    case 0x6a0:
      uVar5 = geometry_load_direction_matrix_element
                        (*(undefined8 *)(param_1 + 0xfba78),uVar1 - 0x680 >> 2);
      return uVar5;
    }
  }
switchD_00117688_caseD_601:
  return (ulong)*(uint *)(param_1 + (param_2 & 0x7fff) + 0x1b070);
}


