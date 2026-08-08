/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a374
 * Address  : 0807a374
 * Program  : drastic16
 */


void FUN_0807a374(void)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  bool bVar14;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  
  uVar2 = DAT_08101818;
  uVar4 = DAT_08101804;
  bVar14 = DAT_08101818 != 0xffffffff;
  uVar3 = DAT_0810180c;
  if (bVar14) {
    DAT_08101818 = 0xffffffff;
    uVar3 = uVar2;
  }
  uVar2 = DAT_08101804 >> 3;
  if (bVar14) {
    DAT_0810180c = uVar3;
  }
  DAT_08101808 = DAT_08101804;
  if (DAT_0810181c != 0xffffffff) {
    if ((int)DAT_0810181c < 2) {
      if (1 < DAT_08101810) goto LAB_0807a7b0;
    }
    else if ((DAT_08101810 < 2) || (DAT_0810181c == 2)) {
LAB_0807a7b0:
      if (uVar3 == 2) {
        DAT_08101814 = DAT_08101814 ^ 1;
      }
    }
    DAT_08101810 = DAT_0810181c;
    DAT_0810181c = 0xffffffff;
  }
  uVar9 = DAT_08101810;
  if (uVar3 - 2 < 3) {
    if (DAT_08101810 < 2) {
      if (uVar3 == 3) {
        if (DAT_08101810 == 0) {
          local_d0 = 0xf0;
        }
        else {
          local_d0 = 0x90;
        }
        local_e8 = 1;
        iVar12 = 0;
        local_e0 = 0x30;
        local_d4 = 0x10;
        local_dc = 0x180;
        local_d8 = 0x200;
        local_cc = 0x210;
      }
      else if (uVar3 == 4) {
        if (DAT_08101810 == 0) {
          local_d0 = 0xc0;
          local_e0 = DAT_08101810;
        }
        else {
          local_d0 = 0x60;
          local_e0 = 0;
        }
        iVar12 = 1;
        local_d4 = 0x50;
        local_dc = 0x1e0;
        local_d8 = 0x280;
        local_cc = 0x110;
        local_e8 = local_e0;
      }
      else {
        if (DAT_08101810 != 0) {
          local_d0 = 0x90;
        }
        else {
          local_d0 = 0xf0;
        }
        iVar12 = 1;
        local_e8 = DAT_08101810;
        if (DAT_08101810 != 0) {
          local_e8 = 0;
        }
        local_e0 = 0x30;
        local_d4 = 0x110;
        local_dc = 0x180;
        local_d8 = 0x200;
        local_cc = 0x10;
      }
      DAT_081017e8 = 0xc0;
      DAT_081017e4 = 0xc0;
      if (DAT_081017d4 != (void *)0x0) {
        memset(DAT_081017d4,0,DAT_081017dc);
        iVar6 = munmap(DAT_081017d4,DAT_081017dc);
        if (iVar6 == -1) {
          perror("overlay munmap failed");
        }
      }
      if (DAT_081017d8 != (void *)0x0) {
        memset(DAT_081017d8,0,DAT_081017e0);
        munmap(DAT_081017d8,DAT_081017e0);
      }
      iVar6 = DAT_081017cc;
      if (DAT_081017cc != -1) {
        iVar7 = ioctl(DAT_081017cc,0x40444f35,&local_c8);
        if (iVar7 == 0) {
          if ((char)local_c0 != '\0') {
            local_c0 = local_c0 & 0xffffff00;
            iVar6 = ioctl(iVar6,0x40444f34,&local_c8);
            if (iVar6 != 0) {
              perror("IOCTL fbdev disable plane failed");
            }
          }
        }
        else {
          perror("IOCTL fbdev get plane info failed");
        }
        close(DAT_081017cc);
      }
      if (DAT_081017d0 != -1) {
        close(DAT_081017d0);
      }
      DAT_081017cc = open("/dev/fb1",2);
      DAT_081017d0 = open("/dev/fb0",2);
      iVar6 = uVar2 * 0xc000;
      FUN_0807a0d0(DAT_081017cc,iVar6);
      iVar7 = DAT_081017cc;
      uVar9 = ioctl(DAT_081017cc,0x4600,&local_c8);
      if (uVar9 == 0) {
        local_b0 = uVar4;
        local_c8 = 0x100;
        local_c0 = 0x100;
        local_c4 = 0xc0;
        local_bc = 0x180;
        local_b8 = uVar9;
        local_b4 = uVar9;
        iVar7 = ioctl(iVar7,0x4601,&local_c8);
        if (iVar7 != 0) {
          perror("IOCTL fbdev set overlay info failed");
        }
      }
      else {
        perror("IOCTL fbdev get overlay info failed");
      }
      iVar7 = DAT_081017cc;
      iVar10 = ioctl(DAT_081017cc,0x40444f35,&local_c8);
      if (iVar10 == 0) {
        local_c8 = local_d4;
        local_c0 = CONCAT31(local_c0._1_3_,1);
        local_c4 = local_e0;
        local_bc = local_d8;
        local_b8 = local_dc;
        iVar7 = ioctl(iVar7,0x40444f34,&local_c8);
        if (iVar7 != 0) {
          perror("IOCTL setup plane info failed");
        }
      }
      else {
        perror("IOCTL fbdev get plane info failed");
      }
      FUN_0807a0d0(DAT_081017d0,iVar6);
      iVar7 = DAT_081017d0;
      uVar9 = ioctl(DAT_081017d0,0x4600,&local_c8);
      if (uVar9 == 0) {
        local_b0 = uVar4;
        local_c8 = 0x100;
        local_c0 = 0x100;
        local_c4 = 0xc0;
        local_bc = 0x180;
        local_b8 = uVar9;
        local_b4 = uVar9;
        iVar7 = ioctl(iVar7,0x4601,&local_c8);
        if (iVar7 != 0) {
          perror("IOCTL fbdev set overlay info failed");
        }
      }
      else {
        perror("IOCTL fbdev get overlay info failed");
      }
      iVar7 = DAT_081017d0;
      if (uVar3 == 4) {
        iVar10 = ioctl(DAT_081017d0,0x40444f35,&local_c8);
        if (iVar10 != 0) goto LAB_0807aeec;
        local_c0 = local_c0 & 0xffffff00;
        local_c8 = local_cc;
        local_bc = 0x100;
        local_b8 = 0xc0;
        local_c4 = local_d0;
        iVar7 = ioctl(iVar7,0x40444f34,&local_c8);
joined_r0x0807ae58:
        if (iVar7 != 0) {
          perror("IOCTL setup plane info failed");
        }
      }
      else {
        iVar10 = ioctl(DAT_081017d0,0x40444f35,&local_c8);
        if (iVar10 == 0) {
          local_c8 = local_cc;
          local_bc = 0x100;
          local_b8 = 0xc0;
          local_c4 = local_d0;
          local_c0 = CONCAT31(local_c0._1_3_,1);
          iVar7 = ioctl(iVar7,0x40444f34,&local_c8);
          goto joined_r0x0807ae58;
        }
LAB_0807aeec:
        perror("IOCTL fbdev get plane info failed");
      }
      sVar1 = uVar2 * 0x18000;
      pvVar8 = mmap((void *)0x0,sVar1,2,1,DAT_081017cc,0);
      pvVar13 = mmap((void *)0x0,sVar1,2,1,DAT_081017d0,0);
      if (pvVar8 == (void *)0xffffffff) {
        perror("fb_pixels_overlay mmap failed");
      }
      if (pvVar13 == (void *)0xffffffff) {
        perror("fb_pixels_base mmap failed");
      }
      DAT_081017dc = sVar1;
      DAT_081017e0 = sVar1;
      printf("fb pixels overlay: %p\n",pvVar8);
      printf("fb pixels base: %p\n",pvVar13);
      DAT_081017d4 = pvVar8;
      *(void **)((iVar12 + 0x42) * 4 + 0x81016e4) = pvVar8;
      *(void **)((iVar12 + 0x44) * 4 + 0x81016e4) = (void *)((int)pvVar8 + iVar6);
      (&DAT_081017ec)[local_e8] = pvVar13;
      (&DAT_081017f4)[local_e8] = (void *)((int)pvVar13 + iVar6);
      DAT_081017d8 = pvVar13;
      *(uint *)(&DAT_081016e0 + (iVar12 + 0x52) * 4) = local_d4;
      *(uint *)(&DAT_081016e0 + (iVar12 + 0x54) * 4) = local_e0;
      *(uint *)(&DAT_081016e0 + (iVar12 + 0x56) * 4) = local_d8;
      *(uint *)(&DAT_081016e0 + (iVar12 + 0x58) * 4) = local_dc;
      if (uVar3 == 4) {
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x54) * 4) = 0;
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x52) * 4) = 0;
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x56) * 4) = 0;
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x58) * 4) = 0;
      }
      else {
        *(uint *)(&DAT_081016e0 + (local_e8 + 0x52) * 4) = local_cc;
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x56) * 4) = 0x100;
        *(uint *)(&DAT_081016e0 + (local_e8 + 0x54) * 4) = local_d0;
        *(undefined4 *)(&DAT_081016e0 + (local_e8 + 0x58) * 4) = 0xc0;
      }
      iVar6 = DAT_081017cc;
      *(uint *)(&DAT_081016e0 + (iVar12 + 0x5a) * 4) = uVar2 << 8;
      *(uint *)(&DAT_081016e0 + (local_e8 + 0x5a) * 4) = uVar2 << 8;
      ioctl(iVar6,0x4600,&local_c8);
      local_b4 = 0;
      ioctl(iVar6,0x4606,&local_c8);
      iVar12 = DAT_081017d0;
      ioctl(DAT_081017d0,0x4600,&local_c8);
      local_b4 = 0;
      ioctl(iVar12,0x4606,&local_c8);
      goto LAB_0807a6b4;
    }
LAB_0807a3fc:
    if (3 < DAT_08101810) goto LAB_0807a788;
    uVar11 = 0x90;
    iVar12 = 0xc000;
    DAT_081017e4 = 0xc0;
LAB_0807a420:
    local_d8 = 0x100;
    local_e8 = 0x110;
    if (uVar3 == 0) goto LAB_0807a774;
LAB_0807a42c:
    if (uVar3 < 5) {
      if (DAT_08101810 == 1) {
        uVar11 = 0x5a;
        local_e8 = 0;
        local_dc = 300;
        local_e0 = 800;
      }
      else if ((DAT_08101810 == 0) || (3 < DAT_08101810)) {
        uVar11 = 0;
        local_e8 = 0xf0;
        local_dc = 0x1e0;
        local_e0 = 0x140;
      }
      else {
        uVar11 = 0;
        local_e8 = 0x50;
        local_dc = 0x1e0;
        local_e0 = 0x280;
      }
    }
    else {
      if (uVar3 != 5) goto LAB_0807a774;
      uVar11 = 0;
      local_dc = 0x1e0;
      local_e8 = 0;
      local_e0 = 800;
    }
  }
  else {
    if (DAT_08101810 != 1) {
      if (DAT_08101810 != 0) goto LAB_0807a3fc;
LAB_0807a788:
      uVar11 = 0x30;
      iVar12 = 0x18000;
      DAT_081017e4 = 0x180;
      goto LAB_0807a420;
    }
    uVar11 = 0x90;
    iVar12 = 0x18000;
    local_e8 = 0x90;
    local_d8 = 0x200;
    DAT_081017e4 = 0xc0;
    if (uVar3 != 0) goto LAB_0807a42c;
LAB_0807a774:
    local_e0 = local_d8;
    local_dc = DAT_081017e4;
  }
  uVar3 = DAT_081017e4;
  if (DAT_081017d4 != (void *)0x0) {
    memset(DAT_081017d4,0,DAT_081017dc);
    munmap(DAT_081017d4,DAT_081017dc);
  }
  if (DAT_081017d8 != (void *)0x0) {
    memset(DAT_081017d8,0,DAT_081017e0);
    munmap(DAT_081017d8,DAT_081017e0);
    DAT_081017d8 = (void *)0x0;
  }
  if (DAT_081017cc != -1) {
    close(DAT_081017cc);
  }
  if (DAT_081017d0 != -1) {
    close(DAT_081017d0);
    DAT_081017d0 = -1;
  }
  DAT_081017cc = open("/dev/fb1",2);
  sVar1 = uVar2 * iVar12 * 2;
  FUN_0807a0d0(DAT_081017cc,sVar1);
  iVar6 = DAT_081017cc;
  uVar5 = ioctl(DAT_081017cc,0x4600,&local_c8);
  if (uVar5 == 0) {
    local_bc = uVar3 << 1;
    local_c8 = local_d8;
    local_c0 = local_d8;
    local_b0 = uVar4;
    local_c4 = uVar3;
    local_b8 = uVar5;
    local_b4 = uVar5;
    iVar6 = ioctl(iVar6,0x4601,&local_c8);
    if (iVar6 != 0) {
      perror("IOCTL fbdev set overlay info failed");
    }
  }
  else {
    perror("IOCTL fbdev get overlay info failed");
  }
  iVar6 = DAT_081017cc;
  iVar7 = ioctl(DAT_081017cc,0x40444f35,&local_c8);
  if (iVar7 == 0) {
    local_c8 = local_e8;
    local_c0 = CONCAT31(local_c0._1_3_,1);
    local_bc = local_e0;
    local_b8 = local_dc;
    local_c4 = uVar11;
    iVar6 = ioctl(iVar6,0x40444f34,&local_c8);
    if (iVar6 != 0) {
      perror("IOCTL setup plane info failed");
    }
  }
  else {
    perror("IOCTL fbdev get plane info failed");
  }
  pvVar8 = mmap((void *)0x0,sVar1,2,1,DAT_081017cc,0);
  DAT_081017dc = sVar1;
  if (pvVar8 == (void *)0xffffffff) {
    perror("fb_pixels_overlay mmap failed");
  }
  pvVar13 = (void *)((int)pvVar8 + uVar2 * iVar12);
  printf("fb pixels overlay: %p\n",pvVar8);
  iVar12 = DAT_081017cc;
  DAT_08101828 = local_e8;
  if (uVar9 == 1) {
    DAT_08101838 = local_e0 >> 1;
    DAT_081017f0 = (void *)((int)pvVar8 + uVar2 * 0x100);
    DAT_081017f8 = (void *)((int)pvVar13 + uVar2 * 0x100);
    DAT_0810182c = DAT_08101838 + local_e8;
    DAT_08101840 = local_dc;
    DAT_08101848 = uVar2 << 9;
    DAT_08101844 = local_dc;
    DAT_08101834 = uVar11;
    DAT_0810183c = DAT_08101838;
    DAT_0810184c = DAT_08101848;
  }
  else if ((uVar9 == 0) || (3 < uVar9)) {
    DAT_08101840 = local_dc >> 1;
    DAT_08101838 = local_e0;
    DAT_081017f0 = (void *)((int)pvVar8 + uVar2 * 0xc000);
    DAT_081017f8 = (void *)((int)pvVar13 + uVar2 * 0xc000);
    DAT_08101848 = uVar2 << 8;
    DAT_0810182c = local_e8;
    DAT_08101834 = DAT_08101840 + uVar11;
    DAT_0810183c = DAT_08101838;
    DAT_08101844 = DAT_08101840;
    DAT_0810184c = DAT_08101848;
  }
  else {
    DAT_08101848 = uVar2 << 8;
    DAT_081017f0 = (void *)0x0;
    DAT_08101838 = local_e0;
    DAT_081017f8 = (void *)0x0;
    DAT_0810183c = 0;
    DAT_08101840 = local_dc;
    DAT_08101844 = 0;
    DAT_0810184c = 0;
    DAT_0810182c = 0;
    DAT_08101834 = 0;
  }
  DAT_081017d4 = pvVar8;
  DAT_081017ec = pvVar8;
  DAT_081017f4 = pvVar13;
  DAT_08101830 = uVar11;
  ioctl(DAT_081017cc,0x4600,&local_c8);
  local_b4 = 0;
  ioctl(iVar12,0x4606,&local_c8);
LAB_0807a6b4:
  printf("Got buffers %p/%p, %p/%p\n",DAT_081017ec,DAT_081017f0,DAT_081017f4,DAT_081017f8);
  printf("DS screen top is at (%d %d) to (%d %d)\n",DAT_08101828,DAT_08101830,
         DAT_08101828 + DAT_08101838 + -1,DAT_08101830 + DAT_08101840 + -1);
  printf("DS screen bottom is at (%d %d) to (%d %d)\n",DAT_0810182c,DAT_08101834,
         DAT_0810182c + DAT_0810183c + -1,DAT_08101834 + DAT_08101844 + -1);
  DAT_08101800 = 0;
  DAT_08101850 = 0;
  return;
}


