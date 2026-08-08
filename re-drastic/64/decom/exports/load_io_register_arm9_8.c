/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm9_8
 * Address  : 00117940
 * Program  : drastic64
 */


uint load_io_register_arm9_8(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = param_2 & 0xfffffffe;
  if (0x6a2 < uVar2) {
    if (uVar2 == 0x100010) {
LAB_001179f0:
      uVar2 = gamecard_read(*(undefined8 *)(param_1 + 0xfd4b8));
LAB_001179fc:
      uVar2 = uVar2 >> (ulong)((param_2 & 2) << 3);
      uVar3 = uVar2 & 0xff;
      if ((param_2 & 1) != 0) {
        uVar3 = (uVar2 & 0xffff) >> 8;
      }
      return uVar3;
    }
    if (uVar2 < 0x100011) {
      if ((param_2 & 0xfffffffc) == 0x100000) {
        uVar2 = ipc_receive(param_1 + 0xfd3f8);
        goto LAB_001179fc;
      }
    }
    else if (uVar2 == 0x100012) goto LAB_001179f0;
    goto LAB_001179a8;
  }
  if (uVar2 < 0x600) {
    if (uVar2 == 0x204) {
      uVar2 = *(ushort *)(param_1 + 0x1b274) & 0xffffe8ff | 0x4000;
      uVar3 = uVar2 >> 8;
      goto LAB_001179b4;
    }
    if (uVar2 < 0x205) {
      if (uVar2 < 0x10d) {
        if ((0xff < uVar2) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1111U) != 0)) {
          lVar11 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar2 - 0x100 >> 2) * 0x20;
          if ((*(ushort *)(nds_system + lVar11 + 0x10cbd6a) >> 2 & 1) == 0) {
            uVar3 = (uint)(byte)(*(ushort *)(nds_system + lVar11 + 0x10cbd68) >> 8);
            uVar2 = (uint)*(ushort *)(nds_system + lVar11 + 0x10cbd68);
            if ((*(ushort *)(nds_system + lVar11 + 0x10cbd6a) >> 7 & 1) != 0) {
              lVar9 = *(long *)(*(long *)(nds_system + lVar11 + 0x10cbd50) + 0x2258);
              uVar2 = ((uint)(((int)*(undefined8 *)(lVar9 + 8) -
                              *(int *)(*(long *)(nds_system + lVar11 + 0x10cbd50) + 0x2290)) +
                             (*(int *)(lVar9 + 0x10) -
                             (int)*(undefined8 *)(nds_system + lVar11 + 0x10cbd58))) >>
                      (ulong)((byte)nds_system[lVar11 + 0x10cbd6c] & 0x1f)) + uVar2;
              uVar3 = (uVar2 & 0xffff) >> 8;
              uVar2 = uVar2 & 0xffff;
            }
            goto LAB_001179b4;
          }
        }
      }
      else if (uVar2 == 0x1a6) {
        lVar11 = *(long *)(param_1 + 0xfba68);
        uVar3 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
        if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
            ((ulong)*(uint *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)) -
            (long)*(int *)(nds_system + lVar11 + 0x10cdfe0)) {
          uVar3 = *(uint *)(param_1 + 0x1b214);
        }
        uVar2 = uVar3 >> 0x10;
        uVar3 = uVar3 >> 0x18;
        goto LAB_001179b4;
      }
    }
    else if (uVar2 - 0x2a0 < 0x17) {
      uVar8 = 1L << ((ulong)(uVar2 - 0x2a0) & 0x3f);
      if ((uVar8 & 0x5555) == 0) {
        if (((uVar8 & 0x500000) != 0) && (*(char *)(param_1 + 0xfd511) == '\0')) {
          *(undefined *)(param_1 + 0xfd511) = 1;
          if ((*(ushort *)(param_1 + 0x1b320) & 1) == 0) {
            uVar2 = *(uint *)(param_1 + 0x1b328);
            if (uVar2 != 0) {
              uVar3 = 0;
              if (0x3fffffff < uVar2) {
                uVar2 = uVar2 + 0xc0000000;
                uVar3 = 0x40000000;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x10000000) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x10000000);
                uVar5 = uVar5 | 0x10000000;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x4000000) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x4000000);
                uVar3 = uVar3 | 0x4000000;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x1000000) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x1000000);
                uVar5 = uVar5 | 0x1000000;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x400000) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x400000);
                uVar3 = uVar3 | 0x400000;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x100000) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x100000);
                uVar5 = uVar5 | 0x100000;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x40000) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x40000);
                uVar3 = uVar3 | 0x40000;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x10000) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x10000);
                uVar5 = uVar5 | 0x10000;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x4000) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x4000);
                uVar3 = uVar3 | 0x4000;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x1000) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x1000);
                uVar5 = uVar5 | 0x1000;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x400) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x400);
                uVar3 = uVar3 | 0x400;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x100) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x100);
                uVar5 = uVar5 | 0x100;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 0x40) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 0x40);
                uVar3 = uVar3 | 0x40;
              }
              uVar5 = uVar3 >> 1;
              if ((uVar3 | 0x10) <= uVar2) {
                uVar2 = uVar2 - (uVar3 | 0x10);
                uVar5 = uVar5 | 0x10;
              }
              uVar3 = uVar5 >> 1;
              if ((uVar5 | 4) <= uVar2) {
                uVar2 = uVar2 - (uVar5 | 4);
                uVar3 = uVar3 | 4;
              }
              uVar5 = uVar3 >> 1 | 1;
              if (uVar2 < (uVar3 | 1)) {
                uVar5 = uVar3 >> 1;
              }
              *(uint *)(param_1 + 0x1b324) = uVar5;
              goto LAB_001179a8;
            }
          }
          else {
            uVar8 = *(ulong *)(param_1 + 0x1b328);
            uVar2 = 0;
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
              uVar2 = (uint)uVar10;
            }
          }
          *(uint *)(param_1 + 0x1b324) = uVar2;
        }
      }
      else if (*(char *)(param_1 + 0xfd510) == '\0') {
        memory_divide();
      }
    }
    goto LAB_001179a8;
  }
  switch(uVar2) {
  case 0x600:
    uVar3 = geometry_load_gxstat(*(undefined8 *)(param_1 + 0xfba78));
    uVar2 = uVar3 & 0xffff;
    uVar3 = (uVar3 & 0xffff) >> 8;
    goto LAB_001179b4;
  case 0x604:
    uVar3 = geometry_load_polygon_count(*(undefined8 *)(param_1 + 0xfba78));
    uVar2 = uVar3 & 0xffff;
    uVar3 = (uVar3 & 0xffff) >> 8;
    goto LAB_001179b4;
  case 0x606:
    uVar3 = geometry_load_vertex_count(*(undefined8 *)(param_1 + 0xfba78));
    uVar2 = uVar3 & 0xffff;
    uVar3 = (uVar3 & 0xffff) >> 8;
    goto LAB_001179b4;
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
    uVar4 = geometry_load_clip_matrix_element(*(undefined8 *)(param_1 + 0xfba78),uVar2 - 0x640 >> 2)
    ;
    *(undefined4 *)(param_1 + 0x1b070 + (ulong)(param_2 & 0xfffffffc)) = uVar4;
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
    uVar4 = geometry_load_direction_matrix_element
                      (*(undefined8 *)(param_1 + 0xfba78),uVar2 - 0x680 >> 2);
    *(undefined4 *)(param_1 + 0x1b070 + (ulong)(param_2 & 0xfffffffc)) = uVar4;
  }
LAB_001179a8:
  uVar1 = *(ushort *)(param_1 + 0x1b070 + (ulong)(param_2 & 0x7ffe));
  uVar3 = (uint)(byte)(uVar1 >> 8);
  uVar2 = (uint)uVar1;
LAB_001179b4:
  uVar2 = uVar2 & 0xff;
  if ((param_2 & 1) != 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}


