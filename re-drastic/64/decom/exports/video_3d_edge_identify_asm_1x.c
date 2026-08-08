/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_identify_asm_1x
 * Address  : 0019bd78
 * Program  : drastic64
 */


undefined  [16]
video_3d_edge_identify_asm_1x
          (byte *param_1,undefined *param_2,undefined *param_3,undefined *param_4,undefined4 param_5
          )

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined *puVar55;
  undefined *puVar56;
  byte *pbVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  int iVar77;
  undefined uVar78;
  undefined uVar79;
  undefined uVar80;
  undefined uVar81;
  undefined uVar82;
  undefined uVar83;
  undefined uVar84;
  undefined uVar85;
  undefined uVar86;
  undefined uVar87;
  undefined uVar88;
  undefined uVar89;
  undefined uVar90;
  undefined uVar91;
  undefined uVar92;
  undefined uVar93;
  undefined uVar94;
  undefined uVar95;
  undefined uVar96;
  undefined uVar97;
  undefined uVar98;
  undefined uVar99;
  undefined uVar100;
  undefined uVar101;
  undefined uVar102;
  undefined uVar103;
  undefined uVar104;
  undefined uVar105;
  undefined uVar106;
  undefined uVar107;
  undefined uVar108;
  undefined uVar109;
  undefined uVar110;
  undefined uVar111;
  undefined uVar112;
  undefined uVar113;
  undefined uVar114;
  undefined uVar115;
  undefined uVar116;
  undefined uVar117;
  undefined uVar118;
  undefined uVar119;
  undefined uVar120;
  undefined uVar121;
  undefined uVar122;
  undefined uVar123;
  undefined uVar124;
  undefined uVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  undefined in_q4 [16];
  undefined auVar142 [16];
  undefined auVar143 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined in_q5 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined auVar159 [16];
  undefined auVar160 [16];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  undefined auVar165 [16];
  undefined auVar166 [16];
  undefined auVar167 [16];
  undefined in_q6 [16];
  undefined auVar168 [16];
  undefined auVar169 [16];
  undefined auVar170 [16];
  undefined auVar171 [16];
  undefined auVar172 [16];
  undefined auVar173 [16];
  undefined auVar174 [16];
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar177 [16];
  undefined auVar178 [16];
  undefined auVar179 [16];
  undefined auVar180 [16];
  undefined auVar181 [16];
  undefined auVar182 [16];
  undefined auVar183 [16];
  undefined auVar184 [16];
  undefined auVar185 [16];
  undefined auVar186 [16];
  undefined auVar187 [16];
  undefined auVar188 [16];
  undefined auVar189 [16];
  undefined auVar190 [16];
  undefined auVar191 [16];
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar194 [16];
  undefined auVar195 [16];
  undefined auVar196 [16];
  undefined auVar197 [16];
  undefined auVar198 [16];
  undefined auVar199 [16];
  undefined auVar200 [16];
  undefined auVar201 [16];
  undefined auVar202 [16];
  undefined auVar203 [16];
  undefined auVar204 [16];
  undefined auVar205 [16];
  undefined auVar206 [16];
  undefined auVar207 [16];
  undefined auVar208 [16];
  undefined auVar209 [16];
  undefined auVar210 [16];
  undefined auVar211 [16];
  undefined auVar212 [16];
  undefined uStack_d;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  byte *pbVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  byte *pbVar68;
  byte *pbVar69;
  byte *pbVar70;
  byte *pbVar71;
  
  iVar77 = 0xe0;
  uVar78 = *param_3;
  uVar94 = param_3[1];
  uVar110 = param_3[2];
  bVar126 = param_3[3];
  uVar79 = param_3[4];
  uVar95 = param_3[5];
  uVar111 = param_3[6];
  bVar127 = param_3[7];
  uVar80 = param_3[8];
  uVar96 = param_3[9];
  uVar112 = param_3[10];
  bVar128 = param_3[0xb];
  uVar81 = param_3[0xc];
  uVar97 = param_3[0xd];
  uVar113 = param_3[0xe];
  bVar129 = param_3[0xf];
  uVar82 = param_3[0x10];
  uVar98 = param_3[0x11];
  uVar114 = param_3[0x12];
  bVar130 = param_3[0x13];
  uVar83 = param_3[0x14];
  uVar99 = param_3[0x15];
  uVar115 = param_3[0x16];
  bVar131 = param_3[0x17];
  uVar84 = param_3[0x18];
  uVar100 = param_3[0x19];
  uVar116 = param_3[0x1a];
  bVar132 = param_3[0x1b];
  uVar85 = param_3[0x1c];
  uVar101 = param_3[0x1d];
  uVar117 = param_3[0x1e];
  bVar133 = param_3[0x1f];
  uVar86 = param_3[0x20];
  uVar102 = param_3[0x21];
  uVar118 = param_3[0x22];
  uVar87 = param_3[0x24];
  uVar103 = param_3[0x25];
  uVar119 = param_3[0x26];
  uVar88 = param_3[0x28];
  uVar104 = param_3[0x29];
  uVar120 = param_3[0x2a];
  uVar89 = param_3[0x2c];
  uVar105 = param_3[0x2d];
  uVar121 = param_3[0x2e];
  uVar90 = param_3[0x30];
  uVar106 = param_3[0x31];
  uVar122 = param_3[0x32];
  uVar91 = param_3[0x34];
  uVar107 = param_3[0x35];
  uVar123 = param_3[0x36];
  uVar92 = param_3[0x38];
  uVar108 = param_3[0x39];
  uVar124 = param_3[0x3a];
  uVar93 = param_3[0x3c];
  uVar109 = param_3[0x3d];
  uVar125 = param_3[0x3e];
  uStack_d = (undefined)((uint)param_5 >> 0x18);
  auVar201[1] = uStack_d;
  auVar201[0] = uStack_d;
  auVar201[2] = uStack_d;
  auVar201[3] = uStack_d;
  auVar201[4] = uStack_d;
  auVar201[5] = uStack_d;
  auVar201[6] = uStack_d;
  auVar201[7] = uStack_d;
  auVar201[8] = uStack_d;
  auVar201[9] = uStack_d;
  auVar201[10] = uStack_d;
  auVar201[11] = uStack_d;
  auVar201[12] = uStack_d;
  auVar201[13] = uStack_d;
  auVar201[14] = uStack_d;
  auVar201[15] = uStack_d;
  auVar142[1] = uVar79;
  auVar142[0] = uVar78;
  auVar142[2] = uVar80;
  auVar142[3] = uVar81;
  auVar142[4] = uVar82;
  auVar142[5] = uVar83;
  auVar142[6] = uVar84;
  auVar142[7] = uVar85;
  auVar142[8] = uVar86;
  auVar142[9] = uVar87;
  auVar142[10] = uVar88;
  auVar142[11] = uVar89;
  auVar142[12] = uVar90;
  auVar142[13] = uVar91;
  auVar142[14] = uVar92;
  auVar142[15] = uVar93;
  auVar142 = NEON_ext(in_q4,auVar142,0xf,1);
  auVar154[1] = uVar95;
  auVar154[0] = uVar94;
  auVar154[2] = uVar96;
  auVar154[3] = uVar97;
  auVar154[4] = uVar98;
  auVar154[5] = uVar99;
  auVar154[6] = uVar100;
  auVar154[7] = uVar101;
  auVar154[8] = uVar102;
  auVar154[9] = uVar103;
  auVar154[10] = uVar104;
  auVar154[11] = uVar105;
  auVar154[12] = uVar106;
  auVar154[13] = uVar107;
  auVar154[14] = uVar108;
  auVar154[15] = uVar109;
  auVar153 = NEON_ext(in_q5,auVar154,0xf,1);
  auVar169[1] = uVar111;
  auVar169[0] = uVar110;
  auVar169[2] = uVar112;
  auVar169[3] = uVar113;
  auVar169[4] = uVar114;
  auVar169[5] = uVar115;
  auVar169[6] = uVar116;
  auVar169[7] = uVar117;
  auVar169[8] = uVar118;
  auVar169[9] = uVar119;
  auVar169[10] = uVar120;
  auVar169[11] = uVar121;
  auVar169[12] = uVar122;
  auVar169[13] = uVar123;
  auVar169[14] = uVar124;
  auVar169[15] = uVar125;
  auVar168 = NEON_ext(in_q6,auVar169,0xf,1);
  auVar196[1] = bVar127;
  auVar196[0] = bVar126;
  auVar196[2] = bVar128;
  auVar196[3] = bVar129;
  auVar196[4] = bVar130;
  auVar196[5] = bVar131;
  auVar196[6] = bVar132;
  auVar196[7] = bVar133;
  auVar196[8] = param_3[0x23];
  auVar196[9] = param_3[0x27];
  auVar196[10] = param_3[0x2b];
  auVar196[11] = param_3[0x2f];
  auVar196[12] = param_3[0x33];
  auVar196[13] = param_3[0x37];
  auVar196[14] = param_3[0x3b];
  auVar196[15] = param_3[0x3f];
  auVar183 = NEON_ext(auVar201,auVar196,0xf,1);
  auVar205._0_8_ = auVar183._0_8_ & 0x3f3f3f3f3f3f3f3f;
  auVar205[8] = auVar183[8] & 0x3f;
  auVar205[9] = auVar183[9] & 0x3f;
  auVar205[10] = auVar183[10] & 0x3f;
  auVar205[11] = auVar183[11] & 0x3f;
  auVar205[12] = auVar183[12] & 0x3f;
  auVar205[13] = auVar183[13] & 0x3f;
  auVar205[14] = auVar183[14] & 0x3f;
  auVar205[15] = auVar183[15] & 0x3f;
  bVar134 = param_3[0x23] & 0x7f ^ 0x40;
  bVar135 = param_3[0x27] & 0x7f ^ 0x40;
  bVar136 = param_3[0x2b] & 0x7f ^ 0x40;
  bVar137 = param_3[0x2f] & 0x7f ^ 0x40;
  bVar138 = param_3[0x33] & 0x7f ^ 0x40;
  bVar139 = param_3[0x37] & 0x7f ^ 0x40;
  bVar140 = param_3[0x3b] & 0x7f ^ 0x40;
  bVar141 = param_3[0x3f] & 0x7f ^ 0x40;
  auVar171[1] = uVar111;
  auVar171[0] = uVar110;
  auVar171[2] = uVar112;
  auVar171[3] = uVar113;
  auVar171[4] = uVar114;
  auVar171[5] = uVar115;
  auVar171[6] = uVar116;
  auVar171[7] = uVar117;
  auVar171[8] = uVar118;
  auVar171[9] = uVar119;
  auVar171[10] = uVar120;
  auVar171[11] = uVar121;
  auVar171[12] = uVar122;
  auVar171[13] = uVar123;
  auVar171[14] = uVar124;
  auVar171[15] = uVar125;
  auVar196 = NEON_cmeq(auVar171,auVar168,1);
  auVar156[1] = uVar95;
  auVar156[0] = uVar94;
  auVar156[2] = uVar96;
  auVar156[3] = uVar97;
  auVar156[4] = uVar98;
  auVar156[5] = uVar99;
  auVar156[6] = uVar100;
  auVar156[7] = uVar101;
  auVar156[8] = uVar102;
  auVar156[9] = uVar103;
  auVar156[10] = uVar104;
  auVar156[11] = uVar105;
  auVar156[12] = uVar106;
  auVar156[13] = uVar107;
  auVar156[14] = uVar108;
  auVar156[15] = uVar109;
  auVar201 = NEON_cmeq(auVar156,auVar153,1);
  auVar197[1] = uVar111;
  auVar197[0] = uVar110;
  auVar197[2] = uVar112;
  auVar197[3] = uVar113;
  auVar197[4] = uVar114;
  auVar197[5] = uVar115;
  auVar197[6] = uVar116;
  auVar197[7] = uVar117;
  auVar197[8] = uVar118;
  auVar197[9] = uVar119;
  auVar197[10] = uVar120;
  auVar197[11] = uVar121;
  auVar197[12] = uVar122;
  auVar197[13] = uVar123;
  auVar197[14] = uVar124;
  auVar197[15] = uVar125;
  auVar169 = NEON_cmhi(auVar168,auVar197,1);
  auVar158[1] = uVar95;
  auVar158[0] = uVar94;
  auVar158[2] = uVar96;
  auVar158[3] = uVar97;
  auVar158[4] = uVar98;
  auVar158[5] = uVar99;
  auVar158[6] = uVar100;
  auVar158[7] = uVar101;
  auVar158[8] = uVar102;
  auVar158[9] = uVar103;
  auVar158[10] = uVar104;
  auVar158[11] = uVar105;
  auVar158[12] = uVar106;
  auVar158[13] = uVar107;
  auVar158[14] = uVar108;
  auVar158[15] = uVar109;
  auVar154 = NEON_cmhi(auVar153,auVar158,1);
  auVar153[1] = uVar79;
  auVar153[0] = uVar78;
  auVar153[2] = uVar80;
  auVar153[3] = uVar81;
  auVar153[4] = uVar82;
  auVar153[5] = uVar83;
  auVar153[6] = uVar84;
  auVar153[7] = uVar85;
  auVar153[8] = uVar86;
  auVar153[9] = uVar87;
  auVar153[10] = uVar88;
  auVar153[11] = uVar89;
  auVar153[12] = uVar90;
  auVar153[13] = uVar91;
  auVar153[14] = uVar92;
  auVar153[15] = uVar93;
  auVar142 = NEON_cmhi(auVar142,auVar153,1);
  auVar202[8] = bVar134;
  auVar202._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar202[9] = bVar135;
  auVar202[10] = bVar136;
  auVar202[11] = bVar137;
  auVar202[12] = bVar138;
  auVar202[13] = bVar139;
  auVar202[14] = bVar140;
  auVar202[15] = bVar141;
  auVar205 = NEON_cmeq(auVar202,auVar205,1);
  auVar143[0] = param_3[4];
  auVar155[0] = param_3[5];
  auVar170[0] = param_3[6];
  auVar143[1] = param_3[8];
  auVar155[1] = param_3[9];
  auVar170[1] = param_3[10];
  auVar143[2] = param_3[0xc];
  auVar155[2] = param_3[0xd];
  auVar170[2] = param_3[0xe];
  auVar143[3] = param_3[0x10];
  auVar155[3] = param_3[0x11];
  auVar170[3] = param_3[0x12];
  auVar143[4] = param_3[0x14];
  auVar155[4] = param_3[0x15];
  auVar170[4] = param_3[0x16];
  auVar143[5] = param_3[0x18];
  auVar155[5] = param_3[0x19];
  auVar170[5] = param_3[0x1a];
  auVar143[6] = param_3[0x1c];
  auVar155[6] = param_3[0x1d];
  auVar170[6] = param_3[0x1e];
  auVar143[7] = param_3[0x20];
  auVar155[7] = param_3[0x21];
  auVar170[7] = param_3[0x22];
  auVar143[8] = param_3[0x24];
  auVar155[8] = param_3[0x25];
  auVar170[8] = param_3[0x26];
  auVar143[9] = param_3[0x28];
  auVar155[9] = param_3[0x29];
  auVar170[9] = param_3[0x2a];
  auVar143[10] = param_3[0x2c];
  auVar155[10] = param_3[0x2d];
  auVar170[10] = param_3[0x2e];
  auVar143[11] = param_3[0x30];
  auVar155[11] = param_3[0x31];
  auVar170[11] = param_3[0x32];
  auVar143[12] = param_3[0x34];
  auVar155[12] = param_3[0x35];
  auVar170[12] = param_3[0x36];
  auVar143[13] = param_3[0x38];
  auVar155[13] = param_3[0x39];
  auVar170[13] = param_3[0x3a];
  auVar143[14] = param_3[0x3c];
  auVar155[14] = param_3[0x3d];
  auVar170[14] = param_3[0x3e];
  auVar143[15] = param_3[0x40];
  auVar155[15] = param_3[0x41];
  auVar170[15] = param_3[0x42];
  puVar55 = param_3 + 0x44;
  auVar184._0_8_ =
       CONCAT17(param_3[0x23],
                CONCAT16(param_3[0x1f],
                         CONCAT15(param_3[0x1b],
                                  CONCAT14(param_3[0x17],
                                           CONCAT13(param_3[0x13],
                                                    CONCAT12(param_3[0xf],
                                                             CONCAT11(param_3[0xb],param_3[7])))))))
       & 0x3f3f3f3f3f3f3f3f;
  auVar184[8] = param_3[0x27] & 0x3f;
  auVar184[9] = param_3[0x2b] & 0x3f;
  auVar184[10] = param_3[0x2f] & 0x3f;
  auVar184[11] = param_3[0x33] & 0x3f;
  auVar184[12] = param_3[0x37] & 0x3f;
  auVar184[13] = param_3[0x3b] & 0x3f;
  auVar184[14] = param_3[0x3f] & 0x3f;
  auVar184[15] = param_3[0x43] & 0x3f;
  auVar198[1] = uVar111;
  auVar198[0] = uVar110;
  auVar198[2] = uVar112;
  auVar198[3] = uVar113;
  auVar198[4] = uVar114;
  auVar198[5] = uVar115;
  auVar198[6] = uVar116;
  auVar198[7] = uVar117;
  auVar198[8] = uVar118;
  auVar198[9] = uVar119;
  auVar198[10] = uVar120;
  auVar198[11] = uVar121;
  auVar198[12] = uVar122;
  auVar198[13] = uVar123;
  auVar198[14] = uVar124;
  auVar198[15] = uVar125;
  auVar197 = NEON_cmeq(auVar198,auVar170,1);
  auVar160[1] = uVar95;
  auVar160[0] = uVar94;
  auVar160[2] = uVar96;
  auVar160[3] = uVar97;
  auVar160[4] = uVar98;
  auVar160[5] = uVar99;
  auVar160[6] = uVar100;
  auVar160[7] = uVar101;
  auVar160[8] = uVar102;
  auVar160[9] = uVar103;
  auVar160[10] = uVar104;
  auVar160[11] = uVar105;
  auVar160[12] = uVar106;
  auVar160[13] = uVar107;
  auVar160[14] = uVar108;
  auVar160[15] = uVar109;
  auVar202 = NEON_cmeq(auVar160,auVar155,1);
  auVar203[1] = uVar111;
  auVar203[0] = uVar110;
  auVar203[2] = uVar112;
  auVar203[3] = uVar113;
  auVar203[4] = uVar114;
  auVar203[5] = uVar115;
  auVar203[6] = uVar116;
  auVar203[7] = uVar117;
  auVar203[8] = uVar118;
  auVar203[9] = uVar119;
  auVar203[10] = uVar120;
  auVar203[11] = uVar121;
  auVar203[12] = uVar122;
  auVar203[13] = uVar123;
  auVar203[14] = uVar124;
  auVar203[15] = uVar125;
  auVar171 = NEON_cmhi(auVar170,auVar203,1);
  auVar173[1] = uVar95;
  auVar173[0] = uVar94;
  auVar173[2] = uVar96;
  auVar173[3] = uVar97;
  auVar173[4] = uVar98;
  auVar173[5] = uVar99;
  auVar173[6] = uVar100;
  auVar173[7] = uVar101;
  auVar173[8] = uVar102;
  auVar173[9] = uVar103;
  auVar173[10] = uVar104;
  auVar173[11] = uVar105;
  auVar173[12] = uVar106;
  auVar173[13] = uVar107;
  auVar173[14] = uVar108;
  auVar173[15] = uVar109;
  auVar156 = NEON_cmhi(auVar155,auVar173,1);
  auVar168[1] = uVar79;
  auVar168[0] = uVar78;
  auVar168[2] = uVar80;
  auVar168[3] = uVar81;
  auVar168[4] = uVar82;
  auVar168[5] = uVar83;
  auVar168[6] = uVar84;
  auVar168[7] = uVar85;
  auVar168[8] = uVar86;
  auVar168[9] = uVar87;
  auVar168[10] = uVar88;
  auVar168[11] = uVar89;
  auVar168[12] = uVar90;
  auVar168[13] = uVar91;
  auVar168[14] = uVar92;
  auVar168[15] = uVar93;
  auVar153 = NEON_cmhi(auVar143,auVar168,1);
  auVar206[8] = bVar134;
  auVar206._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar206[9] = bVar135;
  auVar206[10] = bVar136;
  auVar206[11] = bVar137;
  auVar206[12] = bVar138;
  auVar206[13] = bVar139;
  auVar206[14] = bVar140;
  auVar206[15] = bVar141;
  auVar206 = NEON_cmeq(auVar206,auVar184,1);
  auVar144[0] = *param_2;
  auVar157[0] = param_2[1];
  auVar172[0] = param_2[2];
  auVar144[1] = param_2[4];
  auVar157[1] = param_2[5];
  auVar172[1] = param_2[6];
  auVar144[2] = param_2[8];
  auVar157[2] = param_2[9];
  auVar172[2] = param_2[10];
  auVar144[3] = param_2[0xc];
  auVar157[3] = param_2[0xd];
  auVar172[3] = param_2[0xe];
  auVar144[4] = param_2[0x10];
  auVar157[4] = param_2[0x11];
  auVar172[4] = param_2[0x12];
  auVar144[5] = param_2[0x14];
  auVar157[5] = param_2[0x15];
  auVar172[5] = param_2[0x16];
  auVar144[6] = param_2[0x18];
  auVar157[6] = param_2[0x19];
  auVar172[6] = param_2[0x1a];
  auVar144[7] = param_2[0x1c];
  auVar157[7] = param_2[0x1d];
  auVar172[7] = param_2[0x1e];
  auVar144[8] = param_2[0x20];
  auVar157[8] = param_2[0x21];
  auVar172[8] = param_2[0x22];
  auVar144[9] = param_2[0x24];
  auVar157[9] = param_2[0x25];
  auVar172[9] = param_2[0x26];
  auVar144[10] = param_2[0x28];
  auVar157[10] = param_2[0x29];
  auVar172[10] = param_2[0x2a];
  auVar144[11] = param_2[0x2c];
  auVar157[11] = param_2[0x2d];
  auVar172[11] = param_2[0x2e];
  auVar144[12] = param_2[0x30];
  auVar157[12] = param_2[0x31];
  auVar172[12] = param_2[0x32];
  auVar144[13] = param_2[0x34];
  auVar157[13] = param_2[0x35];
  auVar172[13] = param_2[0x36];
  auVar144[14] = param_2[0x38];
  auVar157[14] = param_2[0x39];
  auVar172[14] = param_2[0x3a];
  auVar144[15] = param_2[0x3c];
  auVar157[15] = param_2[0x3d];
  auVar172[15] = param_2[0x3e];
  auVar185._0_8_ =
       CONCAT17(param_2[0x1f],
                CONCAT16(param_2[0x1b],
                         CONCAT15(param_2[0x17],
                                  CONCAT14(param_2[0x13],
                                           CONCAT13(param_2[0xf],
                                                    CONCAT12(param_2[0xb],
                                                             CONCAT11(param_2[7],param_2[3]))))))) &
       0x3f3f3f3f3f3f3f3f;
  auVar185[8] = param_2[0x23] & 0x3f;
  auVar185[9] = param_2[0x27] & 0x3f;
  auVar185[10] = param_2[0x2b] & 0x3f;
  auVar185[11] = param_2[0x2f] & 0x3f;
  auVar185[12] = param_2[0x33] & 0x3f;
  auVar185[13] = param_2[0x37] & 0x3f;
  auVar185[14] = param_2[0x3b] & 0x3f;
  auVar185[15] = param_2[0x3f] & 0x3f;
  auVar207[1] = uVar111;
  auVar207[0] = uVar110;
  auVar207[2] = uVar112;
  auVar207[3] = uVar113;
  auVar207[4] = uVar114;
  auVar207[5] = uVar115;
  auVar207[6] = uVar116;
  auVar207[7] = uVar117;
  auVar207[8] = uVar118;
  auVar207[9] = uVar119;
  auVar207[10] = uVar120;
  auVar207[11] = uVar121;
  auVar207[12] = uVar122;
  auVar207[13] = uVar123;
  auVar207[14] = uVar124;
  auVar207[15] = uVar125;
  auVar198 = NEON_cmeq(auVar207,auVar172,1);
  auVar175[1] = uVar95;
  auVar175[0] = uVar94;
  auVar175[2] = uVar96;
  auVar175[3] = uVar97;
  auVar175[4] = uVar98;
  auVar175[5] = uVar99;
  auVar175[6] = uVar100;
  auVar175[7] = uVar101;
  auVar175[8] = uVar102;
  auVar175[9] = uVar103;
  auVar175[10] = uVar104;
  auVar175[11] = uVar105;
  auVar175[12] = uVar106;
  auVar175[13] = uVar107;
  auVar175[14] = uVar108;
  auVar175[15] = uVar109;
  auVar203 = NEON_cmeq(auVar175,auVar157,1);
  auVar209[1] = uVar111;
  auVar209[0] = uVar110;
  auVar209[2] = uVar112;
  auVar209[3] = uVar113;
  auVar209[4] = uVar114;
  auVar209[5] = uVar115;
  auVar209[6] = uVar116;
  auVar209[7] = uVar117;
  auVar209[8] = uVar118;
  auVar209[9] = uVar119;
  auVar209[10] = uVar120;
  auVar209[11] = uVar121;
  auVar209[12] = uVar122;
  auVar209[13] = uVar123;
  auVar209[14] = uVar124;
  auVar209[15] = uVar125;
  auVar173 = NEON_cmhi(auVar172,auVar209,1);
  auVar199[1] = uVar95;
  auVar199[0] = uVar94;
  auVar199[2] = uVar96;
  auVar199[3] = uVar97;
  auVar199[4] = uVar98;
  auVar199[5] = uVar99;
  auVar199[6] = uVar100;
  auVar199[7] = uVar101;
  auVar199[8] = uVar102;
  auVar199[9] = uVar103;
  auVar199[10] = uVar104;
  auVar199[11] = uVar105;
  auVar199[12] = uVar106;
  auVar199[13] = uVar107;
  auVar199[14] = uVar108;
  auVar199[15] = uVar109;
  auVar158 = NEON_cmhi(auVar157,auVar199,1);
  auVar183[1] = uVar79;
  auVar183[0] = uVar78;
  auVar183[2] = uVar80;
  auVar183[3] = uVar81;
  auVar183[4] = uVar82;
  auVar183[5] = uVar83;
  auVar183[6] = uVar84;
  auVar183[7] = uVar85;
  auVar183[8] = uVar86;
  auVar183[9] = uVar87;
  auVar183[10] = uVar88;
  auVar183[11] = uVar89;
  auVar183[12] = uVar90;
  auVar183[13] = uVar91;
  auVar183[14] = uVar92;
  auVar183[15] = uVar93;
  auVar168 = NEON_cmhi(auVar144,auVar183,1);
  auVar44[8] = bVar134;
  auVar44._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar44[9] = bVar135;
  auVar44[10] = bVar136;
  auVar44[11] = bVar137;
  auVar44[12] = bVar138;
  auVar44[13] = bVar139;
  auVar44[14] = bVar140;
  auVar44[15] = bVar141;
  auVar207 = NEON_cmeq(auVar44,auVar185,1);
  auVar145[0] = *param_4;
  auVar159[0] = param_4[1];
  auVar174[0] = param_4[2];
  auVar145[1] = param_4[4];
  auVar159[1] = param_4[5];
  auVar174[1] = param_4[6];
  auVar145[2] = param_4[8];
  auVar159[2] = param_4[9];
  auVar174[2] = param_4[10];
  auVar145[3] = param_4[0xc];
  auVar159[3] = param_4[0xd];
  auVar174[3] = param_4[0xe];
  auVar145[4] = param_4[0x10];
  auVar159[4] = param_4[0x11];
  auVar174[4] = param_4[0x12];
  auVar145[5] = param_4[0x14];
  auVar159[5] = param_4[0x15];
  auVar174[5] = param_4[0x16];
  auVar145[6] = param_4[0x18];
  auVar159[6] = param_4[0x19];
  auVar174[6] = param_4[0x1a];
  auVar145[7] = param_4[0x1c];
  auVar159[7] = param_4[0x1d];
  auVar174[7] = param_4[0x1e];
  auVar145[8] = param_4[0x20];
  auVar159[8] = param_4[0x21];
  auVar174[8] = param_4[0x22];
  auVar145[9] = param_4[0x24];
  auVar159[9] = param_4[0x25];
  auVar174[9] = param_4[0x26];
  auVar145[10] = param_4[0x28];
  auVar159[10] = param_4[0x29];
  auVar174[10] = param_4[0x2a];
  auVar145[11] = param_4[0x2c];
  auVar159[11] = param_4[0x2d];
  auVar174[11] = param_4[0x2e];
  auVar145[12] = param_4[0x30];
  auVar159[12] = param_4[0x31];
  auVar174[12] = param_4[0x32];
  auVar145[13] = param_4[0x34];
  auVar159[13] = param_4[0x35];
  auVar174[13] = param_4[0x36];
  auVar145[14] = param_4[0x38];
  auVar159[14] = param_4[0x39];
  auVar174[14] = param_4[0x3a];
  auVar145[15] = param_4[0x3c];
  auVar159[15] = param_4[0x3d];
  auVar174[15] = param_4[0x3e];
  auVar186._0_8_ =
       CONCAT17(param_4[0x1f],
                CONCAT16(param_4[0x1b],
                         CONCAT15(param_4[0x17],
                                  CONCAT14(param_4[0x13],
                                           CONCAT13(param_4[0xf],
                                                    CONCAT12(param_4[0xb],
                                                             CONCAT11(param_4[7],param_4[3]))))))) &
       0x3f3f3f3f3f3f3f3f;
  auVar186[8] = param_4[0x23] & 0x3f;
  auVar186[9] = param_4[0x27] & 0x3f;
  auVar186[10] = param_4[0x2b] & 0x3f;
  auVar186[11] = param_4[0x2f] & 0x3f;
  auVar186[12] = param_4[0x33] & 0x3f;
  auVar186[13] = param_4[0x37] & 0x3f;
  auVar186[14] = param_4[0x3b] & 0x3f;
  auVar186[15] = param_4[0x3f] & 0x3f;
  auVar210[1] = uVar111;
  auVar210[0] = uVar110;
  auVar210[2] = uVar112;
  auVar210[3] = uVar113;
  auVar210[4] = uVar114;
  auVar210[5] = uVar115;
  auVar210[6] = uVar116;
  auVar210[7] = uVar117;
  auVar210[8] = uVar118;
  auVar210[9] = uVar119;
  auVar210[10] = uVar120;
  auVar210[11] = uVar121;
  auVar210[12] = uVar122;
  auVar210[13] = uVar123;
  auVar210[14] = uVar124;
  auVar210[15] = uVar125;
  auVar199 = NEON_cmeq(auVar210,auVar174,1);
  auVar204[1] = uVar95;
  auVar204[0] = uVar94;
  auVar204[2] = uVar96;
  auVar204[3] = uVar97;
  auVar204[4] = uVar98;
  auVar204[5] = uVar99;
  auVar204[6] = uVar100;
  auVar204[7] = uVar101;
  auVar204[8] = uVar102;
  auVar204[9] = uVar103;
  auVar204[10] = uVar104;
  auVar204[11] = uVar105;
  auVar204[12] = uVar106;
  auVar204[13] = uVar107;
  auVar204[14] = uVar108;
  auVar204[15] = uVar109;
  auVar204 = NEON_cmeq(auVar204,auVar159,1);
  auVar211[1] = uVar111;
  auVar211[0] = uVar110;
  auVar211[2] = uVar112;
  auVar211[3] = uVar113;
  auVar211[4] = uVar114;
  auVar211[5] = uVar115;
  auVar211[6] = uVar116;
  auVar211[7] = uVar117;
  auVar211[8] = uVar118;
  auVar211[9] = uVar119;
  auVar211[10] = uVar120;
  auVar211[11] = uVar121;
  auVar211[12] = uVar122;
  auVar211[13] = uVar123;
  auVar211[14] = uVar124;
  auVar211[15] = uVar125;
  auVar175 = NEON_cmhi(auVar174,auVar211,1);
  auVar200[1] = uVar95;
  auVar200[0] = uVar94;
  auVar200[2] = uVar96;
  auVar200[3] = uVar97;
  auVar200[4] = uVar98;
  auVar200[5] = uVar99;
  auVar200[6] = uVar100;
  auVar200[7] = uVar101;
  auVar200[8] = uVar102;
  auVar200[9] = uVar103;
  auVar200[10] = uVar104;
  auVar200[11] = uVar105;
  auVar200[12] = uVar106;
  auVar200[13] = uVar107;
  auVar200[14] = uVar108;
  auVar200[15] = uVar109;
  auVar160 = NEON_cmhi(auVar159,auVar200,1);
  auVar208[1] = uVar79;
  auVar208[0] = uVar78;
  auVar208[2] = uVar80;
  auVar208[3] = uVar81;
  auVar208[4] = uVar82;
  auVar208[5] = uVar83;
  auVar208[6] = uVar84;
  auVar208[7] = uVar85;
  auVar208[8] = uVar86;
  auVar208[9] = uVar87;
  auVar208[10] = uVar88;
  auVar208[11] = uVar89;
  auVar208[12] = uVar90;
  auVar208[13] = uVar91;
  auVar208[14] = uVar92;
  auVar208[15] = uVar93;
  auVar183 = NEON_cmhi(auVar145,auVar208,1);
  auVar45[8] = bVar134;
  auVar45._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar45[9] = bVar135;
  auVar45[10] = bVar136;
  auVar45[11] = bVar137;
  auVar45[12] = bVar138;
  auVar45[13] = bVar139;
  auVar45[14] = bVar140;
  auVar45[15] = bVar141;
  auVar208 = NEON_cmeq(auVar45,auVar186,1);
  *param_1 = (bVar126 & 0x7f ^ 0x40) >> 3 |
             ~((auVar169[0] | auVar196[0] & auVar154[0] | auVar196[0] & auVar201[0] & auVar142[0]) &
              ~auVar205[0]) &
             ~((auVar171[0] | auVar197[0] & auVar156[0] | auVar197[0] & auVar202[0] & auVar153[0]) &
              ~auVar206[0]) &
             ~((auVar173[0] | auVar198[0] & auVar158[0] | auVar198[0] & auVar203[0] & auVar168[0]) &
              ~auVar207[0]) &
             ~((auVar175[0] | auVar199[0] & auVar160[0] | auVar199[0] & auVar204[0] & auVar183[0]) &
              ~auVar208[0]);
  param_1[1] = (bVar127 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[1] | auVar196[1] & auVar154[1] | auVar196[1] & auVar201[1] & auVar142[1])
                & ~auVar205[1]) &
               ~((auVar171[1] | auVar197[1] & auVar156[1] | auVar197[1] & auVar202[1] & auVar153[1])
                & ~auVar206[1]) &
               ~((auVar173[1] | auVar198[1] & auVar158[1] | auVar198[1] & auVar203[1] & auVar168[1])
                & ~auVar207[1]) &
               ~((auVar175[1] | auVar199[1] & auVar160[1] | auVar199[1] & auVar204[1] & auVar183[1])
                & ~auVar208[1]);
  param_1[2] = (bVar128 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[2] | auVar196[2] & auVar154[2] | auVar196[2] & auVar201[2] & auVar142[2])
                & ~auVar205[2]) &
               ~((auVar171[2] | auVar197[2] & auVar156[2] | auVar197[2] & auVar202[2] & auVar153[2])
                & ~auVar206[2]) &
               ~((auVar173[2] | auVar198[2] & auVar158[2] | auVar198[2] & auVar203[2] & auVar168[2])
                & ~auVar207[2]) &
               ~((auVar175[2] | auVar199[2] & auVar160[2] | auVar199[2] & auVar204[2] & auVar183[2])
                & ~auVar208[2]);
  param_1[3] = (bVar129 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[3] | auVar196[3] & auVar154[3] | auVar196[3] & auVar201[3] & auVar142[3])
                & ~auVar205[3]) &
               ~((auVar171[3] | auVar197[3] & auVar156[3] | auVar197[3] & auVar202[3] & auVar153[3])
                & ~auVar206[3]) &
               ~((auVar173[3] | auVar198[3] & auVar158[3] | auVar198[3] & auVar203[3] & auVar168[3])
                & ~auVar207[3]) &
               ~((auVar175[3] | auVar199[3] & auVar160[3] | auVar199[3] & auVar204[3] & auVar183[3])
                & ~auVar208[3]);
  param_1[4] = (bVar130 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[4] | auVar196[4] & auVar154[4] | auVar196[4] & auVar201[4] & auVar142[4])
                & ~auVar205[4]) &
               ~((auVar171[4] | auVar197[4] & auVar156[4] | auVar197[4] & auVar202[4] & auVar153[4])
                & ~auVar206[4]) &
               ~((auVar173[4] | auVar198[4] & auVar158[4] | auVar198[4] & auVar203[4] & auVar168[4])
                & ~auVar207[4]) &
               ~((auVar175[4] | auVar199[4] & auVar160[4] | auVar199[4] & auVar204[4] & auVar183[4])
                & ~auVar208[4]);
  param_1[5] = (bVar131 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[5] | auVar196[5] & auVar154[5] | auVar196[5] & auVar201[5] & auVar142[5])
                & ~auVar205[5]) &
               ~((auVar171[5] | auVar197[5] & auVar156[5] | auVar197[5] & auVar202[5] & auVar153[5])
                & ~auVar206[5]) &
               ~((auVar173[5] | auVar198[5] & auVar158[5] | auVar198[5] & auVar203[5] & auVar168[5])
                & ~auVar207[5]) &
               ~((auVar175[5] | auVar199[5] & auVar160[5] | auVar199[5] & auVar204[5] & auVar183[5])
                & ~auVar208[5]);
  param_1[6] = (bVar132 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[6] | auVar196[6] & auVar154[6] | auVar196[6] & auVar201[6] & auVar142[6])
                & ~auVar205[6]) &
               ~((auVar171[6] | auVar197[6] & auVar156[6] | auVar197[6] & auVar202[6] & auVar153[6])
                & ~auVar206[6]) &
               ~((auVar173[6] | auVar198[6] & auVar158[6] | auVar198[6] & auVar203[6] & auVar168[6])
                & ~auVar207[6]) &
               ~((auVar175[6] | auVar199[6] & auVar160[6] | auVar199[6] & auVar204[6] & auVar183[6])
                & ~auVar208[6]);
  param_1[7] = (bVar133 & 0x7f ^ 0x40) >> 3 |
               ~((auVar169[7] | auVar196[7] & auVar154[7] | auVar196[7] & auVar201[7] & auVar142[7])
                & ~auVar205[7]) &
               ~((auVar171[7] | auVar197[7] & auVar156[7] | auVar197[7] & auVar202[7] & auVar153[7])
                & ~auVar206[7]) &
               ~((auVar173[7] | auVar198[7] & auVar158[7] | auVar198[7] & auVar203[7] & auVar168[7])
                & ~auVar207[7]) &
               ~((auVar175[7] | auVar199[7] & auVar160[7] | auVar199[7] & auVar204[7] & auVar183[7])
                & ~auVar208[7]);
  param_1[8] = bVar134 >> 3 |
               ~((auVar169[8] | auVar196[8] & auVar154[8] | auVar196[8] & auVar201[8] & auVar142[8])
                & ~auVar205[8]) &
               ~((auVar171[8] | auVar197[8] & auVar156[8] | auVar197[8] & auVar202[8] & auVar153[8])
                & ~auVar206[8]) &
               ~((auVar173[8] | auVar198[8] & auVar158[8] | auVar198[8] & auVar203[8] & auVar168[8])
                & ~auVar207[8]) &
               ~((auVar175[8] | auVar199[8] & auVar160[8] | auVar199[8] & auVar204[8] & auVar183[8])
                & ~auVar208[8]);
  param_1[9] = bVar135 >> 3 |
               ~((auVar169[9] | auVar196[9] & auVar154[9] | auVar196[9] & auVar201[9] & auVar142[9])
                & ~auVar205[9]) &
               ~((auVar171[9] | auVar197[9] & auVar156[9] | auVar197[9] & auVar202[9] & auVar153[9])
                & ~auVar206[9]) &
               ~((auVar173[9] | auVar198[9] & auVar158[9] | auVar198[9] & auVar203[9] & auVar168[9])
                & ~auVar207[9]) &
               ~((auVar175[9] | auVar199[9] & auVar160[9] | auVar199[9] & auVar204[9] & auVar183[9])
                & ~auVar208[9]);
  param_1[10] = bVar136 >> 3 |
                ~((auVar169[10] | auVar196[10] & auVar154[10] |
                  auVar196[10] & auVar201[10] & auVar142[10]) & ~auVar205[10]) &
                ~((auVar171[10] | auVar197[10] & auVar156[10] |
                  auVar197[10] & auVar202[10] & auVar153[10]) & ~auVar206[10]) &
                ~((auVar173[10] | auVar198[10] & auVar158[10] |
                  auVar198[10] & auVar203[10] & auVar168[10]) & ~auVar207[10]) &
                ~((auVar175[10] | auVar199[10] & auVar160[10] |
                  auVar199[10] & auVar204[10] & auVar183[10]) & ~auVar208[10]);
  param_1[0xb] = bVar137 >> 3 |
                 ~((auVar169[11] | auVar196[11] & auVar154[11] |
                   auVar196[11] & auVar201[11] & auVar142[11]) & ~auVar205[11]) &
                 ~((auVar171[11] | auVar197[11] & auVar156[11] |
                   auVar197[11] & auVar202[11] & auVar153[11]) & ~auVar206[11]) &
                 ~((auVar173[11] | auVar198[11] & auVar158[11] |
                   auVar198[11] & auVar203[11] & auVar168[11]) & ~auVar207[11]) &
                 ~((auVar175[11] | auVar199[11] & auVar160[11] |
                   auVar199[11] & auVar204[11] & auVar183[11]) & ~auVar208[11]);
  param_1[0xc] = bVar138 >> 3 |
                 ~((auVar169[12] | auVar196[12] & auVar154[12] |
                   auVar196[12] & auVar201[12] & auVar142[12]) & ~auVar205[12]) &
                 ~((auVar171[12] | auVar197[12] & auVar156[12] |
                   auVar197[12] & auVar202[12] & auVar153[12]) & ~auVar206[12]) &
                 ~((auVar173[12] | auVar198[12] & auVar158[12] |
                   auVar198[12] & auVar203[12] & auVar168[12]) & ~auVar207[12]) &
                 ~((auVar175[12] | auVar199[12] & auVar160[12] |
                   auVar199[12] & auVar204[12] & auVar183[12]) & ~auVar208[12]);
  param_1[0xd] = bVar139 >> 3 |
                 ~((auVar169[13] | auVar196[13] & auVar154[13] |
                   auVar196[13] & auVar201[13] & auVar142[13]) & ~auVar205[13]) &
                 ~((auVar171[13] | auVar197[13] & auVar156[13] |
                   auVar197[13] & auVar202[13] & auVar153[13]) & ~auVar206[13]) &
                 ~((auVar173[13] | auVar198[13] & auVar158[13] |
                   auVar198[13] & auVar203[13] & auVar168[13]) & ~auVar207[13]) &
                 ~((auVar175[13] | auVar199[13] & auVar160[13] |
                   auVar199[13] & auVar204[13] & auVar183[13]) & ~auVar208[13]);
  param_1[0xe] = bVar140 >> 3 |
                 ~((auVar169[14] | auVar196[14] & auVar154[14] |
                   auVar196[14] & auVar201[14] & auVar142[14]) & ~auVar205[14]) &
                 ~((auVar171[14] | auVar197[14] & auVar156[14] |
                   auVar197[14] & auVar202[14] & auVar153[14]) & ~auVar206[14]) &
                 ~((auVar173[14] | auVar198[14] & auVar158[14] |
                   auVar198[14] & auVar203[14] & auVar168[14]) & ~auVar207[14]) &
                 ~((auVar175[14] | auVar199[14] & auVar160[14] |
                   auVar199[14] & auVar204[14] & auVar183[14]) & ~auVar208[14]);
  param_1[0xf] = bVar141 >> 3 |
                 ~((auVar169[15] | auVar196[15] & auVar154[15] |
                   auVar196[15] & auVar201[15] & auVar142[15]) & ~auVar205[15]) &
                 ~((auVar171[15] | auVar197[15] & auVar156[15] |
                   auVar197[15] & auVar202[15] & auVar153[15]) & ~auVar206[15]) &
                 ~((auVar173[15] | auVar198[15] & auVar158[15] |
                   auVar198[15] & auVar203[15] & auVar168[15]) & ~auVar207[15]) &
                 ~((auVar175[15] | auVar199[15] & auVar160[15] |
                   auVar199[15] & auVar204[15] & auVar183[15]) & ~auVar208[15]);
  pbVar64 = param_1 + 0x10;
  puVar61 = param_2 + 0x40;
  puVar63 = param_3 + 0x40;
  puVar62 = param_4 + 0x40;
  puVar60 = param_3 + 0x3c;
  do {
    puVar76 = puVar60;
    puVar75 = puVar62;
    puVar74 = puVar63;
    puVar73 = puVar61;
    pbVar72 = pbVar64;
    uVar78 = *puVar74;
    uVar94 = puVar74[1];
    uVar110 = puVar74[2];
    bVar126 = puVar74[3];
    uVar79 = puVar74[4];
    uVar95 = puVar74[5];
    uVar111 = puVar74[6];
    bVar127 = puVar74[7];
    uVar80 = puVar74[8];
    uVar96 = puVar74[9];
    uVar112 = puVar74[10];
    bVar128 = puVar74[0xb];
    uVar81 = puVar74[0xc];
    uVar97 = puVar74[0xd];
    uVar113 = puVar74[0xe];
    bVar129 = puVar74[0xf];
    uVar82 = puVar74[0x10];
    uVar98 = puVar74[0x11];
    uVar114 = puVar74[0x12];
    bVar130 = puVar74[0x13];
    uVar83 = puVar74[0x14];
    uVar99 = puVar74[0x15];
    uVar115 = puVar74[0x16];
    bVar131 = puVar74[0x17];
    uVar84 = puVar74[0x18];
    uVar100 = puVar74[0x19];
    uVar116 = puVar74[0x1a];
    bVar132 = puVar74[0x1b];
    uVar85 = puVar74[0x1c];
    uVar101 = puVar74[0x1d];
    uVar117 = puVar74[0x1e];
    bVar133 = puVar74[0x1f];
    uVar86 = puVar74[0x20];
    uVar102 = puVar74[0x21];
    uVar118 = puVar74[0x22];
    uVar87 = puVar74[0x24];
    uVar103 = puVar74[0x25];
    uVar119 = puVar74[0x26];
    uVar88 = puVar74[0x28];
    uVar104 = puVar74[0x29];
    uVar120 = puVar74[0x2a];
    uVar89 = puVar74[0x2c];
    uVar105 = puVar74[0x2d];
    uVar121 = puVar74[0x2e];
    uVar90 = puVar74[0x30];
    uVar106 = puVar74[0x31];
    uVar122 = puVar74[0x32];
    uVar91 = puVar74[0x34];
    uVar107 = puVar74[0x35];
    uVar123 = puVar74[0x36];
    uVar92 = puVar74[0x38];
    uVar108 = puVar74[0x39];
    uVar124 = puVar74[0x3a];
    uVar93 = puVar74[0x3c];
    uVar109 = puVar74[0x3d];
    uVar125 = puVar74[0x3e];
    auVar146[0] = *puVar76;
    auVar161[0] = puVar76[1];
    auVar176[0] = puVar76[2];
    auVar146[1] = puVar76[4];
    auVar161[1] = puVar76[5];
    auVar176[1] = puVar76[6];
    auVar146[2] = puVar76[8];
    auVar161[2] = puVar76[9];
    auVar176[2] = puVar76[10];
    auVar146[3] = puVar76[0xc];
    auVar161[3] = puVar76[0xd];
    auVar176[3] = puVar76[0xe];
    auVar146[4] = puVar76[0x10];
    auVar161[4] = puVar76[0x11];
    auVar176[4] = puVar76[0x12];
    auVar146[5] = puVar76[0x14];
    auVar161[5] = puVar76[0x15];
    auVar176[5] = puVar76[0x16];
    auVar146[6] = puVar76[0x18];
    auVar161[6] = puVar76[0x19];
    auVar176[6] = puVar76[0x1a];
    auVar146[7] = puVar76[0x1c];
    auVar161[7] = puVar76[0x1d];
    auVar176[7] = puVar76[0x1e];
    auVar146[8] = puVar76[0x20];
    auVar161[8] = puVar76[0x21];
    auVar176[8] = puVar76[0x22];
    auVar146[9] = puVar76[0x24];
    auVar161[9] = puVar76[0x25];
    auVar176[9] = puVar76[0x26];
    auVar146[10] = puVar76[0x28];
    auVar161[10] = puVar76[0x29];
    auVar176[10] = puVar76[0x2a];
    auVar146[11] = puVar76[0x2c];
    auVar161[11] = puVar76[0x2d];
    auVar176[11] = puVar76[0x2e];
    auVar146[12] = puVar76[0x30];
    auVar161[12] = puVar76[0x31];
    auVar176[12] = puVar76[0x32];
    auVar146[13] = puVar76[0x34];
    auVar161[13] = puVar76[0x35];
    auVar176[13] = puVar76[0x36];
    auVar146[14] = puVar76[0x38];
    auVar161[14] = puVar76[0x39];
    auVar176[14] = puVar76[0x3a];
    auVar146[15] = puVar76[0x3c];
    auVar161[15] = puVar76[0x3d];
    auVar176[15] = puVar76[0x3e];
    auVar187._0_8_ =
         CONCAT17(puVar76[0x1f],
                  CONCAT16(puVar76[0x1b],
                           CONCAT15(puVar76[0x17],
                                    CONCAT14(puVar76[0x13],
                                             CONCAT13(puVar76[0xf],
                                                      CONCAT12(puVar76[0xb],
                                                               CONCAT11(puVar76[7],puVar76[3])))))))
         & 0x3f3f3f3f3f3f3f3f;
    auVar187[8] = puVar76[0x23] & 0x3f;
    auVar187[9] = puVar76[0x27] & 0x3f;
    auVar187[10] = puVar76[0x2b] & 0x3f;
    auVar187[11] = puVar76[0x2f] & 0x3f;
    auVar187[12] = puVar76[0x33] & 0x3f;
    auVar187[13] = puVar76[0x37] & 0x3f;
    auVar187[14] = puVar76[0x3b] & 0x3f;
    auVar187[15] = puVar76[0x3f] & 0x3f;
    bVar134 = puVar74[0x23] & 0x7f ^ 0x40;
    bVar135 = puVar74[0x27] & 0x7f ^ 0x40;
    bVar136 = puVar74[0x2b] & 0x7f ^ 0x40;
    bVar137 = puVar74[0x2f] & 0x7f ^ 0x40;
    bVar138 = puVar74[0x33] & 0x7f ^ 0x40;
    bVar139 = puVar74[0x37] & 0x7f ^ 0x40;
    bVar140 = puVar74[0x3b] & 0x7f ^ 0x40;
    bVar141 = puVar74[0x3f] & 0x7f ^ 0x40;
    auVar27[1] = uVar111;
    auVar27[0] = uVar110;
    auVar27[2] = uVar112;
    auVar27[3] = uVar113;
    auVar27[4] = uVar114;
    auVar27[5] = uVar115;
    auVar27[6] = uVar116;
    auVar27[7] = uVar117;
    auVar27[8] = uVar118;
    auVar27[9] = uVar119;
    auVar27[10] = uVar120;
    auVar27[11] = uVar121;
    auVar27[12] = uVar122;
    auVar27[13] = uVar123;
    auVar27[14] = uVar124;
    auVar27[15] = uVar125;
    auVar204 = NEON_cmeq(auVar27,auVar176,1);
    auVar10[1] = uVar95;
    auVar10[0] = uVar94;
    auVar10[2] = uVar96;
    auVar10[3] = uVar97;
    auVar10[4] = uVar98;
    auVar10[5] = uVar99;
    auVar10[6] = uVar100;
    auVar10[7] = uVar101;
    auVar10[8] = uVar102;
    auVar10[9] = uVar103;
    auVar10[10] = uVar104;
    auVar10[11] = uVar105;
    auVar10[12] = uVar106;
    auVar10[13] = uVar107;
    auVar10[14] = uVar108;
    auVar10[15] = uVar109;
    auVar197 = NEON_cmeq(auVar10,auVar161,1);
    auVar28[1] = uVar111;
    auVar28[0] = uVar110;
    auVar28[2] = uVar112;
    auVar28[3] = uVar113;
    auVar28[4] = uVar114;
    auVar28[5] = uVar115;
    auVar28[6] = uVar116;
    auVar28[7] = uVar117;
    auVar28[8] = uVar118;
    auVar28[9] = uVar119;
    auVar28[10] = uVar120;
    auVar28[11] = uVar121;
    auVar28[12] = uVar122;
    auVar28[13] = uVar123;
    auVar28[14] = uVar124;
    auVar28[15] = uVar125;
    auVar160 = NEON_cmhi(auVar176,auVar28,1);
    auVar11[1] = uVar95;
    auVar11[0] = uVar94;
    auVar11[2] = uVar96;
    auVar11[3] = uVar97;
    auVar11[4] = uVar98;
    auVar11[5] = uVar99;
    auVar11[6] = uVar100;
    auVar11[7] = uVar101;
    auVar11[8] = uVar102;
    auVar11[9] = uVar103;
    auVar11[10] = uVar104;
    auVar11[11] = uVar105;
    auVar11[12] = uVar106;
    auVar11[13] = uVar107;
    auVar11[14] = uVar108;
    auVar11[15] = uVar109;
    auVar208 = NEON_cmhi(auVar161,auVar11,1);
    auVar1[1] = uVar79;
    auVar1[0] = uVar78;
    auVar1[2] = uVar80;
    auVar1[3] = uVar81;
    auVar1[4] = uVar82;
    auVar1[5] = uVar83;
    auVar1[6] = uVar84;
    auVar1[7] = uVar85;
    auVar1[8] = uVar86;
    auVar1[9] = uVar87;
    auVar1[10] = uVar88;
    auVar1[11] = uVar89;
    auVar1[12] = uVar90;
    auVar1[13] = uVar91;
    auVar1[14] = uVar92;
    auVar1[15] = uVar93;
    auVar142 = NEON_cmhi(auVar146,auVar1,1);
    auVar46[8] = bVar134;
    auVar46._0_8_ =
         (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129
                                                  ,CONCAT12(bVar128,CONCAT11(bVar127,bVar126)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar46[9] = bVar135;
    auVar46[10] = bVar136;
    auVar46[11] = bVar137;
    auVar46[12] = bVar138;
    auVar46[13] = bVar139;
    auVar46[14] = bVar140;
    auVar46[15] = bVar141;
    auVar209 = NEON_cmeq(auVar46,auVar187,1);
    auVar147[0] = *puVar55;
    auVar162[0] = puVar55[1];
    auVar177[0] = puVar55[2];
    puVar56 = puVar55 + 3;
    auVar147[1] = puVar55[4];
    auVar162[1] = puVar55[5];
    auVar177[1] = puVar55[6];
    puVar57 = puVar55 + 7;
    auVar147[2] = puVar55[8];
    auVar162[2] = puVar55[9];
    auVar177[2] = puVar55[10];
    puVar58 = puVar55 + 0xb;
    auVar147[3] = puVar55[0xc];
    auVar162[3] = puVar55[0xd];
    auVar177[3] = puVar55[0xe];
    puVar59 = puVar55 + 0xf;
    auVar147[4] = puVar55[0x10];
    auVar162[4] = puVar55[0x11];
    auVar177[4] = puVar55[0x12];
    puVar60 = puVar55 + 0x13;
    auVar147[5] = puVar55[0x14];
    auVar162[5] = puVar55[0x15];
    auVar177[5] = puVar55[0x16];
    puVar61 = puVar55 + 0x17;
    auVar147[6] = puVar55[0x18];
    auVar162[6] = puVar55[0x19];
    auVar177[6] = puVar55[0x1a];
    puVar62 = puVar55 + 0x1b;
    auVar147[7] = puVar55[0x1c];
    auVar162[7] = puVar55[0x1d];
    auVar177[7] = puVar55[0x1e];
    puVar63 = puVar55 + 0x1f;
    auVar147[8] = puVar55[0x20];
    auVar162[8] = puVar55[0x21];
    auVar177[8] = puVar55[0x22];
    pbVar64 = puVar55 + 0x23;
    auVar147[9] = puVar55[0x24];
    auVar162[9] = puVar55[0x25];
    auVar177[9] = puVar55[0x26];
    pbVar65 = puVar55 + 0x27;
    auVar147[10] = puVar55[0x28];
    auVar162[10] = puVar55[0x29];
    auVar177[10] = puVar55[0x2a];
    pbVar66 = puVar55 + 0x2b;
    auVar147[11] = puVar55[0x2c];
    auVar162[11] = puVar55[0x2d];
    auVar177[11] = puVar55[0x2e];
    pbVar67 = puVar55 + 0x2f;
    auVar147[12] = puVar55[0x30];
    auVar162[12] = puVar55[0x31];
    auVar177[12] = puVar55[0x32];
    pbVar68 = puVar55 + 0x33;
    auVar147[13] = puVar55[0x34];
    auVar162[13] = puVar55[0x35];
    auVar177[13] = puVar55[0x36];
    pbVar69 = puVar55 + 0x37;
    auVar147[14] = puVar55[0x38];
    auVar162[14] = puVar55[0x39];
    auVar177[14] = puVar55[0x3a];
    pbVar70 = puVar55 + 0x3b;
    auVar147[15] = puVar55[0x3c];
    auVar162[15] = puVar55[0x3d];
    auVar177[15] = puVar55[0x3e];
    pbVar71 = puVar55 + 0x3f;
    puVar55 = puVar55 + 0x40;
    auVar188._0_8_ =
         CONCAT17(*puVar63,CONCAT16(*puVar62,CONCAT15(*puVar61,CONCAT14(*puVar60,CONCAT13(*puVar59,
                                                  CONCAT12(*puVar58,CONCAT11(*puVar57,*puVar56))))))
                 ) & 0x3f3f3f3f3f3f3f3f;
    auVar188[8] = *pbVar64 & 0x3f;
    auVar188[9] = *pbVar65 & 0x3f;
    auVar188[10] = *pbVar66 & 0x3f;
    auVar188[11] = *pbVar67 & 0x3f;
    auVar188[12] = *pbVar68 & 0x3f;
    auVar188[13] = *pbVar69 & 0x3f;
    auVar188[14] = *pbVar70 & 0x3f;
    auVar188[15] = *pbVar71 & 0x3f;
    auVar29[1] = uVar111;
    auVar29[0] = uVar110;
    auVar29[2] = uVar112;
    auVar29[3] = uVar113;
    auVar29[4] = uVar114;
    auVar29[5] = uVar115;
    auVar29[6] = uVar116;
    auVar29[7] = uVar117;
    auVar29[8] = uVar118;
    auVar29[9] = uVar119;
    auVar29[10] = uVar120;
    auVar29[11] = uVar121;
    auVar29[12] = uVar122;
    auVar29[13] = uVar123;
    auVar29[14] = uVar124;
    auVar29[15] = uVar125;
    auVar200 = NEON_cmeq(auVar29,auVar177,1);
    auVar12[1] = uVar95;
    auVar12[0] = uVar94;
    auVar12[2] = uVar96;
    auVar12[3] = uVar97;
    auVar12[4] = uVar98;
    auVar12[5] = uVar99;
    auVar12[6] = uVar100;
    auVar12[7] = uVar101;
    auVar12[8] = uVar102;
    auVar12[9] = uVar103;
    auVar12[10] = uVar104;
    auVar12[11] = uVar105;
    auVar12[12] = uVar106;
    auVar12[13] = uVar107;
    auVar12[14] = uVar108;
    auVar12[15] = uVar109;
    auVar198 = NEON_cmeq(auVar12,auVar162,1);
    auVar30[1] = uVar111;
    auVar30[0] = uVar110;
    auVar30[2] = uVar112;
    auVar30[3] = uVar113;
    auVar30[4] = uVar114;
    auVar30[5] = uVar115;
    auVar30[6] = uVar116;
    auVar30[7] = uVar117;
    auVar30[8] = uVar118;
    auVar30[9] = uVar119;
    auVar30[10] = uVar120;
    auVar30[11] = uVar121;
    auVar30[12] = uVar122;
    auVar30[13] = uVar123;
    auVar30[14] = uVar124;
    auVar30[15] = uVar125;
    auVar173 = NEON_cmhi(auVar177,auVar30,1);
    auVar13[1] = uVar95;
    auVar13[0] = uVar94;
    auVar13[2] = uVar96;
    auVar13[3] = uVar97;
    auVar13[4] = uVar98;
    auVar13[5] = uVar99;
    auVar13[6] = uVar100;
    auVar13[7] = uVar101;
    auVar13[8] = uVar102;
    auVar13[9] = uVar103;
    auVar13[10] = uVar104;
    auVar13[11] = uVar105;
    auVar13[12] = uVar106;
    auVar13[13] = uVar107;
    auVar13[14] = uVar108;
    auVar13[15] = uVar109;
    auVar154 = NEON_cmhi(auVar162,auVar13,1);
    auVar2[1] = uVar79;
    auVar2[0] = uVar78;
    auVar2[2] = uVar80;
    auVar2[3] = uVar81;
    auVar2[4] = uVar82;
    auVar2[5] = uVar83;
    auVar2[6] = uVar84;
    auVar2[7] = uVar85;
    auVar2[8] = uVar86;
    auVar2[9] = uVar87;
    auVar2[10] = uVar88;
    auVar2[11] = uVar89;
    auVar2[12] = uVar90;
    auVar2[13] = uVar91;
    auVar2[14] = uVar92;
    auVar2[15] = uVar93;
    auVar153 = NEON_cmhi(auVar147,auVar2,1);
    auVar47[8] = bVar134;
    auVar47._0_8_ =
         (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129
                                                  ,CONCAT12(bVar128,CONCAT11(bVar127,bVar126)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar47[9] = bVar135;
    auVar47[10] = bVar136;
    auVar47[11] = bVar137;
    auVar47[12] = bVar138;
    auVar47[13] = bVar139;
    auVar47[14] = bVar140;
    auVar47[15] = bVar141;
    auVar210 = NEON_cmeq(auVar47,auVar188,1);
    auVar148[0] = *puVar73;
    auVar163[0] = puVar73[1];
    auVar178[0] = puVar73[2];
    auVar148[1] = puVar73[4];
    auVar163[1] = puVar73[5];
    auVar178[1] = puVar73[6];
    auVar148[2] = puVar73[8];
    auVar163[2] = puVar73[9];
    auVar178[2] = puVar73[10];
    auVar148[3] = puVar73[0xc];
    auVar163[3] = puVar73[0xd];
    auVar178[3] = puVar73[0xe];
    auVar148[4] = puVar73[0x10];
    auVar163[4] = puVar73[0x11];
    auVar178[4] = puVar73[0x12];
    auVar148[5] = puVar73[0x14];
    auVar163[5] = puVar73[0x15];
    auVar178[5] = puVar73[0x16];
    auVar148[6] = puVar73[0x18];
    auVar163[6] = puVar73[0x19];
    auVar178[6] = puVar73[0x1a];
    auVar148[7] = puVar73[0x1c];
    auVar163[7] = puVar73[0x1d];
    auVar178[7] = puVar73[0x1e];
    auVar148[8] = puVar73[0x20];
    auVar163[8] = puVar73[0x21];
    auVar178[8] = puVar73[0x22];
    auVar148[9] = puVar73[0x24];
    auVar163[9] = puVar73[0x25];
    auVar178[9] = puVar73[0x26];
    auVar148[10] = puVar73[0x28];
    auVar163[10] = puVar73[0x29];
    auVar178[10] = puVar73[0x2a];
    auVar148[11] = puVar73[0x2c];
    auVar163[11] = puVar73[0x2d];
    auVar178[11] = puVar73[0x2e];
    auVar148[12] = puVar73[0x30];
    auVar163[12] = puVar73[0x31];
    auVar178[12] = puVar73[0x32];
    auVar148[13] = puVar73[0x34];
    auVar163[13] = puVar73[0x35];
    auVar178[13] = puVar73[0x36];
    auVar148[14] = puVar73[0x38];
    auVar163[14] = puVar73[0x39];
    auVar178[14] = puVar73[0x3a];
    auVar148[15] = puVar73[0x3c];
    auVar163[15] = puVar73[0x3d];
    auVar178[15] = puVar73[0x3e];
    auVar189._0_8_ =
         CONCAT17(puVar73[0x1f],
                  CONCAT16(puVar73[0x1b],
                           CONCAT15(puVar73[0x17],
                                    CONCAT14(puVar73[0x13],
                                             CONCAT13(puVar73[0xf],
                                                      CONCAT12(puVar73[0xb],
                                                               CONCAT11(puVar73[7],puVar73[3])))))))
         & 0x3f3f3f3f3f3f3f3f;
    auVar189[8] = puVar73[0x23] & 0x3f;
    auVar189[9] = puVar73[0x27] & 0x3f;
    auVar189[10] = puVar73[0x2b] & 0x3f;
    auVar189[11] = puVar73[0x2f] & 0x3f;
    auVar189[12] = puVar73[0x33] & 0x3f;
    auVar189[13] = puVar73[0x37] & 0x3f;
    auVar189[14] = puVar73[0x3b] & 0x3f;
    auVar189[15] = puVar73[0x3f] & 0x3f;
    auVar31[1] = uVar111;
    auVar31[0] = uVar110;
    auVar31[2] = uVar112;
    auVar31[3] = uVar113;
    auVar31[4] = uVar114;
    auVar31[5] = uVar115;
    auVar31[6] = uVar116;
    auVar31[7] = uVar117;
    auVar31[8] = uVar118;
    auVar31[9] = uVar119;
    auVar31[10] = uVar120;
    auVar31[11] = uVar121;
    auVar31[12] = uVar122;
    auVar31[13] = uVar123;
    auVar31[14] = uVar124;
    auVar31[15] = uVar125;
    auVar169 = NEON_cmeq(auVar31,auVar178,1);
    auVar14[1] = uVar95;
    auVar14[0] = uVar94;
    auVar14[2] = uVar96;
    auVar14[3] = uVar97;
    auVar14[4] = uVar98;
    auVar14[5] = uVar99;
    auVar14[6] = uVar100;
    auVar14[7] = uVar101;
    auVar14[8] = uVar102;
    auVar14[9] = uVar103;
    auVar14[10] = uVar104;
    auVar14[11] = uVar105;
    auVar14[12] = uVar106;
    auVar14[13] = uVar107;
    auVar14[14] = uVar108;
    auVar14[15] = uVar109;
    auVar203 = NEON_cmeq(auVar14,auVar163,1);
    auVar32[1] = uVar111;
    auVar32[0] = uVar110;
    auVar32[2] = uVar112;
    auVar32[3] = uVar113;
    auVar32[4] = uVar114;
    auVar32[5] = uVar115;
    auVar32[6] = uVar116;
    auVar32[7] = uVar117;
    auVar32[8] = uVar118;
    auVar32[9] = uVar119;
    auVar32[10] = uVar120;
    auVar32[11] = uVar121;
    auVar32[12] = uVar122;
    auVar32[13] = uVar123;
    auVar32[14] = uVar124;
    auVar32[15] = uVar125;
    auVar175 = NEON_cmhi(auVar178,auVar32,1);
    auVar15[1] = uVar95;
    auVar15[0] = uVar94;
    auVar15[2] = uVar96;
    auVar15[3] = uVar97;
    auVar15[4] = uVar98;
    auVar15[5] = uVar99;
    auVar15[6] = uVar100;
    auVar15[7] = uVar101;
    auVar15[8] = uVar102;
    auVar15[9] = uVar103;
    auVar15[10] = uVar104;
    auVar15[11] = uVar105;
    auVar15[12] = uVar106;
    auVar15[13] = uVar107;
    auVar15[14] = uVar108;
    auVar15[15] = uVar109;
    auVar156 = NEON_cmhi(auVar163,auVar15,1);
    auVar3[1] = uVar79;
    auVar3[0] = uVar78;
    auVar3[2] = uVar80;
    auVar3[3] = uVar81;
    auVar3[4] = uVar82;
    auVar3[5] = uVar83;
    auVar3[6] = uVar84;
    auVar3[7] = uVar85;
    auVar3[8] = uVar86;
    auVar3[9] = uVar87;
    auVar3[10] = uVar88;
    auVar3[11] = uVar89;
    auVar3[12] = uVar90;
    auVar3[13] = uVar91;
    auVar3[14] = uVar92;
    auVar3[15] = uVar93;
    auVar168 = NEON_cmhi(auVar148,auVar3,1);
    auVar48[8] = bVar134;
    auVar48._0_8_ =
         (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129
                                                  ,CONCAT12(bVar128,CONCAT11(bVar127,bVar126)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar48[9] = bVar135;
    auVar48[10] = bVar136;
    auVar48[11] = bVar137;
    auVar48[12] = bVar138;
    auVar48[13] = bVar139;
    auVar48[14] = bVar140;
    auVar48[15] = bVar141;
    auVar211 = NEON_cmeq(auVar48,auVar189,1);
    auVar149[0] = *puVar75;
    auVar164[0] = puVar75[1];
    auVar179[0] = puVar75[2];
    auVar149[1] = puVar75[4];
    auVar164[1] = puVar75[5];
    auVar179[1] = puVar75[6];
    auVar149[2] = puVar75[8];
    auVar164[2] = puVar75[9];
    auVar179[2] = puVar75[10];
    auVar149[3] = puVar75[0xc];
    auVar164[3] = puVar75[0xd];
    auVar179[3] = puVar75[0xe];
    auVar149[4] = puVar75[0x10];
    auVar164[4] = puVar75[0x11];
    auVar179[4] = puVar75[0x12];
    auVar149[5] = puVar75[0x14];
    auVar164[5] = puVar75[0x15];
    auVar179[5] = puVar75[0x16];
    auVar149[6] = puVar75[0x18];
    auVar164[6] = puVar75[0x19];
    auVar179[6] = puVar75[0x1a];
    auVar149[7] = puVar75[0x1c];
    auVar164[7] = puVar75[0x1d];
    auVar179[7] = puVar75[0x1e];
    auVar149[8] = puVar75[0x20];
    auVar164[8] = puVar75[0x21];
    auVar179[8] = puVar75[0x22];
    auVar149[9] = puVar75[0x24];
    auVar164[9] = puVar75[0x25];
    auVar179[9] = puVar75[0x26];
    auVar149[10] = puVar75[0x28];
    auVar164[10] = puVar75[0x29];
    auVar179[10] = puVar75[0x2a];
    auVar149[11] = puVar75[0x2c];
    auVar164[11] = puVar75[0x2d];
    auVar179[11] = puVar75[0x2e];
    auVar149[12] = puVar75[0x30];
    auVar164[12] = puVar75[0x31];
    auVar179[12] = puVar75[0x32];
    auVar149[13] = puVar75[0x34];
    auVar164[13] = puVar75[0x35];
    auVar179[13] = puVar75[0x36];
    auVar149[14] = puVar75[0x38];
    auVar164[14] = puVar75[0x39];
    auVar179[14] = puVar75[0x3a];
    auVar149[15] = puVar75[0x3c];
    auVar164[15] = puVar75[0x3d];
    auVar179[15] = puVar75[0x3e];
    auVar190._0_8_ =
         CONCAT17(puVar75[0x1f],
                  CONCAT16(puVar75[0x1b],
                           CONCAT15(puVar75[0x17],
                                    CONCAT14(puVar75[0x13],
                                             CONCAT13(puVar75[0xf],
                                                      CONCAT12(puVar75[0xb],
                                                               CONCAT11(puVar75[7],puVar75[3])))))))
         & 0x3f3f3f3f3f3f3f3f;
    auVar190[8] = puVar75[0x23] & 0x3f;
    auVar190[9] = puVar75[0x27] & 0x3f;
    auVar190[10] = puVar75[0x2b] & 0x3f;
    auVar190[11] = puVar75[0x2f] & 0x3f;
    auVar190[12] = puVar75[0x33] & 0x3f;
    auVar190[13] = puVar75[0x37] & 0x3f;
    auVar190[14] = puVar75[0x3b] & 0x3f;
    auVar190[15] = puVar75[0x3f] & 0x3f;
    auVar33[1] = uVar111;
    auVar33[0] = uVar110;
    auVar33[2] = uVar112;
    auVar33[3] = uVar113;
    auVar33[4] = uVar114;
    auVar33[5] = uVar115;
    auVar33[6] = uVar116;
    auVar33[7] = uVar117;
    auVar33[8] = uVar118;
    auVar33[9] = uVar119;
    auVar33[10] = uVar120;
    auVar33[11] = uVar121;
    auVar33[12] = uVar122;
    auVar33[13] = uVar123;
    auVar33[14] = uVar124;
    auVar33[15] = uVar125;
    auVar171 = NEON_cmeq(auVar33,auVar179,1);
    auVar16[1] = uVar95;
    auVar16[0] = uVar94;
    auVar16[2] = uVar96;
    auVar16[3] = uVar97;
    auVar16[4] = uVar98;
    auVar16[5] = uVar99;
    auVar16[6] = uVar100;
    auVar16[7] = uVar101;
    auVar16[8] = uVar102;
    auVar16[9] = uVar103;
    auVar16[10] = uVar104;
    auVar16[11] = uVar105;
    auVar16[12] = uVar106;
    auVar16[13] = uVar107;
    auVar16[14] = uVar108;
    auVar16[15] = uVar109;
    auVar207 = NEON_cmeq(auVar16,auVar164,1);
    auVar34[1] = uVar111;
    auVar34[0] = uVar110;
    auVar34[2] = uVar112;
    auVar34[3] = uVar113;
    auVar34[4] = uVar114;
    auVar34[5] = uVar115;
    auVar34[6] = uVar116;
    auVar34[7] = uVar117;
    auVar34[8] = uVar118;
    auVar34[9] = uVar119;
    auVar34[10] = uVar120;
    auVar34[11] = uVar121;
    auVar34[12] = uVar122;
    auVar34[13] = uVar123;
    auVar34[14] = uVar124;
    auVar34[15] = uVar125;
    auVar199 = NEON_cmhi(auVar179,auVar34,1);
    auVar17[1] = uVar95;
    auVar17[0] = uVar94;
    auVar17[2] = uVar96;
    auVar17[3] = uVar97;
    auVar17[4] = uVar98;
    auVar17[5] = uVar99;
    auVar17[6] = uVar100;
    auVar17[7] = uVar101;
    auVar17[8] = uVar102;
    auVar17[9] = uVar103;
    auVar17[10] = uVar104;
    auVar17[11] = uVar105;
    auVar17[12] = uVar106;
    auVar17[13] = uVar107;
    auVar17[14] = uVar108;
    auVar17[15] = uVar109;
    auVar158 = NEON_cmhi(auVar164,auVar17,1);
    auVar4[1] = uVar79;
    auVar4[0] = uVar78;
    auVar4[2] = uVar80;
    auVar4[3] = uVar81;
    auVar4[4] = uVar82;
    auVar4[5] = uVar83;
    auVar4[6] = uVar84;
    auVar4[7] = uVar85;
    auVar4[8] = uVar86;
    auVar4[9] = uVar87;
    auVar4[10] = uVar88;
    auVar4[11] = uVar89;
    auVar4[12] = uVar90;
    auVar4[13] = uVar91;
    auVar4[14] = uVar92;
    auVar4[15] = uVar93;
    auVar183 = NEON_cmhi(auVar149,auVar4,1);
    auVar49[8] = bVar134;
    auVar49._0_8_ =
         (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129
                                                  ,CONCAT12(bVar128,CONCAT11(bVar127,bVar126)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar49[9] = bVar135;
    auVar49[10] = bVar136;
    auVar49[11] = bVar137;
    auVar49[12] = bVar138;
    auVar49[13] = bVar139;
    auVar49[14] = bVar140;
    auVar49[15] = bVar141;
    auVar196 = NEON_cmeq(auVar49,auVar190,1);
    *pbVar72 = (bVar126 & 0x7f ^ 0x40) >> 3 |
               ~((auVar160[0] | auVar204[0] & auVar208[0] | auVar204[0] & auVar197[0] & auVar142[0])
                & ~auVar209[0]) &
               ~((auVar173[0] | auVar200[0] & auVar154[0] | auVar200[0] & auVar198[0] & auVar153[0])
                & ~auVar210[0]) &
               ~((auVar175[0] | auVar169[0] & auVar156[0] | auVar169[0] & auVar203[0] & auVar168[0])
                & ~auVar211[0]) &
               ~((auVar199[0] | auVar171[0] & auVar158[0] | auVar171[0] & auVar207[0] & auVar183[0])
                & ~auVar196[0]);
    pbVar72[1] = (bVar127 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[1] | auVar204[1] & auVar208[1] |
                   auVar204[1] & auVar197[1] & auVar142[1]) & ~auVar209[1]) &
                 ~((auVar173[1] | auVar200[1] & auVar154[1] |
                   auVar200[1] & auVar198[1] & auVar153[1]) & ~auVar210[1]) &
                 ~((auVar175[1] | auVar169[1] & auVar156[1] |
                   auVar169[1] & auVar203[1] & auVar168[1]) & ~auVar211[1]) &
                 ~((auVar199[1] | auVar171[1] & auVar158[1] |
                   auVar171[1] & auVar207[1] & auVar183[1]) & ~auVar196[1]);
    pbVar72[2] = (bVar128 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[2] | auVar204[2] & auVar208[2] |
                   auVar204[2] & auVar197[2] & auVar142[2]) & ~auVar209[2]) &
                 ~((auVar173[2] | auVar200[2] & auVar154[2] |
                   auVar200[2] & auVar198[2] & auVar153[2]) & ~auVar210[2]) &
                 ~((auVar175[2] | auVar169[2] & auVar156[2] |
                   auVar169[2] & auVar203[2] & auVar168[2]) & ~auVar211[2]) &
                 ~((auVar199[2] | auVar171[2] & auVar158[2] |
                   auVar171[2] & auVar207[2] & auVar183[2]) & ~auVar196[2]);
    pbVar72[3] = (bVar129 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[3] | auVar204[3] & auVar208[3] |
                   auVar204[3] & auVar197[3] & auVar142[3]) & ~auVar209[3]) &
                 ~((auVar173[3] | auVar200[3] & auVar154[3] |
                   auVar200[3] & auVar198[3] & auVar153[3]) & ~auVar210[3]) &
                 ~((auVar175[3] | auVar169[3] & auVar156[3] |
                   auVar169[3] & auVar203[3] & auVar168[3]) & ~auVar211[3]) &
                 ~((auVar199[3] | auVar171[3] & auVar158[3] |
                   auVar171[3] & auVar207[3] & auVar183[3]) & ~auVar196[3]);
    pbVar72[4] = (bVar130 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[4] | auVar204[4] & auVar208[4] |
                   auVar204[4] & auVar197[4] & auVar142[4]) & ~auVar209[4]) &
                 ~((auVar173[4] | auVar200[4] & auVar154[4] |
                   auVar200[4] & auVar198[4] & auVar153[4]) & ~auVar210[4]) &
                 ~((auVar175[4] | auVar169[4] & auVar156[4] |
                   auVar169[4] & auVar203[4] & auVar168[4]) & ~auVar211[4]) &
                 ~((auVar199[4] | auVar171[4] & auVar158[4] |
                   auVar171[4] & auVar207[4] & auVar183[4]) & ~auVar196[4]);
    pbVar72[5] = (bVar131 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[5] | auVar204[5] & auVar208[5] |
                   auVar204[5] & auVar197[5] & auVar142[5]) & ~auVar209[5]) &
                 ~((auVar173[5] | auVar200[5] & auVar154[5] |
                   auVar200[5] & auVar198[5] & auVar153[5]) & ~auVar210[5]) &
                 ~((auVar175[5] | auVar169[5] & auVar156[5] |
                   auVar169[5] & auVar203[5] & auVar168[5]) & ~auVar211[5]) &
                 ~((auVar199[5] | auVar171[5] & auVar158[5] |
                   auVar171[5] & auVar207[5] & auVar183[5]) & ~auVar196[5]);
    pbVar72[6] = (bVar132 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[6] | auVar204[6] & auVar208[6] |
                   auVar204[6] & auVar197[6] & auVar142[6]) & ~auVar209[6]) &
                 ~((auVar173[6] | auVar200[6] & auVar154[6] |
                   auVar200[6] & auVar198[6] & auVar153[6]) & ~auVar210[6]) &
                 ~((auVar175[6] | auVar169[6] & auVar156[6] |
                   auVar169[6] & auVar203[6] & auVar168[6]) & ~auVar211[6]) &
                 ~((auVar199[6] | auVar171[6] & auVar158[6] |
                   auVar171[6] & auVar207[6] & auVar183[6]) & ~auVar196[6]);
    pbVar72[7] = (bVar133 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar160[7] | auVar204[7] & auVar208[7] |
                   auVar204[7] & auVar197[7] & auVar142[7]) & ~auVar209[7]) &
                 ~((auVar173[7] | auVar200[7] & auVar154[7] |
                   auVar200[7] & auVar198[7] & auVar153[7]) & ~auVar210[7]) &
                 ~((auVar175[7] | auVar169[7] & auVar156[7] |
                   auVar169[7] & auVar203[7] & auVar168[7]) & ~auVar211[7]) &
                 ~((auVar199[7] | auVar171[7] & auVar158[7] |
                   auVar171[7] & auVar207[7] & auVar183[7]) & ~auVar196[7]);
    pbVar72[8] = bVar134 >> 3 |
                 ~((auVar160[8] | auVar204[8] & auVar208[8] |
                   auVar204[8] & auVar197[8] & auVar142[8]) & ~auVar209[8]) &
                 ~((auVar173[8] | auVar200[8] & auVar154[8] |
                   auVar200[8] & auVar198[8] & auVar153[8]) & ~auVar210[8]) &
                 ~((auVar175[8] | auVar169[8] & auVar156[8] |
                   auVar169[8] & auVar203[8] & auVar168[8]) & ~auVar211[8]) &
                 ~((auVar199[8] | auVar171[8] & auVar158[8] |
                   auVar171[8] & auVar207[8] & auVar183[8]) & ~auVar196[8]);
    pbVar72[9] = bVar135 >> 3 |
                 ~((auVar160[9] | auVar204[9] & auVar208[9] |
                   auVar204[9] & auVar197[9] & auVar142[9]) & ~auVar209[9]) &
                 ~((auVar173[9] | auVar200[9] & auVar154[9] |
                   auVar200[9] & auVar198[9] & auVar153[9]) & ~auVar210[9]) &
                 ~((auVar175[9] | auVar169[9] & auVar156[9] |
                   auVar169[9] & auVar203[9] & auVar168[9]) & ~auVar211[9]) &
                 ~((auVar199[9] | auVar171[9] & auVar158[9] |
                   auVar171[9] & auVar207[9] & auVar183[9]) & ~auVar196[9]);
    pbVar72[10] = bVar136 >> 3 |
                  ~((auVar160[10] | auVar204[10] & auVar208[10] |
                    auVar204[10] & auVar197[10] & auVar142[10]) & ~auVar209[10]) &
                  ~((auVar173[10] | auVar200[10] & auVar154[10] |
                    auVar200[10] & auVar198[10] & auVar153[10]) & ~auVar210[10]) &
                  ~((auVar175[10] | auVar169[10] & auVar156[10] |
                    auVar169[10] & auVar203[10] & auVar168[10]) & ~auVar211[10]) &
                  ~((auVar199[10] | auVar171[10] & auVar158[10] |
                    auVar171[10] & auVar207[10] & auVar183[10]) & ~auVar196[10]);
    pbVar72[0xb] = bVar137 >> 3 |
                   ~((auVar160[11] | auVar204[11] & auVar208[11] |
                     auVar204[11] & auVar197[11] & auVar142[11]) & ~auVar209[11]) &
                   ~((auVar173[11] | auVar200[11] & auVar154[11] |
                     auVar200[11] & auVar198[11] & auVar153[11]) & ~auVar210[11]) &
                   ~((auVar175[11] | auVar169[11] & auVar156[11] |
                     auVar169[11] & auVar203[11] & auVar168[11]) & ~auVar211[11]) &
                   ~((auVar199[11] | auVar171[11] & auVar158[11] |
                     auVar171[11] & auVar207[11] & auVar183[11]) & ~auVar196[11]);
    pbVar72[0xc] = bVar138 >> 3 |
                   ~((auVar160[12] | auVar204[12] & auVar208[12] |
                     auVar204[12] & auVar197[12] & auVar142[12]) & ~auVar209[12]) &
                   ~((auVar173[12] | auVar200[12] & auVar154[12] |
                     auVar200[12] & auVar198[12] & auVar153[12]) & ~auVar210[12]) &
                   ~((auVar175[12] | auVar169[12] & auVar156[12] |
                     auVar169[12] & auVar203[12] & auVar168[12]) & ~auVar211[12]) &
                   ~((auVar199[12] | auVar171[12] & auVar158[12] |
                     auVar171[12] & auVar207[12] & auVar183[12]) & ~auVar196[12]);
    pbVar72[0xd] = bVar139 >> 3 |
                   ~((auVar160[13] | auVar204[13] & auVar208[13] |
                     auVar204[13] & auVar197[13] & auVar142[13]) & ~auVar209[13]) &
                   ~((auVar173[13] | auVar200[13] & auVar154[13] |
                     auVar200[13] & auVar198[13] & auVar153[13]) & ~auVar210[13]) &
                   ~((auVar175[13] | auVar169[13] & auVar156[13] |
                     auVar169[13] & auVar203[13] & auVar168[13]) & ~auVar211[13]) &
                   ~((auVar199[13] | auVar171[13] & auVar158[13] |
                     auVar171[13] & auVar207[13] & auVar183[13]) & ~auVar196[13]);
    pbVar72[0xe] = bVar140 >> 3 |
                   ~((auVar160[14] | auVar204[14] & auVar208[14] |
                     auVar204[14] & auVar197[14] & auVar142[14]) & ~auVar209[14]) &
                   ~((auVar173[14] | auVar200[14] & auVar154[14] |
                     auVar200[14] & auVar198[14] & auVar153[14]) & ~auVar210[14]) &
                   ~((auVar175[14] | auVar169[14] & auVar156[14] |
                     auVar169[14] & auVar203[14] & auVar168[14]) & ~auVar211[14]) &
                   ~((auVar199[14] | auVar171[14] & auVar158[14] |
                     auVar171[14] & auVar207[14] & auVar183[14]) & ~auVar196[14]);
    pbVar72[0xf] = bVar141 >> 3 |
                   ~((auVar160[15] | auVar204[15] & auVar208[15] |
                     auVar204[15] & auVar197[15] & auVar142[15]) & ~auVar209[15]) &
                   ~((auVar173[15] | auVar200[15] & auVar154[15] |
                     auVar200[15] & auVar198[15] & auVar153[15]) & ~auVar210[15]) &
                   ~((auVar175[15] | auVar169[15] & auVar156[15] |
                     auVar169[15] & auVar203[15] & auVar168[15]) & ~auVar211[15]) &
                   ~((auVar199[15] | auVar171[15] & auVar158[15] |
                     auVar171[15] & auVar207[15] & auVar183[15]) & ~auVar196[15]);
    iVar77 = iVar77 + -0x10;
    pbVar64 = pbVar72 + 0x10;
    puVar61 = puVar73 + 0x40;
    puVar63 = puVar74 + 0x40;
    puVar62 = puVar75 + 0x40;
    puVar60 = puVar76 + 0x40;
  } while (iVar77 != 0);
  uVar78 = puVar74[0x40];
  uVar94 = puVar74[0x41];
  uVar110 = puVar74[0x42];
  bVar126 = puVar74[0x43];
  uVar79 = puVar74[0x44];
  uVar95 = puVar74[0x45];
  uVar111 = puVar74[0x46];
  bVar127 = puVar74[0x47];
  uVar80 = puVar74[0x48];
  uVar96 = puVar74[0x49];
  uVar112 = puVar74[0x4a];
  bVar128 = puVar74[0x4b];
  uVar81 = puVar74[0x4c];
  uVar97 = puVar74[0x4d];
  uVar113 = puVar74[0x4e];
  bVar129 = puVar74[0x4f];
  uVar82 = puVar74[0x50];
  uVar98 = puVar74[0x51];
  uVar114 = puVar74[0x52];
  bVar130 = puVar74[0x53];
  uVar83 = puVar74[0x54];
  uVar99 = puVar74[0x55];
  uVar115 = puVar74[0x56];
  bVar131 = puVar74[0x57];
  uVar84 = puVar74[0x58];
  uVar100 = puVar74[0x59];
  uVar116 = puVar74[0x5a];
  bVar132 = puVar74[0x5b];
  uVar85 = puVar74[0x5c];
  uVar101 = puVar74[0x5d];
  uVar117 = puVar74[0x5e];
  bVar133 = puVar74[0x5f];
  uVar86 = puVar74[0x60];
  uVar102 = puVar74[0x61];
  uVar118 = puVar74[0x62];
  uVar87 = puVar74[100];
  uVar103 = puVar74[0x65];
  uVar119 = puVar74[0x66];
  uVar88 = puVar74[0x68];
  uVar104 = puVar74[0x69];
  uVar120 = puVar74[0x6a];
  uVar89 = puVar74[0x6c];
  uVar105 = puVar74[0x6d];
  uVar121 = puVar74[0x6e];
  uVar90 = puVar74[0x70];
  uVar106 = puVar74[0x71];
  uVar122 = puVar74[0x72];
  uVar91 = puVar74[0x74];
  uVar107 = puVar74[0x75];
  uVar123 = puVar74[0x76];
  uVar92 = puVar74[0x78];
  uVar108 = puVar74[0x79];
  uVar124 = puVar74[0x7a];
  uVar93 = puVar74[0x7c];
  uVar109 = puVar74[0x7d];
  uVar125 = puVar74[0x7e];
  auVar150[0] = puVar76[0x40];
  auVar165[0] = puVar76[0x41];
  auVar180[0] = puVar76[0x42];
  auVar150[1] = puVar76[0x44];
  auVar165[1] = puVar76[0x45];
  auVar180[1] = puVar76[0x46];
  auVar150[2] = puVar76[0x48];
  auVar165[2] = puVar76[0x49];
  auVar180[2] = puVar76[0x4a];
  auVar150[3] = puVar76[0x4c];
  auVar165[3] = puVar76[0x4d];
  auVar180[3] = puVar76[0x4e];
  auVar150[4] = puVar76[0x50];
  auVar165[4] = puVar76[0x51];
  auVar180[4] = puVar76[0x52];
  auVar150[5] = puVar76[0x54];
  auVar165[5] = puVar76[0x55];
  auVar180[5] = puVar76[0x56];
  auVar150[6] = puVar76[0x58];
  auVar165[6] = puVar76[0x59];
  auVar180[6] = puVar76[0x5a];
  auVar150[7] = puVar76[0x5c];
  auVar165[7] = puVar76[0x5d];
  auVar180[7] = puVar76[0x5e];
  auVar150[8] = puVar76[0x60];
  auVar165[8] = puVar76[0x61];
  auVar180[8] = puVar76[0x62];
  auVar150[9] = puVar76[100];
  auVar165[9] = puVar76[0x65];
  auVar180[9] = puVar76[0x66];
  auVar150[10] = puVar76[0x68];
  auVar165[10] = puVar76[0x69];
  auVar180[10] = puVar76[0x6a];
  auVar150[11] = puVar76[0x6c];
  auVar165[11] = puVar76[0x6d];
  auVar180[11] = puVar76[0x6e];
  auVar150[12] = puVar76[0x70];
  auVar165[12] = puVar76[0x71];
  auVar180[12] = puVar76[0x72];
  auVar150[13] = puVar76[0x74];
  auVar165[13] = puVar76[0x75];
  auVar180[13] = puVar76[0x76];
  auVar150[14] = puVar76[0x78];
  auVar165[14] = puVar76[0x79];
  auVar180[14] = puVar76[0x7a];
  auVar150[15] = puVar76[0x7c];
  auVar165[15] = puVar76[0x7d];
  auVar180[15] = puVar76[0x7e];
  auVar191._0_8_ =
       CONCAT17(puVar76[0x5f],
                CONCAT16(puVar76[0x5b],
                         CONCAT15(puVar76[0x57],
                                  CONCAT14(puVar76[0x53],
                                           CONCAT13(puVar76[0x4f],
                                                    CONCAT12(puVar76[0x4b],
                                                             CONCAT11(puVar76[0x47],puVar76[0x43])))
                                          )))) & 0x3f3f3f3f3f3f3f3f;
  auVar191[8] = puVar76[99] & 0x3f;
  auVar191[9] = puVar76[0x67] & 0x3f;
  auVar191[10] = puVar76[0x6b] & 0x3f;
  auVar191[11] = puVar76[0x6f] & 0x3f;
  auVar191[12] = puVar76[0x73] & 0x3f;
  auVar191[13] = puVar76[0x77] & 0x3f;
  auVar191[14] = puVar76[0x7b] & 0x3f;
  auVar191[15] = puVar76[0x7f] & 0x3f;
  bVar134 = puVar74[99] & 0x7f ^ 0x40;
  bVar135 = puVar74[0x67] & 0x7f ^ 0x40;
  bVar136 = puVar74[0x6b] & 0x7f ^ 0x40;
  bVar137 = puVar74[0x6f] & 0x7f ^ 0x40;
  bVar138 = puVar74[0x73] & 0x7f ^ 0x40;
  bVar139 = puVar74[0x77] & 0x7f ^ 0x40;
  bVar140 = puVar74[0x7b] & 0x7f ^ 0x40;
  bVar141 = puVar74[0x7f] & 0x7f ^ 0x40;
  auVar35[1] = uVar111;
  auVar35[0] = uVar110;
  auVar35[2] = uVar112;
  auVar35[3] = uVar113;
  auVar35[4] = uVar114;
  auVar35[5] = uVar115;
  auVar35[6] = uVar116;
  auVar35[7] = uVar117;
  auVar35[8] = uVar118;
  auVar35[9] = uVar119;
  auVar35[10] = uVar120;
  auVar35[11] = uVar121;
  auVar35[12] = uVar122;
  auVar35[13] = uVar123;
  auVar35[14] = uVar124;
  auVar35[15] = uVar125;
  auVar204 = NEON_cmeq(auVar35,auVar180,1);
  auVar18[1] = uVar95;
  auVar18[0] = uVar94;
  auVar18[2] = uVar96;
  auVar18[3] = uVar97;
  auVar18[4] = uVar98;
  auVar18[5] = uVar99;
  auVar18[6] = uVar100;
  auVar18[7] = uVar101;
  auVar18[8] = uVar102;
  auVar18[9] = uVar103;
  auVar18[10] = uVar104;
  auVar18[11] = uVar105;
  auVar18[12] = uVar106;
  auVar18[13] = uVar107;
  auVar18[14] = uVar108;
  auVar18[15] = uVar109;
  auVar197 = NEON_cmeq(auVar18,auVar165,1);
  auVar36[1] = uVar111;
  auVar36[0] = uVar110;
  auVar36[2] = uVar112;
  auVar36[3] = uVar113;
  auVar36[4] = uVar114;
  auVar36[5] = uVar115;
  auVar36[6] = uVar116;
  auVar36[7] = uVar117;
  auVar36[8] = uVar118;
  auVar36[9] = uVar119;
  auVar36[10] = uVar120;
  auVar36[11] = uVar121;
  auVar36[12] = uVar122;
  auVar36[13] = uVar123;
  auVar36[14] = uVar124;
  auVar36[15] = uVar125;
  auVar160 = NEON_cmhi(auVar180,auVar36,1);
  auVar19[1] = uVar95;
  auVar19[0] = uVar94;
  auVar19[2] = uVar96;
  auVar19[3] = uVar97;
  auVar19[4] = uVar98;
  auVar19[5] = uVar99;
  auVar19[6] = uVar100;
  auVar19[7] = uVar101;
  auVar19[8] = uVar102;
  auVar19[9] = uVar103;
  auVar19[10] = uVar104;
  auVar19[11] = uVar105;
  auVar19[12] = uVar106;
  auVar19[13] = uVar107;
  auVar19[14] = uVar108;
  auVar19[15] = uVar109;
  auVar208 = NEON_cmhi(auVar165,auVar19,1);
  auVar5[1] = uVar79;
  auVar5[0] = uVar78;
  auVar5[2] = uVar80;
  auVar5[3] = uVar81;
  auVar5[4] = uVar82;
  auVar5[5] = uVar83;
  auVar5[6] = uVar84;
  auVar5[7] = uVar85;
  auVar5[8] = uVar86;
  auVar5[9] = uVar87;
  auVar5[10] = uVar88;
  auVar5[11] = uVar89;
  auVar5[12] = uVar90;
  auVar5[13] = uVar91;
  auVar5[14] = uVar92;
  auVar5[15] = uVar93;
  auVar142 = NEON_cmhi(auVar150,auVar5,1);
  auVar50[8] = bVar134;
  auVar50._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar50[9] = bVar135;
  auVar50[10] = bVar136;
  auVar50[11] = bVar137;
  auVar50[12] = bVar138;
  auVar50[13] = bVar139;
  auVar50[14] = bVar140;
  auVar50[15] = bVar141;
  auVar209 = NEON_cmeq(auVar50,auVar191,1);
  auVar192[1] = uStack_d;
  auVar192[0] = uStack_d;
  auVar192[2] = uStack_d;
  auVar192[3] = uStack_d;
  auVar192[4] = uStack_d;
  auVar192[5] = uStack_d;
  auVar192[6] = uStack_d;
  auVar192[7] = uStack_d;
  auVar192[8] = uStack_d;
  auVar192[9] = uStack_d;
  auVar192[10] = uStack_d;
  auVar192[11] = uStack_d;
  auVar192[12] = uStack_d;
  auVar192[13] = uStack_d;
  auVar192[14] = uStack_d;
  auVar192[15] = uStack_d;
  auVar6[1] = uVar79;
  auVar6[0] = uVar78;
  auVar6[2] = uVar80;
  auVar6[3] = uVar81;
  auVar6[4] = uVar82;
  auVar6[5] = uVar83;
  auVar6[6] = uVar84;
  auVar6[7] = uVar85;
  auVar6[8] = uVar86;
  auVar6[9] = uVar87;
  auVar6[10] = uVar88;
  auVar6[11] = uVar89;
  auVar6[12] = uVar90;
  auVar6[13] = uVar91;
  auVar6[14] = uVar92;
  auVar6[15] = uVar93;
  auVar153 = NEON_ext(auVar6,auVar142,1,1);
  auVar20[1] = uVar95;
  auVar20[0] = uVar94;
  auVar20[2] = uVar96;
  auVar20[3] = uVar97;
  auVar20[4] = uVar98;
  auVar20[5] = uVar99;
  auVar20[6] = uVar100;
  auVar20[7] = uVar101;
  auVar20[8] = uVar102;
  auVar20[9] = uVar103;
  auVar20[10] = uVar104;
  auVar20[11] = uVar105;
  auVar20[12] = uVar106;
  auVar20[13] = uVar107;
  auVar20[14] = uVar108;
  auVar20[15] = uVar109;
  auVar168 = NEON_ext(auVar20,auVar208,1,1);
  auVar37[1] = uVar111;
  auVar37[0] = uVar110;
  auVar37[2] = uVar112;
  auVar37[3] = uVar113;
  auVar37[4] = uVar114;
  auVar37[5] = uVar115;
  auVar37[6] = uVar116;
  auVar37[7] = uVar117;
  auVar37[8] = uVar118;
  auVar37[9] = uVar119;
  auVar37[10] = uVar120;
  auVar37[11] = uVar121;
  auVar37[12] = uVar122;
  auVar37[13] = uVar123;
  auVar37[14] = uVar124;
  auVar37[15] = uVar125;
  auVar183 = NEON_ext(auVar37,auVar160,1,1);
  auVar51[8] = bVar134;
  auVar51._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar51[9] = bVar135;
  auVar51[10] = bVar136;
  auVar51[11] = bVar137;
  auVar51[12] = bVar138;
  auVar51[13] = bVar139;
  auVar51[14] = bVar140;
  auVar51[15] = bVar141;
  auVar154 = NEON_ext(auVar51,auVar192,1,1);
  auVar193._0_8_ = auVar154._0_8_ & 0x3f3f3f3f3f3f3f3f;
  auVar193[8] = auVar154[8] & 0x3f;
  auVar193[9] = auVar154[9] & 0x3f;
  auVar193[10] = auVar154[10] & 0x3f;
  auVar193[11] = auVar154[11] & 0x3f;
  auVar193[12] = auVar154[12] & 0x3f;
  auVar193[13] = auVar154[13] & 0x3f;
  auVar193[14] = auVar154[14] & 0x3f;
  auVar193[15] = auVar154[15] & 0x3f;
  auVar38[1] = uVar111;
  auVar38[0] = uVar110;
  auVar38[2] = uVar112;
  auVar38[3] = uVar113;
  auVar38[4] = uVar114;
  auVar38[5] = uVar115;
  auVar38[6] = uVar116;
  auVar38[7] = uVar117;
  auVar38[8] = uVar118;
  auVar38[9] = uVar119;
  auVar38[10] = uVar120;
  auVar38[11] = uVar121;
  auVar38[12] = uVar122;
  auVar38[13] = uVar123;
  auVar38[14] = uVar124;
  auVar38[15] = uVar125;
  auVar200 = NEON_cmeq(auVar38,auVar183,1);
  auVar21[1] = uVar95;
  auVar21[0] = uVar94;
  auVar21[2] = uVar96;
  auVar21[3] = uVar97;
  auVar21[4] = uVar98;
  auVar21[5] = uVar99;
  auVar21[6] = uVar100;
  auVar21[7] = uVar101;
  auVar21[8] = uVar102;
  auVar21[9] = uVar103;
  auVar21[10] = uVar104;
  auVar21[11] = uVar105;
  auVar21[12] = uVar106;
  auVar21[13] = uVar107;
  auVar21[14] = uVar108;
  auVar21[15] = uVar109;
  auVar198 = NEON_cmeq(auVar21,auVar168,1);
  auVar39[1] = uVar111;
  auVar39[0] = uVar110;
  auVar39[2] = uVar112;
  auVar39[3] = uVar113;
  auVar39[4] = uVar114;
  auVar39[5] = uVar115;
  auVar39[6] = uVar116;
  auVar39[7] = uVar117;
  auVar39[8] = uVar118;
  auVar39[9] = uVar119;
  auVar39[10] = uVar120;
  auVar39[11] = uVar121;
  auVar39[12] = uVar122;
  auVar39[13] = uVar123;
  auVar39[14] = uVar124;
  auVar39[15] = uVar125;
  auVar173 = NEON_cmhi(auVar183,auVar39,1);
  auVar22[1] = uVar95;
  auVar22[0] = uVar94;
  auVar22[2] = uVar96;
  auVar22[3] = uVar97;
  auVar22[4] = uVar98;
  auVar22[5] = uVar99;
  auVar22[6] = uVar100;
  auVar22[7] = uVar101;
  auVar22[8] = uVar102;
  auVar22[9] = uVar103;
  auVar22[10] = uVar104;
  auVar22[11] = uVar105;
  auVar22[12] = uVar106;
  auVar22[13] = uVar107;
  auVar22[14] = uVar108;
  auVar22[15] = uVar109;
  auVar154 = NEON_cmhi(auVar168,auVar22,1);
  auVar7[1] = uVar79;
  auVar7[0] = uVar78;
  auVar7[2] = uVar80;
  auVar7[3] = uVar81;
  auVar7[4] = uVar82;
  auVar7[5] = uVar83;
  auVar7[6] = uVar84;
  auVar7[7] = uVar85;
  auVar7[8] = uVar86;
  auVar7[9] = uVar87;
  auVar7[10] = uVar88;
  auVar7[11] = uVar89;
  auVar7[12] = uVar90;
  auVar7[13] = uVar91;
  auVar7[14] = uVar92;
  auVar7[15] = uVar93;
  auVar153 = NEON_cmhi(auVar153,auVar7,1);
  auVar52[8] = bVar134;
  auVar52._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar52[9] = bVar135;
  auVar52[10] = bVar136;
  auVar52[11] = bVar137;
  auVar52[12] = bVar138;
  auVar52[13] = bVar139;
  auVar52[14] = bVar140;
  auVar52[15] = bVar141;
  auVar210 = NEON_cmeq(auVar52,auVar193,1);
  auVar151[0] = puVar73[0x40];
  auVar166[0] = puVar73[0x41];
  auVar181[0] = puVar73[0x42];
  auVar151[1] = puVar73[0x44];
  auVar166[1] = puVar73[0x45];
  auVar181[1] = puVar73[0x46];
  auVar151[2] = puVar73[0x48];
  auVar166[2] = puVar73[0x49];
  auVar181[2] = puVar73[0x4a];
  auVar151[3] = puVar73[0x4c];
  auVar166[3] = puVar73[0x4d];
  auVar181[3] = puVar73[0x4e];
  auVar151[4] = puVar73[0x50];
  auVar166[4] = puVar73[0x51];
  auVar181[4] = puVar73[0x52];
  auVar151[5] = puVar73[0x54];
  auVar166[5] = puVar73[0x55];
  auVar181[5] = puVar73[0x56];
  auVar151[6] = puVar73[0x58];
  auVar166[6] = puVar73[0x59];
  auVar181[6] = puVar73[0x5a];
  auVar151[7] = puVar73[0x5c];
  auVar166[7] = puVar73[0x5d];
  auVar181[7] = puVar73[0x5e];
  auVar151[8] = puVar73[0x60];
  auVar166[8] = puVar73[0x61];
  auVar181[8] = puVar73[0x62];
  auVar151[9] = puVar73[100];
  auVar166[9] = puVar73[0x65];
  auVar181[9] = puVar73[0x66];
  auVar151[10] = puVar73[0x68];
  auVar166[10] = puVar73[0x69];
  auVar181[10] = puVar73[0x6a];
  auVar151[11] = puVar73[0x6c];
  auVar166[11] = puVar73[0x6d];
  auVar181[11] = puVar73[0x6e];
  auVar151[12] = puVar73[0x70];
  auVar166[12] = puVar73[0x71];
  auVar181[12] = puVar73[0x72];
  auVar151[13] = puVar73[0x74];
  auVar166[13] = puVar73[0x75];
  auVar181[13] = puVar73[0x76];
  auVar151[14] = puVar73[0x78];
  auVar166[14] = puVar73[0x79];
  auVar181[14] = puVar73[0x7a];
  auVar151[15] = puVar73[0x7c];
  auVar166[15] = puVar73[0x7d];
  auVar181[15] = puVar73[0x7e];
  auVar194._0_8_ =
       CONCAT17(puVar73[0x5f],
                CONCAT16(puVar73[0x5b],
                         CONCAT15(puVar73[0x57],
                                  CONCAT14(puVar73[0x53],
                                           CONCAT13(puVar73[0x4f],
                                                    CONCAT12(puVar73[0x4b],
                                                             CONCAT11(puVar73[0x47],puVar73[0x43])))
                                          )))) & 0x3f3f3f3f3f3f3f3f;
  auVar194[8] = puVar73[99] & 0x3f;
  auVar194[9] = puVar73[0x67] & 0x3f;
  auVar194[10] = puVar73[0x6b] & 0x3f;
  auVar194[11] = puVar73[0x6f] & 0x3f;
  auVar194[12] = puVar73[0x73] & 0x3f;
  auVar194[13] = puVar73[0x77] & 0x3f;
  auVar194[14] = puVar73[0x7b] & 0x3f;
  auVar194[15] = puVar73[0x7f] & 0x3f;
  auVar40[1] = uVar111;
  auVar40[0] = uVar110;
  auVar40[2] = uVar112;
  auVar40[3] = uVar113;
  auVar40[4] = uVar114;
  auVar40[5] = uVar115;
  auVar40[6] = uVar116;
  auVar40[7] = uVar117;
  auVar40[8] = uVar118;
  auVar40[9] = uVar119;
  auVar40[10] = uVar120;
  auVar40[11] = uVar121;
  auVar40[12] = uVar122;
  auVar40[13] = uVar123;
  auVar40[14] = uVar124;
  auVar40[15] = uVar125;
  auVar169 = NEON_cmeq(auVar40,auVar181,1);
  auVar23[1] = uVar95;
  auVar23[0] = uVar94;
  auVar23[2] = uVar96;
  auVar23[3] = uVar97;
  auVar23[4] = uVar98;
  auVar23[5] = uVar99;
  auVar23[6] = uVar100;
  auVar23[7] = uVar101;
  auVar23[8] = uVar102;
  auVar23[9] = uVar103;
  auVar23[10] = uVar104;
  auVar23[11] = uVar105;
  auVar23[12] = uVar106;
  auVar23[13] = uVar107;
  auVar23[14] = uVar108;
  auVar23[15] = uVar109;
  auVar203 = NEON_cmeq(auVar23,auVar166,1);
  auVar41[1] = uVar111;
  auVar41[0] = uVar110;
  auVar41[2] = uVar112;
  auVar41[3] = uVar113;
  auVar41[4] = uVar114;
  auVar41[5] = uVar115;
  auVar41[6] = uVar116;
  auVar41[7] = uVar117;
  auVar41[8] = uVar118;
  auVar41[9] = uVar119;
  auVar41[10] = uVar120;
  auVar41[11] = uVar121;
  auVar41[12] = uVar122;
  auVar41[13] = uVar123;
  auVar41[14] = uVar124;
  auVar41[15] = uVar125;
  auVar175 = NEON_cmhi(auVar181,auVar41,1);
  auVar24[1] = uVar95;
  auVar24[0] = uVar94;
  auVar24[2] = uVar96;
  auVar24[3] = uVar97;
  auVar24[4] = uVar98;
  auVar24[5] = uVar99;
  auVar24[6] = uVar100;
  auVar24[7] = uVar101;
  auVar24[8] = uVar102;
  auVar24[9] = uVar103;
  auVar24[10] = uVar104;
  auVar24[11] = uVar105;
  auVar24[12] = uVar106;
  auVar24[13] = uVar107;
  auVar24[14] = uVar108;
  auVar24[15] = uVar109;
  auVar156 = NEON_cmhi(auVar166,auVar24,1);
  auVar8[1] = uVar79;
  auVar8[0] = uVar78;
  auVar8[2] = uVar80;
  auVar8[3] = uVar81;
  auVar8[4] = uVar82;
  auVar8[5] = uVar83;
  auVar8[6] = uVar84;
  auVar8[7] = uVar85;
  auVar8[8] = uVar86;
  auVar8[9] = uVar87;
  auVar8[10] = uVar88;
  auVar8[11] = uVar89;
  auVar8[12] = uVar90;
  auVar8[13] = uVar91;
  auVar8[14] = uVar92;
  auVar8[15] = uVar93;
  auVar168 = NEON_cmhi(auVar151,auVar8,1);
  auVar53[8] = bVar134;
  auVar53._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar53[9] = bVar135;
  auVar53[10] = bVar136;
  auVar53[11] = bVar137;
  auVar53[12] = bVar138;
  auVar53[13] = bVar139;
  auVar53[14] = bVar140;
  auVar53[15] = bVar141;
  auVar211 = NEON_cmeq(auVar53,auVar194,1);
  auVar152[0] = puVar75[0x40];
  auVar167[0] = puVar75[0x41];
  auVar182[0] = puVar75[0x42];
  auVar152[1] = puVar75[0x44];
  auVar167[1] = puVar75[0x45];
  auVar182[1] = puVar75[0x46];
  auVar152[2] = puVar75[0x48];
  auVar167[2] = puVar75[0x49];
  auVar182[2] = puVar75[0x4a];
  auVar152[3] = puVar75[0x4c];
  auVar167[3] = puVar75[0x4d];
  auVar182[3] = puVar75[0x4e];
  auVar152[4] = puVar75[0x50];
  auVar167[4] = puVar75[0x51];
  auVar182[4] = puVar75[0x52];
  auVar152[5] = puVar75[0x54];
  auVar167[5] = puVar75[0x55];
  auVar182[5] = puVar75[0x56];
  auVar152[6] = puVar75[0x58];
  auVar167[6] = puVar75[0x59];
  auVar182[6] = puVar75[0x5a];
  auVar152[7] = puVar75[0x5c];
  auVar167[7] = puVar75[0x5d];
  auVar182[7] = puVar75[0x5e];
  auVar152[8] = puVar75[0x60];
  auVar167[8] = puVar75[0x61];
  auVar182[8] = puVar75[0x62];
  auVar152[9] = puVar75[100];
  auVar167[9] = puVar75[0x65];
  auVar182[9] = puVar75[0x66];
  auVar152[10] = puVar75[0x68];
  auVar167[10] = puVar75[0x69];
  auVar182[10] = puVar75[0x6a];
  auVar152[11] = puVar75[0x6c];
  auVar167[11] = puVar75[0x6d];
  auVar182[11] = puVar75[0x6e];
  auVar152[12] = puVar75[0x70];
  auVar167[12] = puVar75[0x71];
  auVar182[12] = puVar75[0x72];
  auVar152[13] = puVar75[0x74];
  auVar167[13] = puVar75[0x75];
  auVar182[13] = puVar75[0x76];
  auVar152[14] = puVar75[0x78];
  auVar167[14] = puVar75[0x79];
  auVar182[14] = puVar75[0x7a];
  auVar152[15] = puVar75[0x7c];
  auVar167[15] = puVar75[0x7d];
  auVar182[15] = puVar75[0x7e];
  auVar195._0_8_ =
       CONCAT17(puVar75[0x5f],
                CONCAT16(puVar75[0x5b],
                         CONCAT15(puVar75[0x57],
                                  CONCAT14(puVar75[0x53],
                                           CONCAT13(puVar75[0x4f],
                                                    CONCAT12(puVar75[0x4b],
                                                             CONCAT11(puVar75[0x47],puVar75[0x43])))
                                          )))) & 0x3f3f3f3f3f3f3f3f;
  auVar195[8] = puVar75[99] & 0x3f;
  auVar195[9] = puVar75[0x67] & 0x3f;
  auVar195[10] = puVar75[0x6b] & 0x3f;
  auVar195[11] = puVar75[0x6f] & 0x3f;
  auVar195[12] = puVar75[0x73] & 0x3f;
  auVar195[13] = puVar75[0x77] & 0x3f;
  auVar195[14] = puVar75[0x7b] & 0x3f;
  auVar195[15] = puVar75[0x7f] & 0x3f;
  auVar42[1] = uVar111;
  auVar42[0] = uVar110;
  auVar42[2] = uVar112;
  auVar42[3] = uVar113;
  auVar42[4] = uVar114;
  auVar42[5] = uVar115;
  auVar42[6] = uVar116;
  auVar42[7] = uVar117;
  auVar42[8] = uVar118;
  auVar42[9] = uVar119;
  auVar42[10] = uVar120;
  auVar42[11] = uVar121;
  auVar42[12] = uVar122;
  auVar42[13] = uVar123;
  auVar42[14] = uVar124;
  auVar42[15] = uVar125;
  auVar171 = NEON_cmeq(auVar42,auVar182,1);
  auVar25[1] = uVar95;
  auVar25[0] = uVar94;
  auVar25[2] = uVar96;
  auVar25[3] = uVar97;
  auVar25[4] = uVar98;
  auVar25[5] = uVar99;
  auVar25[6] = uVar100;
  auVar25[7] = uVar101;
  auVar25[8] = uVar102;
  auVar25[9] = uVar103;
  auVar25[10] = uVar104;
  auVar25[11] = uVar105;
  auVar25[12] = uVar106;
  auVar25[13] = uVar107;
  auVar25[14] = uVar108;
  auVar25[15] = uVar109;
  auVar207 = NEON_cmeq(auVar25,auVar167,1);
  auVar43[1] = uVar111;
  auVar43[0] = uVar110;
  auVar43[2] = uVar112;
  auVar43[3] = uVar113;
  auVar43[4] = uVar114;
  auVar43[5] = uVar115;
  auVar43[6] = uVar116;
  auVar43[7] = uVar117;
  auVar43[8] = uVar118;
  auVar43[9] = uVar119;
  auVar43[10] = uVar120;
  auVar43[11] = uVar121;
  auVar43[12] = uVar122;
  auVar43[13] = uVar123;
  auVar43[14] = uVar124;
  auVar43[15] = uVar125;
  auVar199 = NEON_cmhi(auVar182,auVar43,1);
  auVar26[1] = uVar95;
  auVar26[0] = uVar94;
  auVar26[2] = uVar96;
  auVar26[3] = uVar97;
  auVar26[4] = uVar98;
  auVar26[5] = uVar99;
  auVar26[6] = uVar100;
  auVar26[7] = uVar101;
  auVar26[8] = uVar102;
  auVar26[9] = uVar103;
  auVar26[10] = uVar104;
  auVar26[11] = uVar105;
  auVar26[12] = uVar106;
  auVar26[13] = uVar107;
  auVar26[14] = uVar108;
  auVar26[15] = uVar109;
  auVar158 = NEON_cmhi(auVar167,auVar26,1);
  auVar9[1] = uVar79;
  auVar9[0] = uVar78;
  auVar9[2] = uVar80;
  auVar9[3] = uVar81;
  auVar9[4] = uVar82;
  auVar9[5] = uVar83;
  auVar9[6] = uVar84;
  auVar9[7] = uVar85;
  auVar9[8] = uVar86;
  auVar9[9] = uVar87;
  auVar9[10] = uVar88;
  auVar9[11] = uVar89;
  auVar9[12] = uVar90;
  auVar9[13] = uVar91;
  auVar9[14] = uVar92;
  auVar9[15] = uVar93;
  auVar183 = NEON_cmhi(auVar152,auVar9,1);
  auVar54[8] = bVar134;
  auVar54._0_8_ =
       (((((((CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(bVar129,
                                                  CONCAT12(bVar128,CONCAT11(bVar127,bVar126))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar54[9] = bVar135;
  auVar54[10] = bVar136;
  auVar54[11] = bVar137;
  auVar54[12] = bVar138;
  auVar54[13] = bVar139;
  auVar54[14] = bVar140;
  auVar54[15] = bVar141;
  auVar196 = NEON_cmeq(auVar54,auVar195,1);
  pbVar72[0x10] =
       (bVar126 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[0] | auVar204[0] & auVar208[0] | auVar204[0] & auVar197[0] & auVar142[0]) &
        ~auVar209[0]) &
       ~((auVar173[0] | auVar200[0] & auVar154[0] | auVar200[0] & auVar198[0] & auVar153[0]) &
        ~auVar210[0]) &
       ~((auVar175[0] | auVar169[0] & auVar156[0] | auVar169[0] & auVar203[0] & auVar168[0]) &
        ~auVar211[0]) &
       ~((auVar199[0] | auVar171[0] & auVar158[0] | auVar171[0] & auVar207[0] & auVar183[0]) &
        ~auVar196[0]);
  pbVar72[0x11] =
       (bVar127 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[1] | auVar204[1] & auVar208[1] | auVar204[1] & auVar197[1] & auVar142[1]) &
        ~auVar209[1]) &
       ~((auVar173[1] | auVar200[1] & auVar154[1] | auVar200[1] & auVar198[1] & auVar153[1]) &
        ~auVar210[1]) &
       ~((auVar175[1] | auVar169[1] & auVar156[1] | auVar169[1] & auVar203[1] & auVar168[1]) &
        ~auVar211[1]) &
       ~((auVar199[1] | auVar171[1] & auVar158[1] | auVar171[1] & auVar207[1] & auVar183[1]) &
        ~auVar196[1]);
  pbVar72[0x12] =
       (bVar128 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[2] | auVar204[2] & auVar208[2] | auVar204[2] & auVar197[2] & auVar142[2]) &
        ~auVar209[2]) &
       ~((auVar173[2] | auVar200[2] & auVar154[2] | auVar200[2] & auVar198[2] & auVar153[2]) &
        ~auVar210[2]) &
       ~((auVar175[2] | auVar169[2] & auVar156[2] | auVar169[2] & auVar203[2] & auVar168[2]) &
        ~auVar211[2]) &
       ~((auVar199[2] | auVar171[2] & auVar158[2] | auVar171[2] & auVar207[2] & auVar183[2]) &
        ~auVar196[2]);
  pbVar72[0x13] =
       (bVar129 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[3] | auVar204[3] & auVar208[3] | auVar204[3] & auVar197[3] & auVar142[3]) &
        ~auVar209[3]) &
       ~((auVar173[3] | auVar200[3] & auVar154[3] | auVar200[3] & auVar198[3] & auVar153[3]) &
        ~auVar210[3]) &
       ~((auVar175[3] | auVar169[3] & auVar156[3] | auVar169[3] & auVar203[3] & auVar168[3]) &
        ~auVar211[3]) &
       ~((auVar199[3] | auVar171[3] & auVar158[3] | auVar171[3] & auVar207[3] & auVar183[3]) &
        ~auVar196[3]);
  pbVar72[0x14] =
       (bVar130 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[4] | auVar204[4] & auVar208[4] | auVar204[4] & auVar197[4] & auVar142[4]) &
        ~auVar209[4]) &
       ~((auVar173[4] | auVar200[4] & auVar154[4] | auVar200[4] & auVar198[4] & auVar153[4]) &
        ~auVar210[4]) &
       ~((auVar175[4] | auVar169[4] & auVar156[4] | auVar169[4] & auVar203[4] & auVar168[4]) &
        ~auVar211[4]) &
       ~((auVar199[4] | auVar171[4] & auVar158[4] | auVar171[4] & auVar207[4] & auVar183[4]) &
        ~auVar196[4]);
  pbVar72[0x15] =
       (bVar131 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[5] | auVar204[5] & auVar208[5] | auVar204[5] & auVar197[5] & auVar142[5]) &
        ~auVar209[5]) &
       ~((auVar173[5] | auVar200[5] & auVar154[5] | auVar200[5] & auVar198[5] & auVar153[5]) &
        ~auVar210[5]) &
       ~((auVar175[5] | auVar169[5] & auVar156[5] | auVar169[5] & auVar203[5] & auVar168[5]) &
        ~auVar211[5]) &
       ~((auVar199[5] | auVar171[5] & auVar158[5] | auVar171[5] & auVar207[5] & auVar183[5]) &
        ~auVar196[5]);
  pbVar72[0x16] =
       (bVar132 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[6] | auVar204[6] & auVar208[6] | auVar204[6] & auVar197[6] & auVar142[6]) &
        ~auVar209[6]) &
       ~((auVar173[6] | auVar200[6] & auVar154[6] | auVar200[6] & auVar198[6] & auVar153[6]) &
        ~auVar210[6]) &
       ~((auVar175[6] | auVar169[6] & auVar156[6] | auVar169[6] & auVar203[6] & auVar168[6]) &
        ~auVar211[6]) &
       ~((auVar199[6] | auVar171[6] & auVar158[6] | auVar171[6] & auVar207[6] & auVar183[6]) &
        ~auVar196[6]);
  pbVar72[0x17] =
       (bVar133 & 0x7f ^ 0x40) >> 3 |
       ~((auVar160[7] | auVar204[7] & auVar208[7] | auVar204[7] & auVar197[7] & auVar142[7]) &
        ~auVar209[7]) &
       ~((auVar173[7] | auVar200[7] & auVar154[7] | auVar200[7] & auVar198[7] & auVar153[7]) &
        ~auVar210[7]) &
       ~((auVar175[7] | auVar169[7] & auVar156[7] | auVar169[7] & auVar203[7] & auVar168[7]) &
        ~auVar211[7]) &
       ~((auVar199[7] | auVar171[7] & auVar158[7] | auVar171[7] & auVar207[7] & auVar183[7]) &
        ~auVar196[7]);
  pbVar72[0x18] =
       bVar134 >> 3 |
       ~((auVar160[8] | auVar204[8] & auVar208[8] | auVar204[8] & auVar197[8] & auVar142[8]) &
        ~auVar209[8]) &
       ~((auVar173[8] | auVar200[8] & auVar154[8] | auVar200[8] & auVar198[8] & auVar153[8]) &
        ~auVar210[8]) &
       ~((auVar175[8] | auVar169[8] & auVar156[8] | auVar169[8] & auVar203[8] & auVar168[8]) &
        ~auVar211[8]) &
       ~((auVar199[8] | auVar171[8] & auVar158[8] | auVar171[8] & auVar207[8] & auVar183[8]) &
        ~auVar196[8]);
  pbVar72[0x19] =
       bVar135 >> 3 |
       ~((auVar160[9] | auVar204[9] & auVar208[9] | auVar204[9] & auVar197[9] & auVar142[9]) &
        ~auVar209[9]) &
       ~((auVar173[9] | auVar200[9] & auVar154[9] | auVar200[9] & auVar198[9] & auVar153[9]) &
        ~auVar210[9]) &
       ~((auVar175[9] | auVar169[9] & auVar156[9] | auVar169[9] & auVar203[9] & auVar168[9]) &
        ~auVar211[9]) &
       ~((auVar199[9] | auVar171[9] & auVar158[9] | auVar171[9] & auVar207[9] & auVar183[9]) &
        ~auVar196[9]);
  pbVar72[0x1a] =
       bVar136 >> 3 |
       ~((auVar160[10] | auVar204[10] & auVar208[10] | auVar204[10] & auVar197[10] & auVar142[10]) &
        ~auVar209[10]) &
       ~((auVar173[10] | auVar200[10] & auVar154[10] | auVar200[10] & auVar198[10] & auVar153[10]) &
        ~auVar210[10]) &
       ~((auVar175[10] | auVar169[10] & auVar156[10] | auVar169[10] & auVar203[10] & auVar168[10]) &
        ~auVar211[10]) &
       ~((auVar199[10] | auVar171[10] & auVar158[10] | auVar171[10] & auVar207[10] & auVar183[10]) &
        ~auVar196[10]);
  pbVar72[0x1b] =
       bVar137 >> 3 |
       ~((auVar160[11] | auVar204[11] & auVar208[11] | auVar204[11] & auVar197[11] & auVar142[11]) &
        ~auVar209[11]) &
       ~((auVar173[11] | auVar200[11] & auVar154[11] | auVar200[11] & auVar198[11] & auVar153[11]) &
        ~auVar210[11]) &
       ~((auVar175[11] | auVar169[11] & auVar156[11] | auVar169[11] & auVar203[11] & auVar168[11]) &
        ~auVar211[11]) &
       ~((auVar199[11] | auVar171[11] & auVar158[11] | auVar171[11] & auVar207[11] & auVar183[11]) &
        ~auVar196[11]);
  pbVar72[0x1c] =
       bVar138 >> 3 |
       ~((auVar160[12] | auVar204[12] & auVar208[12] | auVar204[12] & auVar197[12] & auVar142[12]) &
        ~auVar209[12]) &
       ~((auVar173[12] | auVar200[12] & auVar154[12] | auVar200[12] & auVar198[12] & auVar153[12]) &
        ~auVar210[12]) &
       ~((auVar175[12] | auVar169[12] & auVar156[12] | auVar169[12] & auVar203[12] & auVar168[12]) &
        ~auVar211[12]) &
       ~((auVar199[12] | auVar171[12] & auVar158[12] | auVar171[12] & auVar207[12] & auVar183[12]) &
        ~auVar196[12]);
  pbVar72[0x1d] =
       bVar139 >> 3 |
       ~((auVar160[13] | auVar204[13] & auVar208[13] | auVar204[13] & auVar197[13] & auVar142[13]) &
        ~auVar209[13]) &
       ~((auVar173[13] | auVar200[13] & auVar154[13] | auVar200[13] & auVar198[13] & auVar153[13]) &
        ~auVar210[13]) &
       ~((auVar175[13] | auVar169[13] & auVar156[13] | auVar169[13] & auVar203[13] & auVar168[13]) &
        ~auVar211[13]) &
       ~((auVar199[13] | auVar171[13] & auVar158[13] | auVar171[13] & auVar207[13] & auVar183[13]) &
        ~auVar196[13]);
  pbVar72[0x1e] =
       bVar140 >> 3 |
       ~((auVar160[14] | auVar204[14] & auVar208[14] | auVar204[14] & auVar197[14] & auVar142[14]) &
        ~auVar209[14]) &
       ~((auVar173[14] | auVar200[14] & auVar154[14] | auVar200[14] & auVar198[14] & auVar153[14]) &
        ~auVar210[14]) &
       ~((auVar175[14] | auVar169[14] & auVar156[14] | auVar169[14] & auVar203[14] & auVar168[14]) &
        ~auVar211[14]) &
       ~((auVar199[14] | auVar171[14] & auVar158[14] | auVar171[14] & auVar207[14] & auVar183[14]) &
        ~auVar196[14]);
  pbVar72[0x1f] =
       bVar141 >> 3 |
       ~((auVar160[15] | auVar204[15] & auVar208[15] | auVar204[15] & auVar197[15] & auVar142[15]) &
        ~auVar209[15]) &
       ~((auVar173[15] | auVar200[15] & auVar154[15] | auVar200[15] & auVar198[15] & auVar153[15]) &
        ~auVar210[15]) &
       ~((auVar175[15] | auVar169[15] & auVar156[15] | auVar169[15] & auVar203[15] & auVar168[15]) &
        ~auVar211[15]) &
       ~((auVar199[15] | auVar171[15] & auVar158[15] | auVar171[15] & auVar207[15] & auVar183[15]) &
        ~auVar196[15]);
  auVar212._8_8_ = puVar73 + 0x80;
  auVar212._0_8_ = pbVar72 + 0x20;
  return auVar212;
}


