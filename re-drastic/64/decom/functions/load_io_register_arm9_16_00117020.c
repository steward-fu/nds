/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_16
 * Address  : 00117020
 * Program  : drastic64
 */


uint load_io_register_arm9_16(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 0x6a3) {
    if (uVar2 < 0x600) {
      if (uVar2 == 0x204) {
        return *(ushort *)(param_1 + 0x1b274) & 0xffffe8ff | 0x4000;
      }
      if (uVar2 < 0x205) {
        if (uVar2 < 0x10d) {
          if ((0xff < uVar2) && ((1L << (param_2 & 0x3f) & 0x1111U) != 0)) {
            lVar11 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar2 - 0x100 >> 2) * 0x20;
            if ((*(ushort *)(nds_system + lVar11 + 0x10cbd6a) >> 2 & 1) == 0) {
              if ((*(ushort *)(nds_system + lVar11 + 0x10cbd6a) >> 7 & 1) == 0) {
                return (uint)*(ushort *)(nds_system + lVar11 + 0x10cbd68);
              }
              lVar9 = *(long *)(*(long *)(nds_system + lVar11 + 0x10cbd50) + 0x2258);
              return ((uint)(((int)*(undefined8 *)(lVar9 + 8) -
                             *(int *)(*(long *)(nds_system + lVar11 + 0x10cbd50) + 0x2290)) +
                            (*(int *)(lVar9 + 0x10) -
                            (int)*(undefined8 *)(nds_system + lVar11 + 0x10cbd58))) >>
                     (ulong)((byte)nds_system[lVar11 + 0x10cbd6c] & 0x1f)) +
                     (uint)*(ushort *)(nds_system + lVar11 + 0x10cbd68) & 0xffff;
            }
          }
        }
        else if (uVar2 == 0x1a6) {
          lVar11 = *(long *)(param_1 + 0xfba68);
          uVar2 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
          if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
              ((ulong)*(uint *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)) -
              (long)*(int *)(nds_system + lVar11 + 0x10cdfe0)) {
            uVar2 = *(uint *)(param_1 + 0x1b214);
          }
          return uVar2 >> 0x10;
        }
      }
      else if (uVar2 - 0x2a0 < 0x17) {
        uVar8 = 1L << ((ulong)(uVar2 - 0x2a0) & 0x3f);
        if ((uVar8 & 0x5555) == 0) {
          if (((uVar8 & 0x500000) != 0) && (*(char *)(param_1 + 0xfd511) == '\0')) {
            *(undefined *)(param_1 + 0xfd511) = 1;
            if ((*(ushort *)(param_1 + 0x1b320) & 1) == 0) {
              uVar1 = *(uint *)(param_1 + 0x1b328);
              if (uVar1 != 0) {
                uVar4 = 0;
                if (0x3fffffff < uVar1) {
                  uVar1 = uVar1 + 0xc0000000;
                  uVar4 = 0x40000000;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x10000000) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x10000000);
                  uVar5 = uVar5 | 0x10000000;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x4000000) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x4000000);
                  uVar4 = uVar4 | 0x4000000;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x1000000) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x1000000);
                  uVar5 = uVar5 | 0x1000000;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x400000) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x400000);
                  uVar4 = uVar4 | 0x400000;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x100000) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x100000);
                  uVar5 = uVar5 | 0x100000;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x40000) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x40000);
                  uVar4 = uVar4 | 0x40000;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x10000) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x10000);
                  uVar5 = uVar5 | 0x10000;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x4000) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x4000);
                  uVar4 = uVar4 | 0x4000;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x1000) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x1000);
                  uVar5 = uVar5 | 0x1000;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x400) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x400);
                  uVar4 = uVar4 | 0x400;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x100) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x100);
                  uVar5 = uVar5 | 0x100;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 0x40) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 0x40);
                  uVar4 = uVar4 | 0x40;
                }
                uVar5 = uVar4 >> 1;
                if ((uVar4 | 0x10) <= uVar1) {
                  uVar1 = uVar1 - (uVar4 | 0x10);
                  uVar5 = uVar5 | 0x10;
                }
                uVar4 = uVar5 >> 1;
                if ((uVar5 | 4) <= uVar1) {
                  uVar1 = uVar1 - (uVar5 | 4);
                  uVar4 = uVar4 | 4;
                }
                uVar5 = uVar4 >> 1 | 1;
                if (uVar1 < (uVar4 | 1)) {
                  uVar5 = uVar4 >> 1;
                }
                *(uint *)(param_1 + 0x1b324) = uVar5;
                goto LAB_00117084;
              }
            }
            else {
              uVar8 = *(ulong *)(param_1 + 0x1b328);
              uVar1 = 0;
              if (uVar8 != 0) {
                iVar7 = 0x1f;
                uVar6 = 0x1000000000000000;
                uVar10 = 0;
                do {
                  uVar12 = uVar10 | uVar6;
                  uVar10 = uVar10 >> 1;
                  if (uVar12 <= uVar8) {
                    uVar8 = uVar8 - uVar12;
                    uVar10 = uVar10 | uVar6;
                  }
                  uVar6 = uVar6 >> 2;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                uVar1 = (uint)uVar10;
              }
            }
            *(uint *)(param_1 + 0x1b324) = uVar1;
          }
        }
        else if (*(char *)(param_1 + 0xfd510) == '\0') {
          memory_divide();
        }
      }
    }
    else {
      switch(uVar2) {
      case 0x600:
        uVar2 = geometry_load_gxstat(*(undefined8 *)(param_1 + 0xfba78));
        return uVar2 & 0xffff;
      case 0x604:
        uVar2 = geometry_load_polygon_count(*(undefined8 *)(param_1 + 0xfba78));
        return uVar2 & 0xffff;
      case 0x606:
        uVar2 = geometry_load_vertex_count(*(undefined8 *)(param_1 + 0xfba78));
        return uVar2 & 0xffff;
      case 0x640:
      case 0x642:
      case 0x644:
      case 0x646:
      case 0x648:
      case 0x64a:
      case 0x64c:
      case 0x64e:
      case 0x650:
      case 0x652:
      case 0x654:
      case 0x656:
      case 0x658:
      case 0x65a:
      case 0x65c:
      case 0x65e:
      case 0x660:
      case 0x662:
      case 0x664:
      case 0x666:
      case 0x668:
      case 0x66a:
      case 0x66c:
      case 0x66e:
      case 0x670:
      case 0x672:
      case 0x674:
      case 0x676:
      case 0x678:
      case 0x67a:
      case 0x67c:
      case 0x67e:
        uVar3 = geometry_load_clip_matrix_element
                          (*(undefined8 *)(param_1 + 0xfba78),uVar2 - 0x640 >> 2);
        *(undefined4 *)(param_1 + 0x1b070 + (ulong)(uVar2 & 0xfffffffc)) = uVar3;
        break;
      case 0x680:
      case 0x682:
      case 0x684:
      case 0x686:
      case 0x688:
      case 0x68a:
      case 0x68c:
      case 0x68e:
      case 0x690:
      case 0x692:
      case 0x694:
      case 0x696:
      case 0x698:
      case 0x69a:
      case 0x69c:
      case 0x69e:
      case 0x6a0:
      case 0x6a2:
        uVar3 = geometry_load_direction_matrix_element
                          (*(undefined8 *)(param_1 + 0xfba78),uVar2 - 0x680 >> 2);
        *(undefined4 *)(param_1 + 0x1b070 + (ulong)(uVar2 & 0xfffffffc)) = uVar3;
      }
    }
  }
  else {
    if (uVar2 == 0x100010) {
LAB_001170b8:
      uVar1 = gamecard_read(*(undefined8 *)(param_1 + 0xfd4b8));
      return uVar1 >> (ulong)((uVar2 & 2) << 3) & 0xffff;
    }
    if (uVar2 < 0x100011) {
      if ((uVar2 & 0xfffffffd) == 0x100000) {
        uVar1 = ipc_receive(param_1 + 0xfd3f8);
        return uVar1 >> (ulong)((uVar2 & 2) << 3) & 0xffff;
      }
    }
    else if (uVar2 == 0x100012) goto LAB_001170b8;
  }
LAB_00117084:
  return (uint)*(ushort *)(param_1 + 0x1b070 + (ulong)(uVar2 & 0x7fff));
}


