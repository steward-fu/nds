/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive12ReadHeader50Ev
 * Address  : 001bd4b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ReadHeader50() */

ulong Archive::ReadHeader50(void)

{
  long *__s1;
  CryptData *this;
  uint uVar1;
  long *this_00;
  uint uVar2;
  FileHeader FVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *in_x0;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  Archive AVar13;
  Archive AVar14;
  long local_20d0;
  void *local_20c0 [5];
  ulong local_2098;
  ulong local_2090;
  CryptData *local_2088;
  sha256_context asStack_2080 [112];
  int local_2010;
  undefined4 uStack_200c;
  int local_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RawRead::RawRead((RawRead *)local_20c0,(File *)in_x0);
  AVar14 = *(Archive *)((long)in_x0 + 0x11214);
  this = local_2088;
  if (AVar14 == (Archive)0x0) {
LAB_001bd524:
    local_2088 = this;
                    /* try { // try from 001bd52c to 001bdd67 has its CatchHandler @ 001bdd7c */
    uVar9 = RawRead::Read((RawRead *)local_20c0,7);
    if (uVar9 < 7) {
LAB_001bd944:
      lVar10 = File::FileLength((File *)in_x0);
      if ((lVar10 < in_x0[0x223f]) || (lVar10 < in_x0[0x2240])) {
LAB_001bd930:
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
      }
      else if (lVar10 != in_x0[0x223f] && lVar10 != in_x0[0x2240]) {
        iVar6 = *(int *)(in_x0 + 0x2241);
        goto joined_r0x001bd928;
      }
    }
    else {
      *(Archive *)(in_x0 + 0x10dd) = (Archive)0x0;
      uVar5 = RawRead::Get4();
      *(undefined4 *)(in_x0 + 0x10db) = uVar5;
      iVar6 = RawRead::GetVSize((RawRead *)local_20c0,4);
      lVar10 = RawRead::GetV();
      AVar13 = (Archive)(iVar6 == 0 || lVar10 == 0);
      if (iVar6 != 0 && lVar10 != 0) {
        iVar6 = iVar6 + (int)lVar10;
        if (-1 < iVar6 + -3) {
          RawRead::Read((RawRead *)local_20c0,(long)(iVar6 + -3));
          if (local_2098 < iVar6 + 4) goto LAB_001bd944;
          iVar7 = RawRead::GetCRC50();
          uVar5 = RawRead::GetV();
          *(undefined4 *)((long)in_x0 + 0x86dc) = uVar5;
          uVar8 = RawRead::GetV();
          *(uint *)(in_x0 + 0x10dc) = uVar8;
          *(int *)((long)in_x0 + 0x86e4) = iVar6 + 4;
          *(byte *)(in_x0 + 0x10dd) = (byte)(uVar8 >> 2) & 1;
          *(undefined4 *)((long)in_x0 + 0x7624) = *(undefined4 *)((long)in_x0 + 0x86dc);
          if (*(int *)(in_x0 + 0x10db) != iVar7) {
            *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
            ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
            *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
            ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
            if (AVar14 != (Archive)0x0) {
              uVar9 = 0;
              *(Archive *)((long)in_x0 + 0x11221) = (Archive)0x1;
              goto LAB_001bd87c;
            }
            uVar8 = *(uint *)(in_x0 + 0x10dc);
          }
          uVar9 = 0;
          if ((uVar8 & 1) != 0) {
            uVar9 = RawRead::GetV();
            if (*(uint *)((long)in_x0 + 0x86e4) <= uVar9) goto LAB_001bd860;
            uVar8 = *(uint *)(in_x0 + 0x10dc);
          }
          if ((uVar8 >> 1 & 1) == 0) {
            local_20d0 = 0;
          }
          else {
            local_20d0 = RawRead::GetV();
          }
          lVar10 = in_x0[0x223f];
          uVar11 = FullHeaderSize((Archive *)in_x0,(ulong)*(uint *)((long)in_x0 + 0x86e4));
          uVar8 = *(uint *)((long)in_x0 + 0x86dc);
          lVar10 = lVar10 + (uVar11 & 0xffffffff) + local_20d0;
          in_x0[0x2240] = lVar10;
          if (uVar8 == 4) {
            in_x0[0x10e7] = in_x0[0x10db];
            in_x0[0x10e8] = in_x0[0x10dc];
            *(undefined4 *)(in_x0 + 0x10e9) = *(undefined4 *)(in_x0 + 0x10dd);
            iVar6 = RawRead::GetV();
            if (iVar6 == 0) {
              bVar4 = RawRead::GetV();
              *(byte *)((long)in_x0 + 0x874c) = bVar4 & 1;
              uVar8 = RawRead::Get1();
              *(uint *)(in_x0 + 0x10ea) = uVar8 & 0xff;
              if ((uVar8 & 0xff) < 0x19) {
                RawRead::GetB((RawRead *)local_20c0,(Archive *)((long)in_x0 + 0x8754),0x10);
                if (*(Archive *)((long)in_x0 + 0x874c) != (Archive)0x0) {
                  RawRead::GetB((RawRead *)local_20c0,(Archive *)((long)in_x0 + 0x8764),8);
                  RawRead::GetB((RawRead *)local_20c0,&local_2010,4);
                  sha256_init(asStack_2080);
                  sha256_process(asStack_2080,(Archive *)((long)in_x0 + 0x8764),8);
                  sha256_done(asStack_2080,(uchar *)local_2008);
                  *(bool *)((long)in_x0 + 0x874c) = local_2010 == local_2008[0];
                }
                *(Archive *)((long)in_x0 + 0x11214) = (Archive)0x1;
                lVar12 = in_x0[0x223f];
                lVar10 = in_x0[0x2240];
                goto LAB_001bd854;
              }
            }
            goto LAB_001bd930;
          }
          if (uVar8 < 5) {
            if (uVar8 == 1) {
              MainHeader::Reset();
              in_x0[0x10df] = in_x0[0x10db];
              in_x0[0x10e0] = in_x0[0x10dc];
              *(undefined4 *)(in_x0 + 0x10e1) = *(undefined4 *)(in_x0 + 0x10dd);
              uVar8 = RawRead::GetV();
              *(byte *)((long)in_x0 + 0x1120c) = (byte)(uVar8 >> 2) & 1;
              *(Archive *)((long)in_x0 + 0x1120d) = SUB41(uVar8 & 1,0);
              *(byte *)((long)in_x0 + 0x1120f) = (byte)(uVar8 >> 4) & 1;
              *(Archive *)(in_x0 + 0x2242) = (Archive)0x0;
              *(Archive *)((long)in_x0 + 0x11212) = (Archive)0x1;
              *(byte *)((long)in_x0 + 0x11213) = (byte)(uVar8 >> 3) & 1;
              if ((uVar8 >> 1 & 1) == 0) {
                *(undefined4 *)((long)in_x0 + 0x11234) = 0;
                if ((uVar8 & 1) != 0) {
LAB_001bdcb8:
                  AVar13 = (Archive)0x1;
                }
              }
              else {
                iVar6 = RawRead::GetV();
                *(int *)((long)in_x0 + 0x11234) = iVar6;
                if ((*(Archive *)((long)in_x0 + 0x1120d) != (Archive)0x0) && (iVar6 == 0))
                goto LAB_001bdcb8;
              }
              *(Archive *)((long)in_x0 + 0x11211) = AVar13;
              if ((uVar9 != 0) && (local_2090 <= local_2098 - uVar9)) {
                local_2090 = local_2098 - uVar9;
                ProcessExtra50((RawRead *)in_x0,(ulong)local_20c0,(BaseBlock *)(in_x0 + 0x10df));
              }
              lVar12 = in_x0[0x223f];
              lVar10 = in_x0[0x2240];
              if (((*(Archive *)((long)in_x0 + 0x8716) != (Archive)0x0) && (in_x0[0x10e3] != 0)) &&
                 (*(int *)(in_x0[0xec0] + 0x4018) != 0)) {
                uVar5 = *(undefined4 *)((long)in_x0 + 0x7624);
                QuickOpen::Init((QuickOpen *)(in_x0 + 0xec6),(Archive *)in_x0,false);
                QuickOpen::Load((QuickOpen *)(in_x0 + 0xec6),in_x0[0x10e3]);
                in_x0[0x223f] = lVar12;
                in_x0[0x2240] = lVar10;
                *(undefined4 *)((long)in_x0 + 0x7624) = uVar5;
              }
            }
            else {
              if (1 < uVar8 - 2) goto LAB_001bdaa0;
              this_00 = in_x0 + 0x10ee;
              if (uVar8 != 2) {
                this_00 = in_x0 + 0x1959;
              }
              FileHeader::Reset((FileHeader *)this_00,0);
              lVar10 = in_x0[0x10dc];
              *this_00 = in_x0[0x10db];
              this_00[1] = lVar10;
              *(undefined4 *)(this_00 + 2) = *(undefined4 *)(in_x0 + 0x10dd);
              iVar6 = *(int *)((long)in_x0 + 0x86dc);
              *(FileHeader *)((long)this_00 + 0x2101) = (FileHeader)0x1;
              this_00[0x40b] = local_20d0;
              uVar5 = RawRead::GetV();
              *(undefined4 *)((long)this_00 + 0x2094) = uVar5;
              lVar10 = RawRead::GetV();
              uVar8 = *(uint *)((long)this_00 + 0x2094) & 8;
              this_00[0x40c] = lVar10;
              *(bool *)((long)this_00 + 0x209a) = uVar8 != 0;
              if (uVar8 != 0) {
                lVar10 = 0x7fffffff7fffffff;
                this_00[0x40c] = 0x7fffffff7fffffff;
              }
              lVar12 = this_00[0x40b];
              if (this_00[0x40b] < lVar10) {
                lVar12 = lVar10;
              }
              this_00[0x40d] = lVar12;
              uVar5 = RawRead::GetV();
              uVar8 = *(uint *)((long)this_00 + 0x2094);
              *(undefined4 *)((long)this_00 + 0x1c) = uVar5;
              if ((uVar8 >> 1 & 1) != 0) {
                uVar11 = RawRead::Get4();
                RarTime::operator=((RarTime *)(this_00 + 0x408),uVar11 & 0xffffffff);
                uVar8 = *(uint *)((long)this_00 + 0x2094);
              }
              if ((uVar8 >> 2 & 1) == 0) {
                *(undefined4 *)(this_00 + 0x40e) = 0;
              }
              else {
                *(undefined4 *)(this_00 + 0x40e) = 2;
                uVar5 = RawRead::Get4();
                *(undefined4 *)((long)this_00 + 0x2074) = uVar5;
              }
              *(undefined4 *)(this_00 + 0x421) = 0;
              uVar8 = RawRead::GetV();
              *(byte *)((long)this_00 + 0x19) = (byte)uVar8 & 0x3f;
              *(byte *)((long)this_00 + 0x1a) = (byte)(uVar8 >> 7) & 7;
              FVar3 = (FileHeader)RawRead::GetV();
              *(FileHeader *)(this_00 + 3) = FVar3;
              uVar11 = RawRead::GetV();
              *(byte *)(this_00 + 0x420) = (byte)(*(uint *)(in_x0 + 0x10dc) >> 6) & 1;
              *(undefined4 *)((long)this_00 + 0x2104) = 2;
              if (*(FileHeader *)(this_00 + 3) == (FileHeader)0x1) {
                *(undefined4 *)((long)this_00 + 0x2104) = 1;
              }
              else if (*(FileHeader *)(this_00 + 3) == (FileHeader)0x0) {
                *(undefined4 *)((long)this_00 + 0x2104) = 0;
              }
              uVar2 = *(uint *)(this_00 + 1);
              FVar3 = (FileHeader)((byte)(uVar8 >> 6) & 1);
              uVar1 = *(uint *)((long)this_00 + 0x2094) & 1;
              if (iVar6 != 2) {
                FVar3 = (FileHeader)0x0;
              }
              lVar10 = 0x20000L << (uVar8 >> 10 & 0xf);
              if (uVar1 != 0) {
                lVar10 = 0;
              }
              uVar5 = 5;
              if (*(FileHeader *)((long)this_00 + 0x209b) == (FileHeader)0x0) {
                uVar5 = 0;
              }
              *(byte *)(this_00 + 0x413) = (byte)(uVar2 >> 3) & 1;
              *(byte *)((long)this_00 + 0x2099) = (byte)(uVar2 >> 4) & 1;
              *(FileHeader *)(this_00 + 0x41e) = FVar3;
              *(FileHeader *)((long)this_00 + 0x20f1) = SUB41(uVar1,0);
              *(byte *)((long)this_00 + 0x2102) = (byte)(uVar2 >> 5) & 1;
              *(undefined4 *)((long)this_00 + 0x209c) = uVar5;
              this_00[0x41f] = lVar10;
              if (0x1fff < uVar11) {
                uVar11 = 0x1fff;
              }
              RawRead::GetB((RawRead *)local_20c0,local_2008,uVar11);
              __s1 = this_00 + 4;
              *(char *)((long)local_2008 + uVar11) = '\0';
              UtfToWide((char *)local_2008,(wchar_t *)__s1,0x7ff);
              if ((uVar9 != 0) && (local_2090 <= local_2098 - uVar9)) {
                local_2090 = local_2098 - uVar9;
                ProcessExtra50((RawRead *)in_x0,(ulong)local_20c0,(BaseBlock *)this_00);
              }
              if (iVar6 == 2) {
                iVar6 = *(int *)(in_x0[0xec0] + 0xc2a4);
                if (iVar6 == 1) {
                  wcsupper((wchar_t *)__s1);
                  iVar6 = *(int *)(in_x0[0xec0] + 0xc2a4);
                }
                if (iVar6 == 2) {
                  wcslower((wchar_t *)__s1);
                }
                ConvertFileHeader((Archive *)in_x0,(FileHeader *)this_00);
              }
              else {
                iVar6 = wcscmp((wchar_t *)__s1,L"CMT");
                if (iVar6 == 0) {
                  *(Archive *)((long)in_x0 + 0x1120e) = (Archive)0x1;
                }
              }
              lVar12 = in_x0[0x223f];
              lVar10 = in_x0[0x2240];
            }
          }
          else if (uVar8 == 5) {
            in_x0[0x1951] = in_x0[0x10db];
            in_x0[0x1952] = in_x0[0x10dc];
            *(undefined4 *)(in_x0 + 0x1953) = *(undefined4 *)(in_x0 + 0x10dd);
            bVar4 = RawRead::GetV();
            lVar12 = in_x0[0x223f];
            lVar10 = in_x0[0x2240];
            *(byte *)((long)in_x0 + 0xcaa4) = bVar4 & 1;
            *(Archive *)((long)in_x0 + 0xcaa5) = (Archive)0x0;
            *(undefined2 *)((long)in_x0 + 0xcaa6) = 0;
          }
          else {
LAB_001bdaa0:
            lVar12 = in_x0[0x223f];
          }
LAB_001bd854:
          uVar9 = local_2098;
          if (lVar12 < lVar10) goto LAB_001bd87c;
        }
      }
LAB_001bd860:
      *(Archive *)(in_x0 + 0x2244) = (Archive)0x1;
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
    }
  }
  else {
    if (in_x0[0x223f] <= in_x0[0x2243] + 8) {
      AVar14 = (Archive)0x0;
      goto LAB_001bd524;
    }
    RequestArcPassword();
    iVar6 = (**(code **)(*in_x0 + 0x10))();
    if (iVar6 == 0x10) {
      this = (CryptData *)((long)in_x0 + 0x2024);
      CryptData::SetCryptKeys
                (this,false,5,(SecPassword *)(in_x0[0xec0] + 0xa02c),(uchar *)((long)in_x0 + 0x8754)
                 ,(uchar *)local_2008,*(uint *)(in_x0 + 0x10ea),(uchar *)0x0,(uchar *)&local_2010);
      if ((*(Archive *)((long)in_x0 + 0x874c) == (Archive)0x0) ||
         (*(long *)((long)in_x0 + 0x8764) == CONCAT44(uStack_200c,local_2010))) goto LAB_001bd524;
      *(Archive *)((long)in_x0 + 0x11221) = (Archive)0x1;
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,0xb);
    }
    else {
      lVar10 = File::FileLength((File *)in_x0);
      if ((lVar10 < in_x0[0x223f]) || (lVar10 < in_x0[0x2240])) goto LAB_001bd930;
      if (lVar10 == in_x0[0x223f] || lVar10 == in_x0[0x2240]) goto LAB_001bd878;
      iVar6 = *(int *)(in_x0 + 0x2241);
joined_r0x001bd928:
      if (iVar6 == 3) goto LAB_001bd930;
    }
  }
LAB_001bd878:
  uVar9 = 0;
LAB_001bd87c:
  if (local_20c0[0] != (void *)0x0) {
    free(local_20c0[0]);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


