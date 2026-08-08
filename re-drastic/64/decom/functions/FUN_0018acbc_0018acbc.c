/*
 * Ghidra decompilation
 *
 * Function : FUN_0018acbc
 * Address  : 0018acbc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018acbc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint auStack_40 [2];
  uint uStack_38;
  byte bStack_34;
  byte bStack_33;
  short sStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = *(long *)(param_1 + 0x80008) + 0x86318;
  *(undefined *)(param_1 + 0x8003c) = 0;
  SDL_input._2072_8_ = 0;
  SDL_input._2088_4_ = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x80010);
LAB_0018ad38:
  iVar2 = SDL_PollEvent(auStack_40);
  if (iVar2 != 0) {
    while (auStack_40[0] != 0x600) {
      if (auStack_40[0] < 0x601) {
        if (auStack_40[0] == 0x400) {
          iVar2 = SUB84(SDL_input._2072_8_,4);
          SDL_input._2072_4_ = (int)SDL_input._2072_8_ + (int)fStack_24;
          SDL_input._2076_4_ = iVar2 + iStack_20;
          goto LAB_0018ad38;
        }
        if (0x400 < auStack_40[0]) {
          if (auStack_40[0] == 0x401) {
            SDL_input._2088_4_ = 1;
          }
          else if (auStack_40[0] == 0x402) {
            SDL_input._2088_4_ = 0;
          }
          goto LAB_0018ad38;
        }
        if (auStack_40[0] == 0x300) {
          if (uStack_2c != 0x1b) {
            uVar5 = SDL_GetModState();
            uVar4 = (uint)*(undefined8 *)
                           (lVar1 + (long)(int)(((int)uStack_2c >> 0x1e & 3U) << 8 |
                                               uStack_2c & 0xff) * 8);
            uVar12 = uVar12 | uVar4;
            uVar9 = uVar12;
            if (((uVar12 >> 0x1c & 1) != 0) &&
               (uVar9 = uVar12 & 0xefffffff | 0x20000000, (uVar5 & 3) == 0)) {
              uVar9 = uVar12;
            }
            if ((uVar9 >> 0x14 & 1) != 0) {
              uVar12 = uVar9 | 0x10000000;
              if ((uVar5 & 1) == 0) {
                uVar12 = uVar9;
              }
              uVar9 = uVar12 | 0x20000000;
              if ((uVar5 & 2) == 0) {
                uVar9 = uVar12;
              }
            }
            uVar12 = uVar9;
            if (((uVar9 >> 0x12 & 1) != 0) &&
               (uVar12 = uVar9 & 0xfffbffff | 0x2000000, (uVar5 & 3) == 0)) {
              uVar12 = uVar9;
            }
            if ((uVar4 >> 0xe & 1) != 0) {
              SDL_input._2084_4_ = 20000;
            }
            if ((uVar4 >> 0x10 & 1) != 0) {
              SDL_input._2080_4_ = 20000;
            }
            if ((uVar4 >> 0xd & 1) != 0) {
              SDL_input._2084_4_ = 0xffffb1e0;
            }
            if ((uVar4 >> 0xf & 1) != 0) {
              SDL_input._2080_4_ = 0xffffb1e0;
            }
            goto LAB_0018ad38;
          }
        }
        else {
          if (auStack_40[0] == 0x301) {
            uVar9 = (uint)*(undefined8 *)
                           (lVar1 + (long)(int)(((int)uStack_2c >> 0x1e & 3U) << 8 |
                                               uStack_2c & 0xff) * 8);
            goto joined_r0x0018aec4;
          }
          if (auStack_40[0] != 0x100) goto LAB_0018ad38;
        }
        uVar12 = uVar12 | 0x4000000;
        goto LAB_0018ad38;
      }
      if (auStack_40[0] != 0x604) {
        if (auStack_40[0] < 0x605) {
          if (auStack_40[0] == 0x602) {
            uVar9 = (uStack_38 & 3) << 8;
            uVar10 = (uint)*(undefined8 *)(lVar1 + (long)(int)(uVar9 | 0x444) * 8);
            uVar11 = (uint)*(undefined8 *)(lVar1 + (long)(int)(uVar9 | 0x441) * 8);
            uVar4 = (uint)*(undefined8 *)(lVar1 + (long)(int)(uVar9 | 0x442) * 8);
            uVar8 = (uint)*(undefined8 *)(lVar1 + (long)(int)(uVar9 | 0x448) * 8);
            uVar12 = uVar12 & ((uVar4 | uVar8 | uVar10 | uVar11) ^ 0xffffffff);
            uVar9 = uVar12 | uVar11;
            if ((bStack_33 & 1) == 0) {
              uVar9 = uVar12;
            }
            uVar12 = uVar9 | uVar10;
            if ((bStack_33 & 4) == 0) {
              uVar12 = uVar9;
            }
            uVar9 = uVar12 | uVar8;
            if ((bStack_33 & 8) == 0) {
              uVar9 = uVar12;
            }
            uVar12 = uVar9 | uVar4;
            if ((bStack_33 & 2) == 0) {
              uVar12 = uVar9;
            }
          }
          else if (auStack_40[0] == 0x603) {
            uVar9 = (uint)*(undefined8 *)
                           (lVar1 + (long)(int)((uStack_38 & 3) << 8 | (uint)bStack_34 | 0x400) * 8)
            ;
            uVar12 = uVar12 | uVar9;
            if ((uVar9 >> 0x11 & 1) != 0) {
              SDL_input._2088_4_ = 1;
            }
            if ((uVar9 >> 0xe & 1) != 0) {
              SDL_input._2084_4_ = 20000;
            }
            if ((uVar9 >> 0x10 & 1) != 0) {
              SDL_input._2080_4_ = 20000;
            }
            if ((uVar9 >> 0xd & 1) != 0) {
              SDL_input._2084_4_ = 0xffffb1e0;
            }
            if ((uVar9 >> 0xf & 1) != 0) {
              SDL_input._2080_4_ = 0xffffb1e0;
            }
          }
        }
        else if (auStack_40[0] == 0x701) {
          *(undefined *)(param_1 + 0x8001c) = 0;
        }
        else if ((auStack_40[0] & 0xfffffffd) == 0x700) {
          convert_touch_coordinates
                    ((int)fStack_28,(int)fStack_24,param_1 + 0x80014,param_1 + 0x80018,
                     *(undefined4 *)(*(long *)(param_1 + 0x80008) + 0x85a14));
          *(undefined *)(param_1 + 0x8001c) = 1;
        }
        goto LAB_0018ad38;
      }
      uVar9 = (uint)*(undefined8 *)
                     (lVar1 + (long)(int)((uStack_38 & 3) << 8 | (uint)bStack_34 | 0x400) * 8);
      if ((uVar9 >> 0x11 & 1) != 0) {
        SDL_input._2088_4_ = 0;
      }
joined_r0x0018aec4:
      uVar12 = uVar12 & (uVar9 ^ 0xffffffff);
      if ((uVar9 >> 0xe & 1) != 0) {
        SDL_input._2084_4_ = 0;
      }
      if ((uVar9 >> 0x10 & 1) != 0) {
        SDL_input._2080_4_ = 0;
      }
      if ((uVar9 >> 0xd & 1) != 0) {
        SDL_input._2084_4_ = 0;
      }
      if ((uVar9 >> 0xf & 1) == 0) goto LAB_0018ad38;
      SDL_input._2080_4_ = 0;
      iVar2 = SDL_PollEvent(auStack_40);
      if (iVar2 == 0) goto LAB_0018adc8;
    }
    uVar10 = (uStack_38 & 3) << 8 | (uint)bStack_34;
    uVar11 = (uint)bStack_34;
    uVar9 = uVar11 + bStack_34;
    iVar2 = (int)sStack_30 / 10000;
    uVar8 = *(uint *)(SDL_input + (ulong)uStack_38 * 4) & (3 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU)
    ;
    uVar4 = 1 << (ulong)(uVar9 & 0x1f);
    uVar9 = 2 << (ulong)(uVar9 & 0x1f);
    if (sStack_30 < 0x2711) {
      if (sStack_30 < -10000) {
        uVar8 = uVar8 | uVar9;
        uVar4 = uVar4 & uVar8;
      }
      else {
        uVar4 = uVar4 & uVar8;
        uVar9 = uVar9 & uVar8;
      }
    }
    else {
      uVar8 = uVar8 | uVar4;
      uVar9 = uVar9 & uVar8;
    }
    uVar7 = (uint)*(undefined8 *)(lVar1 + (ulong)(uVar10 | 0x4c0) * 8);
    uVar10 = (uint)*(undefined8 *)(lVar1 + (ulong)(uVar10 | 0x480) * 8);
    uVar12 = uVar12 & ((uVar7 | uVar10) ^ 0xffffffff);
    *(uint *)(SDL_input + (ulong)uStack_38 * 4) = uVar8;
    if (((uVar7 | uVar10) >> 0x11 & 1) != 0) {
      SDL_input._2088_4_ = 0;
    }
    if (uVar4 != 0) {
      if ((uVar10 >> 0x11 & 1) != 0) {
        SDL_input._2088_4_ = 1;
      }
      uVar12 = uVar12 | uVar10;
    }
    if (uVar9 != 0) {
      if ((uVar7 >> 0x11 & 1) != 0) {
        SDL_input._2088_4_ = 1;
      }
      uVar12 = uVar12 | uVar7;
    }
    if ((uVar10 >> 0xe & 1) != 0) {
      SDL_input._2084_4_ = -iVar2;
    }
    if ((uVar10 >> 0x10 & 1) != 0) {
      SDL_input._2080_4_ = -iVar2;
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      SDL_input._2084_4_ = iVar2;
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      SDL_input._2080_4_ = iVar2;
    }
    if (uVar11 == 3) {
      *(undefined4 *)(param_1 + 0x80038) = 0x43000000;
      *(undefined *)(param_1 + 0x8003c) = 1;
      *(float *)(param_1 + 0x80030) = (float)((-(int)sStack_30 >> 8) + 0x80);
    }
    else if (uVar11 == 4) {
      *(undefined *)(param_1 + 0x8003c) = 1;
      *(float *)(param_1 + 0x80034) = (float)(((int)sStack_30 >> 8) + 0x80);
      *(undefined4 *)(param_1 + 0x80038) = 0x43000000;
    }
    goto LAB_0018ad38;
  }
LAB_0018adc8:
  SDL_input._2076_4_ = SDL_input._2076_4_ + SDL_input._2084_4_;
  SDL_input._2072_4_ = SDL_input._2072_4_ + SDL_input._2080_4_;
  if (SDL_input._2072_8_ == 0) {
    if (SDL_input._2088_4_ == -1) goto LAB_0018ae60;
    if ((int)(SDL_input._2072_4_ + SDL_input._2064_4_) < 0) goto LAB_0018b29c;
LAB_0018ae14:
    SDL_input._2064_4_ = SDL_input._2072_4_ + SDL_input._2064_4_;
    if (0xff < (int)SDL_input._2064_4_) {
      SDL_input._2064_4_ = 0xff;
    }
    if (-1 < (int)(SDL_input._2076_4_ + SDL_input._2068_4_)) goto LAB_0018ae2c;
LAB_0018b2a8:
    SDL_input._2068_4_ = 0;
    if (SDL_input._2088_4_ == -1) goto LAB_0018b2bc;
LAB_0018ae4c:
    uVar6 = SDL_input._2068_4_;
    uVar3 = SDL_input._2064_4_;
    uVar9 = SDL_input._2088_4_ & 0xff;
    *(char *)(param_1 + 0x8001c) = (char)SDL_input._2088_4_;
  }
  else {
    if (-1 < (int)(SDL_input._2072_4_ + SDL_input._2064_4_)) goto LAB_0018ae14;
LAB_0018b29c:
    SDL_input._2064_4_ = 0;
    if ((int)(SDL_input._2076_4_ + SDL_input._2068_4_) < 0) goto LAB_0018b2a8;
LAB_0018ae2c:
    SDL_input._2068_4_ = SDL_input._2076_4_ + SDL_input._2068_4_;
    if (0xbf < (int)SDL_input._2068_4_) {
      SDL_input._2068_4_ = 0xbf;
    }
    if (SDL_input._2088_4_ != -1) goto LAB_0018ae4c;
LAB_0018b2bc:
    uVar9 = (uint)*(byte *)(param_1 + 0x8001c);
    uVar3 = SDL_input._2064_4_;
    uVar6 = SDL_input._2068_4_;
  }
  if (uVar9 != 0) {
    *(undefined4 *)(param_1 + 0x80014) = uVar3;
    *(undefined4 *)(param_1 + 0x80018) = uVar6;
  }
  screen_set_cursor_position();
LAB_0018ae60:
  *(uint *)(param_1 + 0x80010) = uVar12;
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


