/*
 * Ghidra decompilation
 *
 * Function : un7z_file
 * Address  : 001a5a50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * un7z_file(undefined8 param_1,char *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  code **ppcVar21;
  void *pvVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_24270;
  undefined *puStack_24268;
  ulong *puStack_24260;
  undefined auStack_24204 [4];
  ulong uStack_24200;
  ulong uStack_241f8;
  ulong uStack_241f0;
  code *pcStack_241e8;
  code *pcStack_241e0;
  code *pcStack_241d8;
  code *pcStack_241d0;
  char *apcStack_241c8 [2];
  code *pcStack_241b8;
  undefined auStack_241b0 [8];
  undefined auStack_241a8 [16];
  undefined auStack_24198 [8];
  code *pcStack_24190;
  void *pvStack_24188;
  undefined8 uStack_24180;
  uint uStack_24178;
  undefined4 uStack_24174;
  undefined auStack_24170 [24];
  long lStack_24158;
  long lStack_24150;
  uint uStack_24140;
  long lStack_24118;
  long lStack_24110;
  undefined auStack_240f0 [16];
  undefined8 uStack_240e0;
  undefined8 uStack_240d8;
  undefined auStack_24040 [8];
  code *pcStack_24038;
  code *pcStack_24030;
  undefined *puStack_24020;
  undefined auStack_20008 [1032];
  undefined8 uStack_1fc00;
  undefined auStack_10008 [1032];
  undefined8 local_fc00;
  undefined auStack_270 [616];
  long local_8;
  
  local_fc00 = 0;
  uStack_1fc00 = 0;
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  pcStack_241e8 = SzAlloc;
  pcStack_241e0 = SzFree;
  pcStack_241d8 = SzAllocTemp;
  pcStack_241d0 = SzFreeTemp;
  iVar4 = InFile_Open(auStack_24198,param_1);
  if (iVar4 == 0) {
    FileInStream_CreateVTable(auStack_241a8);
    LookToRead_CreateVTable(auStack_24040,0);
    puStack_24020 = auStack_241a8;
    LookToRead_Init(auStack_24040);
    CrcGenerateTable();
    SzArEx_Init(auStack_24170);
    iVar4 = SzArEx_Open(auStack_24170,auStack_24040,&pcStack_241e8,&pcStack_241d8);
    if (iVar4 == 0) {
      psVar16 = (short *)0x0;
      if (uStack_24140 != 0) {
        uVar24 = 0;
        uVar19 = 0;
        uVar20 = 0;
        psVar16 = (short *)0x0;
        uVar10 = uStack_24140;
LAB_001a5b88:
        lVar14 = lStack_24150 + uVar24 * 0x20;
        uVar23 = (uint)uVar24;
        if (*(char *)(lVar14 + 0x19) != '\0') {
          uVar19 = 0;
          goto LAB_001a5f20;
        }
        uVar6 = SzArEx_GetFileNameUtf16(auStack_24170,uVar24,0);
        if (uVar20 < uVar6) {
          SzFree(0,psVar16);
          psVar16 = (short *)SzAlloc(0,uVar6 << 1);
          uVar20 = uVar6;
          if (psVar16 != (short *)0x0) goto LAB_001a5be0;
LAB_001a6030:
          pvVar22 = (void *)0x0;
          SzArEx_Free(auStack_24170,&pcStack_241e8);
          SzFree(0,psVar16);
          File_Close(auStack_24198);
          goto LAB_001a5ed4;
        }
LAB_001a5be0:
        SzArEx_GetFileNameUtf16(auStack_24170,uVar24,psVar16);
        Buf_Init(apcStack_241c8);
        if (*psVar16 == 0) {
          lVar11 = 0;
        }
        else {
          lVar25 = 1;
          do {
            lVar11 = lVar25;
            lVar25 = lVar11 + 1;
          } while (psVar16[lVar11] != 0);
        }
        iVar4 = Utf16_To_Utf8Buf(apcStack_241c8,psVar16,lVar11);
        iVar18 = (int)uVar19;
        if (((iVar4 != 0) || (pcVar7 = strrchr(apcStack_241c8[0],0x2e), pcVar7 == (char *)0x0)) ||
           (iVar4 = strcasecmp(pcVar7 + 1,param_2), iVar4 != 0)) {
          uVar19 = (ulong)(uint)(iVar18 + (int)*(undefined8 *)(lVar14 + 8));
          uVar10 = uStack_24140;
LAB_001a5f20:
          uVar24 = (ulong)(uVar23 + 1);
          if (uVar10 <= uVar23 + 1) goto LAB_001a5f30;
          goto LAB_001a5b88;
        }
        Buf_Free(apcStack_241c8,&g_Alloc);
        *param_3 = (uint)*(undefined8 *)(lVar14 + 8);
        uVar5 = *(uint *)(lStack_24110 + uVar24 * 4);
        uVar10 = uStack_24140;
        if (uVar5 == 0xffffffff) goto LAB_001a5f20;
        lVar14 = lStack_24158 + (ulong)uVar5 * 0x38;
        lVar11 = *(long *)(lStack_24158 + (ulong)uVar5 * 0x38);
        uVar20 = SzFolder_GetUnpackSize(lVar14);
        if (*(int *)(lVar14 + 0x20) != 1) {
          __printf_chk(1,"7Z: Multiple coders not supported");
          pvVar22 = (void *)0x0;
          goto LAB_001a5f7c;
        }
        lVar14 = *(long *)(lVar11 + 8);
        if ((lVar14 != 0 && lVar14 != 0x30101) && lVar14 != 0x21) {
          __printf_chk(1,"7Z: method ID %08X not supported.\n");
          pvVar22 = (void *)0x0;
          goto LAB_001a5f7c;
        }
        uVar8 = SzArEx_GetFolderStreamPos(auStack_24170,uVar5,0);
        LookInStream_SeekTo(auStack_24040,uVar8);
        if (param_4 == 0) {
          pcStack_24190 = BufferOutStream_Write;
          uVar10 = *param_3;
          pvStack_24188 = malloc((ulong)uVar10);
          if (pvStack_24188 == (void *)0x0) goto LAB_001a6030;
          ppcVar21 = &pcStack_24190;
          uStack_24180 = 0;
          uStack_24174 = 0;
          uStack_24178 = uVar10;
        }
        else {
          ppcVar21 = &pcStack_241b8;
          FileOutStream_CreateVTable(ppcVar21);
          File_Construct(auStack_241b0);
          iVar4 = OutFile_Open(auStack_241b0,param_4);
          pvVar22 = (void *)0x0;
          if (iVar4 != 0) goto LAB_001a5f7c;
        }
        uVar10 = *(uint *)(lStack_24118 + (ulong)uVar5 * 4);
        uStack_24200 = 0;
        lVar14 = *(long *)(lVar11 + 8);
        if (uVar23 < uVar10) {
          uVar24 = 0;
          g_current_unpack_done = 0;
          g_current_unpack_size = 0;
          if (lVar14 != 0) goto LAB_001a5ff0;
          if (iVar18 != 0) goto LAB_001a5df0;
          goto LAB_001a6214;
        }
        uVar1 = uVar23 - uVar10;
        uVar5 = uVar10 + 1;
        if (((uVar1 < 7 || uVar23 == 0xffffffff) || uVar23 + 1 <= uVar5) &&
            ((uVar1 < 7 || uVar23 == 0xffffffff) || uVar5 != uVar23 + 1)) {
          uVar24 = 0;
          puVar9 = (uint *)(lStack_24150 + (long)(int)uVar10 * 0x20 + 8);
          while( true ) {
            uVar24 = uVar24 + *puVar9;
            if (uVar23 < uVar5) break;
            uVar5 = uVar5 + 1;
            puVar9 = puVar9 + 8;
          }
        }
        else {
          lVar25 = 0;
          lVar26 = 0;
          puVar12 = (ulong *)(lStack_24150 + (long)(int)uVar10 * 0x20 + 8);
          uVar5 = 0;
          do {
            uVar24 = *puVar12;
            puVar3 = puVar12 + 4;
            puVar12 = puVar12 + 8;
            uVar5 = uVar5 + 1;
            lVar25 = lVar25 + (uVar24 & 0xffffffff);
            lVar26 = lVar26 + (*puVar3 & 0xffffffff);
          } while (uVar5 < uVar1 >> 1);
          uVar10 = (uVar1 & 0xfffffffe) + uVar10;
          uVar5 = uVar10 + 1;
          uVar24 = (ulong)*(uint *)(lStack_24150 +
                                    (-(ulong)(uVar10 >> 0x1f) & 0xffffffe000000000 |
                                    (ulong)uVar10 << 5) + 8) + lVar25 + lVar26;
          if (uVar5 <= uVar23) {
            uVar24 = uVar24 + *(uint *)(lStack_24150 +
                                        (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 |
                                        (ulong)uVar5 << 5) + 8);
          }
        }
        g_current_unpack_done = 0;
        g_current_unpack_size = uVar24;
        if (lVar14 == 0) {
          if (iVar18 != 0) {
LAB_001a5df0:
            g_current_unpack_done = 0;
            uVar24 = g_current_unpack_size - uVar19;
            (*pcStack_24038)(auStack_24040,uVar19);
            g_current_unpack_done = g_current_unpack_done + uVar19;
          }
          if ((long)uVar24 < 1) goto LAB_001a6214;
          while( true ) {
            uStack_241f0 = 0x10000;
            if ((long)uVar24 < 0x10000) {
              uStack_241f0 = uVar24;
            }
            iVar4 = (*pcStack_24030)(auStack_24040,auStack_20008,&uStack_241f0);
            if ((iVar4 != 0) ||
               (uVar19 = (**ppcVar21)(ppcVar21,auStack_20008,uStack_241f0), uVar19 != uStack_241f0))
            break;
            uVar24 = uVar24 - uVar19;
            g_current_unpack_done = g_current_unpack_done + uVar19;
            if ((long)uVar24 < 1) goto LAB_001a6214;
          }
          pvVar22 = pvStack_24188;
          if (param_4 != 0) {
            File_Close(auStack_241b0);
            pvVar22 = (void *)0x0;
          }
        }
        else {
LAB_001a5ff0:
          uVar24 = g_current_unpack_size;
          g_current_unpack_done = 0;
          bVar2 = uVar20 != 0xffffffffffffffff;
          if (lVar14 == 0x30101) {
            uStack_240e0 = 0;
            uStack_240d8 = 0;
            LzmaDec_Allocate(auStack_240f0,*(undefined8 *)(lVar11 + 0x10),
                             *(undefined4 *)(lVar11 + 0x18),&pcStack_241e8);
            LzmaDec_Init(auStack_240f0);
            uVar6 = 0;
            do {
              if (uStack_24200 == uVar6) {
                uStack_24200 = 0x10000;
                iVar4 = (*pcStack_24030)(auStack_24040,auStack_20008,&uStack_24200);
                if (iVar4 != 0) break;
                uVar6 = 0;
                uStack_241f8 = uStack_24200;
                puVar13 = auStack_20008;
              }
              else {
                uStack_241f8 = uStack_24200 - uVar6;
                puVar13 = auStack_20008 + uVar6;
              }
              puStack_24260 = &uStack_241f8;
              puStack_24268 = auStack_24204;
              puStack_24270 = auStack_240f0;
              uStack_241f0 = uVar20;
              if ((!bVar2 || uVar20 >= 0xffff) && (!bVar2 || uVar20 != 0xffff)) {
                uStack_241f0 = 0x10000;
              }
              iVar4 = LzmaDec_DecodeToBuf(puStack_24270,auStack_10008,&uStack_241f0,puVar13,
                                          puStack_24260,
                                          bVar2 && uVar20 < 0xffff || bVar2 && uVar20 == 0xffff,
                                          puStack_24268);
              uVar6 = uVar6 + uStack_241f8;
              uVar20 = uVar20 - uStack_241f0;
              uVar24 = uVar24 - uStack_241f0;
              puVar13 = auStack_10008;
              uVar15 = uStack_241f0;
              uVar17 = uVar19;
              if (0 < (long)uVar19) {
                uVar17 = uVar19 - uStack_241f0;
                uVar15 = 0;
                if ((long)uVar17 < 0) {
                  puVar13 = auStack_10008 + uVar19;
                  uVar15 = -uVar17;
                }
              }
              if ((long)uVar24 < 0) {
                uVar15 = uVar15 + (long)(int)uVar24;
                uVar24 = 0;
                g_current_unpack_done = g_current_unpack_size;
              }
              else {
                g_current_unpack_done = uStack_241f0 + g_current_unpack_done;
              }
              if (((uVar15 != 0) && (uVar19 = (**ppcVar21)(ppcVar21,puVar13), uVar19 != uVar15)) ||
                 (iVar4 != 0)) break;
              if (uVar24 == 0 && bVar2) {
                uVar24 = 0;
                break;
              }
              uVar19 = uVar17;
            } while ((uStack_241f8 | uStack_241f0) != 0);
          }
          else {
            if (lVar14 != 0x21) {
              __printf_chk(1,"7Z: method ID %08X not supported.\n");
              pvVar22 = (void *)0x0;
              goto LAB_001a5f7c;
            }
            uStack_240e0 = 0;
            uStack_240d8 = 0;
            Lzma2Dec_Allocate(auStack_240f0,**(undefined **)(lVar11 + 0x10),&pcStack_241e8);
            Lzma2Dec_Init(auStack_240f0);
            uVar6 = 0;
            do {
              if (uStack_24200 == uVar6) {
                uStack_24200 = 0x10000;
                iVar4 = (*pcStack_24030)(auStack_24040,auStack_20008,&uStack_24200);
                if (iVar4 != 0) break;
                uVar6 = 0;
                uStack_241f8 = uStack_24200;
                puVar13 = auStack_20008;
              }
              else {
                uStack_241f8 = uStack_24200 - uVar6;
                puVar13 = auStack_20008 + uVar6;
              }
              uStack_241f0 = uVar20;
              if ((!bVar2 || uVar20 >= 0xffff) && (!bVar2 || uVar20 != 0xffff)) {
                uStack_241f0 = 0x10000;
              }
              iVar4 = Lzma2Dec_DecodeToBuf
                                (auStack_240f0,auStack_10008,&uStack_241f0,puVar13,&uStack_241f8,
                                 bVar2 && uVar20 < 0xffff || bVar2 && uVar20 == 0xffff,auStack_24204
                                );
              uVar6 = uVar6 + uStack_241f8;
              uVar20 = uVar20 - uStack_241f0;
              uVar24 = uVar24 - uStack_241f0;
              puVar13 = auStack_10008;
              uVar15 = uStack_241f0;
              uVar17 = uVar19;
              if (0 < (long)uVar19) {
                uVar17 = uVar19 - uStack_241f0;
                uVar15 = 0;
                if ((long)uVar17 < 0) {
                  puVar13 = auStack_10008 + uVar19;
                  uVar15 = -uVar17;
                }
              }
              if ((long)uVar24 < 0) {
                uVar15 = uVar15 + (long)(int)uVar24;
                uVar24 = 0;
                g_current_unpack_done = g_current_unpack_size;
              }
              else {
                g_current_unpack_done = uStack_241f0 + g_current_unpack_done;
              }
              if (((uVar15 != 0) && (uVar19 = (**ppcVar21)(ppcVar21,puVar13), uVar19 != uVar15)) ||
                 (iVar4 != 0)) break;
              if (uVar24 == 0 && bVar2) {
                uVar24 = 0;
                break;
              }
              uVar19 = uVar17;
            } while ((uStack_241f8 | uStack_241f0) != 0);
          }
          puStack_24270 = auStack_240f0;
          LzmaDec_Free(puStack_24270,&pcStack_241e8);
LAB_001a6214:
          pvVar22 = pvStack_24188;
          if (param_4 != 0) {
            File_Close(auStack_241b0);
            pvVar22 = (void *)(ulong)(uVar24 == 0);
          }
        }
LAB_001a5f7c:
        SzArEx_Free(auStack_24170,&pcStack_241e8);
        SzFree(0,psVar16);
        File_Close(auStack_24198);
        goto LAB_001a5f9c;
      }
LAB_001a5f30:
      pvVar22 = (void *)0x0;
      SzArEx_Free(auStack_24170,&pcStack_241e8);
      SzFree(0,psVar16);
      File_Close(auStack_24198);
LAB_001a5f9c:
      if (*param_3 == 0) {
        pvVar22 = (void *)0x0;
      }
    }
    else {
      pvVar22 = (void *)0x0;
      SzArEx_Free(auStack_24170,&pcStack_241e8);
      SzFree(0,0);
      File_Close(auStack_24198);
    }
  }
  else {
    pvVar22 = (void *)0x0;
    puts("can not open input file");
  }
LAB_001a5ed4:
  if (local_8 - ___stack_chk_guard == 0) {
    return pvVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,auStack_270,local_8 - ___stack_chk_guard,0);
}


