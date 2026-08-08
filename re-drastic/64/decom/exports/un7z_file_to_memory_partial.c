/*
 * Ghidra decompilation
 *
 * Function : un7z_file_to_memory_partial
 * Address  : 001a64e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int un7z_file_to_memory_partial
              (undefined8 param_1,char *param_2,undefined4 *param_3,long param_4,uint param_5,
              int param_6)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  short *psVar16;
  undefined *puStack_24238;
  undefined *puStack_24228;
  ulong *puStack_24220;
  ulong *puStack_24218;
  ulong *puStack_24210;
  uint uStack_24208;
  undefined auStack_241f4 [4];
  ulong uStack_241f0;
  ulong uStack_241e8;
  ulong uStack_241e0;
  code *pcStack_241d8;
  code *pcStack_241d0;
  code *pcStack_241c8;
  code *pcStack_241c0;
  char *apcStack_241b8 [2];
  undefined auStack_241a8 [16];
  undefined auStack_24198 [8];
  code *pcStack_24190;
  long lStack_24188;
  undefined8 uStack_24180;
  uint uStack_24178;
  uint uStack_24174;
  undefined auStack_24170 [24];
  long lStack_24158;
  long lStack_24150;
  uint uStack_24140;
  long lStack_24110;
  undefined auStack_240f0 [16];
  undefined8 uStack_240e0;
  undefined8 uStack_240d8;
  undefined auStack_24040 [16];
  code *pcStack_24030;
  undefined *puStack_24020;
  undefined auStack_20008 [1032];
  undefined8 uStack_1fc00;
  undefined auStack_10008 [1032];
  undefined8 local_fc00;
  undefined auStack_260 [600];
  long local_8;
  
  local_fc00 = 0;
  uStack_1fc00 = 0;
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  pcStack_241d8 = SzAlloc;
  pcStack_241d0 = SzFree;
  pcStack_241c8 = SzAllocTemp;
  pcStack_241c0 = SzFreeTemp;
  iVar5 = InFile_Open(auStack_24198,param_1);
  if (iVar5 == 0) {
    FileInStream_CreateVTable(auStack_241a8);
    LookToRead_CreateVTable(auStack_24040,0);
    puStack_24020 = auStack_241a8;
    LookToRead_Init(auStack_24040);
    CrcGenerateTable();
    SzArEx_Init(auStack_24170);
    iVar5 = SzArEx_Open(auStack_24170,auStack_24040,&pcStack_241d8,&pcStack_241c8);
    if ((iVar5 == 0) && (uStack_24140 != 0)) {
      iVar6 = 0;
      psVar16 = (short *)0x0;
      uVar15 = 0;
      puStack_24238 = (undefined *)0x0;
      uVar11 = uStack_24140;
      do {
        while( true ) {
          lVar10 = lStack_24150 + uVar15 * 0x20;
          if (*(char *)(lVar10 + 0x19) != '\0') break;
          uVar7 = SzArEx_GetFileNameUtf16(auStack_24170,uVar15,0);
          if (puStack_24238 < uVar7) {
            SzFree(0,psVar16);
            psVar16 = (short *)SzAlloc(0,uVar7 << 1);
            puStack_24238 = (undefined *)uVar7;
            if (psVar16 == (short *)0x0) goto LAB_001a6aac;
          }
          SzArEx_GetFileNameUtf16(auStack_24170,uVar15,psVar16);
          uVar11 = *(uint *)(lStack_24110 + uVar15 * 4);
          if (uVar11 != 0xffffffff) {
            lVar12 = lStack_24158 + (ulong)uVar11 * 0x38;
            lVar8 = *(long *)(lStack_24158 + (ulong)uVar11 * 0x38);
            if (*(int *)(lVar12 + 0x20) != 1) {
              __printf_chk(1,"7Z: Multiple coders not supported");
              iVar5 = -1;
              goto LAB_001a69a8;
            }
            lVar13 = *(long *)(lVar8 + 8);
            if ((lVar13 != 0 && lVar13 != 0x30101) && lVar13 != 0x21) {
              __printf_chk(1,"7Z: method ID %08X not supported.\n");
              iVar5 = -1;
              goto LAB_001a69a8;
            }
            Buf_Init(apcStack_241b8);
            if (*psVar16 == 0) {
              lVar13 = 0;
            }
            else {
              lVar3 = 1;
              do {
                lVar13 = lVar3;
                lVar3 = lVar13 + 1;
              } while (psVar16[lVar13] != 0);
            }
            iVar5 = Utf16_To_Utf8Buf(apcStack_241b8,psVar16,lVar13);
            if (((iVar5 == 0) && (pcVar9 = strrchr(apcStack_241b8[0],0x2e), pcVar9 != (char *)0x0))
               && (iVar5 = strcasecmp(pcVar9 + 1,param_2), iVar5 == 0)) {
              Buf_Free(apcStack_241b8,&g_Alloc);
              uVar15 = *(ulong *)(lVar10 + 8);
              *param_3 = (int)uVar15;
              iVar5 = 0;
              if ((param_4 == 0 || param_5 == 0) || (iVar5 = -1, uVar15 < param_5 + param_6))
              goto LAB_001a69a8;
              uVar15 = SzFolder_GetUnpackSize(lVar12);
              lVar10 = SzArEx_GetFolderStreamPos(auStack_24170,uVar11,0);
              LookInStream_SeekTo(auStack_24040,lVar10);
              uStack_241f0 = 0;
              iVar5 = -1;
              lVar12 = *(long *)(lVar8 + 8);
              uStack_24180 = 0;
              uStack_24174 = param_6 + iVar6;
              pcStack_24190 = BufferOutStream_Write;
              uStack_24208 = param_5;
              lStack_24188 = param_4;
              uStack_24178 = param_5;
              if (lVar12 == 0) {
                LookInStream_SeekTo(auStack_24040,lVar10 + (ulong)uStack_24174);
                uStack_24174 = 0;
                goto LAB_001a6a48;
              }
              bVar4 = uVar15 != 0xffffffffffffffff;
              if (lVar12 == 0x30101) {
                uStack_240e0 = 0;
                uStack_240d8 = 0;
                LzmaDec_Allocate(auStack_240f0,*(undefined8 *)(lVar8 + 0x10),
                                 *(undefined4 *)(lVar8 + 0x18),&pcStack_241d8);
                uVar7 = 0;
                LzmaDec_Init(auStack_240f0);
                goto LAB_001a6c18;
              }
              if (lVar12 != 0x21) goto LAB_001a69a8;
              uStack_240e0 = 0;
              uStack_240d8 = 0;
              Lzma2Dec_Allocate(auStack_240f0,**(undefined **)(lVar8 + 0x10),&pcStack_241d8);
              uVar7 = 0;
              Lzma2Dec_Init(auStack_240f0);
              goto LAB_001a68dc;
            }
            iVar6 = iVar6 + (int)*(undefined8 *)(lVar10 + 8);
          }
          uVar1 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar1;
          uVar11 = uStack_24140;
          if (uStack_24140 <= uVar1) goto LAB_001a6914;
        }
        uVar1 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar1;
        iVar6 = 0;
      } while (uVar1 < uVar11);
    }
    else {
      psVar16 = (short *)0x0;
    }
LAB_001a6914:
    SzArEx_Free(auStack_24170,&pcStack_241d8);
    SzFree(0,psVar16);
    File_Close(auStack_24198);
    iVar5 = -1;
  }
  else {
    puts("can not open input file");
    iVar5 = -1;
  }
  goto LAB_001a6950;
LAB_001a6aac:
  iVar5 = -1;
  goto LAB_001a69a8;
LAB_001a6c18:
  puStack_24210 = &uStack_241f0;
  if (uStack_241f0 == uVar7) {
    uStack_241f0 = 0x10000;
    iVar5 = (*pcStack_24030)(auStack_24040,auStack_20008,puStack_24210);
    if (iVar5 != 0) goto LAB_001a698c;
    uVar7 = 0;
    uStack_241e8 = uStack_241f0;
    puVar14 = auStack_20008;
  }
  else {
    uStack_241e8 = uStack_241f0 - uVar7;
    puVar14 = auStack_20008 + uVar7;
  }
  puStack_24218 = &uStack_241e0;
  puStack_24220 = &uStack_241e8;
  puStack_24228 = auStack_241f4;
  puStack_24238 = auStack_10008;
  bVar2 = !bVar4;
  uStack_241e0 = uVar15;
  if ((bVar2 || 0xfffe < uVar15) && (bVar2 || uVar15 != 0xffff)) {
    uStack_241e0 = 0x10000;
  }
  iVar5 = LzmaDec_DecodeToBuf(auStack_240f0,puStack_24238,puStack_24218,puVar14,puStack_24220,
                              !bVar2 && 0xfffe >= uVar15 || !bVar2 && uVar15 == 0xffff,puStack_24228
                             );
  uVar7 = uVar7 + uStack_241e8;
  uVar15 = uVar15 - uStack_241e0;
  iVar6 = (*pcStack_24190)(&pcStack_24190,puStack_24238);
  uStack_24208 = uStack_24208 - iVar6;
  if ((((int)uStack_24208 < 1 || iVar5 != 0) || (uVar15 == 0 && bVar4)) ||
     ((uStack_241e8 | uStack_241e0) == 0)) goto LAB_001a698c;
  goto LAB_001a6c18;
LAB_001a68dc:
  if (uStack_241f0 == uVar7) {
    uStack_241f0 = 0x10000;
    iVar5 = (*pcStack_24030)(auStack_24040,auStack_20008,&uStack_241f0);
    if (iVar5 != 0) goto LAB_001a698c;
    uVar7 = 0;
    uStack_241e8 = uStack_241f0;
    puVar14 = auStack_20008;
  }
  else {
    uStack_241e8 = uStack_241f0 - uVar7;
    puVar14 = auStack_20008 + uVar7;
  }
  bVar2 = !bVar4;
  uStack_241e0 = uVar15;
  if ((bVar2 || 0xfffe < uVar15) && (bVar2 || uVar15 != 0xffff)) {
    uStack_241e0 = 0x10000;
  }
  iVar5 = Lzma2Dec_DecodeToBuf
                    (auStack_240f0,auStack_10008,&uStack_241e0,puVar14,&uStack_241e8,
                     !bVar2 && 0xfffe >= uVar15 || !bVar2 && uVar15 == 0xffff,auStack_241f4);
  uVar7 = uVar7 + uStack_241e8;
  uVar15 = uVar15 - uStack_241e0;
  iVar6 = (*pcStack_24190)(&pcStack_24190,auStack_10008);
  uStack_24208 = uStack_24208 - iVar6;
  if ((((int)uStack_24208 < 1 || iVar5 != 0) || (uVar15 == 0 && bVar4)) ||
     ((uStack_241e8 | uStack_241e0) == 0)) goto LAB_001a698c;
  goto LAB_001a68dc;
LAB_001a698c:
  LzmaDec_Free(auStack_240f0,&pcStack_241d8);
  iVar5 = -(uint)(uStack_24208 != 0);
  goto LAB_001a69a8;
  while (uStack_24208 = uStack_24208 - (int)uVar15, uStack_24208 != 0) {
LAB_001a6a48:
    uStack_241e0 = 0x10000;
    if ((ulong)uStack_24208 < 0x10000) {
      uStack_241e0 = (ulong)uStack_24208;
    }
    iVar5 = (*pcStack_24030)(auStack_24040,auStack_20008,&uStack_241e0);
    if ((iVar5 != 0) ||
       (uVar15 = (*pcStack_24190)(&pcStack_24190,auStack_20008,uStack_241e0), uVar15 != uStack_241e0
       )) goto LAB_001a6aac;
  }
  iVar5 = 0;
LAB_001a69a8:
  SzArEx_Free(auStack_24170,&pcStack_241d8);
  SzFree(0,psVar16);
  File_Close(auStack_24198);
LAB_001a6950:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_260,&__stack_chk_guard,local_8 - ___stack_chk_guard,iVar5,0);
}


