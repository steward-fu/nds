/*
 * Ghidra decompilation
 *
 * Function : ReadHeader15
 * Address  : 001bc3b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ReadHeader15() */

long Archive::ReadHeader15(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  Archive AVar5;
  undefined uVar6;
  char cVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  long *in_x0;
  ulong uVar16;
  ulong uVar17;
  RarTime *this;
  longlong lVar18;
  size_t sVar19;
  ulong uVar20;
  code *pcVar21;
  ulong uVar22;
  byte bVar23;
  long lVar24;
  long lVar25;
  Archive AVar26;
  void *local_28b0;
  ulong local_28a0;
  uint local_2898;
  RarLocalTime aRStack_2890 [20];
  int local_287c;
  uint local_2878;
  void *local_2868 [5];
  long local_2840;
  CryptData *local_2830;
  long *local_2828;
  long *plStack_2820;
  long *local_2818;
  undefined8 local_2810;
  char acStack_2808 [2048];
  uchar auStack_2008 [8192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RawRead::RawRead((RawRead *)local_2868,(File *)in_x0);
  AVar26 = *(Archive *)((long)in_x0 + 0x11214);
  if (AVar26 == (Archive)0x0) {
LAB_001bc424:
                    /* try { // try from 001bc42c to 001bcdf7 has its CatchHandler @ 001bd470 */
    RawRead::Read((RawRead *)local_2868,7);
    if (local_2840 == 0) {
      lVar25 = File::FileLength((File *)in_x0);
      if ((lVar25 < in_x0[0x223f]) || (lVar25 < in_x0[0x2240])) goto LAB_001bc638;
      if (lVar25 != in_x0[0x223f] && lVar25 != in_x0[0x2240]) {
        iVar14 = *(int *)(in_x0 + 0x2241);
joined_r0x001bc630:
        if (iVar14 == 3) goto LAB_001bc638;
      }
    }
    else {
      uVar10 = RawRead::Get2();
      *(uint *)(in_x0 + 0x10db) = uVar10 & 0xffff;
      *(Archive *)(in_x0 + 0x10dd) = (Archive)0x0;
      uVar10 = RawRead::Get1();
      uVar10 = uVar10 & 0xff;
      uVar11 = RawRead::Get2();
      *(uint *)(in_x0 + 0x10dc) = uVar11 & 0xffff;
      *(byte *)(in_x0 + 0x10dd) = (byte)((uVar11 & 0xffff) >> 0xe) & 1;
      uVar11 = RawRead::Get2();
      uVar11 = uVar11 & 0xffff;
      *(uint *)((long)in_x0 + 0x86dc) = uVar10;
      *(uint *)((long)in_x0 + 0x86e4) = uVar11;
      if (6 < uVar11) {
        if (uVar10 == 0x7a) {
          uVar15 = 3;
          *(undefined4 *)((long)in_x0 + 0x86dc) = 3;
LAB_001bc4b8:
          *(undefined4 *)((long)in_x0 + 0x7624) = uVar15;
LAB_001bc4c4:
          RawRead::Read((RawRead *)local_2868,(ulong)(uVar11 - 7));
        }
        else {
          if (uVar10 < 0x7b) {
            if (uVar10 != 0x73) {
              if (uVar10 == 0x74) {
                uVar15 = 2;
                *(undefined4 *)((long)in_x0 + 0x86dc) = 2;
                goto LAB_001bc4b8;
              }
              goto LAB_001bcda0;
            }
            *(undefined4 *)((long)in_x0 + 0x86dc) = 1;
            *(undefined4 *)((long)in_x0 + 0x7624) = 1;
LAB_001bcdbc:
            if ((*(uint *)(in_x0 + 0x10dc) >> 1 & 1) == 0) goto LAB_001bc4c4;
          }
          else {
            if (uVar10 == 0x7b) {
              uVar15 = 5;
              *(undefined4 *)((long)in_x0 + 0x86dc) = 5;
              goto LAB_001bc4b8;
            }
LAB_001bcda0:
            *(uint *)((long)in_x0 + 0x7624) = uVar10;
            if (uVar10 != 0x75) {
              if (uVar10 != 1) goto LAB_001bc4c4;
              goto LAB_001bcdbc;
            }
          }
          RawRead::Read((RawRead *)local_2868,6);
        }
        lVar25 = in_x0[0x223f];
        uVar16 = FullHeaderSize((Archive *)in_x0,(ulong)*(uint *)((long)in_x0 + 0x86e4));
        uVar10 = *(uint *)((long)in_x0 + 0x86dc);
        in_x0[0x2240] = lVar25 + (uVar16 & 0xffffffff);
        if (uVar10 == 0x76) {
          *(long *)((long)in_x0 + 0x10e24) = in_x0[0x10db];
          *(long *)((long)in_x0 + 0x10e2c) = in_x0[0x10dc];
          *(undefined4 *)((long)in_x0 + 0x10e34) = *(undefined4 *)(in_x0 + 0x10dd);
          AVar5 = (Archive)RawRead::Get1();
          *(Archive *)(in_x0 + 0x21c7) = AVar5;
          AVar5 = (Archive)RawRead::Get1();
          *(Archive *)((long)in_x0 + 0x10e39) = AVar5;
          AVar5 = (Archive)RawRead::Get1();
          *(Archive *)((long)in_x0 + 0x10e3a) = AVar5;
          uVar15 = RawRead::Get4();
          *(undefined4 *)((long)in_x0 + 0x10e3c) = uVar15;
        }
        else if (uVar10 < 0x77) {
          if (uVar10 == 5) {
            in_x0[0x1951] = in_x0[0x10db];
            in_x0[0x1952] = in_x0[0x10dc];
            *(undefined4 *)(in_x0 + 0x1953) = *(undefined4 *)(in_x0 + 0x10dd);
            uVar10 = *(uint *)(in_x0 + 0x1952);
            uVar11 = uVar10 >> 3 & 1;
            *(byte *)((long)in_x0 + 0xcaa4) = (byte)uVar10 & 1;
            *(bool *)((long)in_x0 + 0xcaa5) = (uVar10 & 2) != 0;
            *(byte *)((long)in_x0 + 0xcaa6) = (byte)(uVar10 >> 2) & 1;
            *(Archive *)((long)in_x0 + 0xcaa7) = SUB41(uVar11,0);
            if ((uVar10 & 2) == 0) {
              if (uVar11 != 0) {
LAB_001bd074:
                uVar10 = RawRead::Get2();
                *(uint *)(in_x0 + 0x1954) = uVar10 & 0xffff;
                *(uint *)((long)in_x0 + 0x11234) = uVar10 & 0xffff;
              }
            }
            else {
              uVar15 = RawRead::Get4();
              *(undefined4 *)((long)in_x0 + 0xca9c) = uVar15;
              if (*(Archive *)((long)in_x0 + 0xcaa7) != (Archive)0x0) goto LAB_001bd074;
            }
          }
          else if (uVar10 < 6) {
            if (uVar10 == 1) {
              MainHeader::Reset();
              in_x0[0x10df] = in_x0[0x10db];
              in_x0[0x10e0] = in_x0[0x10dc];
              *(undefined4 *)(in_x0 + 0x10e1) = *(undefined4 *)(in_x0 + 0x10dd);
              uVar9 = RawRead::Get2();
              *(undefined2 *)((long)in_x0 + 0x870c) = uVar9;
              iVar14 = RawRead::Get4();
              uVar10 = *(uint *)(in_x0 + 0x10e0);
              *(int *)(in_x0 + 0x10e2) = iVar14;
              *(byte *)((long)in_x0 + 0x1120c) = (byte)(uVar10 >> 3) & 1;
              *(byte *)((long)in_x0 + 0x1120d) = (byte)uVar10 & 1;
              *(byte *)((long)in_x0 + 0x1120f) = (byte)(uVar10 >> 2) & 1;
              *(byte *)((long)in_x0 + 0x11213) = (byte)(uVar10 >> 6) & 1;
              *(byte *)((long)in_x0 + 0x11214) = (byte)(uVar10 >> 7) & 1;
              AVar5 = (Archive)0x1;
              if (iVar14 == 0) {
                AVar5 = (Archive)(*(short *)((long)in_x0 + 0x870c) != 0);
              }
              *(Archive *)(in_x0 + 0x2242) = AVar5;
              *(byte *)((long)in_x0 + 0x8714) = (byte)(uVar10 >> 1) & 1;
              *(byte *)((long)in_x0 + 0x11211) = (byte)(uVar10 >> 8) & 1;
              *(byte *)((long)in_x0 + 0x11212) = (byte)(uVar10 >> 4) & 1;
            }
            else {
              if (1 < uVar10 - 2) goto LAB_001bc51c;
              plVar2 = in_x0 + 0x10ee;
              if (uVar10 != 2) {
                plVar2 = in_x0 + 0x1959;
              }
              FileHeader::Reset((FileHeader *)plVar2,0);
              lVar25 = in_x0[0x10dc];
              *plVar2 = in_x0[0x10db];
              plVar2[1] = lVar25;
              uVar11 = *(uint *)(plVar2 + 1);
              *(uint *)(plVar2 + 2) = *(uint *)(in_x0 + 0x10dd);
              *(byte *)(plVar2 + 0x413) = (byte)uVar11 & 1;
              *(byte *)((long)plVar2 + 0x2099) = (byte)(uVar11 >> 1) & 1;
              *(byte *)((long)plVar2 + 0x209b) = (byte)(uVar11 >> 2) & 1;
              *(byte *)(plVar2 + 0x414) = (byte)(uVar11 >> 10) & 1;
              if (uVar10 == 2) {
                if ((uVar11 >> 4 & 1) == 0) {
                  bVar23 = 0;
                  *(undefined *)(plVar2 + 0x41e) = 0;
                }
                else {
                  bVar23 = 0;
                  *(undefined *)(plVar2 + 0x41e) = 1;
                }
              }
              else {
                bVar23 = (byte)(uVar11 >> 4) & 1;
                *(undefined *)(plVar2 + 0x41e) = 0;
              }
              bVar4 = (uVar11 & 0xe0) == 0xe0;
              *(bool *)((long)plVar2 + 0x20f1) = bVar4;
              *(byte *)((long)plVar2 + 0x2102) = bVar23;
              lVar25 = 0;
              if (!bVar4) {
                lVar25 = (long)(0x10000 << ((ulong)(uVar11 >> 5) & 7));
              }
              plVar2[0x41f] = lVar25;
              *(byte *)((long)plVar2 + 0x20f2) = (byte)(uVar11 >> 3) & 1;
              *(byte *)((long)plVar2 + 0x20f3) = (byte)(uVar11 >> 0xb) & 1;
              uVar11 = RawRead::Get4();
              *(uint *)((long)plVar2 + 0x14) = uVar11;
              uVar11 = RawRead::Get4();
              uVar6 = RawRead::Get1();
              *(undefined *)(plVar2 + 3) = uVar6;
              *(uint *)(plVar2 + 0x40e) = 2;
              uVar12 = RawRead::Get4();
              *(uint *)((long)plVar2 + 0x2074) = uVar12;
              uVar12 = RawRead::Get4();
              uVar6 = RawRead::Get1();
              *(undefined *)((long)plVar2 + 0x19) = uVar6;
              cVar7 = RawRead::Get1();
              *(char *)((long)plVar2 + 0x1a) = cVar7 + -0x30;
              uVar16 = RawRead::Get2();
              uVar17 = uVar16 & 0xffff;
              local_2898 = (uint)uVar16 & 0xffff;
              uVar13 = RawRead::Get4();
              *(uint *)((long)plVar2 + 0x1c) = uVar13;
              *(uint *)((long)plVar2 + 0x209c) = 0;
              if (*(char *)((long)plVar2 + 0x209b) != '\0') {
                bVar23 = *(byte *)((long)plVar2 + 0x19);
                if (bVar23 == 0xf) {
                  *(uint *)((long)plVar2 + 0x209c) = 2;
                }
                else if (bVar23 < 0x10) {
                  if (bVar23 == 0xd) {
                    *(uint *)((long)plVar2 + 0x209c) = 1;
                  }
                  else {
LAB_001bd388:
                    *(uint *)((long)plVar2 + 0x209c) = 4;
                  }
                }
                else {
                  if ((bVar23 != 0x14) && (bVar23 != 0x1a)) goto LAB_001bd388;
                  *(uint *)((long)plVar2 + 0x209c) = 3;
                }
              }
              *(uint *)((long)plVar2 + 0x2104) = 2;
              if ((*(byte *)(plVar2 + 3) - 3 & 0xfd) == 0) {
                *(uint *)((long)plVar2 + 0x2104) = 1;
              }
              else if (*(byte *)(plVar2 + 3) < 6) {
                *(uint *)((long)plVar2 + 0x2104) = 0;
              }
              *(uint *)(plVar2 + 0x421) = 0;
              if ((plVar2[3] & 0xf000000000ffU) == 0xa00000000003) {
                plVar2[0x421] = 1;
              }
              bVar23 = (byte)(uVar13 >> 0x1f);
              if (uVar10 == 2) {
                bVar23 = 0;
              }
              *(byte *)(plVar2 + 0x420) = bVar23;
              *(bool *)((long)plVar2 + 0x2101) = (*(uint *)(plVar2 + 1) & 0x100) != 0;
              if ((*(uint *)(plVar2 + 1) & 0x100) == 0) {
                bVar4 = uVar11 == 0xffffffff;
                lVar25 = 0;
                lVar24 = 0;
                *(bool *)((long)plVar2 + 0x209a) = bVar4;
              }
              else {
                uVar13 = RawRead::Get4();
                local_28a0 = (ulong)uVar13;
                uVar13 = RawRead::Get4();
                bVar4 = (uVar11 & uVar13) == 0xffffffff;
                lVar25 = (ulong)uVar13 << 0x20;
                lVar24 = local_28a0 << 0x20;
                *(bool *)((long)plVar2 + 0x209a) = bVar4;
              }
              lVar25 = lVar25 + (ulong)uVar11;
              if (bVar4) {
                lVar25 = 0x7fffffff7fffffff;
              }
              plVar2[0x40b] = (ulong)*(uint *)((long)plVar2 + 0x14) + lVar24;
              plVar2[0x40c] = lVar25;
              uVar16 = uVar17;
              if (0x1fff < uVar17) {
                uVar16 = 0x1fff;
              }
              RawRead::GetB((RawRead *)local_2868,auStack_2008,uVar16);
              auStack_2008[uVar16] = '\0';
              if (uVar10 == 2) {
                if ((*(uint *)(plVar2 + 1) >> 9 & 1) == 0) {
                  *(uint *)(plVar2 + 4) = 0;
                }
                else {
                  EncodeFileName::EncodeFileName((EncodeFileName *)aRStack_2890);
                  sVar19 = strlen((char *)auStack_2008);
                  if (uVar17 == sVar19) {
                    UtfToWide((char *)auStack_2008,(wchar_t *)(plVar2 + 4),0x7ff);
                  }
                  else {
                    EncodeFileName::Decode
                              ((EncodeFileName *)aRStack_2890,(char *)auStack_2008,
                               auStack_2008 + sVar19 + 1,uVar17 - (sVar19 + 1),
                               (wchar_t *)(plVar2 + 4),0x800);
                  }
                }
                IntToExt((char *)auStack_2008,acStack_2808,0x800);
                plVar1 = plVar2 + 4;
                GetWideName(acStack_2808,(wchar_t *)plVar1,(wchar_t *)plVar1,0x800);
                iVar14 = *(int *)(in_x0[0xec0] + 0xc2a4);
                if (iVar14 == 1) {
                  wcsupper((wchar_t *)plVar1);
                  iVar14 = *(int *)(in_x0[0xec0] + 0xc2a4);
                }
                if (iVar14 == 2) {
                  wcslower((wchar_t *)plVar1);
                }
                ConvertFileHeader((Archive *)in_x0,(FileHeader *)plVar2);
                uVar10 = *(uint *)(plVar2 + 1) & 0x400;
              }
              else {
                plVar1 = plVar2 + 4;
                CharToWide((char *)auStack_2008,(wchar_t *)plVar1,0x800);
                uVar10 = *(uint *)(plVar2 + 1) & 0x400;
                iVar3 = *(uint *)((long)plVar2 + 0xc) - local_2898;
                iVar14 = iVar3 + -0x28;
                if (uVar10 == 0) {
                  iVar14 = iVar3 + -0x20;
                }
                if (0 < iVar14) {
                  uVar17 = (ulong)iVar14;
                  uVar16 = plVar2[0x406];
                  if (uVar16 < (ulong)(long)iVar14) {
                    uVar22 = plVar2[0x407];
                    plVar2[0x405] = uVar17;
                    uVar20 = uVar17;
                    if ((uVar22 != 0 && uVar22 <= uVar17) && (uVar22 == 0 || uVar17 != uVar22)) {
                      ErrorHandler::GeneralErrMsg
                                (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                      ErrorHandler::MemoryError();
                      uVar20 = plVar2[0x405];
                      uVar16 = plVar2[0x406];
                    }
                    uVar16 = uVar16 + 0x20 + (uVar16 >> 2);
                    if (uVar16 < uVar20) {
                      uVar16 = uVar20;
                    }
                    local_28b0 = realloc((void *)plVar2[0x404],uVar16);
                    if (local_28b0 == (void *)0x0) {
                      ErrorHandler::MemoryError();
                    }
                    plVar2[0x404] = (long)local_28b0;
                    plVar2[0x406] = uVar16;
                  }
                  else {
                    local_28b0 = (void *)plVar2[0x404];
                    plVar2[0x405] = uVar17;
                  }
                  RawRead::GetB((RawRead *)local_2868,local_28b0,uVar17);
                  iVar14 = wcscmp((wchar_t *)plVar1,L"RR");
                  if (iVar14 == 0) {
                    lVar25 = plVar2[0x404];
                    pcVar21 = *(code **)(*in_x0 + 0x20);
                    in_x0[0xec1] = (ulong)((uint)*(byte *)(lVar25 + 10) * 0x10000 +
                                           (uint)*(byte *)(lVar25 + 9) * 0x100 +
                                          (uint)*(byte *)(lVar25 + 8) +
                                          (uint)*(byte *)(lVar25 + 0xb) * 0x1000000) << 9;
                    lVar18 = (*pcVar21)();
                    uVar15 = ToPercent(in_x0[0xec1],lVar18);
                    *(undefined4 *)(in_x0 + 0xec2) = uVar15;
                    iVar14 = ToPercent(lVar18 / 200 + in_x0[0xec1],lVar18);
                    if (*(int *)(in_x0 + 0xec2) < iVar14) {
                      *(int *)(in_x0 + 0xec2) = *(int *)(in_x0 + 0xec2) + 1;
                    }
                  }
                  uVar10 = *(uint *)(plVar2 + 1) & 0x400;
                }
                iVar14 = wcscmp((wchar_t *)plVar1,L"CMT");
                if (iVar14 == 0) {
                  *(Archive *)((long)in_x0 + 0x1120e) = (Archive)0x1;
                }
              }
              if (uVar10 != 0) {
                RawRead::GetB((RawRead *)local_2868,(void *)((long)plVar2 + 0x20a1),8);
              }
              RarTime::SetDos((RarTime *)(plVar2 + 0x408),uVar12);
              if ((*(uint *)(plVar2 + 1) >> 0xc & 1) != 0) {
                local_28a0._0_4_ = RawRead::Get2();
                local_28a0._0_4_ = (uint)local_28a0 & 0xffff;
                local_2828 = in_x0 + 0x14f6;
                plStack_2820 = in_x0 + 0x14f7;
                lVar25 = 1;
                bVar23 = 0xc;
                local_2818 = in_x0 + 0x14f8;
                local_2810 = 0;
                do {
                  uVar10 = (int)(uint)local_28a0 >> (bVar23 & 0x1f);
                  this = (RarTime *)(&local_2830)[lVar25];
                  if ((uVar10 & 8) != 0 && this != (RarTime *)0x0) {
                    if ((int)lVar25 != 1) {
                      uVar11 = RawRead::Get4();
                      RarTime::SetDos(this,uVar11);
                    }
                    RarTime::GetLocal(this,aRStack_2890);
                    if ((uVar10 >> 2 & 1) != 0) {
                      local_287c = local_287c + 1;
                    }
                    local_2878 = 0;
                    if ((uVar10 & 3) != 0) {
                      uVar10 = (3 - (uVar10 & 3)) * 8;
                      do {
                        uVar11 = RawRead::Get1();
                        local_2878 = local_2878 | (uVar11 & 0xff) << (ulong)(uVar10 & 0x1f);
                        uVar10 = uVar10 + 8;
                      } while (uVar10 != 0x18);
                    }
                    RarTime::SetLocal(this,aRStack_2890);
                  }
                  lVar25 = lVar25 + 1;
                  bVar23 = bVar23 - 4;
                } while (lVar25 != 5);
              }
              bVar4 = *(bool *)((long)plVar2 + 0x20f2);
              in_x0[0x2240] = in_x0[0x2240] + plVar2[0x40b];
              uVar8 = RawRead::GetCRC15((RawRead *)local_2868,bVar4);
              if (*(uint *)plVar2 != (uint)uVar8) {
                *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
                ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
              }
            }
          }
          else if (uVar10 == 0x75) {
            in_x0[0x21bc] = in_x0[0x10db];
            in_x0[0x21bd] = in_x0[0x10dc];
            *(undefined4 *)(in_x0 + 0x21be) = *(undefined4 *)(in_x0 + 0x10dd);
            uVar9 = RawRead::Get2();
            *(undefined2 *)((long)in_x0 + 0x10df4) = uVar9;
            AVar5 = (Archive)RawRead::Get1();
            *(Archive *)((long)in_x0 + 0x10df6) = AVar5;
            AVar5 = (Archive)RawRead::Get1();
            *(Archive *)((long)in_x0 + 0x10df7) = AVar5;
            uVar9 = RawRead::Get2();
            *(undefined2 *)(in_x0 + 0x21bf) = uVar9;
          }
          else {
LAB_001bc51c:
            if ((*(uint *)(in_x0 + 0x10dc) >> 0xf & 1) != 0) {
              uVar16 = RawRead::Get4();
              in_x0[0x2240] = in_x0[0x2240] + (uVar16 & 0xffffffff);
            }
          }
        }
        else if (uVar10 == 0x78) {
          *(long *)((long)in_x0 + 0x10dfc) = in_x0[0x10db];
          *(long *)((long)in_x0 + 0x10e04) = in_x0[0x10dc];
          *(undefined4 *)((long)in_x0 + 0x10e0c) = *(undefined4 *)(in_x0 + 0x10dd);
          uVar15 = RawRead::Get4();
          *(undefined4 *)(in_x0 + 0x21c2) = uVar15;
          AVar5 = (Archive)RawRead::Get1();
          *(Archive *)((long)in_x0 + 0x10e14) = AVar5;
          uVar9 = RawRead::Get2();
          *(undefined2 *)((long)in_x0 + 0x10e16) = uVar9;
          uVar15 = RawRead::Get4();
          *(undefined4 *)(in_x0 + 0x21c3) = uVar15;
          RawRead::GetB((RawRead *)local_2868,(Archive *)((long)in_x0 + 0x10e1c),8);
          in_x0[0x2240] = in_x0[0x2240] + (ulong)*(uint *)(in_x0 + 0x21c2);
          in_x0[0xec1] = (ulong)*(ushort *)((long)in_x0 + 0x10e16) << 9;
        }
        else if (uVar10 == 0x79) {
          in_x0[0x21c8] = in_x0[0x10db];
          in_x0[0x21c9] = in_x0[0x10dc];
          *(undefined4 *)(in_x0 + 0x21ca) = *(undefined4 *)(in_x0 + 0x10dd);
          uVar15 = RawRead::Get4();
          *(undefined4 *)((long)in_x0 + 0x10e54) = uVar15;
          uVar9 = RawRead::Get2();
          *(undefined2 *)(in_x0 + 0x21cb) = uVar9;
          uVar9 = RawRead::Get2();
          *(undefined2 *)((long)in_x0 + 0x10e5a) = uVar9;
        }
        else {
          if (uVar10 != 0x77) goto LAB_001bc51c;
          plVar2 = in_x0 + 0x1955;
          *plVar2 = in_x0[0x10db];
          in_x0[0x1956] = in_x0[0x10dc];
          *(undefined4 *)(in_x0 + 0x1957) = *(undefined4 *)(in_x0 + 0x10dd);
          uVar10 = RawRead::Get4();
          *(uint *)((long)in_x0 + 0xcabc) = uVar10;
          in_x0[0x2240] = in_x0[0x2240] + (ulong)uVar10;
          uVar9 = RawRead::Get2();
          *(undefined2 *)(in_x0 + 0x1958) = uVar9;
          AVar5 = (Archive)RawRead::Get1();
          uVar8 = *(ushort *)(in_x0 + 0x1958);
          *(Archive *)((long)in_x0 + 0xcac2) = AVar5;
          if (uVar8 == 0x102) {
            *(long *)((long)in_x0 + 0x1107c) = *plVar2;
            *(long *)((long)in_x0 + 0x11084) = in_x0[0x1956];
            *(long *)((long)in_x0 + 0x1108c) = in_x0[0x1957];
            *(undefined4 *)((long)in_x0 + 0x11093) = *(undefined4 *)((long)in_x0 + 0xcabf);
            uVar15 = RawRead::Get4();
            *(undefined4 *)(in_x0 + 0x2213) = uVar15;
            uVar15 = RawRead::Get4();
            *(undefined4 *)((long)in_x0 + 0x1109c) = uVar15;
          }
          else if (uVar8 < 0x103) {
            if (uVar8 == 0x100) {
LAB_001bd09c:
              in_x0[0x2214] = *plVar2;
              in_x0[0x2215] = in_x0[0x1956];
              in_x0[0x2216] = in_x0[0x1957];
              *(undefined4 *)((long)in_x0 + 0x110b7) = *(undefined4 *)((long)in_x0 + 0xcabf);
              uVar15 = RawRead::Get4();
              *(undefined4 *)((long)in_x0 + 0x110bc) = uVar15;
              AVar5 = (Archive)RawRead::Get1();
              *(Archive *)(in_x0 + 0x2218) = AVar5;
              AVar5 = (Archive)RawRead::Get1();
              *(Archive *)((long)in_x0 + 0x110c1) = AVar5;
              uVar15 = RawRead::Get4();
              *(undefined4 *)((long)in_x0 + 0x110c4) = uVar15;
            }
            else if (uVar8 == 0x101) {
              *(long *)((long)in_x0 + 0x10e5c) = *plVar2;
              *(long *)((long)in_x0 + 0x10e64) = in_x0[0x1956];
              *(long *)((long)in_x0 + 0x10e6c) = in_x0[0x1957];
              *(undefined4 *)((long)in_x0 + 0x10e73) = *(undefined4 *)((long)in_x0 + 0xcabf);
              uVar9 = RawRead::Get2();
              *(undefined2 *)(in_x0 + 0x21cf) = uVar9;
              uVar8 = RawRead::Get2();
              uVar16 = (ulong)*(ushort *)(in_x0 + 0x21cf);
              *(ushort *)((long)in_x0 + 0x10e7a) = uVar8;
              if (0xff < *(ushort *)(in_x0 + 0x21cf)) {
                uVar16 = 0xff;
                *(undefined2 *)(in_x0 + 0x21cf) = 0xff;
              }
              if (0xff < uVar8) {
                *(undefined2 *)((long)in_x0 + 0x10e7a) = 0xff;
              }
              RawRead::GetB((RawRead *)local_2868,(Archive *)((long)in_x0 + 0x10e7c),uVar16);
              RawRead::GetB((RawRead *)local_2868,(Archive *)((long)in_x0 + 0x10f7c),
                            (ulong)*(ushort *)((long)in_x0 + 0x10e7a));
              *(Archive *)((long)in_x0 + (ulong)*(ushort *)(in_x0 + 0x21cf) + 0x10e7c) =
                   (Archive)0x0;
              *(Archive *)((long)in_x0 + (ulong)*(ushort *)((long)in_x0 + 0x10e7a) + 0x10f7c) =
                   (Archive)0x0;
            }
          }
          else {
            if (uVar8 < 0x105) goto LAB_001bd09c;
            if (uVar8 == 0x105) {
              in_x0[0x2219] = *plVar2;
              in_x0[0x221a] = in_x0[0x1956];
              in_x0[0x221b] = in_x0[0x1957];
              *(undefined4 *)((long)in_x0 + 0x110df) = *(undefined4 *)((long)in_x0 + 0xcabf);
              uVar15 = RawRead::Get4();
              *(undefined4 *)((long)in_x0 + 0x110e4) = uVar15;
              AVar5 = (Archive)RawRead::Get1();
              *(Archive *)(in_x0 + 0x221d) = AVar5;
              AVar5 = (Archive)RawRead::Get1();
              *(Archive *)((long)in_x0 + 0x110e9) = AVar5;
              uVar15 = RawRead::Get4();
              *(undefined4 *)((long)in_x0 + 0x110ec) = uVar15;
              uVar8 = RawRead::Get2();
              if (uVar8 < 0x104) {
                uVar16 = (ulong)uVar8;
                *(ushort *)(in_x0 + 0x221e) = uVar8;
              }
              else {
                uVar16 = 0x103;
                *(undefined2 *)(in_x0 + 0x221e) = 0x103;
              }
              RawRead::GetB((RawRead *)local_2868,(Archive *)((long)in_x0 + 0x110f2),uVar16);
              *(Archive *)((long)in_x0 + (ulong)*(ushort *)(in_x0 + 0x221e) + 0x110f2) =
                   (Archive)0x0;
            }
          }
        }
        uVar8 = RawRead::GetCRC15((RawRead *)local_2868,false);
        if ((*(uint *)(in_x0 + 0x10db) != (uint)uVar8) &&
           (iVar14 = *(int *)((long)in_x0 + 0x86dc), iVar14 != 0x76 && iVar14 != 0x79)) {
          if ((iVar14 == 5) && (AVar5 = *(Archive *)((long)in_x0 + 0xcaa6), AVar5 != (Archive)0x0))
          {
            (**(code **)(*in_x0 + 0x20))();
                    /* try { // try from 001bce08 to 001bce2f has its CatchHandler @ 001bd478 */
            (**(code **)(*in_x0 + 0x20))();
            (**(code **)(*in_x0 + 0x18))();
            iVar14 = 7;
            do {
              cVar7 = File::GetByte();
              if (cVar7 != '\0') {
                AVar5 = (Archive)0x0;
              }
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            (**(code **)(*in_x0 + 0x18))();
            if (AVar5 != (Archive)0x0) goto LAB_001bc554;
          }
          *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
                    /* try { // try from 001bce74 to 001bd46b has its CatchHandler @ 001bd470 */
          ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
          if (AVar26 != (Archive)0x0) {
            lVar25 = 0;
            *(Archive *)((long)in_x0 + 0x11221) = (Archive)0x1;
            goto LAB_001bc584;
          }
        }
LAB_001bc554:
        lVar25 = local_2840;
        if (in_x0[0x223f] < in_x0[0x2240]) goto LAB_001bc584;
      }
      *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
    }
  }
  else {
    if (in_x0[0x223f] <= in_x0[0x2243] + 7) {
      AVar26 = (Archive)0x0;
      goto LAB_001bc424;
    }
    RequestArcPassword();
    iVar14 = (**(code **)(*in_x0 + 0x10))();
    if (iVar14 == 8) {
      CryptData::SetCryptKeys
                ((CryptData *)((long)in_x0 + 0x2024),false,4,(SecPassword *)(in_x0[0xec0] + 0xa02c),
                 auStack_2008,(uchar *)0x0,0,(uchar *)0x0,(uchar *)0x0);
      local_2830 = (CryptData *)((long)in_x0 + 0x2024);
      goto LAB_001bc424;
    }
    lVar25 = File::FileLength((File *)in_x0);
    if ((in_x0[0x223f] <= lVar25) && (in_x0[0x2240] <= lVar25)) {
      if (lVar25 != in_x0[0x223f] && lVar25 != in_x0[0x2240]) {
        iVar14 = *(int *)(in_x0 + 0x2241);
        goto joined_r0x001bc630;
      }
      goto LAB_001bc580;
    }
LAB_001bc638:
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
  }
LAB_001bc580:
  lVar25 = 0;
LAB_001bc584:
  if (local_2868[0] != (void *)0x0) {
    free(local_2868[0]);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return lVar25;
}


