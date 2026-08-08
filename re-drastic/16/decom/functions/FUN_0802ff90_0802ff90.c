/*
 * Ghidra decompilation
 *
 * Function : FUN_0802ff90
 * Address  : 0802ff90
 * Program  : drastic16
 */


void FUN_0802ff90(undefined4 *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  size_t __n;
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  uint *puVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  undefined *__s;
  ushort uVar11;
  uint uVar12;
  uint *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  int iVar23;
  byte bVar24;
  uint *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  uint *puVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined *local_1884;
  uint local_1880;
  uint *local_1854;
  uint local_1848;
  uint uStack_1844;
  uint local_1840;
  uint uStack_183c;
  uint local_1838;
  uint uStack_1834;
  uint local_1830;
  uint uStack_182c;
  undefined auStack_1828 [8];
  undefined auStack_1820 [6140];
  
  uVar12 = param_1[0x1c];
  __s = auStack_1828;
  if (((uint)__s & 8) != 0) {
    __s = auStack_1820;
  }
  puVar14 = __s + 0x1e0;
  uStack_1844 = 0;
  puVar19 = (uint *)(__s + 0xec0);
  local_1840 = 0;
  puVar25 = (uint *)(__s + 0xee0);
  uStack_183c = 0;
  local_1838 = 0;
  uVar15 = (uVar12 << 0x14) >> 0x1c;
  uStack_1834 = 0;
  local_1848 = 0;
  puVar18 = __s + 0xda0;
  puVar20 = (uint *)(__s + 0xf00);
  puVar26 = __s + 0xc90;
  local_1830 = 0;
  uStack_182c = 0;
  if (*(char *)((int)param_1 + 0x96) != '\0') {
    FUN_0802f5e4();
    *(undefined *)((int)param_1 + 0x96) = 0;
  }
  uVar17 = (uint)*(ushort *)(param_1 + 0x20);
  uVar11 = *(ushort *)(param_1 + 0x20) >> 6;
  bVar3 = *(byte *)((int)param_1 + param_3 + 0x20e78);
  if ((uVar11 & 3) == 1) {
    uVar17 = uVar17 & (uVar15 | 0xf0f0 | uVar15 << 8);
    if ((uVar17 & 0x3f) == 0) goto LAB_0803066c;
    uVar10 = uVar17 & 0x3f00;
    if (uVar10 == 0) goto LAB_08030070;
    bVar3 = bVar3 | 4;
LAB_08030670:
    if (uVar10 == 0) goto LAB_08030070;
  }
  else {
    if ((uVar11 & 3) < 2) {
LAB_0803066c:
      uVar10 = uVar17 & 0x3f00;
      goto LAB_08030670;
    }
    uVar17 = uVar17 & (uVar15 | 0xf0);
    if (((uVar17 & 0x3f) != 0) && (*(short *)((int)param_1 + 0x82) != 0)) {
      bVar3 = bVar3 | 8;
    }
LAB_08030070:
    bVar3 = bVar3 & 0xfc;
  }
  local_1884 = (undefined *)(uVar12 & 8);
  if (local_1884 != (undefined *)0x0) {
    if ((uVar12 & 0x100) == 0) {
      if (param_4 == (int *)0x0) {
        local_1884 = (undefined *)0x0;
      }
      else {
        local_1884 = (undefined *)0x0;
        if (*(char *)((int)param_4 + 0xb) == '\x02') goto LAB_0803048c;
      }
    }
    else {
LAB_0803048c:
      uVar1 = *(ushort *)((int)param_1 + 0x10a);
      local_1884 = (undefined *)FUN_08046984(*param_1,param_3);
      iVar23 = (int)((uint)uVar1 << 0x17) >> 0x17;
      if (iVar23 != 0) {
        if (iVar23 < 0) {
          memcpy(__s + iVar23 * -4,local_1884,(iVar23 + 0x100) * 4);
          memset(__s,0,iVar23 * -4);
          local_1884 = __s;
        }
        else {
          __n = (0x100 - iVar23) * 4;
          memcpy(__s,local_1884 + iVar23 * 4,__n);
          memset(__s + __n,0,iVar23 * 4);
          local_1884 = __s;
        }
      }
      bVar3 = FUN_0802e748(puVar18,local_1884,bVar3);
    }
  }
  FUN_0802d4cc(param_1,puVar14,puVar18,param_3);
  if ((uVar12 & 0x1000) != 0) {
    uVar12 = FUN_0808c0d4(param_1,__s + 0xa70,puVar26,__s + 0xe20,puVar19,puVar25,param_3);
    uVar15 = uVar15 | uVar12;
  }
  FUN_0802dad4(param_1,puVar18,&local_1848,uVar15,param_3);
  if ((bVar3 & 7) == 0) {
    FUN_0808ea3c(param_1,puVar18,puVar20,param_3);
    if ((bVar3 & 8) == 0) {
      FUN_0802d808(param_1,param_2,puVar20,puVar14,local_1884,0,uVar15);
    }
    else {
      puVar19 = (uint *)(__s + 0x12c0);
      FUN_0802d808(param_1,__s + 0xfc0,puVar20,puVar14,local_1884,0,uVar15);
      FUN_0808eaf8(puVar19,puVar20,uVar15,uVar17 & 0x3f);
      uVar12 = *(uint *)(__s + 0x12d0);
      uVar15 = *(uint *)(__s + 0x12d4);
      *puVar19 = *puVar19 & ~local_1848;
      *(uint *)(__s + 0x12c4) = *(uint *)(__s + 0x12c4) & ~uStack_1844;
      *(uint *)(__s + 0x12d0) = *(uint *)(__s + 0x12c8) & ~local_1840;
      *(uint *)(__s + 0x12d4) = *(uint *)(__s + 0x12cc) & ~uStack_183c;
      *(uint *)(__s + 0x12d0) = uVar12 & ~local_1838;
      *(uint *)(__s + 0x12d4) = uVar15 & ~uStack_1834;
      *(uint *)(__s + 0x12e0) = *(uint *)(__s + 0x12d8) & ~local_1830;
      *(uint *)(__s + 0x12e4) = *(uint *)(__s + 0x12dc) & ~uStack_182c;
      FUN_0808f000(param_1,param_2,__s + 0xfc0,puVar19);
    }
    goto LAB_080305c8;
  }
  puVar13 = (uint *)(__s + 0x1680);
  puVar21 = __s + 0x2e0;
  local_1854 = (uint *)(__s + 0x16a0);
  puVar27 = __s + 0x1080;
  puVar22 = __s + 0xfc0;
  local_1880 = uVar15;
  if ((uVar15 != 0) && ((*(byte *)(param_1 + 0x19) & 4) == 0)) {
    local_1880 = uVar15 & ~(1 << *(byte *)(param_1 + 0x19));
  }
  FUN_0808e904(param_1,puVar18,puVar20,puVar22,param_3);
  if ((bVar3 & 8) == 0) {
    FUN_0802d808(param_1,puVar27,puVar20,puVar14,local_1884,puVar26,uVar15);
  }
  else {
    FUN_0802d808(param_1,puVar27,puVar20,puVar14,local_1884,0,uVar15);
  }
  FUN_0802d808(param_1,__s + 0x1380,puVar22,puVar14,local_1884,0,local_1880);
  FUN_0808eaf8(puVar13,puVar20,uVar15,uVar17 & 0x3f);
  FUN_0808eaf8(local_1854,puVar22,uVar15,(uVar17 << 0x12) >> 0x1a);
  puVar5 = (uint *)(__s + 0xed0);
  puVar9 = (uint *)(__s + 0xef0);
  puVar7 = (uint *)(__s + 0x16b0);
  bVar32 = local_1854 < puVar5;
  bVar33 = puVar19 < puVar7;
  puVar4 = (uint *)(__s + 0x1690);
  bVar34 = puVar13 < puVar7;
  bVar2 = local_1854 < puVar4;
  bVar35 = puVar25 <= puVar5;
  bVar29 = puVar5 == puVar25;
  if (bVar35 && !bVar29) {
    bVar35 = puVar19 <= puVar9;
    bVar29 = puVar9 == puVar19;
  }
  puVar16 = (uint *)(__s + 0xf80);
  puVar28 = (uint *)(__s + 0xf90);
  bVar36 = puVar16 <= puVar5;
  bVar30 = puVar5 == puVar16;
  if (bVar36 && !bVar30) {
    bVar36 = puVar19 <= puVar28;
    bVar30 = puVar28 == puVar19;
  }
  bVar37 = puVar16 <= puVar9;
  bVar31 = puVar9 == puVar16;
  if (bVar37 && !bVar31) {
    bVar37 = puVar25 <= puVar28;
    bVar31 = puVar28 == puVar25;
  }
  if (((((((bVar34 && bVar2 || (puVar25 < puVar7 && local_1854 < puVar9 || bVar33 && bVar32)) ||
          bVar35 && !bVar29) || puVar19 < puVar4 && puVar13 < puVar5) ||
        puVar25 < puVar4 && puVar13 < puVar9) || bVar36 && !bVar30) ||
      puVar13 < puVar28 && puVar16 < puVar4) || bVar37 && !bVar31) {
    *(uint *)(__s + 0xec0) =
         *(uint *)(__s + 0xec0) & *(uint *)(__s + 0x16a0) & *(uint *)(__s + 0xf80);
    *(uint *)(__s + 0xee0) =
         *(uint *)(__s + 0xee0) & *(uint *)(__s + 0x16a0) & *(uint *)(__s + 0xf80);
    *(uint *)(__s + 0x1680) = *(uint *)(__s + 0x1680) & ~local_1848;
    *(uint *)(__s + 0xec4) =
         *(uint *)(__s + 0xec4) & *(uint *)(__s + 0x16a4) & *(uint *)(__s + 0xf84);
    *(uint *)(__s + 0xee4) =
         *(uint *)(__s + 0xee4) & *(uint *)(__s + 0x16a4) & *(uint *)(__s + 0xf84);
    *(uint *)(__s + 0xec8) =
         *(uint *)(__s + 0xec8) & *(uint *)(__s + 0x16a8) & *(uint *)(__s + 0xf88);
    *(uint *)(__s + 0xee8) =
         *(uint *)(__s + 0xee8) & *(uint *)(__s + 0x16a8) & *(uint *)(__s + 0xf88);
    *(uint *)(__s + 0xecc) =
         *(uint *)(__s + 0xecc) & *(uint *)(__s + 0x16ac) & *(uint *)(__s + 0xf8c);
    *(uint *)(__s + 0xeec) =
         *(uint *)(__s + 0xeec) & *(uint *)(__s + 0x16ac) & *(uint *)(__s + 0xf8c);
    *(uint *)(__s + 0x1684) = *(uint *)(__s + 0x1684) & ~uStack_1844;
    *(uint *)(__s + 0x1688) = *(uint *)(__s + 0x1688) & ~local_1840;
    *(uint *)(__s + 0x168c) = *(uint *)(__s + 0x168c) & ~uStack_183c;
    *(uint *)(__s + 0xed0) =
         *(uint *)(__s + 0xed0) & *(uint *)(__s + 0x16b0) & *(uint *)(__s + 0xf90);
    *(uint *)(__s + 0xef0) =
         *(uint *)(__s + 0xef0) & *(uint *)(__s + 0x16b0) & *(uint *)(__s + 0xf90);
    *(uint *)(__s + 0xed4) =
         *(uint *)(__s + 0xed4) & *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xf94);
    *(uint *)(__s + 0xef4) =
         *(uint *)(__s + 0xef4) & *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xf94);
    *(uint *)(__s + 0xed8) =
         *(uint *)(__s + 0xed8) & *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xf98);
    *(uint *)(__s + 0xef8) =
         *(uint *)(__s + 0xef8) & *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xf98);
    *(uint *)(__s + 0xedc) =
         *(uint *)(__s + 0xedc) & *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xf9c);
    *(uint *)(__s + 0xefc) =
         *(uint *)(__s + 0xefc) & *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xf9c);
    *(uint *)(__s + 0x1690) = *(uint *)(__s + 0x1690) & ~local_1838;
    *(uint *)(__s + 0x1694) = *(uint *)(__s + 0x1694) & ~uStack_1834;
    *(uint *)(__s + 0x1698) = *(uint *)(__s + 0x1698) & ~local_1830;
    *(uint *)(__s + 0x169c) = *(uint *)(__s + 0x169c) & ~uStack_182c;
  }
  else {
    *puVar19 = *puVar16 & *local_1854 & *puVar19;
    *(uint *)(__s + 0xec4) =
         *(uint *)(__s + 0xf84) & *(uint *)(__s + 0x16a4) & *(uint *)(__s + 0xec4);
    *(uint *)(__s + 0xed0) =
         *(uint *)(__s + 0xf88) & *(uint *)(__s + 0x16a8) & *(uint *)(__s + 0xec8);
    *(uint *)(__s + 0xed4) =
         *(uint *)(__s + 0xf8c) & *(uint *)(__s + 0x16ac) & *(uint *)(__s + 0xecc);
    *puVar25 = *puVar16 & *local_1854 & *puVar25;
    *(uint *)(__s + 0xee4) =
         *(uint *)(__s + 0xf84) & *(uint *)(__s + 0x16a4) & *(uint *)(__s + 0xee4);
    *(uint *)(__s + 0xef0) =
         *(uint *)(__s + 0xf88) & *(uint *)(__s + 0x16a8) & *(uint *)(__s + 0xee8);
    *(uint *)(__s + 0xef4) =
         *(uint *)(__s + 0xf8c) & *(uint *)(__s + 0x16ac) & *(uint *)(__s + 0xeec);
    *puVar13 = *puVar13 & ~local_1848;
    *(uint *)(__s + 0x1684) = *(uint *)(__s + 0x1684) & ~uStack_1844;
    *(uint *)(__s + 0x1690) = *(uint *)(__s + 0x1688) & ~local_1840;
    *(uint *)(__s + 0x1694) = *(uint *)(__s + 0x168c) & ~uStack_183c;
    *puVar5 = *puVar28 & *puVar7 & *puVar5;
    *(uint *)(__s + 0xed4) =
         *(uint *)(__s + 0xf94) & *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xed4);
    *(uint *)(__s + 0xee0) =
         *(uint *)(__s + 0xf98) & *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xed8);
    *(uint *)(__s + 0xee4) =
         *(uint *)(__s + 0xf9c) & *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xedc);
    *puVar9 = *puVar28 & *puVar7 & *puVar9;
    *(uint *)(__s + 0xef4) =
         *(uint *)(__s + 0xf94) & *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xef4);
    *(uint *)(__s + 0xf00) =
         *(uint *)(__s + 0xf98) & *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xef8);
    *(uint *)(__s + 0xf04) =
         *(uint *)(__s + 0xf9c) & *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xefc);
    *puVar4 = *puVar4 & ~local_1838;
    *(uint *)(__s + 0x1694) = *(uint *)(__s + 0x1694) & ~uStack_1834;
    *(uint *)(__s + 0x16a0) = *(uint *)(__s + 0x1698) & ~local_1830;
    *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0x169c) & ~uStack_182c;
  }
  if ((local_1884 != (undefined *)0x0) && ((bVar3 & 8) == 0)) {
    if (puVar25 < puVar7 && local_1854 < puVar9 || puVar25 < __s + 0xf10 && puVar20 < puVar9) {
      *(uint *)(__s + 0xee0) =
           *(uint *)(__s + 0xee0) | *(uint *)(__s + 0x16a0) & *(uint *)(__s + 0xf00);
      *(uint *)(__s + 0xee4) =
           *(uint *)(__s + 0xee4) | *(uint *)(__s + 0x16a4) & *(uint *)(__s + 0xf04);
      *(uint *)(__s + 0xee8) =
           *(uint *)(__s + 0xee8) | *(uint *)(__s + 0x16a8) & *(uint *)(__s + 0xf08);
      *(uint *)(__s + 0xeec) =
           *(uint *)(__s + 0xeec) | *(uint *)(__s + 0x16ac) & *(uint *)(__s + 0xf0c);
      *(uint *)(__s + 0xef0) =
           *(uint *)(__s + 0xef0) | *(uint *)(__s + 0x16b0) & *(uint *)(__s + 0xf10);
      *(uint *)(__s + 0xef4) =
           *(uint *)(__s + 0xef4) | *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xf14);
      *(uint *)(__s + 0xef8) =
           *(uint *)(__s + 0xef8) | *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xf18);
      *(uint *)(__s + 0xefc) =
           *(uint *)(__s + 0xefc) | *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xf1c);
    }
    else {
      *puVar25 = *puVar20 & *local_1854 | *puVar25;
      *(uint *)(__s + 0xee4) =
           *(uint *)(__s + 0xf04) & *(uint *)(__s + 0x16a4) | *(uint *)(__s + 0xee4);
      *(uint *)(__s + 0xef0) =
           *(uint *)(__s + 0xf08) & *(uint *)(__s + 0x16a8) | *(uint *)(__s + 0xee8);
      *(uint *)(__s + 0xef4) =
           *(uint *)(__s + 0xf0c) & *(uint *)(__s + 0x16ac) | *(uint *)(__s + 0xeec);
      *puVar9 = *(uint *)(__s + 0xf10) & *puVar7 | *puVar9;
      *(uint *)(__s + 0xef4) =
           *(uint *)(__s + 0xf14) & *(uint *)(__s + 0x16b4) | *(uint *)(__s + 0xef4);
      *(uint *)(__s + 0xf00) =
           *(uint *)(__s + 0xf18) & *(uint *)(__s + 0x16b8) | *(uint *)(__s + 0xef8);
      *(uint *)(__s + 0xf04) =
           *(uint *)(__s + 0xf1c) & *(uint *)(__s + 0x16bc) | *(uint *)(__s + 0xefc);
    }
  }
  bVar8 = bVar3 & 5;
  bVar24 = bVar3;
  if (bVar8 == 4) {
    if (bVar34 && bVar2) {
      *(uint *)(__s + 0x16a0) = *(uint *)(__s + 0x1680) & *(uint *)(__s + 0x16a0);
      *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0x1684) & *(uint *)(__s + 0x16a4);
      *(uint *)(__s + 0x16a8) = *(uint *)(__s + 0x1688) & *(uint *)(__s + 0x16a8);
      *(uint *)(__s + 0x16ac) = *(uint *)(__s + 0x168c) & *(uint *)(__s + 0x16ac);
      *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0x1690) & *(uint *)(__s + 0x16b0);
      *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x1694) & *(uint *)(__s + 0x16b4);
      *(uint *)(__s + 0x16b8) = *(uint *)(__s + 0x1698) & *(uint *)(__s + 0x16b8);
      *(uint *)(__s + 0x16bc) = *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0x169c);
    }
    else {
      *local_1854 = *puVar13 & *local_1854;
      *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0x1684) & *(uint *)(__s + 0x16a4);
      *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0x1688) & *(uint *)(__s + 0x16a8);
      *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x168c) & *(uint *)(__s + 0x16ac);
      *puVar7 = *puVar7 & *puVar4;
      *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0x1694);
      *(uint *)(__s + 0x16c0) = *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0x1698);
      *(uint *)(__s + 0x16c4) = *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0x169c);
    }
LAB_080307a4:
    if ((local_1854 != (uint *)0x0) && ((bVar24 & 0x10) != 0)) {
      if (local_1854 < __s + 0xf10 && puVar20 < puVar7) {
        *(uint *)(__s + 0x16a0) = *(uint *)(__s + 0x16a0) & ~*(uint *)(__s + 0xf00);
        *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0x16a4) & ~*(uint *)(__s + 0xf04);
        *(uint *)(__s + 0x16a8) = *(uint *)(__s + 0x16a8) & ~*(uint *)(__s + 0xf08);
        *(uint *)(__s + 0x16ac) = *(uint *)(__s + 0x16ac) & ~*(uint *)(__s + 0xf0c);
        *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0x16b0) & ~*(uint *)(__s + 0xf10);
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x16b4) & ~*(uint *)(__s + 0xf14);
        *(uint *)(__s + 0x16b8) = *(uint *)(__s + 0x16b8) & ~*(uint *)(__s + 0xf18);
        *(uint *)(__s + 0x16bc) = *(uint *)(__s + 0x16bc) & ~*(uint *)(__s + 0xf1c);
      }
      else {
        *local_1854 = *local_1854 & ~*puVar20;
        *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0x16a4) & ~*(uint *)(__s + 0xf04);
        *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0x16a8) & ~*(uint *)(__s + 0xf08);
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x16ac) & ~*(uint *)(__s + 0xf0c);
        *puVar7 = *puVar7 & ~*(uint *)(__s + 0xf10);
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x16b4) & ~*(uint *)(__s + 0xf14);
        *(uint *)(__s + 0x16c0) = *(uint *)(__s + 0x16b8) & ~*(uint *)(__s + 0xf18);
        *(uint *)(__s + 0x16c4) = *(uint *)(__s + 0x16bc) & ~*(uint *)(__s + 0xf1c);
      }
      bVar24 = bVar24 & 0xef;
    }
  }
  else {
    if (bVar8 == 5) {
      if (bVar33 && bVar32 || bVar34 && bVar2) {
        *(uint *)(__s + 0x16a0) =
             (*(uint *)(__s + 0xec0) | *(uint *)(__s + 0x1680)) & *(uint *)(__s + 0x16a0);
        *(uint *)(__s + 0x16a4) =
             (*(uint *)(__s + 0xec4) | *(uint *)(__s + 0x1684)) & *(uint *)(__s + 0x16a4);
        *(uint *)(__s + 0x16a8) =
             (*(uint *)(__s + 0xec8) | *(uint *)(__s + 0x1688)) & *(uint *)(__s + 0x16a8);
        *(uint *)(__s + 0x16ac) =
             (*(uint *)(__s + 0xecc) | *(uint *)(__s + 0x168c)) & *(uint *)(__s + 0x16ac);
        *(uint *)(__s + 0x16b0) =
             (*(uint *)(__s + 0xed0) | *(uint *)(__s + 0x1690)) & *(uint *)(__s + 0x16b0);
        *(uint *)(__s + 0x16b4) =
             (*(uint *)(__s + 0xed4) | *(uint *)(__s + 0x1694)) & *(uint *)(__s + 0x16b4);
        *(uint *)(__s + 0x16b8) =
             (*(uint *)(__s + 0xed8) | *(uint *)(__s + 0x1698)) & *(uint *)(__s + 0x16b8);
        *(uint *)(__s + 0x16bc) =
             (*(uint *)(__s + 0x169c) | *(uint *)(__s + 0xedc)) & *(uint *)(__s + 0x16bc);
      }
      else {
        *local_1854 = (*puVar19 | *puVar13) & *local_1854;
        *(uint *)(__s + 0x16a4) =
             (*(uint *)(__s + 0xec4) | *(uint *)(__s + 0x1684)) & *(uint *)(__s + 0x16a4);
        *(uint *)(__s + 0x16b0) =
             (*(uint *)(__s + 0xec8) | *(uint *)(__s + 0x1688)) & *(uint *)(__s + 0x16a8);
        *(uint *)(__s + 0x16b4) =
             (*(uint *)(__s + 0xecc) | *(uint *)(__s + 0x168c)) & *(uint *)(__s + 0x16ac);
        *puVar7 = (*puVar4 | *puVar5) & *puVar7;
        *(uint *)(__s + 0x16b4) =
             (*(uint *)(__s + 0x1694) | *(uint *)(__s + 0xed4)) & *(uint *)(__s + 0x16b4);
        *(uint *)(__s + 0x16c0) =
             (*(uint *)(__s + 0x1698) | *(uint *)(__s + 0xed8)) & *(uint *)(__s + 0x16b8);
        *(uint *)(__s + 0x16c4) =
             (*(uint *)(__s + 0x169c) | *(uint *)(__s + 0xedc)) & *(uint *)(__s + 0x16bc);
      }
      bVar24 = bVar3 & 0xfe;
      goto LAB_080307a4;
    }
    if (bVar8 == 1) {
      if (bVar33 && bVar32) {
        *(uint *)(__s + 0x16a0) = *(uint *)(__s + 0xec0) & *(uint *)(__s + 0x16a0);
        *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0xec4) & *(uint *)(__s + 0x16a4);
        *(uint *)(__s + 0x16a8) = *(uint *)(__s + 0xec8) & *(uint *)(__s + 0x16a8);
        *(uint *)(__s + 0x16ac) = *(uint *)(__s + 0xecc) & *(uint *)(__s + 0x16ac);
        *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0xed0) & *(uint *)(__s + 0x16b0);
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0xed4) & *(uint *)(__s + 0x16b4);
        *(uint *)(__s + 0x16b8) = *(uint *)(__s + 0xed8) & *(uint *)(__s + 0x16b8);
        *(uint *)(__s + 0x16bc) = *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xedc);
      }
      else {
        *local_1854 = *puVar19 & *local_1854;
        *(uint *)(__s + 0x16a4) = *(uint *)(__s + 0xec4) & *(uint *)(__s + 0x16a4);
        *(uint *)(__s + 0x16b0) = *(uint *)(__s + 0xec8) & *(uint *)(__s + 0x16a8);
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0xecc) & *(uint *)(__s + 0x16ac);
        *puVar7 = *puVar7 & *puVar5;
        *(uint *)(__s + 0x16b4) = *(uint *)(__s + 0x16b4) & *(uint *)(__s + 0xed4);
        *(uint *)(__s + 0x16c0) = *(uint *)(__s + 0x16b8) & *(uint *)(__s + 0xed8);
        *(uint *)(__s + 0x16c4) = *(uint *)(__s + 0x16bc) & *(uint *)(__s + 0xedc);
      }
      bVar24 = bVar3 & 0xfe | 4;
      goto LAB_080307a4;
    }
    local_1854 = (uint *)0x0;
  }
  if ((bVar3 & 8) == 0) {
    if ((bVar24 & 4) != 0) {
      FUN_0808f318(*(undefined2 *)(param_1 + 0x21),puVar14,puVar21,local_1854);
      bVar32 = false;
      goto LAB_0803054c;
    }
    if ((bVar24 & 2) != 0) {
      FUN_0808f450(puVar14,puVar21,puVar26,puVar25);
    }
  }
  else {
    bVar32 = (uVar11 & 1) != 0;
    if (bVar32) {
      FUN_0808f1fc(*(undefined2 *)((int)param_1 + 0x82),puVar14,puVar21,puVar13);
    }
    else {
      FUN_0808f274(*(undefined2 *)((int)param_1 + 0x82),puVar14,puVar21,__s + 0x3e0,puVar13);
    }
    bVar32 = !bVar32;
    if ((bVar24 & 4) != 0) {
      FUN_0808f39c(*(undefined2 *)(param_1 + 0x21),puVar14,puVar21,local_1854);
    }
LAB_0803054c:
    if ((bVar24 & 2) != 0) {
      FUN_0808f4d4(puVar14,puVar21,puVar26,puVar25);
    }
    if (bVar32) {
      FUN_0808f5f4(param_2,puVar27,puVar14,puVar21,__s + 0x3e0);
      goto LAB_080305c8;
    }
  }
  FUN_0808f540(param_2,puVar27,puVar14,puVar21);
LAB_080305c8:
  if (((param_4 != (int *)0x0) && (*(char *)((int)param_4 + 0xb) != '\0')) &&
     (param_3 < *(byte *)((int)param_4 + 10))) {
    if (*(char *)((int)param_4 + 0xb) == '\x02') {
      if (local_1884 != (undefined *)0x0) {
        if (*(char *)((int)param_4 + 0xd) == '\0') {
          if (*(short *)(param_4 + 2) != 0) {
            puVar19 = (uint *)(local_1884 + -4);
            puVar6 = (ushort *)(*param_4 + -2);
            uVar12 = 0;
            do {
              puVar19 = puVar19 + 1;
              uVar15 = *puVar19;
              uVar12 = uVar12 + 1;
              if (uVar15 >> 0x18 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0x8000;
              }
              puVar6 = puVar6 + 1;
              *puVar6 = uVar11 | (ushort)((uVar15 << 0x18) >> 0x19) |
                        (ushort)(((uVar15 << 0x10) >> 0x19) << 5) |
                        (ushort)(((uVar15 << 8) >> 0x19) << 10);
            } while (uVar12 < *(ushort *)(param_4 + 2));
          }
        }
        else {
          FUN_0802e624(param_4,local_1884);
        }
      }
    }
    else if (*(char *)((int)param_4 + 0xd) == '\0') {
      FUN_08090558();
    }
    else {
      FUN_0802e534(param_4,param_2,0);
    }
  }
  return;
}


