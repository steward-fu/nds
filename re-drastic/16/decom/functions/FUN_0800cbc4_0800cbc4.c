/*
 * Ghidra decompilation
 *
 * Function : FUN_0800cbc4
 * Address  : 0800cbc4
 * Program  : drastic16
 */


void FUN_0800cbc4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __pgoff;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  void *__start;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_40;
  uint local_3c;
  
  iVar8 = *(int *)(param_1 + 0xfba2c);
  printf("Remapping ITCM limit from %x to %x\n",*(undefined4 *)(param_1 + 0xfc7fc),param_2);
  uVar13 = *(uint *)(param_1 + 0xfc7fc);
  if (uVar13 != param_2) {
    if (uVar13 != 0) {
      iVar11 = *(int *)(iVar8 + 0x800004);
      uVar7 = 0;
LAB_0800ccb4:
      do {
        uVar1 = uVar7 >> 0xb;
        if (uVar7 < 0x10000000) {
          uVar9 = uVar7 >> 0x17;
          iVar3 = *(int *)(iVar8 + 0x800000);
          iVar2 = iVar3 + uVar9 * 0x30;
          if (*(char *)(iVar2 + 0x2c) == '\0') {
            iVar6 = *(int *)(iVar2 + 4) + (uVar7 & *(uint *)(iVar3 + uVar9 * 0x30));
          }
          else {
            iVar6 = 0;
          }
          if (*(char *)(iVar2 + 0x2d) == '\0') {
            iVar2 = *(int *)(iVar2 + 4) + (uVar7 & *(uint *)(iVar3 + uVar9 * 0x30));
          }
          else {
            iVar2 = 0;
          }
LAB_0800cc8c:
          if (iVar6 != 0) {
            uVar9 = iVar6 - uVar7 >> 2;
            if (iVar6 != iVar2) {
              uVar9 = uVar9 | 0x40000000;
            }
            uVar7 = uVar7 + 0x800;
            *(uint *)(iVar8 + uVar1 * 4) = uVar9;
            if (uVar13 == uVar7) break;
            goto LAB_0800ccb4;
          }
        }
        else if ((0xfffeffff < uVar7) && (*(char *)(*(int *)(iVar8 + 0x800008) + 0x2104) == '\x01'))
        {
          iVar2 = 0;
          iVar6 = iVar11 + 0x10010 + (uVar7 & 0xfff);
          goto LAB_0800cc8c;
        }
        uVar7 = uVar7 + 0x800;
        *(undefined4 *)(iVar8 + uVar1 * 4) = 0x40000000;
      } while (uVar13 != uVar7);
    }
    *(uint *)(param_1 + 0xfc7fc) = param_2;
    if (param_2 < 0x8001) {
      if (param_2 != 0) {
        uVar13 = 0;
        uVar7 = *(uint *)(param_1 + 4);
        do {
          uVar12 = uVar13 << 0xb;
          uVar9 = uVar13 << 0x10;
          iVar11 = iVar8 + (uVar13 >> 0x15) * 4;
          iVar2 = iVar8 + (uVar13 >> 0x10) * 4;
          uVar1 = uVar13 >> 0xb;
          uVar13 = uVar13 + 0x800;
          *(uint *)(iVar11 + 0x80400c) = *(uint *)(iVar11 + 0x80400c) | 1 << (uVar12 >> 0x1b);
          *(uint *)(iVar2 + 0x80000c) = *(uint *)(iVar2 + 0x80000c) | 1 << (uVar9 >> 0x1b);
          *(uint *)(iVar8 + uVar1 * 4) = uVar7 >> 2;
        } while (param_2 != uVar13);
        if (0x1000 < param_2) {
          iVar8 = *(int *)(param_1 + 0xfc80c);
          sVar10 = __aeabi_uidiv(0x401000,*(undefined4 *)(param_1 + 0xfc800));
          remap_file_pages((void *)(iVar8 + 0x1000),param_2,0,sVar10,0);
        }
      }
    }
    else {
      local_40 = 0;
      local_3c = 0x8000;
      do {
        iVar11 = *(int *)(param_1 + 4);
        iVar6 = iVar11 + 0x8000;
        iVar2 = local_40 - iVar11;
        do {
          uVar13 = iVar11 + iVar2;
          iVar11 = iVar11 + 0x800;
          iVar3 = iVar8 + (uVar13 >> 0x15) * 4;
          iVar4 = iVar8 + (uVar13 >> 0x10) * 4;
          *(uint *)(iVar3 + 0x80400c) = *(uint *)(iVar3 + 0x80400c) | 1 << (uVar13 * 0x800 >> 0x1b);
          *(uint *)(iVar4 + 0x80000c) =
               *(uint *)(iVar4 + 0x80000c) | 1 << (uVar13 * 0x10000 >> 0x1b);
          *(uint *)(iVar8 + (uVar13 >> 0xb) * 4) = (uint)-iVar2 >> 2;
        } while (iVar11 != iVar6);
        if (local_40 < 0x4000000) {
          if (local_3c < 0x4000001) {
            if (0xfff < local_40) {
              sVar10 = 0x8000;
              goto LAB_0800cdd8;
            }
            if (local_3c < 0x1001) goto LAB_0800ce14;
            __start = (void *)(*(int *)(param_1 + 0xfc80c) + 0x1000);
            iVar11 = 0x401000 - local_40;
            uVar5 = *(undefined4 *)(param_1 + 0xfc800);
            sVar10 = local_40 + 0x7000;
          }
          else {
            sVar10 = 0x4000000 - local_40;
LAB_0800cdd8:
            iVar11 = 0x400000;
            uVar5 = *(undefined4 *)(param_1 + 0xfc800);
            __start = (void *)(local_40 + *(int *)(param_1 + 0xfc80c));
          }
          __pgoff = __aeabi_uidiv(iVar11,uVar5);
          remap_file_pages(__start,sVar10,0,__pgoff,0);
        }
LAB_0800ce14:
        local_3c = local_3c + 0x8000;
        local_40 = local_40 + 0x8000;
      } while (param_2 != local_40);
    }
  }
  return;
}


