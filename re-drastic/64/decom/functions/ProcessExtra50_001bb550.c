/*
 * Ghidra decompilation
 *
 * Function : ProcessExtra50
 * Address  : 001bb550
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::ProcessExtra50(RawRead*, unsigned long, BaseBlock*) [clone .part.0] */

void Archive::ProcessExtra50(RawRead *param_1,ulong param_2,BaseBlock *param_3)

{
  BaseBlock BVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  wchar_t awStack_2080 [28];
  uint local_2010 [2];
  uint local_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < (ulong)(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x30))) {
    do {
      while( true ) {
        lVar7 = RawRead::GetV();
        if (lVar7 == 0) goto LAB_001bb684;
        lVar13 = *(long *)(param_2 + 0x30);
        if ((*(long *)(param_2 + 0x28) == lVar13) || (*(long *)(param_2 + 0x28) - lVar13 < lVar7))
        goto LAB_001bb684;
        lVar7 = lVar7 + lVar13;
        uVar8 = RawRead::GetV();
        lVar13 = *(long *)(param_2 + 0x28);
        if (uVar8 == 1 && *(int *)(param_3 + 4) == 1) break;
        if (*(int *)(param_3 + 4) - 2U < 2) {
          uVar14 = lVar13 - *(long *)(param_2 + 0x30);
          if (uVar8 == 4) {
            if (0 < (long)uVar14) {
              RawRead::GetV();
              iVar5 = RawRead::GetV();
              if (iVar5 == 0) goto LAB_001bb664;
              param_3[0x20f3] = (BaseBlock)0x1;
              __swprintf_chk(awStack_2080,0x14,1,0x14,&DAT_00228a50,iVar5);
              wcsncatz((wchar_t *)(param_1 + 0x8790),awStack_2080,0x800);
              lVar13 = *(long *)(param_2 + 0x28);
            }
          }
          else if (uVar8 < 5) {
            if (uVar8 == 2) {
              iVar5 = RawRead::GetV();
              if (iVar5 != 0) goto LAB_001bb664;
              *(undefined4 *)(param_3 + 0x2070) = 3;
              RawRead::GetB((RawRead *)param_2,param_3 + 0x2074,0x20);
              lVar13 = *(long *)(param_2 + 0x28);
            }
            else if (uVar8 == 3) {
              if (8 < (long)uVar14) {
                uVar3 = RawRead::GetV();
                uVar6 = uVar3 & 1;
                if ((uVar3 >> 1 & 1) == 0) {
                  if (((uVar3 & 0xff) >> 2 & 1) == 0) {
                    if ((uVar3 & 8) == 0) goto LAB_001bb664;
                    if (uVar6 == 0) goto LAB_001bbb78;
                    goto LAB_001bbb50;
                  }
                  if (uVar6 != 0) goto LAB_001bbb34;
LAB_001bbbb4:
                  uVar9 = RawRead::Get8();
                  RarTime::SetRaw((RarTime *)(param_3 + 0x2048),uVar9);
                  if ((uVar3 & 8) == 0) {
                    lVar13 = *(long *)(param_2 + 0x28);
                    goto LAB_001bb668;
                  }
                }
                else {
                  if (uVar6 != 0) {
                    uVar8 = RawRead::Get4();
                    RarTime::operator=((RarTime *)(param_3 + 0x2040),uVar8 & 0xffffffff);
                    if ((uVar3 & 4) != 0) {
LAB_001bbb34:
                      uVar8 = RawRead::Get4();
                      RarTime::operator=((RarTime *)(param_3 + 0x2048),uVar8 & 0xffffffff);
                    }
                    if ((uVar3 & 8) == 0) goto LAB_001bb664;
LAB_001bbb50:
                    uVar8 = RawRead::Get4();
                    RarTime::operator=((RarTime *)(param_3 + 0x2050),uVar8 & 0xffffffff);
                    lVar13 = *(long *)(param_2 + 0x28);
                    goto LAB_001bb5c0;
                  }
                  uVar9 = RawRead::Get8();
                  RarTime::SetRaw((RarTime *)(param_3 + 0x2040),uVar9);
                  if ((uVar3 & 4) != 0) goto LAB_001bbbb4;
                  if ((uVar3 & 8) == 0) {
                    lVar13 = *(long *)(param_2 + 0x28);
                    goto LAB_001bb668;
                  }
                }
LAB_001bbb78:
                uVar9 = RawRead::Get8();
                RarTime::SetRaw((RarTime *)(param_3 + 0x2050),uVar9);
                lVar13 = *(long *)(param_2 + 0x28);
              }
            }
            else if (uVar8 == 1) goto LAB_001bb78c;
          }
          else if (uVar8 == 6) {
            uVar6 = RawRead::GetV();
            param_3[0x410e] = (BaseBlock)((byte)(uVar6 >> 2) & 1);
            param_3[0x410f] = (BaseBlock)((byte)(uVar6 >> 3) & 1);
            param_3[0x4110] = (BaseBlock)0x0;
            param_3[0x4210] = (BaseBlock)0x0;
            if ((uVar6 & 1) == 0) {
              if ((uVar6 >> 1 & 1) == 0) goto LAB_001bb8b8;
LAB_001bb9f0:
              uVar8 = RawRead::GetV();
              if (0xff < uVar8) {
                uVar8 = 0xff;
              }
              RawRead::GetB((RawRead *)param_2,param_3 + 0x4210,uVar8);
              param_3[uVar8 + 0x4210] = (BaseBlock)0x0;
              if (param_3[0x410e] != (BaseBlock)0x0) goto LAB_001bba2c;
LAB_001bb8c0:
              BVar1 = param_3[0x410f];
            }
            else {
              uVar8 = RawRead::GetV();
              if (0xff < uVar8) {
                uVar8 = 0xff;
              }
              RawRead::GetB((RawRead *)param_2,param_3 + 0x4110,uVar8);
              param_3[uVar8 + 0x4110] = (BaseBlock)0x0;
              if ((uVar6 >> 1 & 1) != 0) goto LAB_001bb9f0;
LAB_001bb8b8:
              if (param_3[0x410e] == (BaseBlock)0x0) goto LAB_001bb8c0;
LAB_001bba2c:
              uVar4 = RawRead::GetV();
              *(undefined4 *)(param_3 + 0x4310) = uVar4;
              BVar1 = param_3[0x410f];
            }
            if (BVar1 != (BaseBlock)0x0) {
              uVar4 = RawRead::GetV();
              *(undefined4 *)(param_3 + 0x4314) = uVar4;
            }
            param_3[0x410d] = (BaseBlock)0x1;
            lVar13 = *(long *)(param_2 + 0x28);
          }
          else {
            if (uVar8 == 7) {
              uVar8 = *(ulong *)(param_3 + 0x2030);
              if (uVar8 < uVar14) {
                uVar12 = *(ulong *)(param_3 + 0x2038);
                *(ulong *)(param_3 + 0x2028) = uVar14;
                uVar11 = uVar14;
                if ((uVar12 != 0 && uVar12 <= uVar14) && (uVar12 == 0 || uVar14 != uVar12)) {
                  ErrorHandler::GeneralErrMsg
                            (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                  ErrorHandler::MemoryError();
                  uVar11 = *(ulong *)(param_3 + 0x2028);
                  uVar8 = *(ulong *)(param_3 + 0x2030);
                }
                uVar8 = uVar8 + 0x20 + (uVar8 >> 2);
                if (uVar8 < uVar11) {
                  uVar8 = uVar11;
                }
                pvVar10 = realloc(*(void **)(param_3 + 0x2020),uVar8);
                if (pvVar10 == (void *)0x0) {
                  ErrorHandler::MemoryError();
                }
                *(void **)(param_3 + 0x2020) = pvVar10;
                *(ulong *)(param_3 + 0x2030) = uVar8;
              }
              else {
                pvVar10 = *(void **)(param_3 + 0x2020);
                *(ulong *)(param_3 + 0x2028) = uVar14;
              }
              RawRead::GetB((RawRead *)param_2,pvVar10,uVar14);
LAB_001bb664:
              lVar13 = *(long *)(param_2 + 0x28);
              goto LAB_001bb668;
            }
            if (uVar8 == 5) {
              uVar4 = RawRead::GetV();
              *(undefined4 *)(param_3 + 0x2108) = uVar4;
              bVar2 = RawRead::GetV();
              param_3[0x410c] = (BaseBlock)(bVar2 & 1);
              uVar8 = RawRead::GetV();
              local_2008[0] = local_2008[0] & 0xffffff00;
              if (uVar8 < 0x1fff) {
                RawRead::GetB((RawRead *)param_2,local_2008,uVar8);
                *(char *)((long)local_2008 + uVar8) = '\0';
                UtfToWide((char *)local_2008,(wchar_t *)(param_3 + 0x210c),0x800);
                lVar13 = *(long *)(param_2 + 0x28);
              }
              else {
                UtfToWide((char *)local_2008,(wchar_t *)(param_3 + 0x210c),0x800);
                lVar13 = *(long *)(param_2 + 0x28);
              }
            }
          }
        }
LAB_001bb5c0:
        *(long *)(param_2 + 0x30) = lVar7;
        if ((ulong)(lVar13 - lVar7) < 2) goto LAB_001bb684;
      }
      param_3[0x1e] = (BaseBlock)0x1;
      uVar6 = RawRead::GetV();
      if (((uVar6 & 1) != 0) && (lVar13 = RawRead::GetV(), lVar13 != 0)) {
        *(long *)(param_3 + 0x20) = *(long *)(param_1 + 0x111f8) + lVar13;
      }
      if (((uVar6 >> 1 & 1) != 0) && (lVar13 = RawRead::GetV(), lVar13 != 0)) {
        *(long *)(param_3 + 0x30) = *(long *)(param_1 + 0x111f8) + lVar13;
      }
      if (*(int *)(param_3 + 4) - 2U < 2) {
LAB_001bb78c:
        iVar5 = RawRead::GetV();
        if (iVar5 == 0) {
          uVar6 = RawRead::GetV();
          param_3[0x20c1] = (BaseBlock)((byte)uVar6 & 1);
          param_3[0x20ca] = (BaseBlock)((byte)(uVar6 >> 1) & 1);
          uVar6 = RawRead::Get1();
          *(uint *)(param_3 + 0x20ec) = uVar6 & 0xff;
          if (0x18 < (uVar6 & 0xff)) {
            ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
          }
          RawRead::GetB((RawRead *)param_2,param_3 + 0x20a1,0x10);
          RawRead::GetB((RawRead *)param_2,param_3 + 0x20b1,0x10);
          if (param_3[0x20c1] != (BaseBlock)0x0) {
            RawRead::GetB((RawRead *)param_2,param_3 + 0x20c2,8);
            RawRead::GetB((RawRead *)param_2,local_2010,4);
            sha256_init((sha256_context *)awStack_2080);
            sha256_process((sha256_context *)awStack_2080,param_3 + 0x20c2,8);
            sha256_done((sha256_context *)awStack_2080,(uchar *)local_2008);
            param_3[0x20c1] = (BaseBlock)(local_2010[0] == local_2008[0]);
          }
          *(undefined4 *)(param_3 + 0x209b) = 0x501;
          *(undefined2 *)(param_3 + 0x209f) = 0x100;
          lVar13 = *(long *)(param_2 + 0x28);
        }
        else {
          ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
          lVar13 = *(long *)(param_2 + 0x28);
        }
        goto LAB_001bb5c0;
      }
      lVar13 = *(long *)(param_2 + 0x28);
LAB_001bb668:
      *(long *)(param_2 + 0x30) = lVar7;
    } while (1 < (ulong)(lVar13 - lVar7));
  }
LAB_001bb684:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


