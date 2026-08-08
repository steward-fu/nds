/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_c
 * Address  : 00136b70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_obj_c
               (long param_1,long param_2,ulong *param_3,undefined8 *param_4,ulong *param_5,
               ulong *param_6,uint param_7)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  uint3 uVar13;
  bool bVar14;
  undefined8 uVar15;
  uint *__s;
  long lVar16;
  undefined2 *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  short *psVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar30;
  short sVar31;
  short sVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  byte *pbVar43;
  undefined8 *puVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  byte bVar51;
  uint5 uVar50;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  uint5 uVar52;
  uint5 uVar56;
  undefined8 uVar58;
  ulong uVar59;
  uint5 uVar62;
  undefined8 uVar64;
  ulong uVar65;
  byte bVar68;
  byte bVar73;
  uint uVar69;
  uint uVar70;
  uint uVar75;
  uint uVar76;
  undefined8 uVar71;
  ulong uVar72;
  uint uVar78;
  short sVar83;
  uint uVar84;
  uint uVar85;
  undefined8 uVar79;
  ulong uVar80;
  ulong uVar81;
  short sVar86;
  uint uVar88;
  int iVar89;
  byte bVar94;
  byte bVar97;
  byte bVar98;
  uint uVar95;
  int iVar96;
  undefined8 uVar90;
  ulong uVar91;
  ulong uVar92;
  byte bVar100;
  uint uVar101;
  int iVar102;
  byte bVar107;
  byte bVar110;
  byte bVar111;
  uint uVar108;
  int iVar109;
  undefined8 uVar103;
  ulong uVar104;
  ulong uVar105;
  byte bVar113;
  uint uVar114;
  uint uVar115;
  uint uVar119;
  uint uVar120;
  undefined8 uVar116;
  ulong uVar117;
  uint uVar122;
  uint uVar123;
  undefined uVar130;
  undefined uVar131;
  undefined4 uVar128;
  uint uVar129;
  undefined8 uVar124;
  ulong uVar125;
  ulong uVar126;
  byte bVar133;
  byte bVar140;
  byte bVar141;
  uint uVar134;
  uint uVar135;
  int iVar136;
  byte bVar145;
  byte bVar146;
  uint uVar142;
  uint uVar143;
  int iVar144;
  byte bVar147;
  ulong uVar138;
  ulong uVar139;
  byte bVar148;
  byte bVar155;
  byte bVar156;
  uint uVar149;
  uint uVar150;
  int iVar151;
  byte bVar157;
  byte bVar158;
  byte bVar162;
  byte bVar163;
  undefined4 uVar159;
  uint uVar160;
  int iVar161;
  byte bVar164;
  ulong uVar153;
  ulong uVar154;
  uint uVar165;
  uint uVar168;
  ulong uVar166;
  ulong uVar167;
  uint uVar169;
  uint uVar172;
  ulong uVar170;
  ulong uVar171;
  uint uVar173;
  uint uVar176;
  ulong uVar174;
  ulong uVar175;
  uint uVar177;
  uint uVar180;
  ulong uVar178;
  ulong uVar179;
  ulong uVar181;
  ulong uVar182;
  ulong uVar183;
  ulong uVar184;
  ushort uVar185;
  byte bVar188;
  short sVar187;
  short sVar189;
  short sVar190;
  short sVar191;
  short sVar192;
  short sVar193;
  byte bVar194;
  byte bVar196;
  short sVar195;
  byte bVar197;
  byte bVar199;
  short sVar198;
  short sVar200;
  uint uVar201;
  uint uVar202;
  short sVar203;
  short sVar204;
  uint uVar205;
  short sVar206;
  short sVar207;
  uint uVar208;
  uint uVar209;
  short sVar211;
  short sVar212;
  uint7 uVar210;
  uint uVar213;
  short sVar214;
  uint3 uVar215;
  uint uVar216;
  int iVar217;
  uint7 uVar218;
  uint uVar219;
  int iVar220;
  uint3 uVar221;
  uint uVar222;
  int iVar223;
  uint7 uVar224;
  undefined uVar227;
  undefined4 uVar225;
  undefined uVar228;
  undefined uVar229;
  int iVar226;
  uint uVar230;
  uint7 uVar231;
  uint uVar232;
  uint uVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar245;
  byte bVar246;
  byte bVar247;
  byte bVar248;
  uint uVar244;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  uint uVar261;
  byte bVar266;
  byte bVar267;
  uint uVar268;
  ushort uVar269;
  uint7 uVar270;
  byte bVar272;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  int iVar273;
  byte bVar278;
  byte bVar279;
  byte bVar281;
  byte bVar282;
  byte bVar283;
  byte bVar284;
  byte bVar285;
  int iVar280;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  int iVar289;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar299;
  byte bVar300;
  byte bVar301;
  byte bVar302;
  byte bVar303;
  int iVar298;
  byte bVar304;
  byte bVar305;
  byte bVar307;
  byte bVar308;
  byte bVar309;
  int iVar306;
  byte bVar310;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  int iVar311;
  byte bVar315;
  byte bVar317;
  byte bVar318;
  byte bVar319;
  int iVar316;
  byte bVar320;
  byte bVar322;
  byte bVar323;
  byte bVar324;
  int iVar321;
  int iVar325;
  int iVar326;
  int iVar327;
  int iVar328;
  uint uVar329;
  int iVar330;
  uint uVar331;
  int iVar332;
  uint uVar333;
  int iVar334;
  uint uVar335;
  int iVar336;
  byte bVar338;
  uint uVar337;
  uint uVar339;
  uint uVar340;
  byte bVar342;
  uint uVar341;
  uint uVar343;
  uint uVar344;
  uint uVar345;
  uint uVar346;
  uint uVar347;
  uint uVar348;
  int iVar349;
  uint uVar350;
  int iVar351;
  uint uVar352;
  int iVar353;
  uint uVar354;
  int iVar355;
  uint uVar356;
  byte *local_2e8;
  undefined8 local_2a8;
  undefined8 local_2a0 [31];
  byte bStack_1a1;
  undefined8 local_1a0 [17];
  uint local_118;
  int iStack_114;
  uint uStack_110;
  int iStack_10c;
  uint uStack_108;
  int iStack_104;
  uint uStack_100;
  int iStack_fc;
  uint local_f8;
  int iStack_f4;
  uint uStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  uint local_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  uint uStack_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint local_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  uint local_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  long local_8;
  uint *puVar29;
  uint7 uVar57;
  byte bVar60;
  byte bVar61;
  uint7 uVar63;
  byte bVar66;
  byte bVar67;
  byte bVar74;
  byte bVar77;
  byte bVar82;
  byte bVar87;
  byte bVar93;
  byte bVar99;
  byte bVar106;
  byte bVar112;
  byte bVar118;
  byte bVar121;
  byte bVar127;
  byte bVar132;
  undefined8 uVar137;
  undefined8 uVar152;
  uint7 uVar186;
  undefined8 uVar271;
  
  uVar30 = (ulong)param_7;
  local_2e8 = (byte *)(param_1 + uVar30 + 0x21280);
  __s = &local_118;
  pbVar43 = (byte *)(param_1 + (uVar30 + 0x358) * 0x80 + 0x37f);
  puVar44 = param_4 + 0x10;
  lVar18 = param_1 + 0x380;
  local_8 = ___stack_chk_guard;
  uVar15 = 0;
  do {
    bVar60 = *local_2e8;
    if (bVar60 == 0) {
      *puVar44 = 0;
      puVar44[1] = 0;
      puVar44[2] = 0;
      puVar44[3] = 0;
    }
    else {
      __s = (uint *)memset(__s,0,0x100);
      pbVar24 = pbVar43 + (ulong)(bVar60 - 1) + 1;
      do {
        while( true ) {
          lVar25 = (ulong)*pbVar24 * 0x58;
          lVar33 = lVar18 + lVar25;
          lVar16 = (long)*(short *)(lVar33 + 0x46);
          bVar60 = *(byte *)(lVar33 + 0x52);
          puVar21 = (undefined *)((long)__s + lVar16);
          uVar269 = *(ushort *)(lVar33 + 0x44);
          uVar130 = *(undefined *)(lVar33 + 0x53);
          puVar17 = (undefined2 *)(param_2 + lVar16 * 2);
          puVar19 = (undefined *)((long)param_3 + lVar16);
          uVar69 = (uint)uVar269;
          uVar70 = (uint)*(byte *)(lVar33 + 0x55);
          if (bVar60 == 5) {
            uVar75 = (int)*(short *)(lVar33 + 0x48) - param_7;
            if (*(char *)(lVar33 + 0x54) == '\0') {
              uVar75 = param_7 - (int)*(short *)(lVar33 + 0x48);
            }
            lVar16 = *(long *)(lVar33 + 0x30);
            if (uVar70 != 0) {
              puVar1 = puVar17 + ((ulong)(uVar70 - 1 >> 3) + 1) * 8;
              puVar27 = (uint *)(*(long *)(lVar33 + 0x38) +
                                (ulong)((uVar75 >> 3) * uVar69) + ((ulong)uVar75 & 7) * 8);
              do {
                uVar69 = puVar27[1];
                uVar70 = *puVar27;
                uVar75 = uVar69 & 0xff00ff00;
                uVar78 = uVar69 & 0xff00ff;
                uVar76 = uVar70 & 0xff00ff00;
                uVar84 = uVar70 & 0xff00ff;
                if (uVar69 >> 0x18 != 0) {
                  *puVar21 = (char)(uVar75 >> 0x18);
                  *puVar17 = *(undefined2 *)(lVar16 + (ulong)(uVar69 >> 0x18) * 2);
                  *puVar19 = uVar130;
                }
                uVar85 = (uVar78 << 8) >> 0x18;
                if (uVar85 != 0) {
                  puVar21[1] = (char)(uVar78 >> 0x10);
                  puVar17[1] = *(undefined2 *)(lVar16 + (ulong)uVar85 * 2);
                  puVar19[1] = uVar130;
                }
                uVar85 = uVar75 >> 8 & 0xff;
                if (uVar85 != 0) {
                  puVar21[2] = (char)(uVar75 >> 8);
                  puVar17[2] = *(undefined2 *)(lVar16 + (ulong)uVar85 * 2);
                  puVar19[2] = uVar130;
                }
                if ((uVar69 & 0xff) != 0) {
                  puVar21[3] = (char)uVar78;
                  puVar17[3] = *(undefined2 *)(lVar16 + (ulong)(uVar69 & 0xff) * 2);
                  puVar19[3] = uVar130;
                }
                if (uVar70 >> 0x18 != 0) {
                  puVar21[4] = (char)(uVar76 >> 0x18);
                  puVar17[4] = *(undefined2 *)(lVar16 + (ulong)(uVar70 >> 0x18) * 2);
                  puVar19[4] = uVar130;
                }
                uVar69 = (uVar84 << 8) >> 0x18;
                if (uVar69 != 0) {
                  puVar21[5] = (char)(uVar84 >> 0x10);
                  puVar17[5] = *(undefined2 *)(lVar16 + (ulong)uVar69 * 2);
                  puVar19[5] = uVar130;
                }
                if ((uVar76 >> 8 & 0xff) != 0) {
                  puVar21[6] = (char)(uVar76 >> 8);
                  puVar17[6] = *(undefined2 *)(lVar16 + (ulong)(uVar76 >> 8 & 0xff) * 2);
                  puVar19[6] = uVar130;
                }
                if ((uVar70 & 0xff) != 0) {
                  puVar21[7] = (char)uVar84;
                  puVar17[7] = *(undefined2 *)(lVar16 + (ulong)(uVar70 & 0xff) * 2);
                  puVar19[7] = uVar130;
                }
                puVar17 = puVar17 + 8;
                puVar21 = puVar21 + 8;
                puVar19 = puVar19 + 8;
                puVar27 = puVar27 + -0x10;
              } while (puVar17 != puVar1);
            }
            goto joined_r0x00137ddc;
          }
          uVar75 = (uint)*(byte *)(lVar33 + 0x55);
          if (bVar60 < 6) break;
          if (bVar60 == 9) {
            iVar96 = param_7 - (int)*(short *)(lVar33 + 0x48);
            iVar89 = iVar96 + 0x100;
            if (iVar96 + 0xc0 < 0 == SCARRY4(iVar96,0xc0)) {
              iVar89 = iVar96;
            }
            lVar25 = *(long *)(lVar18 + lVar25) + (long)iVar89 * *(long *)(lVar33 + 0x10);
            lVar16 = *(long *)(lVar33 + 0x18) + (long)iVar89 * *(long *)(lVar33 + 0x28);
            iVar96 = (int)((ulong)lVar16 >> 0x20);
            iVar102 = (int)((ulong)lVar25 >> 0x20);
            if (iVar96 <= iVar102) {
              iVar96 = iVar102;
            }
            iVar102 = (int)((ulong)(lVar16 + *(long *)(lVar33 + 0x20)) >> 0x20);
            iVar109 = (int)((ulong)(lVar25 + *(long *)(lVar33 + 8)) >> 0x20);
            if (iVar109 <= iVar102) {
              iVar102 = iVar109;
            }
            if (iVar96 < 0) {
              iVar96 = 0;
            }
            iVar109 = uVar70 - 1;
            if (iVar102 < (int)uVar70) {
              iVar109 = iVar102;
            }
            uVar70 = iVar109 - iVar96;
            uVar69 = uVar70 + 1;
            if (-1 < (int)uVar69) {
              lVar16 = (long)iVar96;
              local_2a8 = lVar16 * 2;
              if (uVar69 != 0) {
                uVar185 = *(ushort *)(lVar33 + 0x4a);
                uVar3 = *(ushort *)(lVar33 + 0x4c);
                uVar75 = (uint)uVar185;
                uVar76 = (uint)uVar3;
                sVar4 = *(short *)(lVar33 + 0x40) + (short)iVar89 * *(short *)(lVar33 + 0x4e) +
                        uVar185 * (short)iVar96;
                sVar5 = *(short *)(lVar33 + 0x42) + (short)iVar89 * *(short *)(lVar33 + 0x50) +
                        (short)iVar96 * uVar3;
                lVar25 = *(long *)(lVar33 + 0x30);
                lVar33 = *(long *)(lVar33 + 0x38);
                if (uVar70 < 7) {
                  uVar78 = 0;
LAB_00138018:
                  uVar84 = uVar76 + (int)sVar5;
                  uVar85 = uVar75 + (int)sVar4;
                  *(ushort *)((long)local_2a0 + (ulong)uVar78 * 2) =
                       ((short)(char)((ushort)sVar4 >> 8) & 7U) +
                       ((short)(char)((ushort)sVar5 >> 8) & 7U) * 8 +
                       uVar269 * (short)((uint)(int)sVar5 >> 0xb) +
                       (short)((uint)(int)sVar4 >> 0xb) * 0x40;
                  if (uVar78 + 1 < uVar69) {
                    uVar88 = uVar75 + (uVar85 & 0xffff);
                    uVar95 = uVar76 + (uVar84 & 0xffff);
                    *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 1) * 2) =
                         ((short)(char)(uVar85 >> 8) & 7U) + ((short)(char)(uVar84 >> 8) & 7U) * 8 +
                         uVar269 * (short)((uint)(int)(short)uVar84 >> 0xb) +
                         (short)((uint)(int)(short)uVar85 >> 0xb) * 0x40;
                    if (uVar78 + 2 < uVar69) {
                      uVar84 = (uVar88 & 0xffff) + uVar75;
                      uVar85 = (uVar95 & 0xffff) + uVar76;
                      *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 2) * 2) =
                           ((short)(char)(uVar88 >> 8) & 7U) + ((short)(char)(uVar95 >> 8) & 7U) * 8
                           + uVar269 * (short)((uint)(int)(short)uVar95 >> 0xb) +
                             (short)((uint)(int)(short)uVar88 >> 0xb) * 0x40;
                      if (uVar78 + 3 < uVar69) {
                        uVar88 = uVar75 + (uVar84 & 0xffff);
                        uVar95 = uVar76 + (uVar85 & 0xffff);
                        *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 3) * 2) =
                             ((short)(char)(uVar84 >> 8) & 7U) +
                             ((short)(char)(uVar85 >> 8) & 7U) * 8 +
                             (short)((uint)(int)(short)uVar84 >> 0xb) * 0x40 +
                             uVar269 * (short)((uint)(int)(short)uVar85 >> 0xb);
                        if (uVar78 + 4 < uVar69) {
                          iVar89 = uVar75 + (uVar88 & 0xffff);
                          iVar96 = uVar76 + (uVar95 & 0xffff);
                          *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 4) * 2) =
                               ((short)(char)(uVar88 >> 8) & 7U) +
                               ((short)(char)(uVar95 >> 8) & 7U) * 8 +
                               (short)((uint)(int)(short)uVar88 >> 0xb) * 0x40 +
                               uVar269 * (short)((uint)(int)(short)uVar95 >> 0xb);
                          sVar4 = (short)iVar89;
                          sVar5 = (short)iVar96;
                          if (uVar78 + 5 < uVar69) {
                            sVar31 = uVar185 + sVar4;
                            sVar32 = uVar3 + sVar5;
                            *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 5) * 2) =
                                 ((short)(char)((uint)iVar89 >> 8) & 7U) +
                                 ((short)(char)((uint)iVar96 >> 8) & 7U) * 8 +
                                 (short)((uint)(int)sVar4 >> 0xb) * 0x40 +
                                 uVar269 * (short)((uint)(int)sVar5 >> 0xb);
                            if (uVar78 + 6 < uVar69) {
                              *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 6) * 2) =
                                   ((short)(char)((ushort)sVar31 >> 8) & 7U) +
                                   ((short)(char)((ushort)sVar32 >> 8) & 7U) * 8 +
                                   (short)((uint)(int)sVar31 >> 0xb) * 0x40 +
                                   uVar269 * (short)((uint)(int)sVar32 >> 0xb);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  sVar31 = uVar3 + uVar3 + sVar5;
                  sVar45 = uVar185 + uVar185 + sVar4;
                  sVar32 = uVar3 + sVar31;
                  sVar48 = uVar185 + sVar45;
                  sVar36 = uVar3 + sVar32;
                  sVar46 = uVar185 + sVar48;
                  sVar37 = uVar3 + sVar36;
                  sVar49 = uVar185 + sVar46;
                  sVar38 = uVar3 + sVar37;
                  sVar47 = uVar185 + sVar49;
                  sVar39 = (short)(((int)(short)uVar3 & 0x1fffU) << 3);
                  sVar40 = (short)(((int)(short)uVar185 & 0x1fffU) << 3);
                  puVar35 = local_2a0 + 2;
                  puVar41 = local_2a0;
                  uVar15 = CONCAT26(sVar32,CONCAT24(sVar31,CONCAT22(uVar3 + sVar5,sVar5)));
                  uVar58 = CONCAT26(uVar3 + sVar38,CONCAT24(sVar38,CONCAT22(sVar37,sVar36)));
                  uVar64 = CONCAT26(sVar48,CONCAT24(sVar45,CONCAT22(uVar185 + sVar4,sVar4)));
                  uVar71 = CONCAT26(uVar185 + sVar47,CONCAT24(sVar47,CONCAT22(sVar49,sVar46)));
                  while( true ) {
                    puVar42 = puVar35;
                    sVar31 = (short)((ulong)uVar15 >> 0x10);
                    sVar36 = (short)((ulong)uVar15 >> 0x20);
                    sVar38 = (short)((ulong)uVar15 >> 0x30);
                    sVar32 = (short)((ulong)uVar58 >> 0x10);
                    sVar37 = (short)((ulong)uVar58 >> 0x20);
                    sVar45 = (short)((ulong)uVar58 >> 0x30);
                    sVar46 = (short)((ulong)uVar64 >> 0x10);
                    sVar47 = (short)((ulong)uVar64 >> 0x20);
                    sVar48 = (short)((ulong)uVar64 >> 0x30);
                    sVar49 = (short)((ulong)uVar71 >> 0x10);
                    sVar83 = (short)((ulong)uVar71 >> 0x20);
                    sVar86 = (short)((ulong)uVar71 >> 0x30);
                    uVar50 = CONCAT14((char)((ulong)uVar64 >> 0x28),
                                      (uint)(CONCAT12((char)((ulong)uVar64 >> 0x18),
                                                      (ushort)((byte)((ulong)uVar64 >> 8) & 7)) &
                                            0x700ff)) & 0x700ffffff;
                    uVar52 = CONCAT14((char)((ulong)uVar71 >> 0x28),
                                      (uint)(CONCAT12((char)((ulong)uVar71 >> 0x18),
                                                      (ushort)((byte)((ulong)uVar71 >> 8) & 7)) &
                                            0x700ff)) & 0x700ffffff;
                    uVar56 = CONCAT14((char)((ulong)uVar15 >> 0x28),
                                      (uint)(CONCAT12((char)((ulong)uVar15 >> 0x18),
                                                      (ushort)((byte)((ulong)uVar15 >> 8) & 7)) &
                                            0x700ff)) & 0x700ffffff;
                    uVar57 = CONCAT16((char)((ulong)uVar15 >> 0x38),(uint6)uVar56) & 0x700ffffffffff
                    ;
                    uVar62 = CONCAT14((char)((ulong)uVar58 >> 0x28),
                                      (uint)(CONCAT12((char)((ulong)uVar58 >> 0x18),
                                                      (ushort)((byte)((ulong)uVar58 >> 8) & 7)) &
                                            0x700ff)) & 0x700ffffff;
                    uVar63 = CONCAT16((char)((ulong)uVar58 >> 0x38),(uint6)uVar62) & 0x700ffffffffff
                    ;
                    puVar41[1] = CONCAT26((short)((uint)(int)sVar86 >> 0xb) * 0x40 +
                                          (short)((uint)(int)sVar45 >> 0xb) * uVar269 +
                                          (ushort)((byte)((ulong)uVar71 >> 0x38) & 7) +
                                          (ushort)(byte)(uVar63 >> 0x30) * 8,
                                          CONCAT24((short)((uint)(int)sVar83 >> 0xb) * 0x40 +
                                                   (short)((uint)(int)sVar37 >> 0xb) * uVar269 +
                                                   (ushort)(byte)(uVar52 >> 0x20) +
                                                   (short)(uVar63 >> 0x20) * 8,
                                                   CONCAT22((short)((uint)(int)sVar49 >> 0xb) * 0x40
                                                            + (short)((uint)(int)sVar32 >> 0xb) *
                                                              uVar269 + (short)(uVar52 >> 0x10) +
                                                            (short)(uVar62 >> 0x10) * 8,
                                                            (short)((uint)(int)(short)uVar71 >> 0xb)
                                                            * 0x40 + (short)((uint)(int)(short)
                                                  uVar58 >> 0xb) * uVar269 + (short)uVar52 +
                                                  (short)uVar62 * 8)));
                    *puVar41 = CONCAT26((short)((uint)(int)sVar48 >> 0xb) * 0x40 +
                                        (short)((uint)(int)sVar38 >> 0xb) * uVar269 +
                                        (ushort)((byte)((ulong)uVar64 >> 0x38) & 7) +
                                        (ushort)(byte)(uVar57 >> 0x30) * 8,
                                        CONCAT24((short)((uint)(int)sVar47 >> 0xb) * 0x40 +
                                                 (short)((uint)(int)sVar36 >> 0xb) * uVar269 +
                                                 (ushort)(byte)(uVar50 >> 0x20) +
                                                 (short)(uVar57 >> 0x20) * 8,
                                                 CONCAT22((short)((uint)(int)sVar46 >> 0xb) * 0x40 +
                                                          (short)((uint)(int)sVar31 >> 0xb) *
                                                          uVar269 + (short)(uVar50 >> 0x10) +
                                                          (short)(uVar56 >> 0x10) * 8,
                                                          (short)((uint)(int)(short)uVar64 >> 0xb) *
                                                          0x40 + (short)((uint)(int)(short)uVar15 >>
                                                                        0xb) * uVar269 +
                                                          (short)uVar50 + (short)uVar56 * 8)));
                    if (local_2a0 + 2 + (ulong)((uVar69 >> 3) - 1) * 2 == puVar42) break;
                    puVar35 = puVar42 + 2;
                    puVar41 = puVar42;
                    uVar15 = CONCAT26(sVar38 + sVar39,
                                      CONCAT24(sVar36 + sVar39,
                                               CONCAT22(sVar31 + sVar39,(short)uVar15 + sVar39)));
                    uVar58 = CONCAT26(sVar45 + sVar39,
                                      CONCAT24(sVar37 + sVar39,
                                               CONCAT22(sVar32 + sVar39,(short)uVar58 + sVar39)));
                    uVar64 = CONCAT26(sVar48 + sVar40,
                                      CONCAT24(sVar47 + sVar40,
                                               CONCAT22(sVar46 + sVar40,(short)uVar64 + sVar40)));
                    uVar71 = CONCAT26(sVar86 + sVar40,
                                      CONCAT24(sVar83 + sVar40,
                                               CONCAT22(sVar49 + sVar40,(short)uVar71 + sVar40)));
                  }
                  uVar6 = (ushort)uVar69 & 0xfff8;
                  uVar78 = uVar69 & 0xfffffff8;
                  sVar4 = sVar4 + uVar185 * uVar6;
                  sVar5 = sVar5 + uVar3 * uVar6;
                  if ((uVar69 & 7) != 0) goto LAB_00138018;
                }
                lVar20 = 1;
                do {
                  bVar60 = *(byte *)(lVar33 + (ulong)*(ushort *)((long)local_2a0 + lVar20 * 2 + -2))
                  ;
                  if (bVar60 != 0) {
                    puVar21[lVar20 + lVar16 + -1] = bVar60;
                    puVar17[lVar16 + lVar20 + -1] = *(undefined2 *)(lVar25 + (ulong)bVar60 * 2);
                    puVar19[lVar20 + lVar16 + -1] = uVar130;
                  }
                  lVar20 = lVar20 + 1;
                } while ((ulong)uVar70 + 2 != lVar20);
              }
            }
          }
          else if (bVar60 < 10) {
            if (bVar60 == 6) {
              iVar89 = (int)*(short *)(lVar33 + 0x48) - param_7;
              if (*(char *)(lVar33 + 0x54) == '\0') {
                iVar89 = param_7 - (int)*(short *)(lVar33 + 0x48);
              }
              psVar23 = (short *)(*(long *)(lVar33 + 0x38) + (ulong)(iVar89 * uVar69));
              if (uVar70 != 0) {
                lVar33 = 0;
                do {
                  sVar4 = *psVar23;
                  if (*psVar23 < 0) {
                    puVar17[lVar33] = sVar4;
                    puVar19[lVar33] = uVar130;
                    puVar21[lVar33] = (char)((ushort)sVar4 >> 8);
                  }
                  lVar33 = lVar33 + 1;
                  psVar23 = psVar23 + -1;
                } while ((uint)lVar33 < uVar70);
              }
            }
            else if (bVar60 == 8) {
              iVar96 = param_7 - (int)*(short *)(lVar33 + 0x48);
              iVar89 = iVar96 + 0x100;
              if (iVar96 + 0xc0 < 0 == SCARRY4(iVar96,0xc0)) {
                iVar89 = iVar96;
              }
              lVar25 = *(long *)(lVar18 + lVar25) + (long)iVar89 * *(long *)(lVar33 + 0x10);
              lVar16 = *(long *)(lVar33 + 0x18) + (long)iVar89 * *(long *)(lVar33 + 0x28);
              iVar96 = (int)((ulong)lVar16 >> 0x20);
              iVar102 = (int)((ulong)lVar25 >> 0x20);
              if (iVar96 <= iVar102) {
                iVar96 = iVar102;
              }
              uVar69 = (uint)((ulong)(lVar16 + *(long *)(lVar33 + 0x20)) >> 0x20);
              uVar76 = (uint)((ulong)(lVar25 + *(long *)(lVar33 + 8)) >> 0x20);
              if ((int)uVar76 <= (int)uVar69) {
                uVar69 = uVar76;
              }
              if (iVar96 < 0) {
                iVar96 = 0;
              }
              uVar76 = uVar70 - 1;
              if (uVar75 != uVar69 && (int)uVar69 <= (int)uVar70) {
                uVar76 = uVar69;
              }
              uVar76 = uVar76 - iVar96;
              uVar69 = uVar76 + 1;
              if (-1 < (int)uVar69) {
                lVar16 = (long)iVar96;
                local_2a8 = lVar16 * 2;
                if (uVar69 != 0) {
                  sVar4 = *(short *)(lVar33 + 0x4a);
                  sVar5 = *(short *)(lVar33 + 0x4c);
                  sVar31 = *(short *)(lVar33 + 0x40) + (short)iVar89 * *(short *)(lVar33 + 0x4e) +
                           sVar4 * (short)iVar96;
                  sVar32 = *(short *)(lVar33 + 0x42) + (short)iVar89 * *(short *)(lVar33 + 0x50) +
                           (short)iVar96 * sVar5;
                  uVar26 = (ulong)(uint)(int)sVar31;
                  lVar25 = *(long *)(lVar33 + 0x30);
                  lVar33 = *(long *)(lVar33 + 0x38);
                  if (uVar76 < 0xf) {
                    uVar22 = (ulong)(uint)(int)sVar32;
                    uVar70 = 0;
LAB_00137cb8:
                    do {
                      *(byte *)((long)(&bStack_1a1 + 1) + (ulong)uVar70) =
                           (byte)(((uint)(uVar26 >> 8) & 1) << 2);
                      *(ushort *)((long)local_2a0 + (ulong)uVar70 * 2) =
                           ((ushort)(uVar26 >> 9) & 3) + ((ushort)(uVar22 >> 8) & 7) * 4 +
                           (short)(uVar26 >> 0xb) * 0x20 + uVar269 * (short)(uVar22 >> 0xb);
                      uVar70 = uVar70 + 1;
                      uVar22 = (ulong)(uint)(int)(short)(sVar5 + (short)uVar22);
                      uVar26 = (ulong)(uint)(int)(short)(sVar4 + (short)uVar26);
                    } while (uVar70 < uVar69);
                  }
                  else {
                    sVar38 = sVar4 + sVar4 + sVar31;
                    sVar36 = sVar5 + sVar5 + sVar32;
                    sVar40 = sVar4 + sVar38;
                    sVar37 = sVar5 + sVar36;
                    uVar64 = CONCAT26(sVar40,CONCAT24(sVar38,CONCAT22(sVar4 + sVar31,sVar31)));
                    sVar40 = sVar4 + sVar40;
                    uVar15 = CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar5 + sVar32,sVar32)));
                    sVar37 = sVar5 + sVar37;
                    sVar45 = sVar4 + sVar40;
                    sVar38 = sVar5 + sVar37;
                    sVar46 = sVar4 + sVar45;
                    sVar39 = sVar5 + sVar38;
                    sVar36 = (short)(((int)sVar4 & 0xfffU) << 4);
                    uVar71 = CONCAT26(sVar4 + sVar46,CONCAT24(sVar46,CONCAT22(sVar45,sVar40)));
                    uVar58 = CONCAT26(sVar5 + sVar39,CONCAT24(sVar39,CONCAT22(sVar38,sVar37)));
                    sVar38 = (short)(((int)sVar4 & 0x1fffU) << 3);
                    sVar37 = (short)(((int)sVar5 & 0x1fffU) << 3);
                    sVar39 = (short)(((int)sVar5 & 0xfffU) << 4);
                    puVar41 = local_1a0 + 2;
                    puVar35 = local_2a0;
                    puVar42 = (undefined8 *)(&bStack_1a1 + 1);
                    while( true ) {
                      puVar34 = puVar41;
                      sVar200 = (short)uVar15;
                      sVar203 = (short)((ulong)uVar15 >> 0x10);
                      sVar204 = (short)((ulong)uVar15 >> 0x20);
                      sVar206 = (short)((ulong)uVar15 >> 0x30);
                      sVar207 = (short)uVar58;
                      sVar211 = (short)((ulong)uVar58 >> 0x10);
                      sVar212 = (short)((ulong)uVar58 >> 0x20);
                      sVar214 = (short)((ulong)uVar58 >> 0x30);
                      sVar40 = (short)uVar64;
                      sVar187 = sVar38 + sVar40;
                      sVar45 = (short)((ulong)uVar64 >> 0x10);
                      sVar189 = sVar38 + sVar45;
                      sVar46 = (short)((ulong)uVar64 >> 0x20);
                      sVar190 = sVar38 + sVar46;
                      sVar47 = (short)((ulong)uVar64 >> 0x30);
                      sVar191 = sVar38 + sVar47;
                      sVar48 = (short)uVar71;
                      sVar192 = sVar38 + sVar48;
                      sVar49 = (short)((ulong)uVar71 >> 0x10);
                      sVar193 = sVar38 + sVar49;
                      sVar83 = (short)((ulong)uVar71 >> 0x20);
                      sVar195 = sVar38 + sVar83;
                      sVar86 = (short)((ulong)uVar71 >> 0x30);
                      sVar198 = sVar38 + sVar86;
                      bVar60 = (byte)((ushort)(sVar37 + sVar214) >> 8);
                      uVar185 = (ushort)((byte)((ushort)(sVar37 + sVar207) >> 8) & 7);
                      uVar186 = CONCAT16(bVar60,(uint6)(CONCAT14((char)((ushort)(sVar37 + sVar212)
                                                                       >> 8),
                                                                 (uint)(CONCAT12((char)((ushort)(
                                                  sVar37 + sVar211) >> 8),uVar185) & 0x7ffff)) &
                                                  0x7ffffffff)) & 0x7ffffffffffff;
                      uVar56 = CONCAT14((char)((ulong)uVar15 >> 0x28),
                                        (uint)(CONCAT12((char)((ulong)uVar15 >> 0x18),
                                                        (ushort)((byte)((ulong)uVar15 >> 8) & 7)) &
                                              0x700ff)) & 0x700ffffff;
                      uVar57 = CONCAT16((char)((ulong)uVar15 >> 0x38),(uint6)uVar56) &
                               0x700ffffffffff;
                      uVar62 = CONCAT14((char)((ulong)uVar58 >> 0x28),
                                        (uint)(CONCAT12((char)((ulong)uVar58 >> 0x18),
                                                        (ushort)((byte)((ulong)uVar58 >> 8) & 7)) &
                                              0x700ff)) & 0x700ffffff;
                      uVar63 = CONCAT16((char)((ulong)uVar58 >> 0x38),(uint6)uVar62) &
                               0x700ffffffffff;
                      uVar92 = (ulong)uVar64 >> 8;
                      uVar81 = (ulong)uVar64 >> 0x18;
                      bVar74 = (byte)((ulong)uVar71 >> 0x38);
                      bVar61 = (byte)((ushort)sVar198 >> 8);
                      uVar26 = (ulong)CONCAT15(bVar74,CONCAT14((char)((ulong)uVar71 >> 0x28),
                                                               CONCAT13((char)((ulong)uVar71 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar71 >> 8),
                                                  CONCAT11((char)((ulong)uVar64 >> 0x38),
                                                           (char)((ulong)uVar64 >> 0x28)))))) &
                               0x10101010101;
                      uVar22 = (ulong)CONCAT15(bVar61,CONCAT14((char)((ushort)sVar195 >> 8),
                                                               CONCAT13((char)((ushort)sVar193 >> 8)
                                                                        ,CONCAT12((char)((ushort)
                                                  sVar192 >> 8),
                                                  CONCAT11((char)((ushort)sVar191 >> 8),
                                                           (char)((ushort)sVar190 >> 8)))))) &
                               0x10101010101;
                      uVar64 = CONCAT26(sVar47 + sVar36,
                                        CONCAT24(sVar46 + sVar36,
                                                 CONCAT22(sVar45 + sVar36,sVar40 + sVar36)));
                      uVar71 = CONCAT26(sVar86 + sVar36,
                                        CONCAT24(sVar83 + sVar36,
                                                 CONCAT22(sVar49 + sVar36,sVar48 + sVar36)));
                      uVar15 = CONCAT26(sVar206 + sVar39,
                                        CONCAT24(sVar204 + sVar39,
                                                 CONCAT22(sVar203 + sVar39,sVar200 + sVar39)));
                      uVar58 = CONCAT26(sVar214 + sVar39,
                                        CONCAT24(sVar212 + sVar39,
                                                 CONCAT22(sVar211 + sVar39,sVar207 + sVar39)));
                      puVar35[1] = CONCAT26((short)((uint)(int)sVar86 >> 0xb) * 0x20 +
                                            (short)((uint)(int)sVar214 >> 0xb) * uVar269 +
                                            (ushort)((byte)((uint)(int)sVar86 >> 9) & 3) +
                                            (ushort)(byte)(uVar63 >> 0x30) * 4,
                                            CONCAT24((short)((uint)(int)sVar83 >> 0xb) * 0x20 +
                                                     (short)((uint)(int)sVar212 >> 0xb) * uVar269 +
                                                     (ushort)((byte)((uint)(int)sVar83 >> 9) & 3) +
                                                     (short)(uVar63 >> 0x20) * 4,
                                                     CONCAT22((short)((uint)(int)sVar49 >> 0xb) *
                                                              0x20 + (short)((uint)(int)sVar211 >>
                                                                            0xb) * uVar269 +
                                                              (ushort)((byte)((uint)(int)sVar49 >> 9
                                                                             ) & 3) +
                                                              (short)(uVar63 >> 0x10) * 4,
                                                              (short)((uint)(int)sVar48 >> 0xb) *
                                                              0x20 + (short)((uint)(int)sVar207 >>
                                                                            0xb) * uVar269 +
                                                              (ushort)((byte)((uint)(int)sVar48 >> 9
                                                                             ) & 3) +
                                                              (short)uVar62 * 4)));
                      *puVar35 = CONCAT26((short)((uint)(int)sVar47 >> 0xb) * 0x20 +
                                          (short)((uint)(int)sVar206 >> 0xb) * uVar269 +
                                          (ushort)((byte)((uint)(int)sVar47 >> 9) & 3) +
                                          (ushort)(byte)(uVar57 >> 0x30) * 4,
                                          CONCAT24((short)((uint)(int)sVar46 >> 0xb) * 0x20 +
                                                   (short)((uint)(int)sVar204 >> 0xb) * uVar269 +
                                                   (ushort)((byte)((uint)(int)sVar46 >> 9) & 3) +
                                                   (short)(uVar57 >> 0x20) * 4,
                                                   CONCAT22((short)((uint)(int)sVar45 >> 0xb) * 0x20
                                                            + (short)((uint)(int)sVar203 >> 0xb) *
                                                              uVar269 +
                                                            (ushort)((byte)((uint)(int)sVar45 >> 9)
                                                                    & 3) +
                                                            (short)(uVar57 >> 0x10) * 4,
                                                            (short)((uint)(int)sVar40 >> 0xb) * 0x20
                                                            + (short)((uint)(int)sVar200 >> 0xb) *
                                                              uVar269 +
                                                            (ushort)((byte)((uint)(int)sVar40 >> 9)
                                                                    & 3) + (short)uVar56 * 4)));
                      puVar35[3] = CONCAT26((short)((uint)(int)sVar198 >> 0xb) * 0x20 +
                                            (short)((uint)(int)(short)(sVar37 + sVar214) >> 0xb) *
                                            uVar269 + (ushort)((byte)((uint)(int)sVar198 >> 9) & 3)
                                            + (ushort)(bVar60 & 7) * 4,
                                            CONCAT24((short)((uint)(int)sVar195 >> 0xb) * 0x20 +
                                                     (short)((uint)(int)(short)(sVar37 + sVar212) >>
                                                            0xb) * uVar269 +
                                                     (ushort)((byte)((uint)(int)sVar195 >> 9) & 3) +
                                                     (short)(uVar186 >> 0x20) * 4,
                                                     CONCAT22((short)((uint)(int)sVar193 >> 0xb) *
                                                              0x20 + (short)((uint)(int)(short)(
                                                  sVar37 + sVar211) >> 0xb) * uVar269 +
                                                  (ushort)((byte)((uint)(int)sVar193 >> 9) & 3) +
                                                  (short)(uVar186 >> 0x10) * 4,
                                                  (short)((uint)(int)sVar192 >> 0xb) * 0x20 +
                                                  (short)((uint)(int)(short)(sVar37 + sVar207) >>
                                                         0xb) * uVar269 +
                                                  (ushort)((byte)((uint)(int)sVar192 >> 9) & 3) +
                                                  uVar185 * 4)));
                      puVar35[2] = CONCAT26((short)((uint)(int)sVar191 >> 0xb) * 0x20 +
                                            (short)((uint)(int)(short)(sVar37 + sVar206) >> 0xb) *
                                            uVar269 + (ushort)((byte)((uint)(int)sVar191 >> 9) & 3)
                                            + (ushort)((byte)((ushort)(sVar37 + sVar206) >> 8) & 7)
                                              * 4,CONCAT24((short)((uint)(int)sVar190 >> 0xb) * 0x20
                                                           + (short)((uint)(int)(short)(sVar37 + 
                                                  sVar204) >> 0xb) * uVar269 +
                                                  (ushort)((byte)((uint)(int)sVar190 >> 9) & 3) +
                                                  (ushort)((byte)((ushort)(sVar37 + sVar204) >> 8) &
                                                          7) * 4,
                                                  CONCAT22((short)((uint)(int)sVar189 >> 0xb) * 0x20
                                                           + (short)((uint)(int)(short)(sVar37 + 
                                                  sVar203) >> 0xb) * uVar269 +
                                                  (ushort)((byte)((uint)(int)sVar189 >> 9) & 3) +
                                                  (ushort)((byte)((ushort)(sVar37 + sVar203) >> 8) &
                                                          7) * 4,
                                                  (short)((uint)(int)sVar187 >> 0xb) * 0x20 +
                                                  (short)((uint)(int)(short)(sVar37 + sVar200) >>
                                                         0xb) * uVar269 +
                                                  (ushort)((byte)((uint)(int)sVar187 >> 9) & 3) +
                                                  (ushort)((byte)((ushort)(sVar37 + sVar200) >> 8) &
                                                          7) * 4)));
                      puVar35 = puVar35 + 4;
                      puVar42[1] = CONCAT17((bVar61 & 1) << 2,
                                            CONCAT16((char)(uVar22 >> 0x20) << 2,
                                                     CONCAT15((char)(uVar22 >> 0x18) << 2,
                                                              CONCAT14((char)(uVar22 >> 0x10) << 2,
                                                                       CONCAT13((char)(uVar22 >> 8)
                                                                                << 2,CONCAT12((char)
                                                  uVar22 << 2,
                                                  CONCAT11(((byte)((ushort)sVar189 >> 8) & 1) << 2,
                                                           ((byte)((ushort)sVar187 >> 8) & 1) << 2))
                                                  )))));
                      *puVar42 = CONCAT17((bVar74 & 1) << 2,
                                          CONCAT16((char)(uVar26 >> 0x20) << 2,
                                                   CONCAT15((char)(uVar26 >> 0x18) << 2,
                                                            CONCAT14((char)(uVar26 >> 0x10) << 2,
                                                                     CONCAT13((char)(uVar26 >> 8) <<
                                                                              2,CONCAT12((char)
                                                  uVar26 << 2,
                                                  CONCAT11(((byte)uVar81 & 1) << 2,
                                                           ((byte)uVar92 & 1) << 2)))))));
                      if (local_1a0 + 2 + (ulong)((uVar69 >> 4) - 1) * 2 == puVar34) break;
                      puVar41 = puVar34 + 2;
                      puVar42 = puVar34;
                    }
                    uVar185 = (ushort)uVar69 & 0xfff0;
                    uVar70 = uVar69 & 0xfffffff0;
                    uVar26 = (ulong)(uint)(int)(short)(sVar31 + sVar4 * uVar185);
                    if ((uVar69 & 0xf) != 0) {
                      uVar22 = (ulong)(uint)(int)(short)(sVar32 + sVar5 * uVar185);
                      goto LAB_00137cb8;
                    }
                  }
                  lVar20 = 1;
                  do {
                    uVar69 = (int)(uint)*(byte *)(lVar33 + (ulong)*(ushort *)
                                                                   ((long)local_2a0 +
                                                                   lVar20 * 2 + -2)) >>
                             ((&bStack_1a1)[lVar20] & 0x1f) & 0xf;
                    if (uVar69 != 0) {
                      puVar21[lVar20 + lVar16 + -1] = (char)uVar69;
                      puVar17[lVar16 + lVar20 + -1] = *(undefined2 *)(lVar25 + (ulong)uVar69 * 2);
                      puVar19[lVar20 + lVar16 + -1] = uVar130;
                    }
                    lVar20 = lVar20 + 1;
                  } while ((ulong)uVar76 + 2 != lVar20);
                }
              }
            }
          }
          else if (bVar60 == 10) {
            iVar96 = param_7 - (int)*(short *)(lVar33 + 0x48);
            iVar89 = iVar96 + 0x100;
            if (iVar96 + 0xc0 < 0 == SCARRY4(iVar96,0xc0)) {
              iVar89 = iVar96;
            }
            lVar25 = *(long *)(lVar18 + lVar25) + (long)iVar89 * *(long *)(lVar33 + 0x10);
            lVar16 = *(long *)(lVar33 + 0x18) + (long)iVar89 * *(long *)(lVar33 + 0x28);
            iVar96 = (int)((ulong)lVar16 >> 0x20);
            iVar102 = (int)((ulong)lVar25 >> 0x20);
            if (iVar96 <= iVar102) {
              iVar96 = iVar102;
            }
            iVar102 = (int)((ulong)(lVar16 + *(long *)(lVar33 + 0x20)) >> 0x20);
            iVar109 = (int)((ulong)(lVar25 + *(long *)(lVar33 + 8)) >> 0x20);
            if (iVar109 <= iVar102) {
              iVar102 = iVar109;
            }
            if (iVar96 < 0) {
              iVar96 = 0;
            }
            iVar109 = uVar75 - 1;
            if (iVar102 < (int)uVar70) {
              iVar109 = iVar102;
            }
            uVar70 = iVar109 - iVar96;
            uVar69 = uVar70 + 1;
            if ((-1 < (int)uVar69) && (uVar69 != 0)) {
              uVar185 = *(ushort *)(lVar33 + 0x4a);
              uVar3 = *(ushort *)(lVar33 + 0x4c);
              uVar75 = (uint)uVar185;
              uVar76 = (uint)uVar3;
              sVar4 = *(short *)(lVar33 + 0x40) + (short)iVar89 * *(short *)(lVar33 + 0x4e) +
                      uVar185 * (short)iVar96;
              sVar5 = *(short *)(lVar33 + 0x42) + (short)iVar89 * *(short *)(lVar33 + 0x50) +
                      (short)iVar96 * uVar3;
              lVar33 = *(long *)(lVar33 + 0x38);
              if (uVar70 < 7) {
                uVar78 = 0;
LAB_001377f8:
                *(ushort *)((long)local_2a0 + (ulong)uVar78 * 2) =
                     (char)((ushort)sVar4 >> 8) * 2 + uVar269 * (short)(char)((ushort)sVar5 >> 8);
                if (uVar78 + 1 < uVar69) {
                  uVar84 = uVar75 + (uVar75 + (int)sVar4 & 0xffff);
                  uVar85 = uVar76 + (uVar76 + (int)sVar5 & 0xffff);
                  *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 1) * 2) =
                       (char)(uVar75 + (int)sVar4 >> 8) * 2 +
                       uVar269 * (short)(char)(uVar76 + (int)sVar5 >> 8);
                  if (uVar78 + 2 < uVar69) {
                    uVar88 = uVar75 + (uVar84 & 0xffff);
                    uVar95 = uVar76 + (uVar85 & 0xffff);
                    *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 2) * 2) =
                         (char)(uVar84 >> 8) * 2 + uVar269 * (short)(char)(uVar85 >> 8);
                    if (uVar78 + 3 < uVar69) {
                      uVar84 = uVar75 + (uVar88 & 0xffff);
                      uVar85 = uVar76 + (uVar95 & 0xffff);
                      *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 3) * 2) =
                           (char)(uVar88 >> 8) * 2 + uVar269 * (short)(char)(uVar95 >> 8);
                      if (uVar78 + 4 < uVar69) {
                        iVar89 = uVar75 + (uVar84 & 0xffff);
                        iVar102 = uVar76 + (uVar85 & 0xffff);
                        *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 4) * 2) =
                             (char)(uVar84 >> 8) * 2 + uVar269 * (short)(char)(uVar85 >> 8);
                        if (uVar78 + 5 < uVar69) {
                          *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 5) * 2) =
                               (char)((uint)iVar89 >> 8) * 2 +
                               uVar269 * (short)(char)((uint)iVar102 >> 8);
                          if (uVar78 + 6 < uVar69) {
                            *(ushort *)((long)local_2a0 + (ulong)(uVar78 + 6) * 2) =
                                 (char)((ushort)(uVar185 + (short)iVar89) >> 8) * 2 +
                                 uVar269 * (short)(char)((ushort)(uVar3 + (short)iVar102) >> 8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                sVar36 = uVar3 + uVar3 + sVar5;
                sVar45 = uVar185 + uVar185 + sVar4;
                sVar37 = uVar3 + sVar36;
                sVar48 = uVar185 + sVar45;
                sVar38 = uVar3 + sVar37;
                sVar46 = uVar185 + sVar48;
                sVar39 = uVar3 + sVar38;
                sVar49 = uVar185 + sVar46;
                sVar40 = uVar3 + sVar39;
                sVar47 = uVar185 + sVar49;
                sVar31 = (short)((int)(short)uVar3 << 3);
                sVar32 = (short)((int)(short)uVar185 << 3);
                puVar35 = local_2a0;
                puVar41 = local_2a0 + 2;
                uVar15 = CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(uVar3 + sVar5,sVar5)));
                uVar58 = CONCAT26(uVar3 + sVar40,CONCAT24(sVar40,CONCAT22(sVar39,sVar38)));
                uVar64 = CONCAT26(sVar48,CONCAT24(sVar45,CONCAT22(uVar185 + sVar4,sVar4)));
                uVar71 = CONCAT26(uVar185 + sVar47,CONCAT24(sVar47,CONCAT22(sVar49,sVar46)));
                while( true ) {
                  puVar35[1] = CONCAT26((char)((ulong)uVar71 >> 0x38) * 2 +
                                        (short)(char)((ulong)uVar58 >> 0x38) * uVar269,
                                        CONCAT24((char)((ulong)uVar71 >> 0x28) * 2 +
                                                 (short)(char)((ulong)uVar58 >> 0x28) * uVar269,
                                                 CONCAT22((char)((ulong)uVar71 >> 0x18) * 2 +
                                                          (short)(char)((ulong)uVar58 >> 0x18) *
                                                          uVar269,(char)((ulong)uVar71 >> 8) * 2 +
                                                                  (short)(char)((ulong)uVar58 >> 8)
                                                                  * uVar269)));
                  *puVar35 = CONCAT26((char)((ulong)uVar64 >> 0x38) * 2 +
                                      (short)(char)((ulong)uVar15 >> 0x38) * uVar269,
                                      CONCAT24((char)((ulong)uVar64 >> 0x28) * 2 +
                                               (short)(char)((ulong)uVar15 >> 0x28) * uVar269,
                                               CONCAT22((char)((ulong)uVar64 >> 0x18) * 2 +
                                                        (short)(char)((ulong)uVar15 >> 0x18) *
                                                        uVar269,(char)((ulong)uVar64 >> 8) * 2 +
                                                                (short)(char)((ulong)uVar15 >> 8) *
                                                                uVar269)));
                  if (local_2a0 + 2 + (ulong)((uVar69 >> 3) - 1) * 2 == puVar41) break;
                  puVar35 = puVar41;
                  puVar41 = puVar41 + 2;
                  uVar15 = CONCAT26((short)((ulong)uVar15 >> 0x30) + sVar31,
                                    CONCAT24((short)((ulong)uVar15 >> 0x20) + sVar31,
                                             CONCAT22((short)((ulong)uVar15 >> 0x10) + sVar31,
                                                      (short)uVar15 + sVar31)));
                  uVar58 = CONCAT26((short)((ulong)uVar58 >> 0x30) + sVar31,
                                    CONCAT24((short)((ulong)uVar58 >> 0x20) + sVar31,
                                             CONCAT22((short)((ulong)uVar58 >> 0x10) + sVar31,
                                                      (short)uVar58 + sVar31)));
                  uVar64 = CONCAT26((short)((ulong)uVar64 >> 0x30) + sVar32,
                                    CONCAT24((short)((ulong)uVar64 >> 0x20) + sVar32,
                                             CONCAT22((short)((ulong)uVar64 >> 0x10) + sVar32,
                                                      (short)uVar64 + sVar32)));
                  uVar71 = CONCAT26((short)((ulong)uVar71 >> 0x30) + sVar32,
                                    CONCAT24((short)((ulong)uVar71 >> 0x20) + sVar32,
                                             CONCAT22((short)((ulong)uVar71 >> 0x10) + sVar32,
                                                      (short)uVar71 + sVar32)));
                }
                uVar6 = (ushort)uVar69 & 0xfff8;
                uVar78 = uVar69 & 0xfffffff8;
                sVar4 = sVar4 + uVar185 * uVar6;
                sVar5 = sVar5 + uVar3 * uVar6;
                if ((uVar69 & 7) != 0) goto LAB_001377f8;
              }
              lVar25 = (long)iVar96 + -1;
              lVar16 = 1;
              do {
                uVar26 = (ulong)*(ushort *)((long)local_2a0 + lVar16 * 2 + -2);
                uVar2 = *(undefined2 *)(lVar33 + uVar26);
                if (*(short *)(lVar33 + uVar26) < 0) {
                  puVar17[(long)iVar96 + lVar16 + -1] = uVar2;
                  puVar19[lVar16 + lVar25] = uVar130;
                  puVar21[lVar16 + lVar25] = (char)((ushort)uVar2 >> 8);
                }
                lVar16 = lVar16 + 1;
              } while ((ulong)uVar70 + 2 != lVar16);
            }
          }
joined_r0x00137ddc:
          pbVar24 = pbVar24 + -1;
          if (pbVar43 == pbVar24) goto LAB_001371d4;
        }
        if (bVar60 == 2) {
          iVar89 = (int)*(short *)(lVar33 + 0x48) - param_7;
          if (*(char *)(lVar33 + 0x54) == '\0') {
            iVar89 = param_7 - (int)*(short *)(lVar33 + 0x48);
          }
          lVar33 = *(long *)(lVar33 + 0x38) + (ulong)(iVar89 * uVar69);
          if (uVar70 != 0) {
            lVar16 = 0;
            do {
              uVar2 = *(undefined2 *)(lVar33 + lVar16 * 2);
              if (*(short *)(lVar33 + lVar16 * 2) < 0) {
                puVar17[lVar16] = uVar2;
                puVar19[lVar16] = uVar130;
                puVar21[lVar16] = (char)((ushort)uVar2 >> 8);
              }
              lVar16 = lVar16 + 1;
            } while ((uint)lVar16 <= uVar70 && uVar75 != (uint)lVar16);
          }
          goto joined_r0x00137ddc;
        }
        if (2 < bVar60) {
          if (bVar60 == 4) {
            uVar69 = (int)*(short *)(lVar33 + 0x48) - param_7;
            if (*(char *)(lVar33 + 0x54) == '\0') {
              uVar69 = param_7 - (int)*(short *)(lVar33 + 0x48);
            }
            lVar16 = *(long *)(lVar33 + 0x30);
            if (uVar70 != 0) {
              puVar1 = puVar17 + ((ulong)(uVar70 - 1 >> 3) + 1) * 8;
              puVar27 = (uint *)(*(long *)(lVar33 + 0x38) +
                                (ulong)((uVar69 >> 3) * (uint)uVar269) + ((ulong)uVar69 & 7) * 4);
              do {
                uVar69 = (*puVar27 & 0xf0f0f0f) << 4 | *puVar27 >> 4 & 0xf0f0f0f;
                uVar75 = (uVar69 & 0xff00ff00) >> 8;
                uVar69 = uVar69 & 0xff00ff;
                uVar76 = uVar69 << 8;
                uVar70 = uVar75 | uVar76;
                uVar78 = uVar70 << 0x10;
                if ((uVar75 & 0xf0000) != 0) {
                  *puVar21 = (char)((uVar75 & 0xf0000) >> 0x10);
                  *puVar17 = *(undefined2 *)(lVar16 + (ulong)((uVar75 & 0xf0000) >> 0x10) * 2);
                  *puVar19 = uVar130;
                }
                uVar26 = (ulong)(uVar70 >> 0x14) & 0xf;
                if ((int)uVar26 != 0) {
                  puVar21[1] = (char)uVar26;
                  puVar17[1] = *(undefined2 *)(lVar16 + uVar26 * 2);
                  puVar19[1] = uVar130;
                }
                uVar26 = (ulong)(uVar76 >> 0x18) & 0xf;
                if ((int)uVar26 != 0) {
                  puVar21[2] = (char)uVar26;
                  puVar17[2] = *(undefined2 *)(lVar16 + uVar26 * 2);
                  puVar19[2] = uVar130;
                }
                if (uVar76 >> 0x1c != 0) {
                  puVar21[3] = (byte)(uVar69 >> 0x10) >> 4;
                  puVar17[3] = *(undefined2 *)(lVar16 + (ulong)(uVar76 >> 0x1c) * 2);
                  puVar19[3] = uVar130;
                }
                uVar26 = (ulong)(uVar70 & 0xffff) & 0xf;
                if ((int)uVar26 != 0) {
                  puVar21[4] = (char)uVar26;
                  puVar17[4] = *(undefined2 *)(lVar16 + uVar26 * 2);
                  puVar19[4] = uVar130;
                }
                uVar26 = (ulong)(uVar78 >> 0x14) & 0xf;
                if ((int)uVar26 != 0) {
                  puVar21[5] = (char)uVar26;
                  puVar17[5] = *(undefined2 *)(lVar16 + uVar26 * 2);
                  puVar19[5] = uVar130;
                }
                uVar26 = (ulong)(uVar78 >> 0x18) & 0xf;
                if ((int)uVar26 != 0) {
                  puVar21[6] = (char)uVar26;
                  puVar17[6] = *(undefined2 *)(lVar16 + uVar26 * 2);
                  puVar19[6] = uVar130;
                }
                if (uVar78 >> 0x1c != 0) {
                  puVar21[7] = (byte)uVar69 >> 4;
                  puVar17[7] = *(undefined2 *)(lVar16 + (ulong)(uVar78 >> 0x1c) * 2);
                  puVar19[7] = uVar130;
                }
                puVar17 = puVar17 + 8;
                puVar21 = puVar21 + 8;
                puVar19 = puVar19 + 8;
                puVar27 = puVar27 + -8;
              } while (puVar17 != puVar1);
            }
          }
          goto joined_r0x00137ddc;
        }
        if (bVar60 != 0) {
          if (bVar60 == 1) {
            uVar75 = (int)*(short *)(lVar33 + 0x48) - param_7;
            if (*(char *)(lVar33 + 0x54) == '\0') {
              uVar75 = param_7 - (int)*(short *)(lVar33 + 0x48);
            }
            lVar16 = *(long *)(lVar33 + 0x30);
            puVar27 = (uint *)(*(long *)(lVar33 + 0x38) +
                              (ulong)((uVar75 >> 3) * uVar69) + ((ulong)uVar75 & 7) * 8);
            if (uVar70 != 0) {
              puVar28 = puVar27 + ((ulong)(uVar70 - 1 >> 3) + 1) * 0x10;
              do {
                uVar69 = *puVar27;
                uVar70 = puVar27[1];
                puVar27 = puVar27 + 0x10;
                if ((uVar69 & 0xff) != 0) {
                  *puVar21 = (char)uVar69;
                  *puVar17 = *(undefined2 *)(lVar16 + (ulong)(uVar69 & 0xff) * 2);
                  *puVar19 = uVar130;
                }
                uVar75 = uVar69 >> 8 & 0xff;
                if (uVar75 != 0) {
                  puVar21[1] = (char)(uVar69 >> 8);
                  puVar17[1] = *(undefined2 *)(lVar16 + (ulong)uVar75 * 2);
                  puVar19[1] = uVar130;
                }
                uVar75 = uVar69 >> 0x10 & 0xff;
                if (uVar75 != 0) {
                  puVar21[2] = (char)(uVar69 >> 0x10);
                  puVar17[2] = *(undefined2 *)(lVar16 + (ulong)uVar75 * 2);
                  puVar19[2] = uVar130;
                }
                if (uVar69 >> 0x18 != 0) {
                  puVar21[3] = (char)(uVar69 >> 0x18);
                  puVar17[3] = *(undefined2 *)(lVar16 + (ulong)(uVar69 >> 0x18) * 2);
                  puVar19[3] = uVar130;
                }
                if ((uVar70 & 0xff) != 0) {
                  puVar21[4] = (char)uVar70;
                  puVar17[4] = *(undefined2 *)(lVar16 + (ulong)(uVar70 & 0xff) * 2);
                  puVar19[4] = uVar130;
                }
                uVar69 = uVar70 >> 8 & 0xff;
                if (uVar69 != 0) {
                  puVar21[5] = (char)(uVar70 >> 8);
                  puVar17[5] = *(undefined2 *)(lVar16 + (ulong)uVar69 * 2);
                  puVar19[5] = uVar130;
                }
                if ((uVar70 >> 0x10 & 0xff) != 0) {
                  puVar21[6] = (char)(uVar70 >> 0x10);
                  puVar17[6] = *(undefined2 *)(lVar16 + (ulong)(uVar70 >> 0x10 & 0xff) * 2);
                  puVar19[6] = uVar130;
                }
                if (uVar70 >> 0x18 != 0) {
                  puVar21[7] = (char)(uVar70 >> 0x18);
                  puVar17[7] = *(undefined2 *)(lVar16 + (ulong)(uVar70 >> 0x18) * 2);
                  puVar19[7] = uVar130;
                }
                puVar17 = puVar17 + 8;
                puVar21 = puVar21 + 8;
                puVar19 = puVar19 + 8;
              } while (puVar27 != puVar28);
              goto joined_r0x0013850c;
            }
          }
          goto joined_r0x00137ddc;
        }
        uVar76 = (int)*(short *)(lVar33 + 0x48) - param_7;
        if (*(char *)(lVar33 + 0x54) == '\0') {
          uVar76 = param_7 - (int)*(short *)(lVar33 + 0x48);
        }
        lVar16 = *(long *)(lVar33 + 0x30);
        puVar27 = (uint *)(*(long *)(lVar33 + 0x38) +
                          (ulong)((uVar76 >> 3) * uVar69) + ((ulong)uVar76 & 7) * 4);
        if (uVar75 == 0) goto joined_r0x00137ddc;
        puVar28 = puVar27;
        do {
          puVar29 = puVar28 + 8;
          uVar69 = *puVar28;
          if ((uVar69 & 0xf) != 0) {
            *puVar21 = (char)(uVar69 & 0xf);
            *puVar17 = *(undefined2 *)(lVar16 + (ulong)(uVar69 & 0xf) * 2);
            *puVar19 = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 4) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[1] = (char)uVar26;
            puVar17[1] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[1] = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 8) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[2] = (char)uVar26;
            puVar17[2] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[2] = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 0xc) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[3] = (char)uVar26;
            puVar17[3] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[3] = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 0x10) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[4] = (char)uVar26;
            puVar17[4] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[4] = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 0x14) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[5] = (char)uVar26;
            puVar17[5] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[5] = uVar130;
          }
          uVar26 = (ulong)(uVar69 >> 0x18) & 0xf;
          if ((int)uVar26 != 0) {
            puVar21[6] = (char)uVar26;
            puVar17[6] = *(undefined2 *)(lVar16 + uVar26 * 2);
            puVar19[6] = uVar130;
          }
          if (uVar69 >> 0x1c != 0) {
            puVar21[7] = (byte)(uVar69 >> 0x1c);
            puVar17[7] = *(undefined2 *)(lVar16 + (ulong)(uVar69 >> 0x1c) * 2);
            puVar19[7] = uVar130;
          }
          puVar17 = puVar17 + 8;
          puVar21 = puVar21 + 8;
          puVar19 = puVar19 + 8;
          puVar28 = puVar29;
        } while (puVar29 != puVar27 + ((ulong)(uVar70 - 1 >> 3) + 1) * 8);
joined_r0x0013850c:
        pbVar24 = pbVar24 + -1;
      } while (pbVar43 != pbVar24);
LAB_001371d4:
      iVar273 = iStack_114 << 4;
      iVar280 = iStack_10c << 4;
      iVar289 = iStack_104 << 4;
      iVar298 = iStack_fc << 4;
      uVar101 = uStack_108 >> 4;
      uVar88 = local_f8 >> 4;
      uVar95 = uStack_e8 >> 4;
      iVar217 = iStack_f4 << 4;
      iVar220 = iStack_ec << 4;
      iVar223 = iStack_e4 << 4;
      iVar226 = iStack_dc << 4;
      iVar349 = iStack_d4 << 4;
      iVar351 = iStack_cc << 4;
      iVar353 = iStack_c4 << 4;
      iVar355 = iStack_bc << 4;
      uVar78 = local_d8 >> 4;
      uVar84 = uStack_c8 >> 4;
      uVar85 = uStack_a8 >> 4;
      iVar89 = iStack_b4 << 4;
      iVar96 = iStack_ac << 4;
      iVar102 = iStack_a4 << 4;
      iVar109 = iStack_9c << 4;
      bVar60 = (byte)(local_118 >> 0x18);
      bVar74 = (byte)(uStack_110 >> 0x18);
      bVar305 = (byte)(uStack_108 >> 0x18);
      bVar188 = (byte)(uStack_100 >> 0x18);
      bVar73 = (byte)(local_f8 >> 0x18);
      bVar67 = (byte)(uStack_f0 >> 0x18);
      bVar140 = (byte)(uStack_e8 >> 0x18);
      bVar82 = (byte)(uStack_e0 >> 0x18);
      uVar15 = 0x10;
      bVar112 = (byte)(local_d8 >> 0x18);
      bVar51 = (byte)(uStack_d0 >> 0x18);
      bVar68 = (byte)(uStack_c8 >> 0x18);
      bVar77 = (byte)(uStack_c0 >> 0x18);
      bVar61 = (byte)(local_b8 >> 0x18);
      bVar66 = (byte)(uStack_b0 >> 0x18);
      bVar54 = (byte)(uStack_a8 >> 0x18);
      bVar93 = (byte)(uStack_a0 >> 0x18);
      iVar136 = iStack_94 << 4;
      iVar144 = iStack_8c << 4;
      iVar151 = iStack_84 << 4;
      iVar161 = iStack_7c << 4;
      iVar330 = iStack_74 << 4;
      iVar332 = iStack_6c << 4;
      iVar334 = iStack_64 << 4;
      iVar336 = iStack_5c << 4;
      iVar325 = iStack_54 << 4;
      iVar326 = iStack_4c << 4;
      iVar327 = iStack_44 << 4;
      iVar328 = iStack_3c << 4;
      uVar75 = local_58 >> 4;
      uVar76 = uStack_48 >> 4;
      iVar306 = iStack_34 << 4;
      iVar311 = iStack_2c << 4;
      iVar316 = iStack_24 << 4;
      iVar321 = iStack_1c << 4;
      uVar69 = local_38 >> 4;
      uVar70 = uStack_28 >> 4;
      uVar120 = local_98 >> 4;
      uVar122 = uStack_90 >> 4;
      uVar123 = uStack_88 >> 4;
      uVar129 = uStack_80 >> 4;
      uVar108 = local_78 >> 4;
      uVar114 = uStack_70 >> 4;
      uVar115 = uStack_68 >> 4;
      uVar119 = uStack_60 >> 4;
      bVar99 = (byte)(local_38 >> 0x18);
      bVar106 = (byte)(uStack_30 >> 0x18);
      bVar55 = (byte)(uStack_28 >> 0x18);
      bVar87 = (byte)(uStack_20 >> 0x18);
      bVar118 = (byte)(local_58 >> 0x18);
      bVar127 = (byte)(uStack_50 >> 0x18);
      bVar121 = (byte)(uStack_48 >> 0x18);
      bVar53 = (byte)(uStack_40 >> 0x18);
      bVar342 = (byte)(local_98 >> 0x18);
      bVar145 = (byte)(uStack_90 >> 0x18);
      bVar146 = (byte)(uStack_88 >> 0x18);
      bVar147 = (byte)(uStack_80 >> 0x18);
      bVar132 = (byte)(local_78 >> 0x18);
      bVar133 = (byte)(uStack_70 >> 0x18);
      bVar141 = (byte)(uStack_68 >> 0x18);
      bVar338 = (byte)(uStack_60 >> 0x18);
      uVar81 = CONCAT17((byte)((uint)iVar332 >> 0x18) | (byte)((uint)iStack_6c >> 0x18),
                        CONCAT16((byte)((uint)iVar332 >> 0x10) | (byte)((uint)iStack_6c >> 0x10),
                                 CONCAT15((byte)((uint)iVar332 >> 8) | (byte)((uint)iStack_6c >> 8),
                                          CONCAT14((byte)iVar332 | (byte)iStack_6c,
                                                   CONCAT13((byte)((uint)iVar330 >> 0x18) |
                                                            (byte)((uint)iStack_74 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar330 >> 0x10) |
                                                                     (byte)((uint)iStack_74 >> 0x10)
                                                                     ,CONCAT11((byte)((uint)iVar330
                                                                                     >> 8) |
                                                                               (byte)((uint)
                                                  iStack_74 >> 8),(byte)iVar330 | (byte)iStack_74)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar92 = CONCAT17((byte)((uint)iVar336 >> 0x18) | (byte)((uint)iStack_5c >> 0x18),
                        CONCAT16((byte)((uint)iVar336 >> 0x10) | (byte)((uint)iStack_5c >> 0x10),
                                 CONCAT15((byte)((uint)iVar336 >> 8) | (byte)((uint)iStack_5c >> 8),
                                          CONCAT14((byte)iVar336 | (byte)iStack_5c,
                                                   CONCAT13((byte)((uint)iVar334 >> 0x18) |
                                                            (byte)((uint)iStack_64 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar334 >> 0x10) |
                                                                     (byte)((uint)iStack_64 >> 0x10)
                                                                     ,CONCAT11((byte)((uint)iVar334
                                                                                     >> 8) |
                                                                               (byte)((uint)
                                                  iStack_64 >> 8),(byte)iVar334 | (byte)iStack_64)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar26 = CONCAT44((int)(((ulong)CONCAT12((byte)((uint)iVar96 >> 0x18) |
                                               (byte)((uint)iStack_ac >> 0x18),
                                               CONCAT11((byte)((uint)iVar96 >> 0x10) |
                                                        (byte)((uint)iStack_ac >> 0x10),
                                                        (byte)((uint)iVar96 >> 8) |
                                                        (byte)((uint)iStack_ac >> 8))) << 0x28) >>
                             0x20),
                        CONCAT13((byte)((uint)iVar89 >> 0x18) | (byte)((uint)iStack_b4 >> 0x18),
                                 CONCAT12((byte)((uint)iVar89 >> 0x10) |
                                          (byte)((uint)iStack_b4 >> 0x10),
                                          CONCAT11((byte)((uint)iVar89 >> 8) |
                                                   (byte)((uint)iStack_b4 >> 8),
                                                   (byte)iVar89 | (byte)iStack_b4)))) &
               0xfffffffff0f0f0f0;
      uVar125 = CONCAT17((char)(uVar26 >> 0x38),
                         CONCAT16((char)(uVar26 >> 0x30),
                                  CONCAT15((char)(uVar26 >> 0x28),
                                           CONCAT14((byte)iVar96 | (byte)iStack_ac,(int)uVar26)))) &
                0xf0f0f0f0ffffffff;
      uVar126 = CONCAT17((byte)((uint)iVar109 >> 0x18) | (byte)((uint)iStack_9c >> 0x18),
                         CONCAT16((byte)((uint)iVar109 >> 0x10) | (byte)((uint)iStack_9c >> 0x10),
                                  CONCAT15((byte)((uint)iVar109 >> 8) | (byte)((uint)iStack_9c >> 8)
                                           ,CONCAT14((byte)iVar109 | (byte)iStack_9c,
                                                     CONCAT13((byte)((uint)iVar102 >> 0x18) |
                                                              (byte)((uint)iStack_a4 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar102 >> 0x10)
                                                                       | (byte)((uint)iStack_a4 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((uint)iVar102
                                                                                      >> 8) |
                                                                                (byte)((uint)
                                                  iStack_a4 >> 8),(byte)iVar102 | (byte)iStack_a4)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar269 = CONCAT11((byte)(uVar101 >> 8) | (byte)(uStack_108 >> 8),
                         (byte)uVar101 | (byte)uStack_108) & 0xf0f;
      uVar167 = CONCAT17(bVar67 >> 4 | bVar67,
                         CONCAT16((byte)((uint3)(uStack_f0 >> 0xc) >> 8) | (byte)(uStack_f0 >> 0x10)
                                  ,CONCAT15((byte)((uStack_f0 >> 4) >> 8) | (byte)(uStack_f0 >> 8),
                                            CONCAT14((byte)(uStack_f0 >> 4) | (byte)uStack_f0,
                                                     CONCAT13(bVar73 >> 4 | bVar73,
                                                              CONCAT12((byte)(uVar88 >> 0x10) |
                                                                       (byte)(local_f8 >> 0x10),
                                                                       CONCAT11((byte)(uVar88 >> 8)
                                                                                | (byte)(local_f8 >>
                                                                                        8),
                                                                                (byte)uVar88 |
                                                                                (byte)local_f8))))))
                        ) & 0xf0f0f0f0f0f0f0f;
      uVar170 = CONCAT17(bVar82 >> 4 | bVar82,
                         CONCAT16((byte)((uint3)(uStack_e0 >> 0xc) >> 8) | (byte)(uStack_e0 >> 0x10)
                                  ,CONCAT15((byte)((uStack_e0 >> 4) >> 8) | (byte)(uStack_e0 >> 8),
                                            CONCAT14((byte)(uStack_e0 >> 4) | (byte)uStack_e0,
                                                     CONCAT13(bVar140 >> 4 | bVar140,
                                                              CONCAT12((byte)(uVar95 >> 0x10) |
                                                                       (byte)(uStack_e8 >> 0x10),
                                                                       CONCAT11((byte)(uVar95 >> 8)
                                                                                | (byte)(uStack_e8
                                                                                        >> 8),
                                                                                (byte)uVar95 |
                                                                                (byte)uStack_e8)))))
                                 )) & 0xf0f0f0f0f0f0f0f;
      uVar138 = CONCAT17(bVar51 >> 4 | bVar51,
                         CONCAT16((byte)((uint3)(uStack_d0 >> 0xc) >> 8) | (byte)(uStack_d0 >> 0x10)
                                  ,CONCAT15((byte)((uStack_d0 >> 4) >> 8) | (byte)(uStack_d0 >> 8),
                                            CONCAT14((byte)(uStack_d0 >> 4) | (byte)uStack_d0,
                                                     CONCAT13(bVar112 >> 4 | bVar112,
                                                              CONCAT12((byte)(uVar78 >> 0x10) |
                                                                       (byte)(local_d8 >> 0x10),
                                                                       CONCAT11((byte)(uVar78 >> 8)
                                                                                | (byte)(local_d8 >>
                                                                                        8),
                                                                                (byte)uVar78 |
                                                                                (byte)local_d8))))))
                        ) & 0xf0f0f0f0f0f0f0f;
      uVar139 = CONCAT17(bVar77 >> 4 | bVar77,
                         CONCAT16((byte)((uint3)(uStack_c0 >> 0xc) >> 8) | (byte)(uStack_c0 >> 0x10)
                                  ,CONCAT15((byte)((uStack_c0 >> 4) >> 8) | (byte)(uStack_c0 >> 8),
                                            CONCAT14((byte)(uStack_c0 >> 4) | (byte)uStack_c0,
                                                     CONCAT13(bVar68 >> 4 | bVar68,
                                                              CONCAT12((byte)(uVar84 >> 0x10) |
                                                                       (byte)(uStack_c8 >> 0x10),
                                                                       CONCAT11((byte)(uVar84 >> 8)
                                                                                | (byte)(uStack_c8
                                                                                        >> 8),
                                                                                (byte)uVar84 |
                                                                                (byte)uStack_c8)))))
                                 )) & 0xf0f0f0f0f0f0f0f;
      uVar78 = CONCAT13(bVar66 >> 4 | bVar66,
                        CONCAT12((byte)(ushort)(uStack_b0 >> 0x14) | (byte)(uStack_b0 >> 0x10),
                                 CONCAT11((byte)(uint3)(uStack_b0 >> 0xc) | (byte)(uStack_b0 >> 8),
                                          (byte)(uStack_b0 >> 4) | (byte)uStack_b0))) & 0xf0f0f0f;
      uVar153 = CONCAT17(bVar93 >> 4 | bVar93,
                         CONCAT16((byte)((uint3)(uStack_a0 >> 0xc) >> 8) | (byte)(uStack_a0 >> 0x10)
                                  ,CONCAT15((byte)((uStack_a0 >> 4) >> 8) | (byte)(uStack_a0 >> 8),
                                            CONCAT14((byte)(uStack_a0 >> 4) | (byte)uStack_a0,
                                                     CONCAT13(bVar54 >> 4 | bVar54,
                                                              CONCAT12((byte)(uVar85 >> 0x10) |
                                                                       (byte)(uStack_a8 >> 0x10),
                                                                       CONCAT11((byte)(uVar85 >> 8)
                                                                                | (byte)(uStack_a8
                                                                                        >> 8),
                                                                                (byte)uVar85 |
                                                                                (byte)uStack_a8)))))
                                 )) & 0xf0f0f0f0f0f0f0f;
      uVar80 = CONCAT17(bVar145 >> 4 | bVar145,
                        CONCAT16((byte)(uVar122 >> 0x10) | (byte)(uStack_90 >> 0x10),
                                 CONCAT15((byte)(uVar122 >> 8) | (byte)(uStack_90 >> 8),
                                          CONCAT14((byte)uVar122 | (byte)uStack_90,
                                                   CONCAT13(bVar342 >> 4 | bVar342,
                                                            CONCAT12((byte)(uVar120 >> 0x10) |
                                                                     (byte)(local_98 >> 0x10),
                                                                     CONCAT11((byte)(uVar120 >> 8) |
                                                                              (byte)(local_98 >> 8),
                                                                              (byte)uVar120 |
                                                                              (byte)local_98)))))))
               & 0xf0f0f0f0f0f0f0f;
      uVar91 = CONCAT17(bVar147 >> 4 | bVar147,
                        CONCAT16((byte)(uVar129 >> 0x10) | (byte)(uStack_80 >> 0x10),
                                 CONCAT15((byte)(uVar129 >> 8) | (byte)(uStack_80 >> 8),
                                          CONCAT14((byte)uVar129 | (byte)uStack_80,
                                                   CONCAT13(bVar146 >> 4 | bVar146,
                                                            CONCAT12((byte)(uVar123 >> 0x10) |
                                                                     (byte)(uStack_88 >> 0x10),
                                                                     CONCAT11((byte)(uVar123 >> 8) |
                                                                              (byte)(uStack_88 >> 8)
                                                                              ,(byte)uVar123 |
                                                                               (byte)uStack_88))))))
                       ) & 0xf0f0f0f0f0f0f0f;
      uVar65 = CONCAT17(bVar133 >> 4 | bVar133,
                        CONCAT16((byte)(uVar114 >> 0x10) | (byte)(uStack_70 >> 0x10),
                                 CONCAT15((byte)(uVar114 >> 8) | (byte)(uStack_70 >> 8),
                                          CONCAT14((byte)uVar114 | (byte)uStack_70,
                                                   CONCAT13(bVar132 >> 4 | bVar132,
                                                            CONCAT12((byte)(uVar108 >> 0x10) |
                                                                     (byte)(local_78 >> 0x10),
                                                                     CONCAT11((byte)(uVar108 >> 8) |
                                                                              (byte)(local_78 >> 8),
                                                                              (byte)uVar108 |
                                                                              (byte)local_78)))))))
               & 0xf0f0f0f0f0f0f0f;
      uVar72 = CONCAT17(bVar338 >> 4 | bVar338,
                        CONCAT16((byte)(uVar119 >> 0x10) | (byte)(uStack_60 >> 0x10),
                                 CONCAT15((byte)(uVar119 >> 8) | (byte)(uStack_60 >> 8),
                                          CONCAT14((byte)uVar119 | (byte)uStack_60,
                                                   CONCAT13(bVar141 >> 4 | bVar141,
                                                            CONCAT12((byte)(uVar115 >> 0x10) |
                                                                     (byte)(uStack_68 >> 0x10),
                                                                     CONCAT11((byte)(uVar115 >> 8) |
                                                                              (byte)(uStack_68 >> 8)
                                                                              ,(byte)uVar115 |
                                                                               (byte)uStack_68))))))
                       ) & 0xf0f0f0f0f0f0f0f;
      uVar105 = CONCAT17((byte)((uint)iVar326 >> 0x18) | (byte)((uint)iStack_4c >> 0x18),
                         CONCAT16((byte)((uint)iVar326 >> 0x10) | (byte)((uint)iStack_4c >> 0x10),
                                  CONCAT15((byte)((uint)iVar326 >> 8) | (byte)((uint)iStack_4c >> 8)
                                           ,CONCAT14((byte)iVar326 | (byte)iStack_4c,
                                                     CONCAT13((byte)((uint)iVar325 >> 0x18) |
                                                              (byte)((uint)iStack_54 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar325 >> 0x10)
                                                                       | (byte)((uint)iStack_54 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((uint)iVar325
                                                                                      >> 8) |
                                                                                (byte)((uint)
                                                  iStack_54 >> 8),(byte)iVar325 | (byte)iStack_54)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar59 = CONCAT17((byte)((uint)iVar328 >> 0x18) | (byte)((uint)iStack_3c >> 0x18),
                        CONCAT16((byte)((uint)iVar328 >> 0x10) | (byte)((uint)iStack_3c >> 0x10),
                                 CONCAT15((byte)((uint)iVar328 >> 8) | (byte)((uint)iStack_3c >> 8),
                                          CONCAT14((byte)iVar328 | (byte)iStack_3c,
                                                   CONCAT13((byte)((uint)iVar327 >> 0x18) |
                                                            (byte)((uint)iStack_44 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar327 >> 0x10) |
                                                                     (byte)((uint)iStack_44 >> 0x10)
                                                                     ,CONCAT11((byte)((uint)iVar327
                                                                                     >> 8) |
                                                                               (byte)((uint)
                                                  iStack_44 >> 8),(byte)iVar327 | (byte)iStack_44)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar104 = CONCAT17(bVar127 >> 4 | bVar127,
                         CONCAT16((byte)((uint3)(uStack_50 >> 0xc) >> 8) | (byte)(uStack_50 >> 0x10)
                                  ,CONCAT15((byte)((uStack_50 >> 4) >> 8) | (byte)(uStack_50 >> 8),
                                            CONCAT14((byte)(uStack_50 >> 4) | (byte)uStack_50,
                                                     CONCAT13(bVar118 >> 4 | bVar118,
                                                              CONCAT12((byte)(uVar75 >> 0x10) |
                                                                       (byte)(local_58 >> 0x10),
                                                                       CONCAT11((byte)(uVar75 >> 8)
                                                                                | (byte)(local_58 >>
                                                                                        8),
                                                                                (byte)uVar75 |
                                                                                (byte)local_58))))))
                        ) & 0xf0f0f0f0f0f0f0f;
      uVar117 = CONCAT17(bVar53 >> 4 | bVar53,
                         CONCAT16((byte)((uint3)(uStack_40 >> 0xc) >> 8) | (byte)(uStack_40 >> 0x10)
                                  ,CONCAT15((byte)((uStack_40 >> 4) >> 8) | (byte)(uStack_40 >> 8),
                                            CONCAT14((byte)(uStack_40 >> 4) | (byte)uStack_40,
                                                     CONCAT13(bVar121 >> 4 | bVar121,
                                                              CONCAT12((byte)(uVar76 >> 0x10) |
                                                                       (byte)(uStack_48 >> 0x10),
                                                                       CONCAT11((byte)(uVar76 >> 8)
                                                                                | (byte)(uStack_48
                                                                                        >> 8),
                                                                                (byte)uVar76 |
                                                                                (byte)uStack_48)))))
                                 )) & 0xf0f0f0f0f0f0f0f;
      uVar26 = CONCAT17((byte)((uint)iVar311 >> 0x18) | (byte)((uint)iStack_2c >> 0x18),
                        CONCAT16((byte)((uint)iVar311 >> 0x10) | (byte)((uint)iStack_2c >> 0x10),
                                 CONCAT15((byte)((uint)iVar311 >> 8) | (byte)((uint)iStack_2c >> 8),
                                          CONCAT14((byte)iVar311 | (byte)iStack_2c,
                                                   CONCAT13((byte)((uint)iVar306 >> 0x18) |
                                                            (byte)((uint)iStack_34 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar306 >> 0x10) |
                                                                     (byte)((uint)iStack_34 >> 0x10)
                                                                     ,CONCAT11((byte)((uint)iVar306
                                                                                     >> 8) |
                                                                               (byte)((uint)
                                                  iStack_34 >> 8),(byte)iVar306 | (byte)iStack_34)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar22 = CONCAT17((byte)((uint)iVar321 >> 0x18) | (byte)((uint)iStack_1c >> 0x18),
                        CONCAT16((byte)((uint)iVar321 >> 0x10) | (byte)((uint)iStack_1c >> 0x10),
                                 CONCAT15((byte)((uint)iVar321 >> 8) | (byte)((uint)iStack_1c >> 8),
                                          CONCAT14((byte)iVar321 | (byte)iStack_1c,
                                                   CONCAT13((byte)((uint)iVar316 >> 0x18) |
                                                            (byte)((uint)iStack_24 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar316 >> 0x10) |
                                                                     (byte)((uint)iStack_24 >> 0x10)
                                                                     ,CONCAT11((byte)((uint)iVar316
                                                                                     >> 8) |
                                                                               (byte)((uint)
                                                  iStack_24 >> 8),(byte)iVar316 | (byte)iStack_24)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      uVar215 = CONCAT12((byte)(uVar69 >> 0x10) | (byte)(local_38 >> 0x10),
                         CONCAT11((byte)(uVar69 >> 8) | (byte)(local_38 >> 8),
                                  (byte)uVar69 | (byte)local_38)) & 0xf0f0f;
      uVar221 = CONCAT12((byte)(uVar70 >> 0x10) | (byte)(uStack_28 >> 0x10),
                         CONCAT11((byte)(uVar70 >> 8) | (byte)(uStack_28 >> 8),
                                  (byte)uVar70 | (byte)uStack_28)) & 0xf0f0f;
      uVar115 = CONCAT13((byte)((uint)iVar273 >> 0x18) | (byte)((uint)iStack_114 >> 0x18),
                         CONCAT12((byte)((uint)iVar273 >> 0x10) | (byte)((uint)iStack_114 >> 0x10),
                                  CONCAT11((byte)((uint)iVar273 >> 8) |
                                           (byte)((uint)iStack_114 >> 8),
                                           (byte)iVar273 | (byte)iStack_114))) & 0xf0f0f0f0;
      uVar119 = CONCAT13((byte)((uint)iVar280 >> 0x18) | (byte)((uint)iStack_10c >> 0x18),
                         CONCAT12((byte)((uint)iVar280 >> 0x10) | (byte)((uint)iStack_10c >> 0x10),
                                  CONCAT11((byte)((uint)iVar280 >> 8) |
                                           (byte)((uint)iStack_10c >> 8),
                                           (byte)iVar280 | (byte)iStack_10c))) & 0xf0f0f0f0;
      uVar120 = CONCAT13((byte)((uint)iVar298 >> 0x18) | (byte)((uint)iStack_fc >> 0x18),
                         CONCAT12((byte)((uint)iVar298 >> 0x10) | (byte)((uint)iStack_fc >> 0x10),
                                  CONCAT11((byte)((uint)iVar298 >> 8) | (byte)((uint)iStack_fc >> 8)
                                           ,(byte)iVar298 | (byte)iStack_fc))) & 0xf0f0f0f0;
      uVar75 = CONCAT13((byte)((uint)iVar349 >> 0x18) | (byte)((uint)iStack_d4 >> 0x18),
                        CONCAT12((byte)((uint)iVar349 >> 0x10) | (byte)((uint)iStack_d4 >> 0x10),
                                 CONCAT11((byte)((uint)iVar349 >> 8) | (byte)((uint)iStack_d4 >> 8),
                                          (byte)iVar349 | (byte)iStack_d4))) & 0xf0f0f0f0;
      uVar76 = CONCAT13((byte)((uint)iVar351 >> 0x18) | (byte)((uint)iStack_cc >> 0x18),
                        CONCAT12((byte)((uint)iVar351 >> 0x10) | (byte)((uint)iStack_cc >> 0x10),
                                 CONCAT11((byte)((uint)iVar351 >> 8) | (byte)((uint)iStack_cc >> 8),
                                          (byte)iVar351 | (byte)iStack_cc))) & 0xf0f0f0f0;
      uVar95 = CONCAT13((byte)((uint)iVar355 >> 0x18) | (byte)((uint)iStack_bc >> 0x18),
                        CONCAT12((byte)((uint)iVar355 >> 0x10) | (byte)((uint)iStack_bc >> 0x10),
                                 CONCAT11((byte)((uint)iVar355 >> 8) | (byte)((uint)iStack_bc >> 8),
                                          (byte)iVar355 | (byte)iStack_bc))) & 0xf0f0f0f0;
      uVar154 = CONCAT44((int)(((ulong)CONCAT12((byte)((uint)iVar144 >> 0x18) |
                                                (byte)((uint)iStack_8c >> 0x18),
                                                CONCAT11((byte)((uint)iVar144 >> 0x10) |
                                                         (byte)((uint)iStack_8c >> 0x10),
                                                         (byte)((uint)iVar144 >> 8) |
                                                         (byte)((uint)iStack_8c >> 8))) << 0x28) >>
                              0x20),
                         CONCAT13((byte)((uint)iVar136 >> 0x18) | (byte)((uint)iStack_94 >> 0x18),
                                  CONCAT12((byte)((uint)iVar136 >> 0x10) |
                                           (byte)((uint)iStack_94 >> 0x10),
                                           CONCAT11((byte)((uint)iVar136 >> 8) |
                                                    (byte)((uint)iStack_94 >> 8),
                                                    (byte)iVar136 | (byte)iStack_94)))) &
                0xfffffffff0f0f0f0;
      uVar154 = CONCAT17((char)(uVar154 >> 0x38),
                         CONCAT16((char)(uVar154 >> 0x30),
                                  CONCAT15((char)(uVar154 >> 0x28),
                                           CONCAT14((byte)iVar144 | (byte)iStack_8c,(int)uVar154))))
                & 0xf0f0f0f0ffffffff;
      uVar166 = CONCAT17((byte)((uint)iVar161 >> 0x18) | (byte)((uint)iStack_7c >> 0x18),
                         CONCAT16((byte)((uint)iVar161 >> 0x10) | (byte)((uint)iStack_7c >> 0x10),
                                  CONCAT15((byte)((uint)iVar161 >> 8) | (byte)((uint)iStack_7c >> 8)
                                           ,CONCAT14((byte)iVar161 | (byte)iStack_7c,
                                                     CONCAT13((byte)((uint)iVar151 >> 0x18) |
                                                              (byte)((uint)iStack_84 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar151 >> 0x10)
                                                                       | (byte)((uint)iStack_84 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((uint)iVar151
                                                                                      >> 8) |
                                                                                (byte)((uint)
                                                  iStack_84 >> 8),(byte)iVar151 | (byte)iStack_84)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
      bVar307 = (byte)uVar167 | (byte)iVar217 | (byte)iStack_f4 & 0xf0;
      bVar308 = (byte)(uVar167 >> 8) |
                ((byte)((uint)iVar217 >> 8) | (byte)((uint)iStack_f4 >> 8)) & 0xf0;
      bVar309 = (byte)(uVar167 >> 0x10) |
                ((byte)((uint)iVar217 >> 0x10) | (byte)((uint)iStack_f4 >> 0x10)) & 0xf0;
      bVar310 = (byte)(uVar167 >> 0x18) |
                ((byte)((uint)iVar217 >> 0x18) | (byte)((uint)iStack_f4 >> 0x18)) & 0xf0;
      uVar123 = CONCAT13(bVar310,CONCAT12(bVar309,CONCAT11(bVar308,bVar307)));
      bVar312 = (byte)(uVar167 >> 0x20) | (byte)iVar220 | (byte)iStack_ec & 0xf0;
      bVar313 = (byte)(uVar167 >> 0x28) |
                ((byte)((uint)iVar220 >> 8) | (byte)((uint)iStack_ec >> 8)) & 0xf0;
      bVar314 = (byte)(uVar167 >> 0x30) |
                ((byte)((uint)iVar220 >> 0x10) | (byte)((uint)iStack_ec >> 0x10)) & 0xf0;
      bVar315 = (byte)(uVar167 >> 0x38) |
                ((byte)((uint)iVar220 >> 0x18) | (byte)((uint)iStack_ec >> 0x18)) & 0xf0;
      uVar116 = CONCAT17(bVar315,CONCAT16(bVar314,CONCAT15(bVar313,CONCAT14(bVar312,uVar123))));
      bVar317 = (byte)uVar170 | (byte)iVar223 | (byte)iStack_e4 & 0xf0;
      bVar318 = (byte)(uVar170 >> 8) |
                ((byte)((uint)iVar223 >> 8) | (byte)((uint)iStack_e4 >> 8)) & 0xf0;
      bVar319 = (byte)(uVar170 >> 0x10) |
                ((byte)((uint)iVar223 >> 0x10) | (byte)((uint)iStack_e4 >> 0x10)) & 0xf0;
      bVar320 = (byte)(uVar170 >> 0x18) |
                ((byte)((uint)iVar223 >> 0x18) | (byte)((uint)iStack_e4 >> 0x18)) & 0xf0;
      uVar129 = CONCAT13(bVar320,CONCAT12(bVar319,CONCAT11(bVar318,bVar317)));
      bVar322 = (byte)(uVar170 >> 0x20) | (byte)iVar226 | (byte)iStack_dc & 0xf0;
      bVar323 = (byte)(uVar170 >> 0x28) |
                ((byte)((uint)iVar226 >> 8) | (byte)((uint)iStack_dc >> 8)) & 0xf0;
      bVar324 = (byte)(uVar170 >> 0x30) |
                ((byte)((uint)iVar226 >> 0x10) | (byte)((uint)iStack_dc >> 0x10)) & 0xf0;
      bVar274 = (byte)(uVar170 >> 0x38) |
                ((byte)((uint)iVar226 >> 0x18) | (byte)((uint)iStack_dc >> 0x18)) & 0xf0;
      uVar124 = CONCAT17(bVar274,CONCAT16(bVar324,CONCAT15(bVar323,CONCAT14(bVar322,uVar129))));
      bVar234 = ((byte)(local_b8 >> 4) | (byte)local_b8) & 0xf | (byte)uVar125;
      bVar236 = ((byte)(uint3)(local_b8 >> 0xc) | (byte)(local_b8 >> 8)) & 0xf |
                (byte)(uVar125 >> 8);
      bVar238 = ((byte)(ushort)(local_b8 >> 0x14) | (byte)(local_b8 >> 0x10)) & 0xf |
                (byte)(uVar125 >> 0x10);
      bVar240 = bVar61 >> 4 | bVar61 & 0xf | (byte)(uVar125 >> 0x18);
      uVar108 = CONCAT13(bVar240,CONCAT12(bVar238,CONCAT11(bVar236,bVar234)));
      bVar242 = (byte)uVar78 | (byte)(uVar125 >> 0x20);
      bVar245 = (byte)(uVar78 >> 8) | (byte)(uVar125 >> 0x28);
      bVar247 = (byte)(uVar78 >> 0x10) | (byte)(uVar125 >> 0x30);
      bVar249 = (byte)(uVar78 >> 0x18) | (byte)(uVar125 >> 0x38);
      uVar90 = CONCAT17(bVar249,CONCAT16(bVar247,CONCAT15(bVar245,CONCAT14(bVar242,uVar108))));
      bVar251 = (byte)uVar153 | (byte)uVar126;
      bVar253 = (byte)(uVar153 >> 8) | (byte)(uVar126 >> 8);
      bVar255 = (byte)(uVar153 >> 0x10) | (byte)(uVar126 >> 0x10);
      bVar257 = (byte)(uVar153 >> 0x18) | (byte)(uVar126 >> 0x18);
      uVar114 = CONCAT13(bVar257,CONCAT12(bVar255,CONCAT11(bVar253,bVar251)));
      bVar259 = (byte)(uVar153 >> 0x20) | (byte)(uVar126 >> 0x20);
      bVar262 = (byte)(uVar153 >> 0x28) | (byte)(uVar126 >> 0x28);
      bVar264 = (byte)(uVar153 >> 0x30) | (byte)(uVar126 >> 0x30);
      bVar266 = (byte)(uVar153 >> 0x38) | (byte)(uVar126 >> 0x38);
      uVar103 = CONCAT17(bVar266,CONCAT16(bVar264,CONCAT15(bVar262,CONCAT14(bVar259,uVar114))));
      bVar158 = (byte)uVar81 | (byte)uVar65;
      bVar162 = (byte)(uVar81 >> 8) | (byte)(uVar65 >> 8);
      bVar163 = (byte)(uVar81 >> 0x10) | (byte)(uVar65 >> 0x10);
      bVar164 = (byte)(uVar81 >> 0x18) | (byte)(uVar65 >> 0x18);
      uVar85 = CONCAT13(bVar164,CONCAT12(bVar163,CONCAT11(bVar162,bVar158)));
      bVar94 = (byte)(uVar81 >> 0x20) | (byte)(uVar65 >> 0x20);
      bVar97 = (byte)(uVar81 >> 0x28) | (byte)(uVar65 >> 0x28);
      bVar98 = (byte)(uVar81 >> 0x30) | (byte)(uVar65 >> 0x30);
      bVar100 = (byte)(uVar81 >> 0x38) | (byte)(uVar65 >> 0x38);
      uVar71 = CONCAT17(bVar100,CONCAT16(bVar98,CONCAT15(bVar97,CONCAT14(bVar94,uVar85))));
      bVar272 = (byte)uVar92 | (byte)uVar72;
      bVar285 = (byte)(uVar92 >> 8) | (byte)(uVar72 >> 8);
      bVar287 = (byte)(uVar92 >> 0x10) | (byte)(uVar72 >> 0x10);
      bVar303 = (byte)(uVar92 >> 0x18) | (byte)(uVar72 >> 0x18);
      uVar88 = CONCAT13(bVar303,CONCAT12(bVar287,CONCAT11(bVar285,bVar272)));
      bVar107 = (byte)(uVar92 >> 0x20) | (byte)(uVar72 >> 0x20);
      bVar110 = (byte)(uVar92 >> 0x28) | (byte)(uVar72 >> 0x28);
      bVar111 = (byte)(uVar92 >> 0x30) | (byte)(uVar72 >> 0x30);
      bVar113 = (byte)(uVar92 >> 0x38) | (byte)(uVar72 >> 0x38);
      uVar79 = CONCAT17(bVar113,CONCAT16(bVar111,CONCAT15(bVar110,CONCAT14(bVar107,uVar88))));
      bVar68 = (byte)uVar105 | (byte)uVar104;
      bVar121 = (byte)(uVar105 >> 8) | (byte)(uVar104 >> 8);
      bVar73 = (byte)(uVar105 >> 0x10) | (byte)(uVar104 >> 0x10);
      bVar132 = (byte)(uVar105 >> 0x18) | (byte)(uVar104 >> 0x18);
      uVar78 = CONCAT13(bVar132,CONCAT12(bVar73,CONCAT11(bVar121,bVar68)));
      bVar133 = (byte)(uVar105 >> 0x20) | (byte)(uVar104 >> 0x20);
      bVar140 = (byte)(uVar105 >> 0x28) | (byte)(uVar104 >> 0x28);
      bVar141 = (byte)(uVar105 >> 0x30) | (byte)(uVar104 >> 0x30);
      bVar338 = (byte)(uVar105 >> 0x38) | (byte)(uVar104 >> 0x38);
      uVar58 = CONCAT17(bVar338,CONCAT16(bVar141,CONCAT15(bVar140,CONCAT14(bVar133,uVar78))));
      bVar342 = (byte)uVar59 | (byte)uVar117;
      bVar145 = (byte)(uVar59 >> 8) | (byte)(uVar117 >> 8);
      bVar146 = (byte)(uVar59 >> 0x10) | (byte)(uVar117 >> 0x10);
      bVar147 = (byte)(uVar59 >> 0x18) | (byte)(uVar117 >> 0x18);
      uVar84 = CONCAT13(bVar147,CONCAT12(bVar146,CONCAT11(bVar145,bVar342)));
      bVar148 = (byte)(uVar59 >> 0x20) | (byte)(uVar117 >> 0x20);
      bVar155 = (byte)(uVar59 >> 0x28) | (byte)(uVar117 >> 0x28);
      bVar156 = (byte)(uVar59 >> 0x30) | (byte)(uVar117 >> 0x30);
      bVar157 = (byte)(uVar59 >> 0x38) | (byte)(uVar117 >> 0x38);
      uVar64 = CONCAT17(bVar157,CONCAT16(bVar156,CONCAT15(bVar155,CONCAT14(bVar148,uVar84))));
      bVar61 = (byte)uVar26 | (byte)uVar215;
      bVar66 = (byte)(uVar26 >> 8) | (byte)(uVar215 >> 8);
      bVar67 = (byte)(uVar26 >> 0x10) | (byte)(uVar215 >> 0x10);
      bVar82 = (byte)(uVar26 >> 0x18) | bVar99 >> 4 | bVar99 & 0xf;
      uVar69 = CONCAT13(bVar82,CONCAT12(bVar67,CONCAT11(bVar66,bVar61)));
      bVar51 = (byte)(uVar26 >> 0x20) | ((byte)(uStack_30 >> 4) | (byte)uStack_30) & 0xf;
      bVar77 = (byte)(uVar26 >> 0x28) |
               ((byte)((uStack_30 >> 4) >> 8) | (byte)(uStack_30 >> 8)) & 0xf;
      bVar93 = (byte)(uVar26 >> 0x30) |
               ((byte)((uint3)(uStack_30 >> 0xc) >> 8) | (byte)(uStack_30 >> 0x10)) & 0xf;
      bVar106 = (byte)(uVar26 >> 0x38) | bVar106 >> 4 | bVar106 & 0xf;
      bVar127 = (byte)uVar22 | (byte)uVar221;
      bVar53 = (byte)(uVar22 >> 8) | (byte)(uVar221 >> 8);
      bVar99 = (byte)(uVar22 >> 0x10) | (byte)(uVar221 >> 0x10);
      bVar54 = (byte)(uVar22 >> 0x18) | bVar55 >> 4 | bVar55 & 0xf;
      uVar70 = CONCAT13(bVar54,CONCAT12(bVar99,CONCAT11(bVar53,bVar127)));
      bVar55 = (byte)(uVar22 >> 0x20) | ((byte)(uStack_20 >> 4) | (byte)uStack_20) & 0xf;
      bVar112 = (byte)(uVar22 >> 0x28) |
                ((byte)((uStack_20 >> 4) >> 8) | (byte)(uStack_20 >> 8)) & 0xf;
      bVar118 = (byte)(uVar22 >> 0x30) |
                ((byte)((uint3)(uStack_20 >> 0xc) >> 8) | (byte)(uStack_20 >> 0x10)) & 0xf;
      bVar87 = (byte)(uVar22 >> 0x38) | bVar87 >> 4 | bVar87 & 0xf;
      bVar276 = (byte)uVar115 | ((byte)(local_118 >> 4) | (byte)local_118) & 0xf;
      bVar275 = (byte)(uVar115 >> 8) |
                ((byte)(uint3)(local_118 >> 0xc) | (byte)(local_118 >> 8)) & 0xf;
      bVar277 = (byte)(uVar115 >> 0x10) |
                ((byte)(ushort)(local_118 >> 0x14) | (byte)(local_118 >> 0x10)) & 0xf;
      bVar60 = (byte)(uVar115 >> 0x18) | bVar60 >> 4 | bVar60 & 0xf;
      bVar279 = (byte)uVar119 | ((byte)(uStack_110 >> 4) | (byte)uStack_110) & 0xf;
      bVar282 = (byte)(uVar119 >> 8) |
                ((byte)(uint3)(uStack_110 >> 0xc) | (byte)(uStack_110 >> 8)) & 0xf;
      bVar284 = (byte)(uVar119 >> 0x10) |
                ((byte)(ushort)(uStack_110 >> 0x14) | (byte)(uStack_110 >> 0x10)) & 0xf;
      bVar286 = (byte)(uVar119 >> 0x18) | bVar74 >> 4 | bVar74 & 0xf;
      bVar288 = (byte)iVar289 | (byte)iStack_104 & 0xf0 | (byte)uVar269;
      bVar291 = ((byte)((uint)iVar289 >> 8) | (byte)((uint)iStack_104 >> 8)) & 0xf0 |
                (byte)(uVar269 >> 8);
      bVar293 = ((byte)((uint)iVar289 >> 0x10) | (byte)((uint)iStack_104 >> 0x10)) & 0xf0 |
                ((byte)(uVar101 >> 0x10) | (byte)(uStack_108 >> 0x10)) & 0xf;
      bVar295 = ((byte)((uint)iVar289 >> 0x18) | (byte)((uint)iStack_104 >> 0x18)) & 0xf0 |
                bVar305 >> 4 | bVar305 & 0xf;
      bVar297 = (byte)uVar120 | ((byte)(uStack_100 >> 4) | (byte)uStack_100) & 0xf;
      bVar300 = (byte)(uVar120 >> 8) |
                ((byte)((uStack_100 >> 4) >> 8) | (byte)(uStack_100 >> 8)) & 0xf;
      bVar302 = (byte)(uVar120 >> 0x10) |
                ((byte)((uint3)(uStack_100 >> 0xc) >> 8) | (byte)(uStack_100 >> 0x10)) & 0xf;
      bVar304 = (byte)(uVar120 >> 0x18) | bVar188 >> 4 | bVar188 & 0xf;
      bVar235 = (byte)uVar75 | (byte)uVar138;
      bVar237 = (byte)(uVar75 >> 8) | (byte)(uVar138 >> 8);
      bVar239 = (byte)(uVar75 >> 0x10) | (byte)(uVar138 >> 0x10);
      bVar241 = (byte)(uVar75 >> 0x18) | (byte)(uVar138 >> 0x18);
      bVar243 = (byte)uVar76 | (byte)(uVar138 >> 0x20);
      bVar246 = (byte)(uVar76 >> 8) | (byte)(uVar138 >> 0x28);
      bVar248 = (byte)(uVar76 >> 0x10) | (byte)(uVar138 >> 0x30);
      bVar250 = (byte)(uVar76 >> 0x18) | (byte)(uVar138 >> 0x38);
      bVar252 = (byte)iVar353 | (byte)iStack_c4 & 0xf0 | (byte)uVar139;
      bVar254 = ((byte)((uint)iVar353 >> 8) | (byte)((uint)iStack_c4 >> 8)) & 0xf0 |
                (byte)(uVar139 >> 8);
      bVar256 = ((byte)((uint)iVar353 >> 0x10) | (byte)((uint)iStack_c4 >> 0x10)) & 0xf0 |
                (byte)(uVar139 >> 0x10);
      bVar258 = ((byte)((uint)iVar353 >> 0x18) | (byte)((uint)iStack_c4 >> 0x18)) & 0xf0 |
                (byte)(uVar139 >> 0x18);
      bVar260 = (byte)uVar95 | (byte)(uVar139 >> 0x20);
      bVar263 = (byte)(uVar95 >> 8) | (byte)(uVar139 >> 0x28);
      bVar265 = (byte)(uVar95 >> 0x10) | (byte)(uVar139 >> 0x30);
      bVar267 = (byte)(uVar95 >> 0x18) | (byte)(uVar139 >> 0x38);
      bVar74 = (byte)uVar154 | (byte)uVar80;
      bVar188 = (byte)(uVar154 >> 8) | (byte)(uVar80 >> 8);
      bVar305 = (byte)(uVar154 >> 0x10) | (byte)(uVar80 >> 0x10);
      bVar278 = (byte)(uVar154 >> 0x18) | (byte)(uVar80 >> 0x18);
      bVar281 = (byte)(uVar154 >> 0x20) | (byte)(uVar80 >> 0x20);
      bVar283 = (byte)(uVar154 >> 0x28) | (byte)(uVar80 >> 0x28);
      bVar290 = (byte)(uVar154 >> 0x30) | (byte)(uVar80 >> 0x30);
      uVar57 = CONCAT16(bVar290,CONCAT15(bVar283,CONCAT14(bVar281,CONCAT13(bVar278,CONCAT12(bVar305,
                                                  CONCAT11(bVar188,bVar74))))));
      bVar292 = (byte)(uVar154 >> 0x38) | (byte)(uVar80 >> 0x38);
      bVar294 = (byte)uVar166 | (byte)uVar91;
      bVar296 = (byte)(uVar166 >> 8) | (byte)(uVar91 >> 8);
      bVar299 = (byte)(uVar166 >> 0x10) | (byte)(uVar91 >> 0x10);
      bVar301 = (byte)(uVar166 >> 0x18) | (byte)(uVar91 >> 0x18);
      bVar194 = (byte)(uVar166 >> 0x20) | (byte)(uVar91 >> 0x20);
      bVar196 = (byte)(uVar166 >> 0x28) | (byte)(uVar91 >> 0x28);
      bVar197 = (byte)(uVar166 >> 0x30) | (byte)(uVar91 >> 0x30);
      uVar63 = CONCAT16(bVar197,CONCAT15(bVar196,CONCAT14(bVar194,CONCAT13(bVar301,CONCAT12(bVar299,
                                                  CONCAT11(bVar296,bVar294))))));
      bVar199 = (byte)(uVar166 >> 0x38) | (byte)(uVar91 >> 0x38);
      uVar75 = uVar69 >> 2;
      uVar69 = (uint)(CONCAT17(bVar106,CONCAT16(bVar93,CONCAT15(bVar77,CONCAT14(bVar51,uVar69)))) >>
                     0x22);
      uVar76 = uVar70 >> 2;
      uVar70 = (uint)(CONCAT17(bVar87,CONCAT16(bVar118,CONCAT15(bVar112,CONCAT14(bVar55,uVar70))))
                     >> 0x22);
      uVar134 = CONCAT13(bVar60,CONCAT12(bVar277,CONCAT11(bVar275,bVar276))) >> 2;
      uVar135 = CONCAT13(bVar286,CONCAT12(bVar284,CONCAT11(bVar282,bVar279))) >> 2;
      uVar142 = CONCAT13(bVar295,CONCAT12(bVar293,CONCAT11(bVar291,bVar288))) >> 2;
      uVar143 = CONCAT13(bVar304,CONCAT12(bVar302,CONCAT11(bVar300,bVar297))) >> 2;
      uVar129 = uVar129 >> 2;
      uVar160 = (uint)((ulong)uVar124 >> 0x22);
      uVar115 = CONCAT13(bVar241,CONCAT12(bVar239,CONCAT11(bVar237,bVar235))) >> 2;
      uVar119 = CONCAT13(bVar250,CONCAT12(bVar248,CONCAT11(bVar246,bVar243))) >> 2;
      uVar120 = CONCAT13(bVar258,CONCAT12(bVar256,CONCAT11(bVar254,bVar252))) >> 2;
      uVar122 = CONCAT13(bVar267,CONCAT12(bVar265,CONCAT11(bVar263,bVar260))) >> 2;
      uVar26 = ((ulong)uVar57 & 0xfffffffc) >> 2;
      uVar95 = (uint)(CONCAT17(bVar292,uVar57) >> 0x22);
      uVar22 = ((ulong)uVar63 & 0xfffffffc) >> 2;
      uVar101 = (uint)(CONCAT17(bVar199,uVar63) >> 0x22);
      uVar88 = uVar88 >> 2;
      uVar165 = (uint)((ulong)uVar79 >> 0x22);
      uVar78 = uVar78 >> 2;
      uVar149 = (uint)((ulong)uVar58 >> 0x22);
      uVar84 = uVar84 >> 2;
      uVar150 = (uint)((ulong)uVar64 >> 0x22);
      bVar61 = (byte)uVar75 | bVar61;
      bVar66 = (byte)(uVar75 >> 8) | bVar66;
      bVar67 = (byte)(uVar75 >> 0x10) | bVar67;
      bVar82 = bVar82 >> 2 | bVar82;
      bVar51 = (byte)uVar69 | bVar51;
      bVar77 = (byte)(uVar69 >> 8) | bVar77;
      bVar93 = (byte)(uVar69 >> 0x10) | bVar93;
      uVar186 = CONCAT16(bVar93,CONCAT15(bVar77,CONCAT14(bVar51,CONCAT13(bVar82,CONCAT12(bVar67,
                                                  CONCAT11(bVar66,bVar61))))));
      bVar106 = bVar106 >> 2 | bVar106;
      uVar137 = CONCAT17(bVar106,uVar186);
      bVar127 = (byte)uVar76 | bVar127;
      bVar53 = (byte)(uVar76 >> 8) | bVar53;
      bVar99 = (byte)(uVar76 >> 0x10) | bVar99;
      bVar54 = bVar54 >> 2 | bVar54;
      bVar55 = (byte)uVar70 | bVar55;
      bVar112 = (byte)(uVar70 >> 8) | bVar112;
      bVar118 = (byte)(uVar70 >> 0x10) | bVar118;
      uVar210 = CONCAT16(bVar118,CONCAT15(bVar112,CONCAT14(bVar55,CONCAT13(bVar54,CONCAT12(bVar99,
                                                  CONCAT11(bVar53,bVar127))))));
      bVar87 = bVar87 >> 2 | bVar87;
      uVar152 = CONCAT17(bVar87,uVar210);
      bVar307 = (byte)(uVar123 >> 2) | bVar307;
      bVar308 = (byte)(uint3)(uVar123 >> 10) | bVar308;
      bVar309 = (byte)(ushort)(uVar123 >> 0x12) | bVar309;
      bVar310 = bVar310 >> 2 | bVar310;
      bVar312 = (byte)(uint)((ulong)uVar116 >> 0x22) | bVar312;
      bVar313 = (byte)(uint3)((ulong)uVar116 >> 0x2a) | bVar313;
      bVar314 = (byte)(ushort)((ulong)uVar116 >> 0x32) | bVar314;
      bVar315 = bVar315 >> 2 | bVar315;
      uVar176 = CONCAT13(bVar315,CONCAT12(bVar314,CONCAT11(bVar313,bVar312)));
      bVar317 = (byte)uVar129 | bVar317;
      bVar318 = (byte)(uVar129 >> 8) | bVar318;
      bVar319 = (byte)(uVar129 >> 0x10) | bVar319;
      bVar320 = bVar320 >> 2 | bVar320;
      bVar322 = (byte)uVar160 | bVar322;
      bVar323 = (byte)(uVar160 >> 8) | bVar323;
      bVar324 = (byte)((uint3)((ulong)uVar124 >> 0x2a) >> 8) | bVar324;
      uVar270 = CONCAT16(bVar324,CONCAT15(bVar323,CONCAT14(bVar322,CONCAT13(bVar320,CONCAT12(bVar319
                                                  ,CONCAT11(bVar318,bVar317))))));
      bVar274 = bVar274 >> 2 | bVar274;
      uVar116 = CONCAT17(bVar274,uVar270);
      bVar235 = (byte)uVar115 | bVar235;
      bVar237 = (byte)(uVar115 >> 8) | bVar237;
      bVar239 = (byte)(uVar115 >> 0x10) | bVar239;
      bVar241 = bVar241 >> 2 | bVar241;
      bVar243 = (byte)uVar119 | bVar243;
      bVar246 = (byte)(uVar119 >> 8) | bVar246;
      bVar248 = (byte)(uVar119 >> 0x10) | bVar248;
      bVar250 = bVar250 >> 2 | bVar250;
      uVar172 = CONCAT13(bVar250,CONCAT12(bVar248,CONCAT11(bVar246,bVar243)));
      bVar252 = (byte)uVar120 | bVar252;
      bVar254 = (byte)(uVar120 >> 8) | bVar254;
      bVar256 = (byte)(uVar120 >> 0x10) | bVar256;
      bVar258 = bVar258 >> 2 | bVar258;
      bVar260 = (byte)uVar122 | bVar260;
      bVar263 = (byte)(uVar122 >> 8) | bVar263;
      bVar265 = (byte)(uVar122 >> 0x10) | bVar265;
      bVar267 = bVar267 >> 2 | bVar267;
      uVar173 = CONCAT13(bVar267,CONCAT12(bVar265,CONCAT11(bVar263,bVar260)));
      bVar234 = (byte)(uVar108 >> 2) | bVar234;
      bVar236 = (byte)(uint3)(uVar108 >> 10) | bVar236;
      bVar238 = (byte)(ushort)(uVar108 >> 0x12) | bVar238;
      bVar240 = bVar240 >> 2 | bVar240;
      bVar242 = (byte)(uint)((ulong)uVar90 >> 0x22) | bVar242;
      bVar245 = (byte)(uint3)((ulong)uVar90 >> 0x2a) | bVar245;
      bVar247 = (byte)(ushort)((ulong)uVar90 >> 0x32) | bVar247;
      bVar249 = bVar249 >> 2 | bVar249;
      uVar168 = CONCAT13(bVar249,CONCAT12(bVar247,CONCAT11(bVar245,bVar242)));
      bVar251 = (byte)(uVar114 >> 2) | bVar251;
      bVar253 = (byte)(uint3)(uVar114 >> 10) | bVar253;
      bVar255 = (byte)(ushort)(uVar114 >> 0x12) | bVar255;
      bVar257 = bVar257 >> 2 | bVar257;
      bVar259 = (byte)(uint)((ulong)uVar103 >> 0x22) | bVar259;
      bVar262 = (byte)(uint3)((ulong)uVar103 >> 0x2a) | bVar262;
      bVar264 = (byte)(ushort)((ulong)uVar103 >> 0x32) | bVar264;
      bVar266 = bVar266 >> 2 | bVar266;
      uVar169 = CONCAT13(bVar266,CONCAT12(bVar264,CONCAT11(bVar262,bVar259)));
      bVar74 = (byte)uVar26 | bVar74;
      bVar188 = (byte)(uVar26 >> 8) | bVar188;
      bVar305 = (byte)(uVar26 >> 0x10) | bVar305;
      bVar278 = (byte)(uVar26 >> 0x18) | bVar278;
      bVar281 = (byte)uVar95 | bVar281;
      bVar283 = (byte)(uVar95 >> 8) | bVar283;
      bVar290 = (byte)(uVar95 >> 0x10) | bVar290;
      uVar57 = CONCAT16(bVar290,CONCAT15(bVar283,CONCAT14(bVar281,CONCAT13(bVar278,CONCAT12(bVar305,
                                                  CONCAT11(bVar188,bVar74))))));
      bVar292 = bVar292 >> 2 | bVar292;
      uVar90 = CONCAT17(bVar292,uVar57);
      bVar294 = (byte)uVar22 | bVar294;
      bVar296 = (byte)(uVar22 >> 8) | bVar296;
      bVar299 = (byte)(uVar22 >> 0x10) | bVar299;
      bVar301 = (byte)(uVar22 >> 0x18) | bVar301;
      bVar194 = (byte)uVar101 | bVar194;
      bVar196 = (byte)(uVar101 >> 8) | bVar196;
      bVar197 = (byte)(uVar101 >> 0x10) | bVar197;
      uVar63 = CONCAT16(bVar197,CONCAT15(bVar196,CONCAT14(bVar194,CONCAT13(bVar301,CONCAT12(bVar299,
                                                  CONCAT11(bVar296,bVar294))))));
      bVar199 = bVar199 >> 2 | bVar199;
      uVar103 = CONCAT17(bVar199,uVar63);
      bVar158 = (byte)(uVar85 >> 2) | bVar158;
      bVar162 = (byte)(uint3)(uVar85 >> 10) | bVar162;
      bVar163 = (byte)(ushort)(uVar85 >> 0x12) | bVar163;
      bVar164 = bVar164 >> 2 | bVar164;
      bVar94 = (byte)(uint)((ulong)uVar71 >> 0x22) | bVar94;
      bVar97 = (byte)(uint3)((ulong)uVar71 >> 0x2a) | bVar97;
      bVar98 = (byte)(ushort)((ulong)uVar71 >> 0x32) | bVar98;
      bVar100 = bVar100 >> 2 | bVar100;
      uVar160 = CONCAT13(bVar100,CONCAT12(bVar98,CONCAT11(bVar97,bVar94)));
      bVar272 = (byte)uVar88 | bVar272;
      bVar285 = (byte)(uVar88 >> 8) | bVar285;
      bVar287 = (byte)(uVar88 >> 0x10) | bVar287;
      bVar303 = bVar303 >> 2 | bVar303;
      bVar107 = (byte)uVar165 | bVar107;
      bVar110 = (byte)(uVar165 >> 8) | bVar110;
      bVar111 = (byte)((uint3)((ulong)uVar79 >> 0x2a) >> 8) | bVar111;
      uVar231 = CONCAT16(bVar111,CONCAT15(bVar110,CONCAT14(bVar107,CONCAT13(bVar303,CONCAT12(bVar287
                                                  ,CONCAT11(bVar285,bVar272))))));
      bVar113 = bVar113 >> 2 | bVar113;
      uVar71 = CONCAT17(bVar113,uVar231);
      bVar68 = (byte)uVar78 | bVar68;
      bVar121 = (byte)(uVar78 >> 8) | bVar121;
      bVar73 = (byte)(uVar78 >> 0x10) | bVar73;
      bVar132 = bVar132 >> 2 | bVar132;
      bVar133 = (byte)uVar149 | bVar133;
      bVar140 = (byte)(uVar149 >> 8) | bVar140;
      bVar141 = (byte)((uint3)((ulong)uVar58 >> 0x2a) >> 8) | bVar141;
      uVar218 = CONCAT16(bVar141,CONCAT15(bVar140,CONCAT14(bVar133,CONCAT13(bVar132,CONCAT12(bVar73,
                                                  CONCAT11(bVar121,bVar68))))));
      bVar338 = bVar338 >> 2 | bVar338;
      uVar58 = CONCAT17(bVar338,uVar218);
      bVar342 = (byte)uVar84 | bVar342;
      bVar145 = (byte)(uVar84 >> 8) | bVar145;
      bVar146 = (byte)(uVar84 >> 0x10) | bVar146;
      bVar147 = bVar147 >> 2 | bVar147;
      bVar148 = (byte)uVar150 | bVar148;
      bVar155 = (byte)(uVar150 >> 8) | bVar155;
      bVar156 = (byte)((uint3)((ulong)uVar64 >> 0x2a) >> 8) | bVar156;
      uVar224 = CONCAT16(bVar156,CONCAT15(bVar155,CONCAT14(bVar148,CONCAT13(bVar147,CONCAT12(bVar146
                                                  ,CONCAT11(bVar145,bVar342))))));
      bVar157 = bVar157 >> 2 | bVar157;
      uVar64 = CONCAT17(bVar157,uVar224);
      bVar276 = (byte)uVar134 | bVar276;
      bVar275 = (byte)(uVar134 >> 8) | bVar275;
      bVar277 = (byte)(uVar134 >> 0x10) | bVar277;
      bVar60 = bVar60 >> 2 | bVar60;
      uVar177 = CONCAT13(bVar60,CONCAT12(bVar277,CONCAT11(bVar275,bVar276)));
      bVar279 = (byte)uVar135 | bVar279;
      bVar282 = (byte)(uVar135 >> 8) | bVar282;
      bVar284 = (byte)(uVar135 >> 0x10) | bVar284;
      bVar286 = bVar286 >> 2 | bVar286;
      uVar149 = CONCAT13(bVar286,CONCAT12(bVar284,CONCAT11(bVar282,bVar279)));
      bVar288 = (byte)uVar142 | bVar288;
      bVar291 = (byte)(uVar142 >> 8) | bVar291;
      bVar293 = (byte)(uVar142 >> 0x10) | bVar293;
      bVar295 = bVar295 >> 2 | bVar295;
      bVar297 = (byte)uVar143 | bVar297;
      bVar300 = (byte)(uVar143 >> 8) | bVar300;
      bVar302 = (byte)(uVar143 >> 0x10) | bVar302;
      bVar304 = bVar304 >> 2 | bVar304;
      uVar150 = CONCAT13(bVar304,CONCAT12(bVar302,CONCAT11(bVar300,bVar297)));
      uVar69 = CONCAT13(bVar310,CONCAT12(bVar309,CONCAT11(bVar308,bVar307))) >> 1;
      uVar70 = uVar176 >> 1;
      uVar65 = ((ulong)uVar270 & 0xfffffffe) >> 1;
      uVar135 = (uint)((ulong)uVar116 >> 0x21);
      uVar122 = CONCAT13(bVar241,CONCAT12(bVar239,CONCAT11(bVar237,bVar235))) >> 1;
      uVar123 = uVar172 >> 1;
      uVar129 = CONCAT13(bVar258,CONCAT12(bVar256,CONCAT11(bVar254,bVar252))) >> 1;
      uVar134 = uVar173 >> 1;
      uVar114 = CONCAT13(bVar240,CONCAT12(bVar238,CONCAT11(bVar236,bVar234))) >> 1;
      uVar115 = uVar168 >> 1;
      uVar119 = CONCAT13(bVar257,CONCAT12(bVar255,CONCAT11(bVar253,bVar251))) >> 1;
      uVar120 = uVar169 >> 1;
      uVar105 = ((ulong)uVar57 & 0xfffffffe) >> 1;
      uVar101 = (uint)((ulong)uVar90 >> 0x21);
      uVar72 = ((ulong)uVar63 & 0xfffffffe) >> 1;
      uVar108 = (uint)((ulong)uVar103 >> 0x21);
      uVar85 = CONCAT13(bVar164,CONCAT12(bVar163,CONCAT11(bVar162,bVar158))) >> 1;
      uVar88 = uVar160 >> 1;
      uVar59 = ((ulong)uVar231 & 0xfffffffe) >> 1;
      uVar95 = (uint)((ulong)uVar71 >> 0x21);
      uVar81 = ((ulong)uVar218 & 0xfffffffe) >> 1;
      uVar75 = (uint)((ulong)uVar58 >> 0x21);
      uVar92 = ((ulong)uVar224 & 0xfffffffe) >> 1;
      uVar76 = (uint)((ulong)uVar64 >> 0x21);
      uVar26 = ((ulong)uVar186 & 0xfffffffe) >> 1;
      uVar78 = (uint)((ulong)uVar137 >> 0x21);
      uVar22 = ((ulong)uVar210 & 0xfffffffe) >> 1;
      uVar84 = (uint)((ulong)uVar152 >> 0x21);
      uVar142 = CONCAT13(bVar295,CONCAT12(bVar293,CONCAT11(bVar291,bVar288))) >> 1;
      uVar143 = uVar150 >> 1;
      bVar307 = (byte)uVar69 | bVar307;
      bVar315 = bVar315 >> 1 | bVar315;
      bVar317 = (byte)uVar65 | bVar317;
      bVar274 = bVar274 >> 1 | bVar274;
      bVar61 = (byte)uVar26 | bVar61;
      bVar93 = (byte)((uint3)((ulong)uVar137 >> 0x29) >> 8) | bVar93;
      bVar106 = bVar106 >> 1 | bVar106;
      bVar127 = (byte)uVar22 | bVar127;
      bVar118 = (byte)((uint3)((ulong)uVar152 >> 0x29) >> 8) | bVar118;
      bVar87 = bVar87 >> 1 | bVar87;
      bVar276 = (byte)(uVar177 >> 1) | bVar276;
      bVar277 = (byte)(ushort)(uVar177 >> 0x11) | bVar277;
      bVar60 = bVar60 >> 1 | bVar60;
      uVar69 = CONCAT13(bVar310 >> 1 | bVar310,
                        CONCAT12((byte)(uVar69 >> 0x10) | bVar309,
                                 CONCAT11((byte)(uVar69 >> 8) | bVar308,bVar307)));
      uVar125 = CONCAT17(bVar315,CONCAT16((byte)((uint3)(uVar176 >> 9) >> 8) | bVar314,
                                          CONCAT15((byte)(uVar70 >> 8) | bVar313,
                                                   CONCAT14((byte)uVar70 | bVar312,uVar69)))) &
                0x1111111111111111;
      uVar70 = CONCAT13((byte)(uVar65 >> 0x18) | bVar320,
                        CONCAT12((byte)(uVar65 >> 0x10) | bVar319,
                                 CONCAT11((byte)(uVar65 >> 8) | bVar318,bVar317)));
      uVar126 = CONCAT17(bVar274,CONCAT16((byte)((uint3)((ulong)uVar116 >> 0x29) >> 8) | bVar324,
                                          CONCAT15((byte)(uVar135 >> 8) | bVar323,
                                                   CONCAT14((byte)uVar135 | bVar322,uVar70)))) &
                0x1111111111111111;
      uVar104 = CONCAT17(bVar250 >> 1 | bVar250,
                         CONCAT16((byte)((uint3)(uVar172 >> 9) >> 8) | bVar248,
                                  CONCAT15((byte)(uVar123 >> 8) | bVar246,
                                           CONCAT14((byte)uVar123 | bVar243,
                                                    CONCAT13(bVar241 >> 1 | bVar241,
                                                             CONCAT12((byte)(uVar122 >> 0x10) |
                                                                      bVar239,CONCAT11((byte)(
                                                  uVar122 >> 8) | bVar237,(byte)uVar122 | bVar235)))
                                                  )))) & 0x1111111111111111;
      uVar117 = CONCAT17(bVar267 >> 1 | bVar267,
                         CONCAT16((byte)((uint3)(uVar173 >> 9) >> 8) | bVar265,
                                  CONCAT15((byte)(uVar134 >> 8) | bVar263,
                                           CONCAT14((byte)uVar134 | bVar260,
                                                    CONCAT13(bVar258 >> 1 | bVar258,
                                                             CONCAT12((byte)(uVar129 >> 0x10) |
                                                                      bVar256,CONCAT11((byte)(
                                                  uVar129 >> 8) | bVar254,(byte)uVar129 | bVar252)))
                                                  )))) & 0x1111111111111111;
      uVar80 = CONCAT17(bVar249 >> 1 | bVar249,
                        CONCAT16((byte)((uint3)(uVar168 >> 9) >> 8) | bVar247,
                                 CONCAT15((byte)(uVar115 >> 8) | bVar245,
                                          CONCAT14((byte)uVar115 | bVar242,
                                                   CONCAT13(bVar240 >> 1 | bVar240,
                                                            CONCAT12((byte)(uVar114 >> 0x10) |
                                                                     bVar238,CONCAT11((byte)(uVar114
                                                                                            >> 8) |
                                                                                      bVar236,(byte)
                                                  uVar114 | bVar234))))))) & 0x1111111111111111;
      uVar91 = CONCAT17(bVar266 >> 1 | bVar266,
                        CONCAT16((byte)((uint3)(uVar169 >> 9) >> 8) | bVar264,
                                 CONCAT15((byte)(uVar120 >> 8) | bVar262,
                                          CONCAT14((byte)uVar120 | bVar259,
                                                   CONCAT13(bVar257 >> 1 | bVar257,
                                                            CONCAT12((byte)(uVar119 >> 0x10) |
                                                                     bVar255,CONCAT11((byte)(uVar119
                                                                                            >> 8) |
                                                                                      bVar253,(byte)
                                                  uVar119 | bVar251))))))) & 0x1111111111111111;
      uVar114 = CONCAT13(bVar286 >> 1 | bVar286,
                         CONCAT12((byte)(ushort)(uVar149 >> 0x11) | bVar284,
                                  CONCAT11((byte)(uint3)(uVar149 >> 9) | bVar282,
                                           (byte)(uVar149 >> 1) | bVar279))) & 0x11111111;
      uVar138 = CONCAT17(bVar304 >> 1 | bVar304,
                         CONCAT16((byte)((uint3)(uVar150 >> 9) >> 8) | bVar302,
                                  CONCAT15((byte)(uVar143 >> 8) | bVar300,
                                           CONCAT14((byte)uVar143 | bVar297,
                                                    CONCAT13(bVar295 >> 1 | bVar295,
                                                             CONCAT12((byte)(uVar142 >> 0x10) |
                                                                      bVar293,CONCAT11((byte)(
                                                  uVar142 >> 8) | bVar291,(byte)uVar142 | bVar288)))
                                                  )))) & 0x1111111111111111;
      uVar65 = CONCAT17(bVar292 >> 1 | bVar292,
                        CONCAT16((byte)((uint3)((ulong)uVar90 >> 0x29) >> 8) | bVar290,
                                 CONCAT15((byte)(uVar101 >> 8) | bVar283,
                                          CONCAT14((byte)uVar101 | bVar281,
                                                   CONCAT13((byte)(uVar105 >> 0x18) | bVar278,
                                                            CONCAT12((byte)(uVar105 >> 0x10) |
                                                                     bVar305,CONCAT11((byte)(uVar105
                                                                                            >> 8) |
                                                                                      bVar188,(byte)
                                                  uVar105 | bVar74))))))) & 0x1111111111111111;
      uVar72 = CONCAT17(bVar199 >> 1 | bVar199,
                        CONCAT16((byte)((uint3)((ulong)uVar103 >> 0x29) >> 8) | bVar197,
                                 CONCAT15((byte)(uVar108 >> 8) | bVar196,
                                          CONCAT14((byte)uVar108 | bVar194,
                                                   CONCAT13((byte)(uVar72 >> 0x18) | bVar301,
                                                            CONCAT12((byte)(uVar72 >> 0x10) |
                                                                     bVar299,CONCAT11((byte)(uVar72 
                                                  >> 8) | bVar296,(byte)uVar72 | bVar294))))))) &
               0x1111111111111111;
      uVar105 = CONCAT17(bVar100 >> 1 | bVar100,
                         CONCAT16((byte)((uint3)(uVar160 >> 9) >> 8) | bVar98,
                                  CONCAT15((byte)(uVar88 >> 8) | bVar97,
                                           CONCAT14((byte)uVar88 | bVar94,
                                                    CONCAT13(bVar164 >> 1 | bVar164,
                                                             CONCAT12((byte)(uVar85 >> 0x10) |
                                                                      bVar163,CONCAT11((byte)(uVar85
                                                                                             >> 8) |
                                                                                       bVar162,(byte
                                                  )uVar85 | bVar158))))))) & 0x1111111111111111;
      uVar59 = CONCAT17(bVar113 >> 1 | bVar113,
                        CONCAT16((byte)((uint3)((ulong)uVar71 >> 0x29) >> 8) | bVar111,
                                 CONCAT15((byte)(uVar95 >> 8) | bVar110,
                                          CONCAT14((byte)uVar95 | bVar107,
                                                   CONCAT13((byte)(uVar59 >> 0x18) | bVar303,
                                                            CONCAT12((byte)(uVar59 >> 0x10) |
                                                                     bVar287,CONCAT11((byte)(uVar59 
                                                  >> 8) | bVar285,(byte)uVar59 | bVar272))))))) &
               0x1111111111111111;
      uVar81 = CONCAT17(bVar338 >> 1 | bVar338,
                        CONCAT16((byte)((uint3)((ulong)uVar58 >> 0x29) >> 8) | bVar141,
                                 CONCAT15((byte)(uVar75 >> 8) | bVar140,
                                          CONCAT14((byte)uVar75 | bVar133,
                                                   CONCAT13((byte)(uVar81 >> 0x18) | bVar132,
                                                            CONCAT12((byte)(uVar81 >> 0x10) | bVar73
                                                                     ,CONCAT11((byte)(uVar81 >> 8) |
                                                                               bVar121,(byte)uVar81
                                                                                       | bVar68)))))
                                )) & 0x1111111111111111;
      uVar92 = CONCAT17(bVar157 >> 1 | bVar157,
                        CONCAT16((byte)((uint3)((ulong)uVar64 >> 0x29) >> 8) | bVar156,
                                 CONCAT15((byte)(uVar76 >> 8) | bVar155,
                                          CONCAT14((byte)uVar76 | bVar148,
                                                   CONCAT13((byte)(uVar92 >> 0x18) | bVar147,
                                                            CONCAT12((byte)(uVar92 >> 0x10) |
                                                                     bVar146,CONCAT11((byte)(uVar92 
                                                  >> 8) | bVar145,(byte)uVar92 | bVar342))))))) &
               0x1111111111111111;
      uVar75 = CONCAT13((byte)(uVar26 >> 0x18) | bVar82,
                        CONCAT12((byte)(uVar26 >> 0x10) | bVar67,
                                 CONCAT11((byte)(uVar26 >> 8) | bVar66,bVar61)));
      uVar56 = CONCAT14((byte)uVar78 | bVar51,uVar75);
      uVar50 = uVar56 & 0x1111111111;
      uVar76 = CONCAT13((byte)(uVar22 >> 0x18) | bVar54,
                        CONCAT12((byte)(uVar22 >> 0x10) | bVar99,
                                 CONCAT11((byte)(uVar22 >> 8) | bVar53,bVar127)));
      uVar62 = CONCAT14((byte)uVar84 | bVar55,uVar76);
      uVar52 = uVar62 & 0x1111111111;
      uVar150 = (uint)uVar104 >> 7;
      uVar160 = (uint)(uVar104 >> 0x27);
      uVar165 = (uint)uVar117 >> 7;
      uVar168 = (uint)(uVar117 >> 0x27);
      uVar135 = (uint)uVar80 >> 7;
      uVar142 = (uint)(uVar80 >> 0x27);
      uVar143 = (uint)(uVar91 >> 7) & 0x1ffffff;
      uVar149 = (uint)(uVar91 >> 0x27);
      uVar122 = (uint)(uVar65 >> 7) & 0x1ffffff;
      uVar123 = (uint)(uVar65 >> 0x27);
      uVar129 = (uint)(uVar72 >> 7) & 0x1ffffff;
      uVar134 = (uint)(uVar72 >> 0x27);
      uVar108 = (uint)(uVar105 >> 7) & 0x1ffffff;
      uVar115 = (uint)(uVar105 >> 0x27);
      uVar119 = (uint)(uVar59 >> 7) & 0x1ffffff;
      uVar120 = (uint)(uVar59 >> 0x27);
      uVar85 = (uint)(uVar81 >> 7) & 0x1ffffff;
      uVar88 = (uint)(uVar81 >> 0x27);
      uVar95 = (uint)(uVar92 >> 7) & 0x1ffffff;
      uVar101 = (uint)(uVar92 >> 0x27);
      uVar75 = (uVar75 & 0x11111111) >> 7;
      uVar78 = ((uint)(CONCAT17(bVar106,CONCAT16(bVar93,CONCAT15((byte)(uVar78 >> 8) | bVar77,uVar56
                                                                ))) >> 0x20) & 0x11111111) >> 7;
      uVar76 = (uVar76 & 0x11111111) >> 7;
      uVar84 = ((uint)(CONCAT17(bVar87,CONCAT16(bVar118,CONCAT15((byte)(uVar84 >> 8) | bVar112,
                                                                 uVar62))) >> 0x20) & 0x11111111) >>
               7;
      uVar173 = (CONCAT13(bVar60,CONCAT12(bVar277,CONCAT11((byte)(uint3)(uVar177 >> 9) | bVar275,
                                                           bVar276))) & 0x11111111) >> 7;
      uVar176 = (uint)(uVar138 >> 7) & 0x1ffffff;
      uVar177 = (uint)(uVar138 >> 0x27);
      uVar69 = (uVar69 & 0x11111111) >> 7;
      uVar169 = (uint)(uVar125 >> 0x27);
      uVar70 = (uVar70 & 0x11111111) >> 7;
      uVar172 = (uint)(uVar126 >> 0x27);
      puVar44[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar149 >> 0x10) |
                                                        (byte)(uVar91 >> 0x30)) << 0x30) >> 0x2e) |
                            (byte)uVar149 | (byte)(uVar91 >> 0x20),
                            CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar143 >> 0x10) |
                                                                 (byte)(uVar91 >> 0x10)) << 0x10) >>
                                           0xe) | (byte)uVar143 | (byte)uVar91,
                                     CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uVar142 >> 0x10)
                                                                           | (byte)(uVar80 >> 0x30))
                                                             << 0x30) >> 0x2e) |
                                              (byte)uVar142 | (byte)(uVar80 >> 0x20),
                                              CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar135 >> 0x10) | (byte)(uVar80 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar135 | (byte)uVar80,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar168 >> 0x10) | (byte)(uVar117 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar168 | (byte)(uVar117 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar165 >> 0x10) | (byte)(uVar117 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar165 | (byte)uVar117,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar160 >> 0x10) | (byte)(uVar104 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar160 | (byte)(uVar104 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar150 >>
                                                                                     0x10) |
                                                                              (byte)(uVar104 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)uVar150 | (byte)uVar104)))))));
      *puVar44 = CONCAT17((byte)(((uint)(((ulong)CONCAT11(bVar274,(byte)(uVar172 >> 0x10) |
                                                                  (byte)(uVar126 >> 0x30)) << 0x30)
                                        >> 0x20) & 0x11ffffff) >> 0xe) |
                          (byte)uVar172 | (byte)(uVar126 >> 0x20),
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar70 >> 0x10) |
                                                               (byte)(uVar126 >> 0x10)) << 0x10) >>
                                         0xe) | (byte)uVar70 | bVar317 & 0x11,
                                   CONCAT15((byte)(((uint)(((ulong)CONCAT11(bVar315,(byte)(uVar169 
                                                  >> 0x10) | (byte)(uVar125 >> 0x30)) << 0x30) >>
                                                  0x20) & 0x11ffffff) >> 0xe) |
                                            (byte)uVar169 | (byte)(uVar125 >> 0x20),
                                            CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar69 >> 0x10) | (byte)(uVar125 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar69 | bVar307 & 0x11,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar177 >> 0x10) | (byte)(uVar138 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar177 | (byte)(uVar138 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar176 >> 0x10) | (byte)(uVar138 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar176 | (byte)uVar138,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)((
                                                  uVar114 >> 7) >> 0x10) | (byte)(uVar114 >> 0x10))
                                                  << 0x10) >> 0xe) |
                                                  (byte)(uVar114 >> 7) | (byte)uVar114,
                                                  (byte)(((CONCAT11(bVar60,(byte)(uVar173 >> 0x10) |
                                                                           bVar277 & 0x11) & 0x11ff)
                                                         << 0x10) >> 0xe) |
                                                  (byte)uVar173 | bVar276 & 0x11)))))));
      puVar44[3] = CONCAT17((byte)(((uint)(((ulong)CONCAT11(bVar87,(byte)(uVar84 >> 0x10) |
                                                                   bVar118 & 0x11) << 0x30) >> 0x20)
                                   & 0x11ffffff) >> 0xe) | (byte)uVar84 | (byte)(uVar52 >> 0x20),
                            CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar76 >> 0x10) |
                                                                 (byte)(uVar52 >> 0x10)) << 0x10) >>
                                           0xe) | (byte)uVar76 | bVar127 & 0x11,
                                     CONCAT15((byte)(((uint)(((ulong)CONCAT11(bVar106,(byte)(uVar78 
                                                  >> 0x10) | bVar93 & 0x11) << 0x30) >> 0x20) &
                                                  0x11ffffff) >> 0xe) |
                                              (byte)uVar78 | (byte)(uVar50 >> 0x20),
                                              CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar75 >> 0x10) | (byte)(uVar50 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar75 | bVar61 & 0x11,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar101 >> 0x10) | (byte)(uVar92 >> 0x30)) << 0x30
                                                  ) >> 0x2e) |
                                                  (byte)uVar101 | (byte)(uVar92 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar95 >> 0x10) | (byte)(uVar92 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar95 | (byte)uVar92,
                                                  CONCAT11((byte)(ushort)(((uint7)(byte)((byte)(
                                                  uVar88 >> 0x10) | (byte)(uVar81 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar88 | (byte)(uVar81 >> 0x20),
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar85
                                                                                             >> 0x10
                                                  ) | (byte)(uVar81 >> 0x10)) << 0x10) >> 0xe) |
                                                  (byte)uVar85 | (byte)uVar81)))))));
      puVar44[2] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar120 >> 0x10) |
                                                        (byte)(uVar59 >> 0x30)) << 0x30) >> 0x2e) |
                            (byte)uVar120 | (byte)(uVar59 >> 0x20),
                            CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar119 >> 0x10) |
                                                                 (byte)(uVar59 >> 0x10)) << 0x10) >>
                                           0xe) | (byte)uVar119 | (byte)uVar59,
                                     CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uVar115 >> 0x10)
                                                                           | (byte)(uVar105 >> 0x30)
                                                                           ) << 0x30) >> 0x2e) |
                                              (byte)uVar115 | (byte)(uVar105 >> 0x20),
                                              CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar108 >> 0x10) | (byte)(uVar105 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar108 | (byte)uVar105,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar134 >> 0x10) | (byte)(uVar72 >> 0x30)) << 0x30
                                                  ) >> 0x2e) |
                                                  (byte)uVar134 | (byte)(uVar72 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar129 >> 0x10) | (byte)(uVar72 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar129 | (byte)uVar72,
                                                  CONCAT11((byte)(ushort)(((uint7)(byte)((byte)(
                                                  uVar123 >> 0x10) | (byte)(uVar65 >> 0x30)) << 0x30
                                                  ) >> 0x2e) |
                                                  (byte)uVar123 | (byte)(uVar65 >> 0x20),
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar122 >> 0x10) | (byte)(uVar65 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar122 | (byte)uVar65)))))));
    }
    pbVar43 = pbVar43 + -0x6000;
    local_2e8 = local_2e8 + -0xc0;
    bVar14 = param_4 == puVar44;
    puVar44 = puVar44 + -4;
    if (bVar14) {
      if (*(char *)(param_1 + uVar30 + 0x21340) == '\0') {
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
        param_6[3] = 0;
        *param_5 = 0;
        param_5[1] = 0;
        param_5[2] = 0;
        param_5[3] = 0;
      }
      else if ((ulong)((long)param_6 + (0xf - (long)param_5)) < 0x1f ||
               (param_3 < param_5 + 4 && param_5 < param_3 + 0x20 ||
               param_3 < param_6 + 4 && param_6 < param_3 + 0x20)) {
        lVar18 = 0;
        do {
          uVar69 = *(uint *)param_3 & 0x3f3f3f3f;
          uVar70 = *(uint *)((long)param_3 + 4) & 0x3f3f3f3f;
          uVar75 = (uVar70 | uVar70 << 4) & 0xf0f0f0f0 | (uVar69 | uVar69 >> 4) & 0xf0f0f0f;
          uVar75 = uVar75 | uVar75 >> 2;
          uVar76 = *(uint *)((long)param_3 + 4) & 0x80808080 | (*(uint *)param_3 & 0x80808080) >> 4;
          uVar75 = (uVar75 | uVar75 >> 1) & 0x11111111;
          uVar75 = uVar75 | uVar75 >> 7;
          uVar76 = uVar76 >> 10 | uVar76 >> 3;
          *(byte *)((long)param_6 + lVar18) = (byte)uVar75 | (byte)(uVar75 >> 0xe);
          *(byte *)((long)param_5 + lVar18) = (byte)uVar76 | (byte)(uVar76 >> 0xe);
          *(uint *)param_3 = uVar69;
          *(uint *)((long)param_3 + 4) = uVar70;
          lVar18 = lVar18 + 1;
          param_3 = param_3 + 1;
        } while (lVar18 != 0x20);
      }
      else {
        lVar18 = 0;
        do {
          uVar165 = *(uint *)param_3;
          uVar173 = *(uint *)((long)param_3 + 4);
          uVar168 = *(uint *)(param_3 + 1);
          uVar176 = *(uint *)((long)param_3 + 0xc);
          uVar169 = *(uint *)(param_3 + 2);
          uVar177 = *(uint *)((long)param_3 + 0x14);
          uVar172 = *(uint *)(param_3 + 3);
          uVar180 = *(uint *)((long)param_3 + 0x1c);
          uVar114 = *(uint *)(param_3 + 8);
          uVar134 = *(uint *)((long)param_3 + 0x44);
          uVar119 = *(uint *)(param_3 + 9);
          uVar142 = *(uint *)((long)param_3 + 0x4c);
          uVar122 = *(uint *)(param_3 + 10);
          uVar149 = *(uint *)((long)param_3 + 0x54);
          uVar128 = *(undefined4 *)(param_3 + 0xb);
          uVar159 = *(undefined4 *)((long)param_3 + 0x5c);
          uVar201 = *(uint *)(param_3 + 4);
          uVar216 = *(uint *)((long)param_3 + 0x24);
          uVar205 = *(uint *)(param_3 + 5);
          uVar219 = *(uint *)((long)param_3 + 0x2c);
          uVar208 = *(uint *)(param_3 + 6);
          uVar222 = *(uint *)((long)param_3 + 0x34);
          uVar213 = *(uint *)(param_3 + 7);
          uVar225 = *(undefined4 *)((long)param_3 + 0x3c);
          uVar69 = *(uint *)(param_3 + 0xc);
          uVar88 = *(uint *)((long)param_3 + 100);
          uVar75 = *(uint *)(param_3 + 0xd);
          uVar95 = *(uint *)((long)param_3 + 0x6c);
          uVar78 = *(uint *)(param_3 + 0xe);
          uVar101 = *(uint *)((long)param_3 + 0x74);
          uVar84 = *(uint *)(param_3 + 0xf);
          uVar108 = *(uint *)((long)param_3 + 0x7c);
          bVar107 = (byte)(uVar201 >> 0x18);
          bVar140 = (byte)(uVar205 >> 8);
          bVar110 = (byte)(uVar205 >> 0x18);
          bVar111 = (byte)(uVar208 >> 0x18);
          bVar141 = (byte)(uVar213 >> 8);
          bVar113 = (byte)(uVar213 >> 0x18);
          bVar94 = (byte)(uVar165 >> 0x18);
          bVar97 = (byte)(uVar168 >> 0x18);
          uVar244 = uVar168 & 0x3f3f3f3f;
          bVar98 = (byte)(uVar169 >> 0x18);
          bVar100 = (byte)(uVar172 >> 0x18);
          uVar261 = uVar172 & 0x3f3f3f3f;
          bVar99 = (byte)(uVar142 >> 8);
          bVar112 = (byte)(uVar142 >> 0x10);
          bVar118 = (byte)(uVar142 >> 0x18);
          uVar185 = (ushort)uVar149 & 0x3f3f;
          bVar121 = (byte)uVar159;
          bVar73 = (byte)((uint)uVar159 >> 8);
          bVar132 = (byte)((uint)uVar159 >> 0x10);
          bVar133 = (byte)((uint)uVar159 >> 0x18);
          bVar60 = (byte)(uVar69 >> 0x18);
          bVar338 = bVar60 & 0x3f;
          bVar74 = (byte)(uVar75 >> 8);
          bVar61 = (byte)(uVar75 >> 0x10);
          bVar66 = (byte)(uVar75 >> 0x18);
          uVar339 = uVar75 & 0x3f3f3f3f;
          bVar188 = (byte)(uVar78 >> 0x18);
          bVar342 = bVar188 & 0x3f;
          bVar67 = (byte)(uVar84 >> 8);
          bVar82 = (byte)(uVar84 >> 0x10);
          bVar51 = (byte)(uVar84 >> 0x18);
          uVar343 = uVar84 & 0x3f3f3f3f;
          bVar77 = (byte)(uVar95 >> 8);
          bVar93 = (byte)(uVar95 >> 0x10);
          bVar106 = (byte)(uVar95 >> 0x18);
          bVar87 = (byte)(uVar108 >> 8);
          bVar127 = (byte)(uVar108 >> 0x10);
          bVar53 = (byte)(uVar108 >> 0x18);
          uVar227 = (undefined)((uint)uVar225 >> 8);
          uVar228 = (undefined)((uint)uVar225 >> 0x10);
          uVar229 = (undefined)((uint)uVar225 >> 0x18);
          uVar268 = uVar219 & 0x3f3f3f3f;
          uVar138 = CONCAT17(uVar229,CONCAT16(uVar228,CONCAT15(uVar227,CONCAT14((char)uVar225,
                                                                                uVar222)))) &
                    0x3f3f3f3f3f3f3f3f;
          uVar232 = uVar176 & 0x3f3f3f3f;
          uVar233 = uVar180 & 0x3f3f3f3f;
          bVar54 = (byte)(uVar114 >> 0x18);
          bVar55 = (byte)(uVar119 >> 0x18);
          uVar230 = uVar119 & 0x3f3f3f3f;
          uVar130 = (undefined)((uint)uVar128 >> 8);
          uVar131 = (undefined)((uint)uVar128 >> 0x10);
          uVar57 = CONCAT16(uVar131,CONCAT15(uVar130,CONCAT14((char)uVar128,uVar122)));
          bVar68 = (byte)((uint)uVar128 >> 0x18);
          uVar81 = CONCAT17(bVar68,uVar57) & 0x3f3f3f3f3f3f3f3f;
          uVar135 = (uVar201 & 0x3f3f3f3f) >> 4;
          uVar143 = (uVar205 & 0x3f3f3f3f) >> 4;
          uVar150 = (uVar208 & 0x3f3f3f3f) >> 4;
          uVar160 = (uVar213 & 0x3f3f3f3f) >> 4;
          uVar115 = (uVar165 & 0x3f3f3f3f) >> 4;
          uVar120 = uVar244 >> 4;
          uVar123 = (uVar169 & 0x3f3f3f3f) >> 4;
          uVar129 = uVar261 >> 4;
          uVar30 = CONCAT17(bVar106,CONCAT16(bVar93,CONCAT15(bVar77,CONCAT14((byte)uVar95,uVar88))))
                   & 0x8080808080808080;
          uVar26 = CONCAT17(bVar53,CONCAT16(bVar127,CONCAT15(bVar87,CONCAT14((byte)uVar108,uVar101))
                                           )) & 0x8080808080808080;
          iVar349 = (uVar216 & 0xff3f3f3f) << 4;
          iVar351 = uVar268 << 4;
          iVar353 = (uVar222 & 0xff3f3f3f) << 4;
          iVar355 = (int)(uVar138 >> 0x20) << 4;
          iVar89 = (uVar173 & 0xff3f3f3f) << 4;
          iVar96 = uVar232 << 4;
          iVar102 = (uVar177 & 0xff3f3f3f) << 4;
          iVar109 = uVar233 << 4;
          uVar70 = (uVar114 & 0x3f3f3f3f) >> 4;
          uVar76 = uVar230 >> 4;
          uVar22 = ((ulong)(uVar57 & 0x3f3f3f3f3f3f3f) & 0xfffffff0) >> 4;
          uVar85 = (uint)(uVar81 >> 0x24);
          iVar217 = (uVar134 & 0xff3f3f3f) << 4;
          iVar220 = (uVar142 & 0xff3f3f3f) << 4;
          iVar223 = (uVar149 & 0xff3f3f3f) << 4;
          iVar226 = ((uint)(CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar73,CONCAT14(bVar121,
                                                  uVar149)))) >> 0x20) & 0xff3f3f3f) << 4;
          uVar202 = (uVar69 & 0x3f3f3f3f) >> 4;
          uVar209 = (uVar78 & 0x3f3f3f3f) >> 4;
          iVar136 = (uVar88 & 0xff3f3f3f) << 4;
          iVar144 = (uVar95 & 0xff3f3f3f) << 4;
          iVar151 = (uVar101 & 0xff3f3f3f) << 4;
          iVar161 = (uVar108 & 0xff3f3f3f) << 4;
          uVar350 = (uVar201 & 0x80808080) >> 4;
          uVar352 = ((uint)(CONCAT17(bVar110,CONCAT16((char)(uVar205 >> 0x10),
                                                      CONCAT15(bVar140,CONCAT14((byte)uVar205,
                                                                                uVar201)))) >> 0x20)
                    & 0x80808080) >> 4;
          uVar354 = (uVar208 & 0x80808080) >> 4;
          uVar356 = ((uint)(CONCAT17(bVar113,CONCAT16((char)(uVar213 >> 0x10),
                                                      CONCAT15(bVar141,CONCAT14((byte)uVar213,
                                                                                uVar208)))) >> 0x20)
                    & 0x80808080) >> 4;
          uVar345 = (uVar165 & 0x80808080) >> 4;
          uVar346 = ((uint)(CONCAT17(bVar97,CONCAT16((char)(uVar168 >> 0x10),
                                                     CONCAT15((char)(uVar168 >> 8),
                                                              CONCAT14((byte)uVar168,uVar165)))) >>
                           0x20) & 0x80808080) >> 4;
          uVar347 = (uVar169 & 0x80808080) >> 4;
          uVar348 = ((uint)(CONCAT17(bVar100,CONCAT16((char)(uVar172 >> 0x10),
                                                      CONCAT15((char)(uVar172 >> 8),
                                                               CONCAT14((byte)uVar172,uVar169)))) >>
                           0x20) & 0x80808080) >> 4;
          uVar329 = (uVar114 & 0x80808080) >> 4;
          uVar331 = ((uint)(CONCAT17(bVar55,CONCAT16((char)(uVar119 >> 0x10),
                                                     CONCAT15((char)(uVar119 >> 8),
                                                              CONCAT14((byte)uVar119,uVar114)))) >>
                           0x20) & 0x80808080) >> 4;
          uVar333 = (uVar122 & 0x80808080) >> 4;
          uVar335 = ((uint)(CONCAT17(bVar68,CONCAT16(uVar131,CONCAT15(uVar130,CONCAT14((char)uVar128
                                                                                       ,uVar122))))
                           >> 0x20) & 0x80808080) >> 4;
          uVar337 = (uVar69 & 0x80808080) >> 4;
          uVar340 = ((uint)(CONCAT17(bVar66,CONCAT16(bVar61,CONCAT15(bVar74,CONCAT14((byte)uVar75,
                                                                                     uVar69)))) >>
                           0x20) & 0x80808080) >> 4;
          uVar341 = (uVar78 & 0x80808080) >> 4;
          uVar344 = ((uint)(CONCAT17(bVar51,CONCAT16(bVar82,CONCAT15(bVar67,CONCAT14((byte)uVar84,
                                                                                     uVar78)))) >>
                           0x20) & 0x80808080) >> 4;
          uVar269 = CONCAT11((byte)((uint)iVar353 >> 8) | (byte)(uVar138 >> 8),
                             (byte)iVar353 | (byte)uVar222 & 0x3f) & 0xf0f0;
          uVar232 = CONCAT13((byte)((uint)iVar96 >> 0x18) | (byte)(uVar232 >> 0x18),
                             CONCAT12((byte)((uint)iVar96 >> 0x10) | (byte)(uVar232 >> 0x10),
                                      CONCAT11((byte)((uint)iVar96 >> 8) | (byte)(uVar232 >> 8),
                                               (byte)iVar96 | (byte)uVar176 & 0x3f))) & 0xf0f0f0f0;
          uVar233 = CONCAT13((byte)((uint)iVar109 >> 0x18) | (byte)(uVar233 >> 0x18),
                             CONCAT12((byte)((uint)iVar109 >> 0x10) | (byte)(uVar233 >> 0x10),
                                      CONCAT11((byte)((uint)iVar109 >> 8) | (byte)(uVar233 >> 8),
                                               (byte)iVar109 | (byte)uVar180 & 0x3f))) & 0xf0f0f0f0;
          uVar76 = CONCAT13((bVar55 & 0x3f) >> 4 | (byte)(uVar230 >> 0x18),
                            CONCAT12((byte)(uVar76 >> 0x10) | (byte)(uVar230 >> 0x10),
                                     CONCAT11((byte)(uVar76 >> 8) | (byte)(uVar230 >> 8),
                                              (byte)uVar76 | (byte)uVar119 & 0x3f))) & 0xf0f0f0f;
          uVar126 = CONCAT17((bVar68 & 0x3f) >> 4 | (byte)(uVar81 >> 0x38),
                             CONCAT16((byte)(uVar85 >> 0x10) | (byte)(uVar81 >> 0x30),
                                      CONCAT15((byte)(uVar85 >> 8) | (byte)(uVar81 >> 0x28),
                                               CONCAT14((byte)uVar85 | (byte)(uVar81 >> 0x20),
                                                        CONCAT13((byte)(uVar22 >> 0x18) |
                                                                 (byte)(uVar81 >> 0x18),
                                                                 CONCAT12((byte)(uVar22 >> 0x10) |
                                                                          (byte)(uVar81 >> 0x10),
                                                                          CONCAT11((byte)(uVar22 >>
                                                                                         8) |
                                                                                   (byte)(uVar81 >>
                                                                                         8),(byte)
                                                  uVar22 | (byte)uVar122 & 0x3f))))))) &
                    0xf0f0f0f0f0f0f0f;
          uVar117 = CONCAT17((byte)((uint)iVar220 >> 0x18) | bVar118 & 0x3f,
                             CONCAT16((byte)((uint)iVar220 >> 0x10) | bVar112 & 0x3f,
                                      CONCAT15((byte)((uint)iVar220 >> 8) | bVar99 & 0x3f,
                                               CONCAT14((byte)iVar220 | (byte)uVar142 & 0x3f,
                                                        CONCAT13((byte)((uint)iVar217 >> 0x18) |
                                                                 (byte)(uVar134 >> 0x18) & 0x3f,
                                                                 CONCAT12((byte)((uint)iVar217 >>
                                                                                0x10) |
                                                                          (byte)(uVar134 >> 0x10) &
                                                                          0x3f,CONCAT11((byte)((uint
                                                  )iVar217 >> 8) | (byte)(uVar134 >> 8) & 0x3f,
                                                  (byte)iVar217 | (byte)uVar134 & 0x3f))))))) &
                    0xf0f0f0f0f0f0f0f0;
          uVar125 = CONCAT17((byte)((uint)iVar226 >> 0x18) | bVar133 & 0x3f,
                             CONCAT16((byte)((uint)iVar226 >> 0x10) | bVar132 & 0x3f,
                                      CONCAT15((byte)((uint)iVar226 >> 8) | bVar73 & 0x3f,
                                               CONCAT14((byte)iVar226 | bVar121 & 0x3f,
                                                        CONCAT13((byte)((uint)iVar223 >> 0x18) |
                                                                 (byte)(uVar149 >> 0x18) & 0x3f,
                                                                 CONCAT12((byte)((uint)iVar223 >>
                                                                                0x10) |
                                                                          (byte)(uVar149 >> 0x10) &
                                                                          0x3f,CONCAT11((byte)((uint
                                                  )iVar223 >> 8) | (byte)(uVar185 >> 8),
                                                  (byte)iVar223 | (byte)uVar185))))))) &
                    0xf0f0f0f0f0f0f0f0;
          uVar91 = CONCAT17((byte)(uVar339 >> 0x1c) | bVar66 & 0x3f,
                            CONCAT16((byte)((uint3)(uVar339 >> 0xc) >> 8) | bVar61 & 0x3f,
                                     CONCAT15((byte)((uVar339 >> 4) >> 8) | bVar74 & 0x3f,
                                              CONCAT14((byte)(uVar339 >> 4) | (byte)uVar75 & 0x3f,
                                                       CONCAT13(bVar338 >> 4 | bVar338,
                                                                CONCAT12((byte)(uVar202 >> 0x10) |
                                                                         (byte)(uVar69 >> 0x10) &
                                                                         0x3f,CONCAT11((byte)(
                                                  uVar202 >> 8) | (byte)(uVar69 >> 8) & 0x3f,
                                                  (byte)uVar202 | (byte)uVar69 & 0x3f))))))) &
                   0xf0f0f0f0f0f0f0f;
          uVar104 = CONCAT17((byte)(uVar343 >> 0x1c) | bVar51 & 0x3f,
                             CONCAT16((byte)((uint3)(uVar343 >> 0xc) >> 8) | bVar82 & 0x3f,
                                      CONCAT15((byte)((uVar343 >> 4) >> 8) | bVar67 & 0x3f,
                                               CONCAT14((byte)(uVar343 >> 4) | (byte)uVar84 & 0x3f,
                                                        CONCAT13(bVar342 >> 4 | bVar342,
                                                                 CONCAT12((byte)(uVar209 >> 0x10) |
                                                                          (byte)(uVar78 >> 0x10) &
                                                                          0x3f,CONCAT11((byte)(
                                                  uVar209 >> 8) | (byte)(uVar78 >> 8) & 0x3f,
                                                  (byte)uVar209 | (byte)uVar78 & 0x3f))))))) &
                    0xf0f0f0f0f0f0f0f;
          uVar69 = CONCAT13((bVar110 & 0x3f) >> 4 | bVar110 & 0x3f,
                            CONCAT12((byte)(uVar143 >> 0x10) |
                                     (byte)((uVar205 & 0x3f3f3f3f) >> 0x10),
                                     CONCAT11((byte)(uVar143 >> 8) | bVar140 & 0x3f,
                                              (byte)uVar143 | (byte)uVar205 & 0x3f))) & 0xf0f0f0f;
          uVar75 = CONCAT13((bVar113 & 0x3f) >> 4 | bVar113 & 0x3f,
                            CONCAT12((byte)(uVar160 >> 0x10) |
                                     (byte)((uVar213 & 0x3f3f3f3f) >> 0x10),
                                     CONCAT11((byte)(uVar160 >> 8) | bVar141 & 0x3f,
                                              (byte)uVar160 | (byte)uVar213 & 0x3f))) & 0xf0f0f0f;
          uVar72 = CONCAT17((byte)((uint)iVar144 >> 0x18) | bVar106 & 0x3f,
                            CONCAT16((byte)((uint)iVar144 >> 0x10) | bVar93 & 0x3f,
                                     CONCAT15((byte)((uint)iVar144 >> 8) | bVar77 & 0x3f,
                                              CONCAT14((byte)iVar144 | (byte)uVar95 & 0x3f,
                                                       CONCAT13((byte)((uint)iVar136 >> 0x18) |
                                                                (byte)(uVar88 >> 0x18) & 0x3f,
                                                                CONCAT12((byte)((uint)iVar136 >>
                                                                               0x10) |
                                                                         (byte)(uVar88 >> 0x10) &
                                                                         0x3f,CONCAT11((byte)((uint)
                                                  iVar136 >> 8) | (byte)(uVar88 >> 8) & 0x3f,
                                                  (byte)iVar136 | (byte)uVar88 & 0x3f))))))) &
                   0xf0f0f0f0f0f0f0f0;
          uVar80 = CONCAT17((byte)((uint)iVar161 >> 0x18) | bVar53 & 0x3f,
                            CONCAT16((byte)((uint)iVar161 >> 0x10) | bVar127 & 0x3f,
                                     CONCAT15((byte)((uint)iVar161 >> 8) | bVar87 & 0x3f,
                                              CONCAT14((byte)iVar161 | (byte)uVar108 & 0x3f,
                                                       CONCAT13((byte)((uint)iVar151 >> 0x18) |
                                                                (byte)(uVar101 >> 0x18) & 0x3f,
                                                                CONCAT12((byte)((uint)iVar151 >>
                                                                               0x10) |
                                                                         (byte)(uVar101 >> 0x10) &
                                                                         0x3f,CONCAT11((byte)((uint)
                                                  iVar151 >> 8) | (byte)(uVar101 >> 8) & 0x3f,
                                                  (byte)iVar151 | (byte)uVar101 & 0x3f))))))) &
                   0xf0f0f0f0f0f0f0f0;
          uVar59 = CONCAT17((char)(uVar219 >> 0x18),
                            CONCAT16((char)(uVar219 >> 0x10),
                                     CONCAT15((char)(uVar219 >> 8),CONCAT14((byte)uVar219,uVar216)))
                           ) & 0x8080808080808080;
          uVar65 = CONCAT17(uVar229,CONCAT16(uVar228,CONCAT15(uVar227,CONCAT14((char)uVar225,uVar222
                                                                              )))) &
                   0x8080808080808080;
          uVar92 = CONCAT17((char)(uVar176 >> 0x18),
                            CONCAT16((char)(uVar176 >> 0x10),
                                     CONCAT15((char)(uVar176 >> 8),CONCAT14((byte)uVar176,uVar173)))
                           ) & 0x8080808080808080;
          uVar105 = CONCAT17((char)(uVar180 >> 0x18),
                             CONCAT16((char)(uVar180 >> 0x10),
                                      CONCAT15((char)(uVar180 >> 8),CONCAT14((byte)uVar180,uVar177))
                                     )) & 0x8080808080808080;
          uVar22 = CONCAT17(bVar118,CONCAT16(bVar112,CONCAT15(bVar99,CONCAT14((byte)uVar142,uVar134)
                                                             ))) & 0x8080808080808080;
          uVar81 = CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar73,CONCAT14(bVar121,uVar149)))) &
                   0x8080808080808080;
          uVar30 = CONCAT17((char)(uVar30 >> 0x38),
                            CONCAT16((char)(uVar30 >> 0x30),
                                     CONCAT15((char)(uVar30 >> 0x28),
                                              CONCAT14((char)(uVar30 >> 0x20),
                                                       CONCAT13((char)(uVar30 >> 0x18),
                                                                CONCAT12((char)(uVar30 >> 0x10),
                                                                         CONCAT11((char)(uVar30 >> 8
                                                                                        ),(byte)
                                                  uVar88))))))) & 0xf0f0f0f0f0f0f080;
          uVar26 = CONCAT17((char)(uVar26 >> 0x38),
                            CONCAT16((char)(uVar26 >> 0x30),
                                     CONCAT15((char)(uVar26 >> 0x28),
                                              CONCAT14((char)(uVar26 >> 0x20),
                                                       CONCAT13((char)(uVar26 >> 0x18),
                                                                CONCAT12((char)(uVar26 >> 0x10),
                                                                         CONCAT11((char)(uVar26 >> 8
                                                                                        ),(byte)
                                                  uVar101))))))) & 0xf0f0f0f0f0f0f080;
          bVar305 = (byte)iVar89 | (byte)uVar173 & 0x30 |
                    ((byte)uVar115 | (byte)uVar165 & 0x3f) & 0xf;
          bVar307 = ((byte)((uint)iVar89 >> 8) | (byte)(uVar173 >> 8) & 0x3f) & 0xf0 |
                    ((byte)(uVar115 >> 8) | (byte)(uVar165 >> 8) & 0x3f) & 0xf;
          bVar308 = ((byte)((uint)iVar89 >> 0x10) | (byte)(uVar173 >> 0x10) & 0x3f) & 0xf0 |
                    ((byte)(uVar115 >> 0x10) | (byte)(uVar165 >> 0x10) & 0x3f) & 0xf;
          bVar309 = ((byte)((uint)iVar89 >> 0x18) | (byte)(uVar173 >> 0x18) & 0x3f) & 0xf0 |
                    (bVar94 & 0x3f) >> 4 | bVar94 & 0xf;
          bVar310 = (byte)uVar232 | ((byte)uVar120 | (byte)uVar168 & 0x3f) & 0xf;
          bVar312 = (byte)(uVar232 >> 8) | ((byte)(uVar120 >> 8) | (byte)(uVar244 >> 8)) & 0xf;
          bVar313 = (byte)(uVar232 >> 0x10) |
                    ((byte)(uVar120 >> 0x10) | (byte)(uVar244 >> 0x10)) & 0xf;
          bVar314 = (byte)(uVar232 >> 0x18) | (bVar97 & 0x3f) >> 4 | (byte)(uVar244 >> 0x18) & 0xf;
          bVar315 = (byte)iVar102 | (byte)uVar177 & 0x30 |
                    ((byte)uVar123 | (byte)uVar169 & 0x3f) & 0xf;
          bVar317 = ((byte)((uint)iVar102 >> 8) | (byte)(uVar177 >> 8) & 0x3f) & 0xf0 |
                    ((byte)(uVar123 >> 8) | (byte)(uVar169 >> 8) & 0x3f) & 0xf;
          bVar318 = ((byte)((uint)iVar102 >> 0x10) | (byte)(uVar177 >> 0x10) & 0x3f) & 0xf0 |
                    ((byte)(uVar123 >> 0x10) | (byte)(uVar169 >> 0x10) & 0x3f) & 0xf;
          bVar319 = ((byte)((uint)iVar102 >> 0x18) | (byte)(uVar177 >> 0x18) & 0x3f) & 0xf0 |
                    (bVar98 & 0x3f) >> 4 | bVar98 & 0xf;
          bVar320 = (byte)uVar233 | ((byte)uVar129 | (byte)uVar172 & 0x3f) & 0xf;
          bVar322 = (byte)(uVar233 >> 8) | ((byte)(uVar129 >> 8) | (byte)(uVar261 >> 8)) & 0xf;
          bVar323 = (byte)(uVar233 >> 0x10) |
                    ((byte)(uVar129 >> 0x10) | (byte)(uVar261 >> 0x10)) & 0xf;
          bVar324 = (byte)(uVar233 >> 0x18) | (bVar100 & 0x3f) >> 4 | (byte)(uVar261 >> 0x18) & 0xf;
          bVar133 = (byte)uVar72 | (byte)uVar91;
          bVar140 = (byte)(uVar72 >> 8) | (byte)(uVar91 >> 8);
          bVar141 = (byte)(uVar72 >> 0x10) | (byte)(uVar91 >> 0x10);
          bVar338 = (byte)(uVar72 >> 0x18) | (byte)(uVar91 >> 0x18);
          uVar95 = CONCAT13(bVar338,CONCAT12(bVar141,CONCAT11(bVar140,bVar133)));
          bVar342 = (byte)(uVar72 >> 0x20) | (byte)(uVar91 >> 0x20);
          bVar145 = (byte)(uVar72 >> 0x28) | (byte)(uVar91 >> 0x28);
          bVar146 = (byte)(uVar72 >> 0x30) | (byte)(uVar91 >> 0x30);
          bVar147 = (byte)(uVar72 >> 0x38) | (byte)(uVar91 >> 0x38);
          uVar137 = CONCAT17(bVar147,CONCAT16(bVar146,CONCAT15(bVar145,CONCAT14(bVar342,uVar95))));
          bVar148 = (byte)uVar80 | (byte)uVar104;
          bVar155 = (byte)(uVar80 >> 8) | (byte)(uVar104 >> 8);
          bVar156 = (byte)(uVar80 >> 0x10) | (byte)(uVar104 >> 0x10);
          bVar157 = (byte)(uVar80 >> 0x18) | (byte)(uVar104 >> 0x18);
          uVar101 = CONCAT13(bVar157,CONCAT12(bVar156,CONCAT11(bVar155,bVar148)));
          bVar158 = (byte)(uVar80 >> 0x20) | (byte)(uVar104 >> 0x20);
          bVar162 = (byte)(uVar80 >> 0x28) | (byte)(uVar104 >> 0x28);
          bVar163 = (byte)(uVar80 >> 0x30) | (byte)(uVar104 >> 0x30);
          bVar164 = (byte)(uVar80 >> 0x38) | (byte)(uVar104 >> 0x38);
          uVar152 = CONCAT17(bVar164,CONCAT16(bVar163,CONCAT15(bVar162,CONCAT14(bVar158,uVar101))));
          bVar234 = (byte)uVar117 | ((byte)uVar70 | (byte)uVar114 & 0x3f) & 0xf;
          bVar236 = (byte)(uVar117 >> 8) | ((byte)(uVar70 >> 8) | (byte)(uVar114 >> 8) & 0x3f) & 0xf
          ;
          bVar238 = (byte)(uVar117 >> 0x10) |
                    ((byte)(uVar70 >> 0x10) | (byte)(uVar114 >> 0x10) & 0x3f) & 0xf;
          bVar240 = (byte)(uVar117 >> 0x18) | (bVar54 & 0x3f) >> 4 | bVar54 & 0xf;
          bVar242 = (byte)(uVar117 >> 0x20) | (byte)uVar76;
          bVar245 = (byte)(uVar117 >> 0x28) | (byte)(uVar76 >> 8);
          bVar247 = (byte)(uVar117 >> 0x30) | (byte)(uVar76 >> 0x10);
          bVar249 = (byte)(uVar117 >> 0x38) | (byte)(uVar76 >> 0x18);
          bVar251 = (byte)uVar125 | (byte)uVar126;
          bVar253 = (byte)(uVar125 >> 8) | (byte)(uVar126 >> 8);
          bVar255 = (byte)(uVar125 >> 0x10) | (byte)(uVar126 >> 0x10);
          bVar257 = (byte)(uVar125 >> 0x18) | (byte)(uVar126 >> 0x18);
          bVar259 = (byte)(uVar125 >> 0x20) | (byte)(uVar126 >> 0x20);
          bVar262 = (byte)(uVar125 >> 0x28) | (byte)(uVar126 >> 0x28);
          bVar264 = (byte)(uVar125 >> 0x30) | (byte)(uVar126 >> 0x30);
          bVar266 = (byte)(uVar125 >> 0x38) | (byte)(uVar126 >> 0x38);
          bVar272 = (byte)iVar349 | (byte)uVar216 & 0x30 |
                    ((byte)uVar135 | (byte)uVar201 & 0x3f) & 0xf;
          bVar274 = ((byte)((uint)iVar349 >> 8) | (byte)(uVar216 >> 8) & 0x3f) & 0xf0 |
                    ((byte)(uVar135 >> 8) | (byte)(uVar201 >> 8) & 0x3f) & 0xf;
          bVar276 = ((byte)((uint)iVar349 >> 0x10) | (byte)(uVar216 >> 0x10) & 0x3f) & 0xf0 |
                    ((byte)(uVar135 >> 0x10) | (byte)(uVar201 >> 0x10) & 0x3f) & 0xf;
          bVar277 = ((byte)((uint)iVar349 >> 0x18) | (byte)(uVar216 >> 0x18) & 0x3f) & 0xf0 |
                    (bVar107 & 0x3f) >> 4 | bVar107 & 0xf;
          bVar278 = (byte)iVar351 | (byte)uVar219 & 0x30 | (byte)uVar69;
          bVar281 = ((byte)((uint)iVar351 >> 8) | (byte)(uVar268 >> 8)) & 0xf0 | (byte)(uVar69 >> 8)
          ;
          bVar283 = ((byte)((uint)iVar351 >> 0x10) | (byte)(uVar268 >> 0x10)) & 0xf0 |
                    (byte)(uVar69 >> 0x10);
          bVar285 = ((byte)((uint)iVar351 >> 0x18) | (byte)(uVar268 >> 0x18)) & 0xf0 |
                    (byte)(uVar69 >> 0x18);
          bVar287 = (byte)uVar269 | ((byte)uVar150 | (byte)uVar208 & 0x3f) & 0xf;
          bVar290 = (byte)(uVar269 >> 8) |
                    ((byte)(uVar150 >> 8) | (byte)(uVar208 >> 8) & 0x3f) & 0xf;
          bVar292 = ((byte)((uint)iVar353 >> 0x10) | (byte)(uVar138 >> 0x10)) & 0xf0 |
                    ((byte)(uVar150 >> 0x10) | (byte)(uVar208 >> 0x10) & 0x3f) & 0xf;
          bVar294 = ((byte)((uint)iVar353 >> 0x18) | (byte)(uVar138 >> 0x18)) & 0xf0 |
                    (bVar111 & 0x3f) >> 4 | bVar111 & 0xf;
          bVar296 = (byte)iVar355 | (byte)(uVar138 >> 0x20) & 0xf0 | (byte)uVar75;
          bVar299 = ((byte)((uint)iVar355 >> 8) | (byte)(uVar138 >> 0x28)) & 0xf0 |
                    (byte)(uVar75 >> 8);
          bVar301 = ((byte)((uint)iVar355 >> 0x10) | (byte)(uVar138 >> 0x30)) & 0xf0 |
                    (byte)(uVar75 >> 0x10);
          bVar303 = ((byte)((uint)iVar355 >> 0x18) | (byte)(uVar138 >> 0x38)) & 0xf0 |
                    (byte)(uVar75 >> 0x18);
          bVar118 = (byte)(uVar59 >> 0x18) | (bVar107 & 0x80) >> 4;
          uVar85 = CONCAT13(bVar118,CONCAT12((byte)(uVar59 >> 0x10) | (byte)(uVar350 >> 0x10),
                                             CONCAT11((byte)(uVar59 >> 8) | (byte)(uVar350 >> 8),
                                                      (byte)uVar59 | (byte)uVar350)));
          bVar121 = (byte)(uVar59 >> 0x38) | (bVar110 & 0x80) >> 4;
          uVar116 = CONCAT17(bVar121,CONCAT16((byte)(uVar59 >> 0x30) | (byte)(uVar352 >> 0x10),
                                              CONCAT15((byte)(uVar59 >> 0x28) | (byte)(uVar352 >> 8)
                                                       ,CONCAT14((byte)(uVar59 >> 0x20) |
                                                                 (byte)uVar352,uVar85))));
          bVar127 = (byte)(uVar65 >> 0x18) | (bVar111 & 0x80) >> 4;
          uVar88 = CONCAT13(bVar127,CONCAT12((byte)(uVar65 >> 0x10) | (byte)(uVar354 >> 0x10),
                                             CONCAT11((byte)(uVar65 >> 8) | (byte)(uVar354 >> 8),
                                                      (byte)uVar65 | (byte)uVar354)));
          bVar132 = (byte)(uVar65 >> 0x38) | (bVar113 & 0x80) >> 4;
          uVar124 = CONCAT17(bVar132,CONCAT16((byte)(uVar65 >> 0x30) | (byte)(uVar356 >> 0x10),
                                              CONCAT15((byte)(uVar65 >> 0x28) | (byte)(uVar356 >> 8)
                                                       ,CONCAT14((byte)(uVar65 >> 0x20) |
                                                                 (byte)uVar356,uVar88))));
          bVar93 = (byte)(uVar92 >> 0x18) | (bVar94 & 0x80) >> 4;
          uVar78 = CONCAT13(bVar93,CONCAT12((byte)(uVar92 >> 0x10) | (byte)(uVar345 >> 0x10),
                                            CONCAT11((byte)(uVar92 >> 8) | (byte)(uVar345 >> 8),
                                                     (byte)uVar92 | (byte)uVar345)));
          bVar99 = (byte)(uVar92 >> 0x38) | (bVar97 & 0x80) >> 4;
          uVar90 = CONCAT17(bVar99,CONCAT16((byte)(uVar92 >> 0x30) | (byte)(uVar346 >> 0x10),
                                            CONCAT15((byte)(uVar92 >> 0x28) | (byte)(uVar346 >> 8),
                                                     CONCAT14((byte)(uVar92 >> 0x20) | (byte)uVar346
                                                              ,uVar78))));
          bVar106 = (byte)(uVar105 >> 0x18) | (bVar98 & 0x80) >> 4;
          uVar84 = CONCAT13(bVar106,CONCAT12((byte)(uVar105 >> 0x10) | (byte)(uVar347 >> 0x10),
                                             CONCAT11((byte)(uVar105 >> 8) | (byte)(uVar347 >> 8),
                                                      (byte)uVar105 | (byte)uVar347)));
          bVar112 = (byte)(uVar105 >> 0x38) | (bVar100 & 0x80) >> 4;
          uVar103 = CONCAT17(bVar112,CONCAT16((byte)(uVar105 >> 0x30) | (byte)(uVar348 >> 0x10),
                                              CONCAT15((byte)(uVar105 >> 0x28) |
                                                       (byte)(uVar348 >> 8),
                                                       CONCAT14((byte)(uVar105 >> 0x20) |
                                                                (byte)uVar348,uVar84))));
          bVar74 = (byte)(uVar22 >> 0x18) | (bVar54 & 0x80) >> 4;
          uVar75 = CONCAT13(bVar74,CONCAT12((byte)(uVar22 >> 0x10) | (byte)(uVar329 >> 0x10),
                                            CONCAT11((byte)(uVar22 >> 8) | (byte)(uVar329 >> 8),
                                                     (byte)uVar22 | (byte)uVar329)));
          bVar77 = (byte)(uVar22 >> 0x38) | (bVar55 & 0x80) >> 4;
          uVar71 = CONCAT17(bVar77,CONCAT16((byte)(uVar22 >> 0x30) | (byte)(uVar331 >> 0x10),
                                            CONCAT15((byte)(uVar22 >> 0x28) | (byte)(uVar331 >> 8),
                                                     CONCAT14((byte)(uVar22 >> 0x20) | (byte)uVar331
                                                              ,uVar75))));
          bVar82 = (byte)(uVar81 >> 0x18) | ((byte)(uVar122 >> 0x18) & 0x80) >> 4;
          uVar76 = CONCAT13(bVar82,CONCAT12((byte)(uVar81 >> 0x10) | (byte)(uVar333 >> 0x10),
                                            CONCAT11((byte)(uVar81 >> 8) | (byte)(uVar333 >> 8),
                                                     (byte)uVar81 | (byte)uVar333)));
          bVar87 = (byte)(uVar81 >> 0x38) | (bVar68 & 0x80) >> 4;
          uVar79 = CONCAT17(bVar87,CONCAT16((byte)(uVar81 >> 0x30) | (byte)(uVar335 >> 0x10),
                                            CONCAT15((byte)(uVar81 >> 0x28) | (byte)(uVar335 >> 8),
                                                     CONCAT14((byte)(uVar81 >> 0x20) | (byte)uVar335
                                                              ,uVar76))));
          bVar60 = (byte)(uVar30 >> 0x18) | (bVar60 & 0x80) >> 4;
          uVar69 = CONCAT13(bVar60,CONCAT12((byte)(uVar30 >> 0x10) | (byte)(uVar337 >> 0x10),
                                            CONCAT11((byte)(uVar30 >> 8) | (byte)(uVar337 >> 8),
                                                     (byte)uVar30 | (byte)uVar337)));
          bVar61 = (byte)(uVar30 >> 0x38) | (bVar66 & 0x80) >> 4;
          uVar58 = CONCAT17(bVar61,CONCAT16((byte)(uVar30 >> 0x30) | (byte)(uVar340 >> 0x10),
                                            CONCAT15((byte)(uVar30 >> 0x28) | (byte)(uVar340 >> 8),
                                                     CONCAT14((byte)(uVar30 >> 0x20) | (byte)uVar340
                                                              ,uVar69))));
          bVar66 = (byte)(uVar26 >> 0x18) | (bVar188 & 0x80) >> 4;
          uVar70 = CONCAT13(bVar66,CONCAT12((byte)(uVar26 >> 0x10) | (byte)(uVar341 >> 0x10),
                                            CONCAT11((byte)(uVar26 >> 8) | (byte)(uVar341 >> 8),
                                                     (byte)uVar26 | (byte)uVar341)));
          bVar67 = (byte)(uVar26 >> 0x38) | (bVar51 & 0x80) >> 4;
          uVar64 = CONCAT17(bVar67,CONCAT16((byte)(uVar26 >> 0x30) | (byte)(uVar344 >> 0x10),
                                            CONCAT15((byte)(uVar26 >> 0x28) | (byte)(uVar344 >> 8),
                                                     CONCAT14((byte)(uVar26 >> 0x20) | (byte)uVar344
                                                              ,uVar70))));
          uVar120 = CONCAT13(bVar309,CONCAT12(bVar308,CONCAT11(bVar307,bVar305))) >> 2;
          uVar122 = CONCAT13(bVar314,CONCAT12(bVar313,CONCAT11(bVar312,bVar310))) >> 2;
          uVar123 = CONCAT13(bVar319,CONCAT12(bVar318,CONCAT11(bVar317,bVar315))) >> 2;
          uVar129 = CONCAT13(bVar324,CONCAT12(bVar323,CONCAT11(bVar322,bVar320))) >> 2;
          uVar134 = CONCAT13(bVar277,CONCAT12(bVar276,CONCAT11(bVar274,bVar272))) >> 2;
          uVar135 = CONCAT13(bVar285,CONCAT12(bVar283,CONCAT11(bVar281,bVar278))) >> 2;
          uVar142 = CONCAT13(bVar294,CONCAT12(bVar292,CONCAT11(bVar290,bVar287))) >> 2;
          uVar143 = CONCAT13(bVar303,CONCAT12(bVar301,CONCAT11(bVar299,bVar296))) >> 2;
          uVar108 = CONCAT13(bVar240,CONCAT12(bVar238,CONCAT11(bVar236,bVar234))) >> 2;
          uVar114 = CONCAT13(bVar249,CONCAT12(bVar247,CONCAT11(bVar245,bVar242))) >> 2;
          uVar115 = CONCAT13(bVar257,CONCAT12(bVar255,CONCAT11(bVar253,bVar251))) >> 2;
          uVar119 = CONCAT13(bVar266,CONCAT12(bVar264,CONCAT11(bVar262,bVar259))) >> 2;
          uVar172 = (uint)((ulong)uVar124 >> 0x22);
          uVar168 = (uint)((ulong)uVar90 >> 0x22);
          uVar169 = (uint)((ulong)uVar103 >> 0x22);
          uVar160 = (uint)((ulong)uVar71 >> 0x22);
          uVar165 = (uint)((ulong)uVar79 >> 0x22);
          uVar149 = (uint)((ulong)uVar58 >> 0x22);
          uVar150 = (uint)((ulong)uVar64 >> 0x22);
          bVar305 = (byte)uVar120 | bVar305;
          bVar307 = (byte)(uVar120 >> 8) | bVar307;
          bVar308 = (byte)(uVar120 >> 0x10) | bVar308;
          bVar309 = bVar309 >> 2 | bVar309;
          bVar310 = (byte)uVar122 | bVar310;
          bVar312 = (byte)(uVar122 >> 8) | bVar312;
          bVar313 = (byte)(uVar122 >> 0x10) | bVar313;
          bVar314 = bVar314 >> 2 | bVar314;
          uVar173 = CONCAT13(bVar314,CONCAT12(bVar313,CONCAT11(bVar312,bVar310)));
          bVar315 = (byte)uVar123 | bVar315;
          bVar317 = (byte)(uVar123 >> 8) | bVar317;
          bVar318 = (byte)(uVar123 >> 0x10) | bVar318;
          bVar319 = bVar319 >> 2 | bVar319;
          bVar320 = (byte)uVar129 | bVar320;
          bVar322 = (byte)(uVar129 >> 8) | bVar322;
          bVar323 = (byte)(uVar129 >> 0x10) | bVar323;
          uVar270 = CONCAT16(bVar323,CONCAT15(bVar322,CONCAT14(bVar320,CONCAT13(bVar319,CONCAT12(
                                                  bVar318,CONCAT11(bVar317,bVar315))))));
          bVar324 = bVar324 >> 2 | bVar324;
          uVar271 = CONCAT17(bVar324,uVar270);
          bVar272 = (byte)uVar134 | bVar272;
          bVar274 = (byte)(uVar134 >> 8) | bVar274;
          bVar276 = (byte)(uVar134 >> 0x10) | bVar276;
          bVar277 = bVar277 >> 2 | bVar277;
          bVar278 = (byte)uVar135 | bVar278;
          bVar281 = (byte)(uVar135 >> 8) | bVar281;
          bVar283 = (byte)(uVar135 >> 0x10) | bVar283;
          bVar285 = bVar285 >> 2 | bVar285;
          uVar176 = CONCAT13(bVar285,CONCAT12(bVar283,CONCAT11(bVar281,bVar278)));
          bVar287 = (byte)uVar142 | bVar287;
          bVar290 = (byte)(uVar142 >> 8) | bVar290;
          bVar292 = (byte)(uVar142 >> 0x10) | bVar292;
          bVar294 = bVar294 >> 2 | bVar294;
          bVar296 = (byte)uVar143 | bVar296;
          bVar299 = (byte)(uVar143 >> 8) | bVar299;
          bVar301 = (byte)(uVar143 >> 0x10) | bVar301;
          bVar303 = bVar303 >> 2 | bVar303;
          uVar142 = CONCAT13(bVar303,CONCAT12(bVar301,CONCAT11(bVar299,bVar296)));
          bVar234 = (byte)uVar108 | bVar234;
          bVar236 = (byte)(uVar108 >> 8) | bVar236;
          bVar238 = (byte)(uVar108 >> 0x10) | bVar238;
          bVar240 = bVar240 >> 2 | bVar240;
          bVar242 = (byte)uVar114 | bVar242;
          bVar245 = (byte)(uVar114 >> 8) | bVar245;
          bVar247 = (byte)(uVar114 >> 0x10) | bVar247;
          bVar249 = bVar249 >> 2 | bVar249;
          uVar134 = CONCAT13(bVar249,CONCAT12(bVar247,CONCAT11(bVar245,bVar242)));
          bVar251 = (byte)uVar115 | bVar251;
          bVar253 = (byte)(uVar115 >> 8) | bVar253;
          bVar255 = (byte)(uVar115 >> 0x10) | bVar255;
          bVar257 = bVar257 >> 2 | bVar257;
          bVar259 = (byte)uVar119 | bVar259;
          bVar262 = (byte)(uVar119 >> 8) | bVar262;
          bVar264 = (byte)(uVar119 >> 0x10) | bVar264;
          bVar266 = bVar266 >> 2 | bVar266;
          uVar135 = CONCAT13(bVar266,CONCAT12(bVar264,CONCAT11(bVar262,bVar259)));
          bVar133 = (byte)(uVar95 >> 2) | bVar133;
          bVar140 = (byte)(uint3)(uVar95 >> 10) | bVar140;
          bVar141 = (byte)(ushort)(uVar95 >> 0x12) | bVar141;
          bVar338 = bVar338 >> 2 | bVar338;
          bVar342 = (byte)(uint)((ulong)uVar137 >> 0x22) | bVar342;
          bVar145 = (byte)(uint3)((ulong)uVar137 >> 0x2a) | bVar145;
          bVar146 = (byte)(ushort)((ulong)uVar137 >> 0x32) | bVar146;
          bVar147 = bVar147 >> 2 | bVar147;
          uVar123 = CONCAT13(bVar147,CONCAT12(bVar146,CONCAT11(bVar145,bVar342)));
          bVar148 = (byte)(uVar101 >> 2) | bVar148;
          bVar155 = (byte)(uint3)(uVar101 >> 10) | bVar155;
          bVar156 = (byte)(ushort)(uVar101 >> 0x12) | bVar156;
          bVar157 = bVar157 >> 2 | bVar157;
          bVar158 = (byte)(uint)((ulong)uVar152 >> 0x22) | bVar158;
          bVar162 = (byte)(uint3)((ulong)uVar152 >> 0x2a) | bVar162;
          bVar163 = (byte)(ushort)((ulong)uVar152 >> 0x32) | bVar163;
          bVar164 = bVar164 >> 2 | bVar164;
          uVar129 = CONCAT13(bVar164,CONCAT12(bVar163,CONCAT11(bVar162,bVar158)));
          bVar94 = (byte)(ushort)(uVar85 >> 0x12);
          bVar68 = (byte)(ushort)((ulong)uVar116 >> 0x32);
          bVar73 = (byte)((uint3)((ulong)uVar124 >> 0x2a) >> 8);
          uVar231 = CONCAT16(bVar73,CONCAT15((char)(uVar172 >> 8),
                                             CONCAT14((char)uVar172,
                                                      CONCAT13(bVar127 >> 2,(int3)(uVar88 >> 2)))));
          bVar53 = (byte)((uint3)((ulong)uVar90 >> 0x2a) >> 8);
          uVar218 = CONCAT16(bVar53,CONCAT15((char)(uVar168 >> 8),
                                             CONCAT14((char)uVar168,
                                                      CONCAT13(bVar93 >> 2,(int3)(uVar78 >> 2)))));
          bVar55 = (byte)((uint3)((ulong)uVar103 >> 0x2a) >> 8);
          uVar224 = CONCAT16(bVar55,CONCAT15((char)(uVar169 >> 8),
                                             CONCAT14((char)uVar169,
                                                      CONCAT13(bVar106 >> 2,(int3)(uVar84 >> 2)))));
          bVar51 = (byte)((uint3)((ulong)uVar71 >> 0x2a) >> 8);
          uVar186 = CONCAT16(bVar51,CONCAT15((char)(uVar160 >> 8),
                                             CONCAT14((char)uVar160,
                                                      CONCAT13(bVar74 >> 2,(int3)(uVar75 >> 2)))));
          bVar106 = (byte)((uint3)((ulong)uVar79 >> 0x2a) >> 8);
          uVar210 = CONCAT16(bVar106,CONCAT15((char)(uVar165 >> 8),
                                              CONCAT14((char)uVar165,
                                                       CONCAT13(bVar82 >> 2,(int3)(uVar76 >> 2)))));
          bVar74 = (byte)((uint3)((ulong)uVar58 >> 0x2a) >> 8);
          uVar57 = CONCAT16(bVar74,CONCAT15((char)(uVar149 >> 8),
                                            CONCAT14((char)uVar149,
                                                     CONCAT13(bVar60 >> 2,(int3)(uVar69 >> 2)))));
          bVar188 = (byte)((uint3)((ulong)uVar64 >> 0x2a) >> 8);
          uVar63 = CONCAT16(bVar188,CONCAT15((char)(uVar150 >> 8),
                                             CONCAT14((char)uVar150,
                                                      CONCAT13(bVar66 >> 2,(int3)(uVar70 >> 2)))));
          uVar69 = CONCAT13(bVar277,CONCAT12(bVar276,CONCAT11(bVar274,bVar272))) >> 1;
          uVar70 = uVar176 >> 1;
          uVar120 = CONCAT13(bVar294,CONCAT12(bVar292,CONCAT11(bVar290,bVar287))) >> 1;
          uVar122 = uVar142 >> 1;
          uVar114 = CONCAT13(bVar309,CONCAT12(bVar308,CONCAT11(bVar307,bVar305))) >> 1;
          uVar115 = uVar173 >> 1;
          uVar30 = ((ulong)uVar270 & 0xfffffffe) >> 1;
          uVar119 = (uint)((ulong)uVar271 >> 0x21);
          uVar88 = CONCAT13(bVar240,CONCAT12(bVar238,CONCAT11(bVar236,bVar234))) >> 1;
          uVar95 = uVar134 >> 1;
          uVar101 = CONCAT13(bVar257,CONCAT12(bVar255,CONCAT11(bVar253,bVar251))) >> 1;
          uVar108 = uVar135 >> 1;
          uVar75 = CONCAT13(bVar338,CONCAT12(bVar141,CONCAT11(bVar140,bVar133))) >> 1;
          uVar76 = uVar123 >> 1;
          uVar78 = CONCAT13(bVar157,CONCAT12(bVar156,CONCAT11(bVar155,bVar148))) >> 1;
          uVar84 = uVar129 >> 1;
          uVar215 = CONCAT12(bVar94,CONCAT11((char)(uint3)(uVar85 >> 10),(char)(uVar85 >> 2))) >> 1;
          uVar221 = CONCAT12(bVar68,CONCAT11((char)(uint3)((ulong)uVar116 >> 0x2a),
                                             (char)(uint)((ulong)uVar116 >> 0x22))) >> 1;
          uVar125 = ((ulong)uVar231 & 0xfffffffe) >> 1;
          uVar7 = (uint3)(uVar231 >> 0x21);
          uVar91 = ((ulong)uVar218 & 0xfffffffe) >> 1;
          uVar8 = (uint3)(uVar218 >> 0x21);
          uVar104 = ((ulong)uVar224 & 0xfffffffe) >> 1;
          uVar9 = (uint3)(uVar224 >> 0x21);
          uVar72 = ((ulong)uVar186 & 0xfffffffe) >> 1;
          uVar10 = (uint3)(uVar186 >> 0x21);
          uVar80 = ((ulong)uVar210 & 0xfffffffe) >> 1;
          uVar11 = (uint3)(uVar210 >> 0x21);
          uVar59 = ((ulong)uVar57 & 0xfffffffe) >> 1;
          uVar12 = (uint3)(uVar57 >> 0x21);
          uVar65 = ((ulong)uVar63 & 0xfffffffe) >> 1;
          uVar13 = (uint3)(uVar63 >> 0x21);
          bVar272 = (byte)uVar69 | bVar272;
          bVar285 = bVar285 >> 1 | bVar285;
          bVar287 = (byte)uVar120 | bVar287;
          bVar303 = bVar303 >> 1 | bVar303;
          bVar68 = bVar68 >> 1;
          bVar73 = bVar73 >> 1;
          bVar127 = (byte)uVar8;
          bVar53 = bVar53 >> 1;
          bVar54 = (byte)uVar9;
          bVar55 = bVar55 >> 1;
          bVar82 = (byte)uVar10;
          bVar51 = bVar51 >> 1;
          bVar93 = (byte)uVar11;
          bVar106 = bVar106 >> 1;
          bVar60 = (byte)uVar12;
          bVar74 = bVar74 >> 1;
          bVar66 = (byte)uVar13;
          bVar188 = bVar188 >> 1;
          uVar69 = CONCAT13(bVar277 >> 1 | bVar277,
                            CONCAT12((byte)(uVar69 >> 0x10) | bVar276,
                                     CONCAT11((byte)(uVar69 >> 8) | bVar274,bVar272)));
          uVar181 = CONCAT17(bVar285,CONCAT16((byte)((uint3)(uVar176 >> 9) >> 8) | bVar283,
                                              CONCAT15((byte)(uVar70 >> 8) | bVar281,
                                                       CONCAT14((byte)uVar70 | bVar278,uVar69)))) &
                    0x1111111111111111;
          uVar70 = CONCAT13(bVar294 >> 1 | bVar294,
                            CONCAT12((byte)(uVar120 >> 0x10) | bVar292,
                                     CONCAT11((byte)(uVar120 >> 8) | bVar290,bVar287)));
          uVar183 = CONCAT17(bVar303,CONCAT16((byte)((uint3)(uVar142 >> 9) >> 8) | bVar301,
                                              CONCAT15((byte)(uVar122 >> 8) | bVar299,
                                                       CONCAT14((byte)uVar122 | bVar296,uVar70)))) &
                    0x1111111111111111;
          uVar174 = CONCAT17(bVar314 >> 1 | bVar314,
                             CONCAT16((byte)((uint3)(uVar173 >> 9) >> 8) | bVar313,
                                      CONCAT15((byte)(uVar115 >> 8) | bVar312,
                                               CONCAT14((byte)uVar115 | bVar310,
                                                        CONCAT13(bVar309 >> 1 | bVar309,
                                                                 CONCAT12((byte)(uVar114 >> 0x10) |
                                                                          bVar308,CONCAT11((byte)(
                                                  uVar114 >> 8) | bVar307,(byte)uVar114 | bVar305)))
                                                  )))) & 0x1111111111111111;
          uVar178 = CONCAT17(bVar324 >> 1 | bVar324,
                             CONCAT16((byte)((uint3)((ulong)uVar271 >> 0x29) >> 8) | bVar323,
                                      CONCAT15((byte)(uVar119 >> 8) | bVar322,
                                               CONCAT14((byte)uVar119 | bVar320,
                                                        CONCAT13((byte)(uVar30 >> 0x18) | bVar319,
                                                                 CONCAT12((byte)(uVar30 >> 0x10) |
                                                                          bVar318,CONCAT11((byte)(
                                                  uVar30 >> 8) | bVar317,(byte)uVar30 | bVar315)))))
                                     )) & 0x1111111111111111;
          uVar166 = CONCAT17(bVar249 >> 1 | bVar249,
                             CONCAT16((byte)((uint3)(uVar134 >> 9) >> 8) | bVar247,
                                      CONCAT15((byte)(uVar95 >> 8) | bVar245,
                                               CONCAT14((byte)uVar95 | bVar242,
                                                        CONCAT13(bVar240 >> 1 | bVar240,
                                                                 CONCAT12((byte)(uVar88 >> 0x10) |
                                                                          bVar238,CONCAT11((byte)(
                                                  uVar88 >> 8) | bVar236,(byte)uVar88 | bVar234)))))
                                     )) & 0x1111111111111111;
          uVar170 = CONCAT17(bVar266 >> 1 | bVar266,
                             CONCAT16((byte)((uint3)(uVar135 >> 9) >> 8) | bVar264,
                                      CONCAT15((byte)(uVar108 >> 8) | bVar262,
                                               CONCAT14((byte)uVar108 | bVar259,
                                                        CONCAT13(bVar257 >> 1 | bVar257,
                                                                 CONCAT12((byte)(uVar101 >> 0x10) |
                                                                          bVar255,CONCAT11((byte)(
                                                  uVar101 >> 8) | bVar253,(byte)uVar101 | bVar251)))
                                                  )))) & 0x1111111111111111;
          uVar138 = CONCAT17(bVar147 >> 1 | bVar147,
                             CONCAT16((byte)((uint3)(uVar123 >> 9) >> 8) | bVar146,
                                      CONCAT15((byte)(uVar76 >> 8) | bVar145,
                                               CONCAT14((byte)uVar76 | bVar342,
                                                        CONCAT13(bVar338 >> 1 | bVar338,
                                                                 CONCAT12((byte)(uVar75 >> 0x10) |
                                                                          bVar141,CONCAT11((byte)(
                                                  uVar75 >> 8) | bVar140,(byte)uVar75 | bVar133)))))
                                     )) & 0x1111111111111111;
          uVar153 = CONCAT17(bVar164 >> 1 | bVar164,
                             CONCAT16((byte)((uint3)(uVar129 >> 9) >> 8) | bVar163,
                                      CONCAT15((byte)(uVar84 >> 8) | bVar162,
                                               CONCAT14((byte)uVar84 | bVar158,
                                                        CONCAT13(bVar157 >> 1 | bVar157,
                                                                 CONCAT12((byte)(uVar78 >> 0x10) |
                                                                          bVar156,CONCAT11((byte)(
                                                  uVar78 >> 8) | bVar155,(byte)uVar78 | bVar148)))))
                                     )) & 0x1111111111111111;
          uVar30 = CONCAT17(bVar99 >> 3,
                            CONCAT16(bVar53,CONCAT15((char)(uVar8 >> 8),
                                                     CONCAT14(bVar127,(int)uVar91))));
          uVar26 = CONCAT17(bVar112 >> 3,
                            CONCAT16(bVar55,CONCAT15((char)(uVar9 >> 8),
                                                     CONCAT14(bVar54,(int)uVar104))));
          uVar22 = CONCAT17(bVar77 >> 3,
                            CONCAT16(bVar51,CONCAT15((char)(uVar10 >> 8),
                                                     CONCAT14(bVar82,(int)uVar72))));
          uVar81 = CONCAT17(bVar87 >> 3,
                            CONCAT16(bVar106,CONCAT15((char)(uVar11 >> 8),
                                                      CONCAT14(bVar93,(int)uVar80))));
          uVar92 = CONCAT17(bVar61 >> 3,
                            CONCAT16(bVar74,CONCAT15((char)(uVar12 >> 8),
                                                     CONCAT14(bVar60,(int)uVar59))));
          uVar105 = CONCAT17(bVar67 >> 3,
                             CONCAT16(bVar188,CONCAT15((char)(uVar13 >> 8),
                                                       CONCAT14(bVar66,(int)uVar65))));
          uVar172 = (uVar69 & 0x11111111) >> 7;
          uVar173 = (uint)(uVar181 >> 0x27);
          uVar176 = (uVar70 & 0x11111111) >> 7;
          uVar177 = (uint)(uVar183 >> 0x27);
          uVar160 = (uint)uVar174 >> 7;
          uVar165 = (uint)(uVar174 >> 0x27);
          uVar168 = (uint)(uVar178 >> 7) & 0x1ffffff;
          uVar169 = (uint)(uVar178 >> 0x27);
          uVar142 = (uint)uVar166 >> 7;
          uVar143 = (uint)(uVar166 >> 0x27);
          uVar149 = (uint)uVar170 >> 7;
          uVar150 = (uint)(uVar170 >> 0x27);
          uVar115 = (uint)uVar138 >> 7;
          uVar119 = (uint)(uVar138 >> 0x27);
          uVar120 = (uint)(uVar153 >> 7) & 0x1ffffff;
          uVar122 = (uint)(uVar153 >> 0x27);
          uVar123 = CONCAT13(bVar118 >> 3,uVar215) >> 7;
          uVar129 = (uint)(((ulong)CONCAT12(bVar121 >> 3,CONCAT11(bVar68,(char)(uVar221 >> 8))) <<
                           0x28) >> 0x27);
          uVar134 = (uint)uVar125 >> 7;
          uVar135 = (uint)(((ulong)CONCAT12(bVar132 >> 3,CONCAT11(bVar73,(char)(uVar7 >> 8))) <<
                           0x28) >> 0x27);
          uVar95 = (uint)(uVar30 >> 7) & 0x1ffffff;
          uVar101 = (uint)(uVar30 >> 0x27);
          uVar108 = (uint)(uVar26 >> 7) & 0x1ffffff;
          uVar114 = (uint)(uVar26 >> 0x27);
          uVar78 = (uint)(uVar22 >> 7) & 0x1ffffff;
          uVar84 = (uint)(uVar22 >> 0x27);
          uVar85 = (uint)(uVar81 >> 7) & 0x1ffffff;
          uVar88 = (uint)(uVar81 >> 0x27);
          uVar69 = (uint)(uVar92 >> 7) & 0x1ffffff;
          uVar70 = (uint)(uVar92 >> 0x27);
          uVar75 = (uint)(uVar105 >> 7) & 0x1ffffff;
          uVar76 = (uint)(uVar105 >> 0x27);
          uVar184 = param_3[1];
          uVar182 = *param_3;
          uVar179 = param_3[3];
          uVar175 = param_3[2];
          uVar171 = param_3[5];
          uVar167 = param_3[4];
          uVar154 = param_3[7];
          uVar139 = param_3[6];
          uVar126 = param_3[9];
          uVar117 = param_3[8];
          uVar105 = param_3[0xb];
          uVar92 = param_3[10];
          uVar81 = param_3[0xd];
          uVar22 = param_3[0xc];
          uVar26 = param_3[0xf];
          uVar30 = param_3[0xe];
          ((undefined8 *)((long)param_6 + lVar18))[1] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar122 >> 0x10) |
                                                    (byte)(uVar153 >> 0x30)) << 0x30) >> 0x2e) |
                        (byte)uVar122 | (byte)(uVar153 >> 0x20),
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar120 >> 0x10) |
                                                             (byte)(uVar153 >> 0x10)) << 0x10) >>
                                       0xe) | (byte)uVar120 | (byte)uVar153,
                                 CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uVar119 >> 0x10) |
                                                                       (byte)(uVar138 >> 0x30)) <<
                                                         0x30) >> 0x2e) |
                                          (byte)uVar119 | (byte)(uVar138 >> 0x20),
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar115 >> 0x10) | (byte)(uVar138 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar115 | (byte)uVar138,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar150 >> 0x10) | (byte)(uVar170 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar150 | (byte)(uVar170 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar149 >> 0x10) | (byte)(uVar170 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar149 | (byte)uVar170,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar143 >> 0x10) | (byte)(uVar166 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar143 | (byte)(uVar166 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar142 >>
                                                                                     0x10) |
                                                                              (byte)(uVar166 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)uVar142 | (byte)uVar166)))))));
          *(undefined8 *)((long)param_6 + lVar18) =
               CONCAT17((byte)(((uint)(((ulong)CONCAT11(bVar303,(byte)(uVar177 >> 0x10) |
                                                                (byte)(uVar183 >> 0x30)) << 0x30) >>
                                      0x20) & 0x11ffffff) >> 0xe) |
                        (byte)uVar177 | (byte)(uVar183 >> 0x20),
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar176 >> 0x10) |
                                                             (byte)(uVar183 >> 0x10)) << 0x10) >>
                                       0xe) | (byte)uVar176 | bVar287 & 0x11,
                                 CONCAT15((byte)(((uint)(((ulong)CONCAT11(bVar285,(byte)(uVar173 >>
                                                                                        0x10) |
                                                                                  (byte)(uVar181 >>
                                                                                        0x30)) <<
                                                         0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                          (byte)uVar173 | (byte)(uVar181 >> 0x20),
                                          CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar172 >>
                                                                                      0x10) |
                                                                               (byte)(uVar181 >>
                                                                                     0x10)) << 0x10)
                                                         >> 0xe) | (byte)uVar172 | bVar272 & 0x11,
                                                   CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar169 >> 0x10) | (byte)(uVar178 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar169 | (byte)(uVar178 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar168 >> 0x10) | (byte)(uVar178 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar168 | (byte)uVar178,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar165 >> 0x10) | (byte)(uVar174 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar165 | (byte)(uVar174 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar160 >>
                                                                                     0x10) |
                                                                              (byte)(uVar174 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)uVar160 | (byte)uVar174)))))));
          ((undefined8 *)((long)param_5 + lVar18))[1] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar76 >> 0x10) | bVar188) << 0x30) >>
                                     0x2e) | (byte)uVar76 | bVar66,
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar75 >> 0x10) |
                                                             (byte)(uVar65 >> 0x10)) << 0x10) >> 0xe
                                       ) | (byte)uVar75 | (byte)uVar65,
                                 CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uVar70 >> 0x10) |
                                                                       bVar74) << 0x30) >> 0x2e) |
                                          (byte)uVar70 | bVar60,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar69 >> 0x10) | (byte)(uVar59 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar69 | (byte)uVar59,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar88 >> 0x10) | bVar106) << 0x30) >> 0x2e) |
                                                  (byte)uVar88 | bVar93,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar85 >> 0x10) | (byte)(uVar80 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar85 | (byte)uVar80,
                                                  CONCAT11((byte)(ushort)(((uint7)(byte)((byte)(
                                                  uVar84 >> 0x10) | bVar51) << 0x30) >> 0x2e) |
                                                  (byte)uVar84 | bVar82,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar78
                                                                                             >> 0x10
                                                  ) | (byte)(uVar72 >> 0x10)) << 0x10) >> 0xe) |
                                                  (byte)uVar78 | (byte)uVar72)))))));
          *(undefined8 *)((long)param_5 + lVar18) =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar135 >> 0x10) | bVar73) << 0x30) >>
                                     0x2e) | (byte)uVar135 | (byte)uVar7,
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar134 >> 0x10) |
                                                             (byte)(uVar125 >> 0x10)) << 0x10) >>
                                       0xe) | (byte)uVar134 | (byte)uVar125,
                                 CONCAT15((byte)(uint3)(((uint7)(byte)((byte)(uVar129 >> 0x10) |
                                                                      bVar68) << 0x30) >> 0x2e) |
                                          (byte)uVar129 | (byte)uVar221,
                                          CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar123 >>
                                                                                      0x10) |
                                                                               bVar94 >> 1) << 0x10)
                                                         >> 0xe) | (byte)uVar123 | (byte)uVar215,
                                                   CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar114 >> 0x10) | bVar55) << 0x30) >> 0x2e) |
                                                  (byte)uVar114 | bVar54,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar108 >> 0x10) | (byte)(uVar104 >> 0x10)) <<
                                                  0x10) >> 0xe) | (byte)uVar108 | (byte)uVar104,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar101 >> 0x10) | bVar53) << 0x30) >> 0x2e) |
                                                  (byte)uVar101 | bVar127,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar95 >> 0x10
                                                                                     ) |
                                                                              (byte)(uVar91 >> 0x10)
                                                                              ) << 0x10) >> 0xe) |
                                                  (byte)uVar95 | (byte)uVar91)))))));
          lVar18 = lVar18 + 0x10;
          param_3[1] = uVar184 & 0x3f3f3f3f3f3f3f3f;
          *param_3 = uVar182 & 0x3f3f3f3f3f3f3f3f;
          param_3[3] = uVar179 & 0x3f3f3f3f3f3f3f3f;
          param_3[2] = uVar175 & 0x3f3f3f3f3f3f3f3f;
          param_3[5] = uVar171 & 0x3f3f3f3f3f3f3f3f;
          param_3[4] = uVar167 & 0x3f3f3f3f3f3f3f3f;
          param_3[7] = uVar154 & 0x3f3f3f3f3f3f3f3f;
          param_3[6] = uVar139 & 0x3f3f3f3f3f3f3f3f;
          param_3[9] = uVar126 & 0x3f3f3f3f3f3f3f3f;
          param_3[8] = uVar117 & 0x3f3f3f3f3f3f3f3f;
          param_3[0xb] = uVar105 & 0x3f3f3f3f3f3f3f3f;
          param_3[10] = uVar92 & 0x3f3f3f3f3f3f3f3f;
          param_3[0xd] = uVar81 & 0x3f3f3f3f3f3f3f3f;
          param_3[0xc] = uVar22 & 0x3f3f3f3f3f3f3f3f;
          param_3[0xf] = uVar26 & 0x3f3f3f3f3f3f3f3f;
          param_3[0xe] = uVar30 & 0x3f3f3f3f3f3f3f3f;
          param_3 = param_3 + 0x10;
        } while (lVar18 != 0x20);
      }
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar15,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
      }
      return;
    }
  } while( true );
}


