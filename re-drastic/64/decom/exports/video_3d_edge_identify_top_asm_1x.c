/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_identify_top_asm_1x
 * Address  : 0019c0e0
 * Program  : drastic64
 */


undefined  [16]
video_3d_edge_identify_top_asm_1x
          (byte *param_1,undefined *param_2,undefined *param_3,undefined4 param_4)

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
  int iVar76;
  undefined uVar77;
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
  byte bVar125;
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
  undefined in_q4 [16];
  undefined auVar141 [16];
  undefined auVar142 [16];
  undefined auVar143 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined in_q5 [16];
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined auVar159 [16];
  undefined auVar160 [16];
  undefined in_q6 [16];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  undefined auVar165 [16];
  undefined auVar166 [16];
  undefined auVar167 [16];
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
  byte bStack_d;
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
  
  iVar76 = 0xe0;
  uVar77 = *param_2;
  uVar93 = param_2[1];
  uVar109 = param_2[2];
  bVar125 = param_2[3];
  uVar78 = param_2[4];
  uVar94 = param_2[5];
  uVar110 = param_2[6];
  bVar126 = param_2[7];
  uVar79 = param_2[8];
  uVar95 = param_2[9];
  uVar111 = param_2[10];
  bVar127 = param_2[0xb];
  uVar80 = param_2[0xc];
  uVar96 = param_2[0xd];
  uVar112 = param_2[0xe];
  bVar128 = param_2[0xf];
  uVar81 = param_2[0x10];
  uVar97 = param_2[0x11];
  uVar113 = param_2[0x12];
  bVar129 = param_2[0x13];
  uVar82 = param_2[0x14];
  uVar98 = param_2[0x15];
  uVar114 = param_2[0x16];
  bVar130 = param_2[0x17];
  uVar83 = param_2[0x18];
  uVar99 = param_2[0x19];
  uVar115 = param_2[0x1a];
  bVar131 = param_2[0x1b];
  uVar84 = param_2[0x1c];
  uVar100 = param_2[0x1d];
  uVar116 = param_2[0x1e];
  bVar132 = param_2[0x1f];
  uVar85 = param_2[0x20];
  uVar101 = param_2[0x21];
  uVar117 = param_2[0x22];
  uVar86 = param_2[0x24];
  uVar102 = param_2[0x25];
  uVar118 = param_2[0x26];
  uVar87 = param_2[0x28];
  uVar103 = param_2[0x29];
  uVar119 = param_2[0x2a];
  uVar88 = param_2[0x2c];
  uVar104 = param_2[0x2d];
  uVar120 = param_2[0x2e];
  uVar89 = param_2[0x30];
  uVar105 = param_2[0x31];
  uVar121 = param_2[0x32];
  uVar90 = param_2[0x34];
  uVar106 = param_2[0x35];
  uVar122 = param_2[0x36];
  uVar91 = param_2[0x38];
  uVar107 = param_2[0x39];
  uVar123 = param_2[0x3a];
  uVar92 = param_2[0x3c];
  uVar108 = param_2[0x3d];
  uVar124 = param_2[0x3e];
  bStack_d = (byte)((uint)param_4 >> 0x18);
  auVar191[1] = bStack_d;
  auVar191[0] = bStack_d;
  auVar191[2] = bStack_d;
  auVar191[3] = bStack_d;
  auVar191[4] = bStack_d;
  auVar191[5] = bStack_d;
  auVar191[6] = bStack_d;
  auVar191[7] = bStack_d;
  auVar191[8] = bStack_d;
  auVar191[9] = bStack_d;
  auVar191[10] = bStack_d;
  auVar191[11] = bStack_d;
  auVar191[12] = bStack_d;
  auVar191[13] = bStack_d;
  auVar191[14] = bStack_d;
  auVar191[15] = bStack_d;
  auVar141[1] = uVar78;
  auVar141[0] = uVar77;
  auVar141[2] = uVar79;
  auVar141[3] = uVar80;
  auVar141[4] = uVar81;
  auVar141[5] = uVar82;
  auVar141[6] = uVar83;
  auVar141[7] = uVar84;
  auVar141[8] = uVar85;
  auVar141[9] = uVar86;
  auVar141[10] = uVar87;
  auVar141[11] = uVar88;
  auVar141[12] = uVar89;
  auVar141[13] = uVar90;
  auVar141[14] = uVar91;
  auVar141[15] = uVar92;
  auVar141 = NEON_ext(in_q4,auVar141,0xf,1);
  auVar150[1] = uVar94;
  auVar150[0] = uVar93;
  auVar150[2] = uVar95;
  auVar150[3] = uVar96;
  auVar150[4] = uVar97;
  auVar150[5] = uVar98;
  auVar150[6] = uVar99;
  auVar150[7] = uVar100;
  auVar150[8] = uVar101;
  auVar150[9] = uVar102;
  auVar150[10] = uVar103;
  auVar150[11] = uVar104;
  auVar150[12] = uVar105;
  auVar150[13] = uVar106;
  auVar150[14] = uVar107;
  auVar150[15] = uVar108;
  auVar149 = NEON_ext(in_q5,auVar150,0xf,1);
  auVar162[1] = uVar110;
  auVar162[0] = uVar109;
  auVar162[2] = uVar111;
  auVar162[3] = uVar112;
  auVar162[4] = uVar113;
  auVar162[5] = uVar114;
  auVar162[6] = uVar115;
  auVar162[7] = uVar116;
  auVar162[8] = uVar117;
  auVar162[9] = uVar118;
  auVar162[10] = uVar119;
  auVar162[11] = uVar120;
  auVar162[12] = uVar121;
  auVar162[13] = uVar122;
  auVar162[14] = uVar123;
  auVar162[15] = uVar124;
  auVar161 = NEON_ext(in_q6,auVar162,0xf,1);
  auVar186[1] = bVar126;
  auVar186[0] = bVar125;
  auVar186[2] = bVar127;
  auVar186[3] = bVar128;
  auVar186[4] = bVar129;
  auVar186[5] = bVar130;
  auVar186[6] = bVar131;
  auVar186[7] = bVar132;
  auVar186[8] = param_2[0x23];
  auVar186[9] = param_2[0x27];
  auVar186[10] = param_2[0x2b];
  auVar186[11] = param_2[0x2f];
  auVar186[12] = param_2[0x33];
  auVar186[13] = param_2[0x37];
  auVar186[14] = param_2[0x3b];
  auVar186[15] = param_2[0x3f];
  auVar173 = NEON_ext(auVar191,auVar186,0xf,1);
  auVar195._0_8_ = auVar173._0_8_ & 0x3f3f3f3f3f3f3f3f;
  auVar195[8] = auVar173[8] & 0x3f;
  auVar195[9] = auVar173[9] & 0x3f;
  auVar195[10] = auVar173[10] & 0x3f;
  auVar195[11] = auVar173[11] & 0x3f;
  auVar195[12] = auVar173[12] & 0x3f;
  auVar195[13] = auVar173[13] & 0x3f;
  auVar195[14] = auVar173[14] & 0x3f;
  auVar195[15] = auVar173[15] & 0x3f;
  bVar133 = param_2[0x23] & 0x7f ^ 0x40;
  bVar134 = param_2[0x27] & 0x7f ^ 0x40;
  bVar135 = param_2[0x2b] & 0x7f ^ 0x40;
  bVar136 = param_2[0x2f] & 0x7f ^ 0x40;
  bVar137 = param_2[0x33] & 0x7f ^ 0x40;
  bVar138 = param_2[0x37] & 0x7f ^ 0x40;
  bVar139 = param_2[0x3b] & 0x7f ^ 0x40;
  bVar140 = param_2[0x3f] & 0x7f ^ 0x40;
  auVar164[1] = uVar110;
  auVar164[0] = uVar109;
  auVar164[2] = uVar111;
  auVar164[3] = uVar112;
  auVar164[4] = uVar113;
  auVar164[5] = uVar114;
  auVar164[6] = uVar115;
  auVar164[7] = uVar116;
  auVar164[8] = uVar117;
  auVar164[9] = uVar118;
  auVar164[10] = uVar119;
  auVar164[11] = uVar120;
  auVar164[12] = uVar121;
  auVar164[13] = uVar122;
  auVar164[14] = uVar123;
  auVar164[15] = uVar124;
  auVar186 = NEON_cmeq(auVar164,auVar161,1);
  auVar152[1] = uVar94;
  auVar152[0] = uVar93;
  auVar152[2] = uVar95;
  auVar152[3] = uVar96;
  auVar152[4] = uVar97;
  auVar152[5] = uVar98;
  auVar152[6] = uVar99;
  auVar152[7] = uVar100;
  auVar152[8] = uVar101;
  auVar152[9] = uVar102;
  auVar152[10] = uVar103;
  auVar152[11] = uVar104;
  auVar152[12] = uVar105;
  auVar152[13] = uVar106;
  auVar152[14] = uVar107;
  auVar152[15] = uVar108;
  auVar191 = NEON_cmeq(auVar152,auVar149,1);
  auVar187[1] = uVar110;
  auVar187[0] = uVar109;
  auVar187[2] = uVar111;
  auVar187[3] = uVar112;
  auVar187[4] = uVar113;
  auVar187[5] = uVar114;
  auVar187[6] = uVar115;
  auVar187[7] = uVar116;
  auVar187[8] = uVar117;
  auVar187[9] = uVar118;
  auVar187[10] = uVar119;
  auVar187[11] = uVar120;
  auVar187[12] = uVar121;
  auVar187[13] = uVar122;
  auVar187[14] = uVar123;
  auVar187[15] = uVar124;
  auVar162 = NEON_cmhi(auVar161,auVar187,1);
  auVar153[1] = uVar94;
  auVar153[0] = uVar93;
  auVar153[2] = uVar95;
  auVar153[3] = uVar96;
  auVar153[4] = uVar97;
  auVar153[5] = uVar98;
  auVar153[6] = uVar99;
  auVar153[7] = uVar100;
  auVar153[8] = uVar101;
  auVar153[9] = uVar102;
  auVar153[10] = uVar103;
  auVar153[11] = uVar104;
  auVar153[12] = uVar105;
  auVar153[13] = uVar106;
  auVar153[14] = uVar107;
  auVar153[15] = uVar108;
  auVar150 = NEON_cmhi(auVar149,auVar153,1);
  auVar149[1] = uVar78;
  auVar149[0] = uVar77;
  auVar149[2] = uVar79;
  auVar149[3] = uVar80;
  auVar149[4] = uVar81;
  auVar149[5] = uVar82;
  auVar149[6] = uVar83;
  auVar149[7] = uVar84;
  auVar149[8] = uVar85;
  auVar149[9] = uVar86;
  auVar149[10] = uVar87;
  auVar149[11] = uVar88;
  auVar149[12] = uVar89;
  auVar149[13] = uVar90;
  auVar149[14] = uVar91;
  auVar149[15] = uVar92;
  auVar141 = NEON_cmhi(auVar141,auVar149,1);
  auVar192[8] = bVar133;
  auVar192._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar192[9] = bVar134;
  auVar192[10] = bVar135;
  auVar192[11] = bVar136;
  auVar192[12] = bVar137;
  auVar192[13] = bVar138;
  auVar192[14] = bVar139;
  auVar192[15] = bVar140;
  auVar195 = NEON_cmeq(auVar192,auVar195,1);
  auVar142[0] = param_2[4];
  auVar151[0] = param_2[5];
  auVar163[0] = param_2[6];
  auVar142[1] = param_2[8];
  auVar151[1] = param_2[9];
  auVar163[1] = param_2[10];
  auVar142[2] = param_2[0xc];
  auVar151[2] = param_2[0xd];
  auVar163[2] = param_2[0xe];
  auVar142[3] = param_2[0x10];
  auVar151[3] = param_2[0x11];
  auVar163[3] = param_2[0x12];
  auVar142[4] = param_2[0x14];
  auVar151[4] = param_2[0x15];
  auVar163[4] = param_2[0x16];
  auVar142[5] = param_2[0x18];
  auVar151[5] = param_2[0x19];
  auVar163[5] = param_2[0x1a];
  auVar142[6] = param_2[0x1c];
  auVar151[6] = param_2[0x1d];
  auVar163[6] = param_2[0x1e];
  auVar142[7] = param_2[0x20];
  auVar151[7] = param_2[0x21];
  auVar163[7] = param_2[0x22];
  auVar142[8] = param_2[0x24];
  auVar151[8] = param_2[0x25];
  auVar163[8] = param_2[0x26];
  auVar142[9] = param_2[0x28];
  auVar151[9] = param_2[0x29];
  auVar163[9] = param_2[0x2a];
  auVar142[10] = param_2[0x2c];
  auVar151[10] = param_2[0x2d];
  auVar163[10] = param_2[0x2e];
  auVar142[11] = param_2[0x30];
  auVar151[11] = param_2[0x31];
  auVar163[11] = param_2[0x32];
  auVar142[12] = param_2[0x34];
  auVar151[12] = param_2[0x35];
  auVar163[12] = param_2[0x36];
  auVar142[13] = param_2[0x38];
  auVar151[13] = param_2[0x39];
  auVar163[13] = param_2[0x3a];
  auVar142[14] = param_2[0x3c];
  auVar151[14] = param_2[0x3d];
  auVar163[14] = param_2[0x3e];
  auVar142[15] = param_2[0x40];
  auVar151[15] = param_2[0x41];
  auVar163[15] = param_2[0x42];
  puVar55 = param_2 + 0x44;
  auVar174._0_8_ =
       CONCAT17(param_2[0x23],
                CONCAT16(param_2[0x1f],
                         CONCAT15(param_2[0x1b],
                                  CONCAT14(param_2[0x17],
                                           CONCAT13(param_2[0x13],
                                                    CONCAT12(param_2[0xf],
                                                             CONCAT11(param_2[0xb],param_2[7])))))))
       & 0x3f3f3f3f3f3f3f3f;
  auVar174[8] = param_2[0x27] & 0x3f;
  auVar174[9] = param_2[0x2b] & 0x3f;
  auVar174[10] = param_2[0x2f] & 0x3f;
  auVar174[11] = param_2[0x33] & 0x3f;
  auVar174[12] = param_2[0x37] & 0x3f;
  auVar174[13] = param_2[0x3b] & 0x3f;
  auVar174[14] = param_2[0x3f] & 0x3f;
  auVar174[15] = param_2[0x43] & 0x3f;
  auVar188[1] = uVar110;
  auVar188[0] = uVar109;
  auVar188[2] = uVar111;
  auVar188[3] = uVar112;
  auVar188[4] = uVar113;
  auVar188[5] = uVar114;
  auVar188[6] = uVar115;
  auVar188[7] = uVar116;
  auVar188[8] = uVar117;
  auVar188[9] = uVar118;
  auVar188[10] = uVar119;
  auVar188[11] = uVar120;
  auVar188[12] = uVar121;
  auVar188[13] = uVar122;
  auVar188[14] = uVar123;
  auVar188[15] = uVar124;
  auVar187 = NEON_cmeq(auVar188,auVar163,1);
  auVar155[1] = uVar94;
  auVar155[0] = uVar93;
  auVar155[2] = uVar95;
  auVar155[3] = uVar96;
  auVar155[4] = uVar97;
  auVar155[5] = uVar98;
  auVar155[6] = uVar99;
  auVar155[7] = uVar100;
  auVar155[8] = uVar101;
  auVar155[9] = uVar102;
  auVar155[10] = uVar103;
  auVar155[11] = uVar104;
  auVar155[12] = uVar105;
  auVar155[13] = uVar106;
  auVar155[14] = uVar107;
  auVar155[15] = uVar108;
  auVar192 = NEON_cmeq(auVar155,auVar151,1);
  auVar193[1] = uVar110;
  auVar193[0] = uVar109;
  auVar193[2] = uVar111;
  auVar193[3] = uVar112;
  auVar193[4] = uVar113;
  auVar193[5] = uVar114;
  auVar193[6] = uVar115;
  auVar193[7] = uVar116;
  auVar193[8] = uVar117;
  auVar193[9] = uVar118;
  auVar193[10] = uVar119;
  auVar193[11] = uVar120;
  auVar193[12] = uVar121;
  auVar193[13] = uVar122;
  auVar193[14] = uVar123;
  auVar193[15] = uVar124;
  auVar164 = NEON_cmhi(auVar163,auVar193,1);
  auVar165[1] = uVar94;
  auVar165[0] = uVar93;
  auVar165[2] = uVar95;
  auVar165[3] = uVar96;
  auVar165[4] = uVar97;
  auVar165[5] = uVar98;
  auVar165[6] = uVar99;
  auVar165[7] = uVar100;
  auVar165[8] = uVar101;
  auVar165[9] = uVar102;
  auVar165[10] = uVar103;
  auVar165[11] = uVar104;
  auVar165[12] = uVar105;
  auVar165[13] = uVar106;
  auVar165[14] = uVar107;
  auVar165[15] = uVar108;
  auVar152 = NEON_cmhi(auVar151,auVar165,1);
  auVar161[1] = uVar78;
  auVar161[0] = uVar77;
  auVar161[2] = uVar79;
  auVar161[3] = uVar80;
  auVar161[4] = uVar81;
  auVar161[5] = uVar82;
  auVar161[6] = uVar83;
  auVar161[7] = uVar84;
  auVar161[8] = uVar85;
  auVar161[9] = uVar86;
  auVar161[10] = uVar87;
  auVar161[11] = uVar88;
  auVar161[12] = uVar89;
  auVar161[13] = uVar90;
  auVar161[14] = uVar91;
  auVar161[15] = uVar92;
  auVar149 = NEON_cmhi(auVar142,auVar161,1);
  auVar196[8] = bVar133;
  auVar196._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar196[9] = bVar134;
  auVar196[10] = bVar135;
  auVar196[11] = bVar136;
  auVar196[12] = bVar137;
  auVar196[13] = bVar138;
  auVar196[14] = bVar139;
  auVar196[15] = bVar140;
  auVar196 = NEON_cmeq(auVar196,auVar174,1);
  auVar175._0_8_ =
       CONCAT17(bStack_d,CONCAT16(bStack_d,CONCAT15(bStack_d,CONCAT14(bStack_d,CONCAT13(bStack_d,
                                                  CONCAT12(bStack_d,CONCAT11(bStack_d,bStack_d))))))
               ) & 0x3f3f3f3f3f3f3f3f;
  auVar175[8] = bStack_d & 0x3f;
  auVar175[9] = bStack_d & 0x3f;
  auVar175[10] = bStack_d & 0x3f;
  auVar175[11] = bStack_d & 0x3f;
  auVar175[12] = bStack_d & 0x3f;
  auVar175[13] = bStack_d & 0x3f;
  auVar175[14] = bStack_d & 0x3f;
  auVar175[15] = bStack_d & 0x3f;
  auVar197[1] = uVar110;
  auVar197[0] = uVar109;
  auVar197[2] = uVar111;
  auVar197[3] = uVar112;
  auVar197[4] = uVar113;
  auVar197[5] = uVar114;
  auVar197[6] = uVar115;
  auVar197[7] = uVar116;
  auVar197[8] = uVar117;
  auVar197[9] = uVar118;
  auVar197[10] = uVar119;
  auVar197[11] = uVar120;
  auVar197[12] = uVar121;
  auVar197[13] = uVar122;
  auVar197[14] = uVar123;
  auVar197[15] = uVar124;
  auVar188 = NEON_cmeq(auVar197,auVar164,1);
  auVar167[1] = uVar94;
  auVar167[0] = uVar93;
  auVar167[2] = uVar95;
  auVar167[3] = uVar96;
  auVar167[4] = uVar97;
  auVar167[5] = uVar98;
  auVar167[6] = uVar99;
  auVar167[7] = uVar100;
  auVar167[8] = uVar101;
  auVar167[9] = uVar102;
  auVar167[10] = uVar103;
  auVar167[11] = uVar104;
  auVar167[12] = uVar105;
  auVar167[13] = uVar106;
  auVar167[14] = uVar107;
  auVar167[15] = uVar108;
  auVar193 = NEON_cmeq(auVar167,auVar152,1);
  auVar199[1] = uVar110;
  auVar199[0] = uVar109;
  auVar199[2] = uVar111;
  auVar199[3] = uVar112;
  auVar199[4] = uVar113;
  auVar199[5] = uVar114;
  auVar199[6] = uVar115;
  auVar199[7] = uVar116;
  auVar199[8] = uVar117;
  auVar199[9] = uVar118;
  auVar199[10] = uVar119;
  auVar199[11] = uVar120;
  auVar199[12] = uVar121;
  auVar199[13] = uVar122;
  auVar199[14] = uVar123;
  auVar199[15] = uVar124;
  auVar165 = NEON_cmhi(auVar164,auVar199,1);
  auVar189[1] = uVar94;
  auVar189[0] = uVar93;
  auVar189[2] = uVar95;
  auVar189[3] = uVar96;
  auVar189[4] = uVar97;
  auVar189[5] = uVar98;
  auVar189[6] = uVar99;
  auVar189[7] = uVar100;
  auVar189[8] = uVar101;
  auVar189[9] = uVar102;
  auVar189[10] = uVar103;
  auVar189[11] = uVar104;
  auVar189[12] = uVar105;
  auVar189[13] = uVar106;
  auVar189[14] = uVar107;
  auVar189[15] = uVar108;
  auVar153 = NEON_cmhi(auVar152,auVar189,1);
  auVar173[1] = uVar78;
  auVar173[0] = uVar77;
  auVar173[2] = uVar79;
  auVar173[3] = uVar80;
  auVar173[4] = uVar81;
  auVar173[5] = uVar82;
  auVar173[6] = uVar83;
  auVar173[7] = uVar84;
  auVar173[8] = uVar85;
  auVar173[9] = uVar86;
  auVar173[10] = uVar87;
  auVar173[11] = uVar88;
  auVar173[12] = uVar89;
  auVar173[13] = uVar90;
  auVar173[14] = uVar91;
  auVar173[15] = uVar92;
  auVar161 = NEON_cmhi(auVar149,auVar173,1);
  auVar44[8] = bVar133;
  auVar44._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar44[9] = bVar134;
  auVar44[10] = bVar135;
  auVar44[11] = bVar136;
  auVar44[12] = bVar137;
  auVar44[13] = bVar138;
  auVar44[14] = bVar139;
  auVar44[15] = bVar140;
  auVar197 = NEON_cmeq(auVar44,auVar175,1);
  auVar143[0] = *param_3;
  auVar154[0] = param_3[1];
  auVar166[0] = param_3[2];
  auVar143[1] = param_3[4];
  auVar154[1] = param_3[5];
  auVar166[1] = param_3[6];
  auVar143[2] = param_3[8];
  auVar154[2] = param_3[9];
  auVar166[2] = param_3[10];
  auVar143[3] = param_3[0xc];
  auVar154[3] = param_3[0xd];
  auVar166[3] = param_3[0xe];
  auVar143[4] = param_3[0x10];
  auVar154[4] = param_3[0x11];
  auVar166[4] = param_3[0x12];
  auVar143[5] = param_3[0x14];
  auVar154[5] = param_3[0x15];
  auVar166[5] = param_3[0x16];
  auVar143[6] = param_3[0x18];
  auVar154[6] = param_3[0x19];
  auVar166[6] = param_3[0x1a];
  auVar143[7] = param_3[0x1c];
  auVar154[7] = param_3[0x1d];
  auVar166[7] = param_3[0x1e];
  auVar143[8] = param_3[0x20];
  auVar154[8] = param_3[0x21];
  auVar166[8] = param_3[0x22];
  auVar143[9] = param_3[0x24];
  auVar154[9] = param_3[0x25];
  auVar166[9] = param_3[0x26];
  auVar143[10] = param_3[0x28];
  auVar154[10] = param_3[0x29];
  auVar166[10] = param_3[0x2a];
  auVar143[11] = param_3[0x2c];
  auVar154[11] = param_3[0x2d];
  auVar166[11] = param_3[0x2e];
  auVar143[12] = param_3[0x30];
  auVar154[12] = param_3[0x31];
  auVar166[12] = param_3[0x32];
  auVar143[13] = param_3[0x34];
  auVar154[13] = param_3[0x35];
  auVar166[13] = param_3[0x36];
  auVar143[14] = param_3[0x38];
  auVar154[14] = param_3[0x39];
  auVar166[14] = param_3[0x3a];
  auVar143[15] = param_3[0x3c];
  auVar154[15] = param_3[0x3d];
  auVar166[15] = param_3[0x3e];
  auVar176._0_8_ =
       CONCAT17(param_3[0x1f],
                CONCAT16(param_3[0x1b],
                         CONCAT15(param_3[0x17],
                                  CONCAT14(param_3[0x13],
                                           CONCAT13(param_3[0xf],
                                                    CONCAT12(param_3[0xb],
                                                             CONCAT11(param_3[7],param_3[3]))))))) &
       0x3f3f3f3f3f3f3f3f;
  auVar176[8] = param_3[0x23] & 0x3f;
  auVar176[9] = param_3[0x27] & 0x3f;
  auVar176[10] = param_3[0x2b] & 0x3f;
  auVar176[11] = param_3[0x2f] & 0x3f;
  auVar176[12] = param_3[0x33] & 0x3f;
  auVar176[13] = param_3[0x37] & 0x3f;
  auVar176[14] = param_3[0x3b] & 0x3f;
  auVar176[15] = param_3[0x3f] & 0x3f;
  auVar200[1] = uVar110;
  auVar200[0] = uVar109;
  auVar200[2] = uVar111;
  auVar200[3] = uVar112;
  auVar200[4] = uVar113;
  auVar200[5] = uVar114;
  auVar200[6] = uVar115;
  auVar200[7] = uVar116;
  auVar200[8] = uVar117;
  auVar200[9] = uVar118;
  auVar200[10] = uVar119;
  auVar200[11] = uVar120;
  auVar200[12] = uVar121;
  auVar200[13] = uVar122;
  auVar200[14] = uVar123;
  auVar200[15] = uVar124;
  auVar189 = NEON_cmeq(auVar200,auVar166,1);
  auVar194[1] = uVar94;
  auVar194[0] = uVar93;
  auVar194[2] = uVar95;
  auVar194[3] = uVar96;
  auVar194[4] = uVar97;
  auVar194[5] = uVar98;
  auVar194[6] = uVar99;
  auVar194[7] = uVar100;
  auVar194[8] = uVar101;
  auVar194[9] = uVar102;
  auVar194[10] = uVar103;
  auVar194[11] = uVar104;
  auVar194[12] = uVar105;
  auVar194[13] = uVar106;
  auVar194[14] = uVar107;
  auVar194[15] = uVar108;
  auVar194 = NEON_cmeq(auVar194,auVar154,1);
  auVar201[1] = uVar110;
  auVar201[0] = uVar109;
  auVar201[2] = uVar111;
  auVar201[3] = uVar112;
  auVar201[4] = uVar113;
  auVar201[5] = uVar114;
  auVar201[6] = uVar115;
  auVar201[7] = uVar116;
  auVar201[8] = uVar117;
  auVar201[9] = uVar118;
  auVar201[10] = uVar119;
  auVar201[11] = uVar120;
  auVar201[12] = uVar121;
  auVar201[13] = uVar122;
  auVar201[14] = uVar123;
  auVar201[15] = uVar124;
  auVar167 = NEON_cmhi(auVar166,auVar201,1);
  auVar190[1] = uVar94;
  auVar190[0] = uVar93;
  auVar190[2] = uVar95;
  auVar190[3] = uVar96;
  auVar190[4] = uVar97;
  auVar190[5] = uVar98;
  auVar190[6] = uVar99;
  auVar190[7] = uVar100;
  auVar190[8] = uVar101;
  auVar190[9] = uVar102;
  auVar190[10] = uVar103;
  auVar190[11] = uVar104;
  auVar190[12] = uVar105;
  auVar190[13] = uVar106;
  auVar190[14] = uVar107;
  auVar190[15] = uVar108;
  auVar155 = NEON_cmhi(auVar154,auVar190,1);
  auVar198[1] = uVar78;
  auVar198[0] = uVar77;
  auVar198[2] = uVar79;
  auVar198[3] = uVar80;
  auVar198[4] = uVar81;
  auVar198[5] = uVar82;
  auVar198[6] = uVar83;
  auVar198[7] = uVar84;
  auVar198[8] = uVar85;
  auVar198[9] = uVar86;
  auVar198[10] = uVar87;
  auVar198[11] = uVar88;
  auVar198[12] = uVar89;
  auVar198[13] = uVar90;
  auVar198[14] = uVar91;
  auVar198[15] = uVar92;
  auVar173 = NEON_cmhi(auVar143,auVar198,1);
  auVar45[8] = bVar133;
  auVar45._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar45[9] = bVar134;
  auVar45[10] = bVar135;
  auVar45[11] = bVar136;
  auVar45[12] = bVar137;
  auVar45[13] = bVar138;
  auVar45[14] = bVar139;
  auVar45[15] = bVar140;
  auVar198 = NEON_cmeq(auVar45,auVar176,1);
  *param_1 = (bVar125 & 0x7f ^ 0x40) >> 3 |
             ~((auVar162[0] | auVar186[0] & auVar150[0] | auVar186[0] & auVar191[0] & auVar141[0]) &
              ~auVar195[0]) &
             ~((auVar164[0] | auVar187[0] & auVar152[0] | auVar187[0] & auVar192[0] & auVar149[0]) &
              ~auVar196[0]) &
             ~((auVar165[0] | auVar188[0] & auVar153[0] | auVar188[0] & auVar193[0] & auVar161[0]) &
              ~auVar197[0]) &
             ~((auVar167[0] | auVar189[0] & auVar155[0] | auVar189[0] & auVar194[0] & auVar173[0]) &
              ~auVar198[0]);
  param_1[1] = (bVar126 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[1] | auVar186[1] & auVar150[1] | auVar186[1] & auVar191[1] & auVar141[1])
                & ~auVar195[1]) &
               ~((auVar164[1] | auVar187[1] & auVar152[1] | auVar187[1] & auVar192[1] & auVar149[1])
                & ~auVar196[1]) &
               ~((auVar165[1] | auVar188[1] & auVar153[1] | auVar188[1] & auVar193[1] & auVar161[1])
                & ~auVar197[1]) &
               ~((auVar167[1] | auVar189[1] & auVar155[1] | auVar189[1] & auVar194[1] & auVar173[1])
                & ~auVar198[1]);
  param_1[2] = (bVar127 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[2] | auVar186[2] & auVar150[2] | auVar186[2] & auVar191[2] & auVar141[2])
                & ~auVar195[2]) &
               ~((auVar164[2] | auVar187[2] & auVar152[2] | auVar187[2] & auVar192[2] & auVar149[2])
                & ~auVar196[2]) &
               ~((auVar165[2] | auVar188[2] & auVar153[2] | auVar188[2] & auVar193[2] & auVar161[2])
                & ~auVar197[2]) &
               ~((auVar167[2] | auVar189[2] & auVar155[2] | auVar189[2] & auVar194[2] & auVar173[2])
                & ~auVar198[2]);
  param_1[3] = (bVar128 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[3] | auVar186[3] & auVar150[3] | auVar186[3] & auVar191[3] & auVar141[3])
                & ~auVar195[3]) &
               ~((auVar164[3] | auVar187[3] & auVar152[3] | auVar187[3] & auVar192[3] & auVar149[3])
                & ~auVar196[3]) &
               ~((auVar165[3] | auVar188[3] & auVar153[3] | auVar188[3] & auVar193[3] & auVar161[3])
                & ~auVar197[3]) &
               ~((auVar167[3] | auVar189[3] & auVar155[3] | auVar189[3] & auVar194[3] & auVar173[3])
                & ~auVar198[3]);
  param_1[4] = (bVar129 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[4] | auVar186[4] & auVar150[4] | auVar186[4] & auVar191[4] & auVar141[4])
                & ~auVar195[4]) &
               ~((auVar164[4] | auVar187[4] & auVar152[4] | auVar187[4] & auVar192[4] & auVar149[4])
                & ~auVar196[4]) &
               ~((auVar165[4] | auVar188[4] & auVar153[4] | auVar188[4] & auVar193[4] & auVar161[4])
                & ~auVar197[4]) &
               ~((auVar167[4] | auVar189[4] & auVar155[4] | auVar189[4] & auVar194[4] & auVar173[4])
                & ~auVar198[4]);
  param_1[5] = (bVar130 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[5] | auVar186[5] & auVar150[5] | auVar186[5] & auVar191[5] & auVar141[5])
                & ~auVar195[5]) &
               ~((auVar164[5] | auVar187[5] & auVar152[5] | auVar187[5] & auVar192[5] & auVar149[5])
                & ~auVar196[5]) &
               ~((auVar165[5] | auVar188[5] & auVar153[5] | auVar188[5] & auVar193[5] & auVar161[5])
                & ~auVar197[5]) &
               ~((auVar167[5] | auVar189[5] & auVar155[5] | auVar189[5] & auVar194[5] & auVar173[5])
                & ~auVar198[5]);
  param_1[6] = (bVar131 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[6] | auVar186[6] & auVar150[6] | auVar186[6] & auVar191[6] & auVar141[6])
                & ~auVar195[6]) &
               ~((auVar164[6] | auVar187[6] & auVar152[6] | auVar187[6] & auVar192[6] & auVar149[6])
                & ~auVar196[6]) &
               ~((auVar165[6] | auVar188[6] & auVar153[6] | auVar188[6] & auVar193[6] & auVar161[6])
                & ~auVar197[6]) &
               ~((auVar167[6] | auVar189[6] & auVar155[6] | auVar189[6] & auVar194[6] & auVar173[6])
                & ~auVar198[6]);
  param_1[7] = (bVar132 & 0x7f ^ 0x40) >> 3 |
               ~((auVar162[7] | auVar186[7] & auVar150[7] | auVar186[7] & auVar191[7] & auVar141[7])
                & ~auVar195[7]) &
               ~((auVar164[7] | auVar187[7] & auVar152[7] | auVar187[7] & auVar192[7] & auVar149[7])
                & ~auVar196[7]) &
               ~((auVar165[7] | auVar188[7] & auVar153[7] | auVar188[7] & auVar193[7] & auVar161[7])
                & ~auVar197[7]) &
               ~((auVar167[7] | auVar189[7] & auVar155[7] | auVar189[7] & auVar194[7] & auVar173[7])
                & ~auVar198[7]);
  param_1[8] = bVar133 >> 3 |
               ~((auVar162[8] | auVar186[8] & auVar150[8] | auVar186[8] & auVar191[8] & auVar141[8])
                & ~auVar195[8]) &
               ~((auVar164[8] | auVar187[8] & auVar152[8] | auVar187[8] & auVar192[8] & auVar149[8])
                & ~auVar196[8]) &
               ~((auVar165[8] | auVar188[8] & auVar153[8] | auVar188[8] & auVar193[8] & auVar161[8])
                & ~auVar197[8]) &
               ~((auVar167[8] | auVar189[8] & auVar155[8] | auVar189[8] & auVar194[8] & auVar173[8])
                & ~auVar198[8]);
  param_1[9] = bVar134 >> 3 |
               ~((auVar162[9] | auVar186[9] & auVar150[9] | auVar186[9] & auVar191[9] & auVar141[9])
                & ~auVar195[9]) &
               ~((auVar164[9] | auVar187[9] & auVar152[9] | auVar187[9] & auVar192[9] & auVar149[9])
                & ~auVar196[9]) &
               ~((auVar165[9] | auVar188[9] & auVar153[9] | auVar188[9] & auVar193[9] & auVar161[9])
                & ~auVar197[9]) &
               ~((auVar167[9] | auVar189[9] & auVar155[9] | auVar189[9] & auVar194[9] & auVar173[9])
                & ~auVar198[9]);
  param_1[10] = bVar135 >> 3 |
                ~((auVar162[10] | auVar186[10] & auVar150[10] |
                  auVar186[10] & auVar191[10] & auVar141[10]) & ~auVar195[10]) &
                ~((auVar164[10] | auVar187[10] & auVar152[10] |
                  auVar187[10] & auVar192[10] & auVar149[10]) & ~auVar196[10]) &
                ~((auVar165[10] | auVar188[10] & auVar153[10] |
                  auVar188[10] & auVar193[10] & auVar161[10]) & ~auVar197[10]) &
                ~((auVar167[10] | auVar189[10] & auVar155[10] |
                  auVar189[10] & auVar194[10] & auVar173[10]) & ~auVar198[10]);
  param_1[0xb] = bVar136 >> 3 |
                 ~((auVar162[11] | auVar186[11] & auVar150[11] |
                   auVar186[11] & auVar191[11] & auVar141[11]) & ~auVar195[11]) &
                 ~((auVar164[11] | auVar187[11] & auVar152[11] |
                   auVar187[11] & auVar192[11] & auVar149[11]) & ~auVar196[11]) &
                 ~((auVar165[11] | auVar188[11] & auVar153[11] |
                   auVar188[11] & auVar193[11] & auVar161[11]) & ~auVar197[11]) &
                 ~((auVar167[11] | auVar189[11] & auVar155[11] |
                   auVar189[11] & auVar194[11] & auVar173[11]) & ~auVar198[11]);
  param_1[0xc] = bVar137 >> 3 |
                 ~((auVar162[12] | auVar186[12] & auVar150[12] |
                   auVar186[12] & auVar191[12] & auVar141[12]) & ~auVar195[12]) &
                 ~((auVar164[12] | auVar187[12] & auVar152[12] |
                   auVar187[12] & auVar192[12] & auVar149[12]) & ~auVar196[12]) &
                 ~((auVar165[12] | auVar188[12] & auVar153[12] |
                   auVar188[12] & auVar193[12] & auVar161[12]) & ~auVar197[12]) &
                 ~((auVar167[12] | auVar189[12] & auVar155[12] |
                   auVar189[12] & auVar194[12] & auVar173[12]) & ~auVar198[12]);
  param_1[0xd] = bVar138 >> 3 |
                 ~((auVar162[13] | auVar186[13] & auVar150[13] |
                   auVar186[13] & auVar191[13] & auVar141[13]) & ~auVar195[13]) &
                 ~((auVar164[13] | auVar187[13] & auVar152[13] |
                   auVar187[13] & auVar192[13] & auVar149[13]) & ~auVar196[13]) &
                 ~((auVar165[13] | auVar188[13] & auVar153[13] |
                   auVar188[13] & auVar193[13] & auVar161[13]) & ~auVar197[13]) &
                 ~((auVar167[13] | auVar189[13] & auVar155[13] |
                   auVar189[13] & auVar194[13] & auVar173[13]) & ~auVar198[13]);
  param_1[0xe] = bVar139 >> 3 |
                 ~((auVar162[14] | auVar186[14] & auVar150[14] |
                   auVar186[14] & auVar191[14] & auVar141[14]) & ~auVar195[14]) &
                 ~((auVar164[14] | auVar187[14] & auVar152[14] |
                   auVar187[14] & auVar192[14] & auVar149[14]) & ~auVar196[14]) &
                 ~((auVar165[14] | auVar188[14] & auVar153[14] |
                   auVar188[14] & auVar193[14] & auVar161[14]) & ~auVar197[14]) &
                 ~((auVar167[14] | auVar189[14] & auVar155[14] |
                   auVar189[14] & auVar194[14] & auVar173[14]) & ~auVar198[14]);
  param_1[0xf] = bVar140 >> 3 |
                 ~((auVar162[15] | auVar186[15] & auVar150[15] |
                   auVar186[15] & auVar191[15] & auVar141[15]) & ~auVar195[15]) &
                 ~((auVar164[15] | auVar187[15] & auVar152[15] |
                   auVar187[15] & auVar192[15] & auVar149[15]) & ~auVar196[15]) &
                 ~((auVar165[15] | auVar188[15] & auVar153[15] |
                   auVar188[15] & auVar193[15] & auVar161[15]) & ~auVar197[15]) &
                 ~((auVar167[15] | auVar189[15] & auVar155[15] |
                   auVar189[15] & auVar194[15] & auVar173[15]) & ~auVar198[15]);
  pbVar64 = param_1 + 0x10;
  puVar60 = param_2 + 0x40;
  puVar63 = param_3 + 0x40;
  puVar62 = param_2 + 0x3c;
  do {
    puVar75 = puVar62;
    puVar74 = puVar63;
    puVar73 = puVar60;
    pbVar72 = pbVar64;
    uVar77 = *puVar73;
    uVar93 = puVar73[1];
    uVar109 = puVar73[2];
    bVar125 = puVar73[3];
    uVar78 = puVar73[4];
    uVar94 = puVar73[5];
    uVar110 = puVar73[6];
    bVar126 = puVar73[7];
    uVar79 = puVar73[8];
    uVar95 = puVar73[9];
    uVar111 = puVar73[10];
    bVar127 = puVar73[0xb];
    uVar80 = puVar73[0xc];
    uVar96 = puVar73[0xd];
    uVar112 = puVar73[0xe];
    bVar128 = puVar73[0xf];
    uVar81 = puVar73[0x10];
    uVar97 = puVar73[0x11];
    uVar113 = puVar73[0x12];
    bVar129 = puVar73[0x13];
    uVar82 = puVar73[0x14];
    uVar98 = puVar73[0x15];
    uVar114 = puVar73[0x16];
    bVar130 = puVar73[0x17];
    uVar83 = puVar73[0x18];
    uVar99 = puVar73[0x19];
    uVar115 = puVar73[0x1a];
    bVar131 = puVar73[0x1b];
    uVar84 = puVar73[0x1c];
    uVar100 = puVar73[0x1d];
    uVar116 = puVar73[0x1e];
    bVar132 = puVar73[0x1f];
    uVar85 = puVar73[0x20];
    uVar101 = puVar73[0x21];
    uVar117 = puVar73[0x22];
    uVar86 = puVar73[0x24];
    uVar102 = puVar73[0x25];
    uVar118 = puVar73[0x26];
    uVar87 = puVar73[0x28];
    uVar103 = puVar73[0x29];
    uVar119 = puVar73[0x2a];
    uVar88 = puVar73[0x2c];
    uVar104 = puVar73[0x2d];
    uVar120 = puVar73[0x2e];
    uVar89 = puVar73[0x30];
    uVar105 = puVar73[0x31];
    uVar121 = puVar73[0x32];
    uVar90 = puVar73[0x34];
    uVar106 = puVar73[0x35];
    uVar122 = puVar73[0x36];
    uVar91 = puVar73[0x38];
    uVar107 = puVar73[0x39];
    uVar123 = puVar73[0x3a];
    uVar92 = puVar73[0x3c];
    uVar108 = puVar73[0x3d];
    uVar124 = puVar73[0x3e];
    auVar144[0] = *puVar75;
    auVar156[0] = puVar75[1];
    auVar168[0] = puVar75[2];
    auVar144[1] = puVar75[4];
    auVar156[1] = puVar75[5];
    auVar168[1] = puVar75[6];
    auVar144[2] = puVar75[8];
    auVar156[2] = puVar75[9];
    auVar168[2] = puVar75[10];
    auVar144[3] = puVar75[0xc];
    auVar156[3] = puVar75[0xd];
    auVar168[3] = puVar75[0xe];
    auVar144[4] = puVar75[0x10];
    auVar156[4] = puVar75[0x11];
    auVar168[4] = puVar75[0x12];
    auVar144[5] = puVar75[0x14];
    auVar156[5] = puVar75[0x15];
    auVar168[5] = puVar75[0x16];
    auVar144[6] = puVar75[0x18];
    auVar156[6] = puVar75[0x19];
    auVar168[6] = puVar75[0x1a];
    auVar144[7] = puVar75[0x1c];
    auVar156[7] = puVar75[0x1d];
    auVar168[7] = puVar75[0x1e];
    auVar144[8] = puVar75[0x20];
    auVar156[8] = puVar75[0x21];
    auVar168[8] = puVar75[0x22];
    auVar144[9] = puVar75[0x24];
    auVar156[9] = puVar75[0x25];
    auVar168[9] = puVar75[0x26];
    auVar144[10] = puVar75[0x28];
    auVar156[10] = puVar75[0x29];
    auVar168[10] = puVar75[0x2a];
    auVar144[11] = puVar75[0x2c];
    auVar156[11] = puVar75[0x2d];
    auVar168[11] = puVar75[0x2e];
    auVar144[12] = puVar75[0x30];
    auVar156[12] = puVar75[0x31];
    auVar168[12] = puVar75[0x32];
    auVar144[13] = puVar75[0x34];
    auVar156[13] = puVar75[0x35];
    auVar168[13] = puVar75[0x36];
    auVar144[14] = puVar75[0x38];
    auVar156[14] = puVar75[0x39];
    auVar168[14] = puVar75[0x3a];
    auVar144[15] = puVar75[0x3c];
    auVar156[15] = puVar75[0x3d];
    auVar168[15] = puVar75[0x3e];
    auVar177._0_8_ =
         CONCAT17(puVar75[0x1f],
                  CONCAT16(puVar75[0x1b],
                           CONCAT15(puVar75[0x17],
                                    CONCAT14(puVar75[0x13],
                                             CONCAT13(puVar75[0xf],
                                                      CONCAT12(puVar75[0xb],
                                                               CONCAT11(puVar75[7],puVar75[3])))))))
         & 0x3f3f3f3f3f3f3f3f;
    auVar177[8] = puVar75[0x23] & 0x3f;
    auVar177[9] = puVar75[0x27] & 0x3f;
    auVar177[10] = puVar75[0x2b] & 0x3f;
    auVar177[11] = puVar75[0x2f] & 0x3f;
    auVar177[12] = puVar75[0x33] & 0x3f;
    auVar177[13] = puVar75[0x37] & 0x3f;
    auVar177[14] = puVar75[0x3b] & 0x3f;
    auVar177[15] = puVar75[0x3f] & 0x3f;
    bVar133 = puVar73[0x23] & 0x7f ^ 0x40;
    bVar134 = puVar73[0x27] & 0x7f ^ 0x40;
    bVar135 = puVar73[0x2b] & 0x7f ^ 0x40;
    bVar136 = puVar73[0x2f] & 0x7f ^ 0x40;
    bVar137 = puVar73[0x33] & 0x7f ^ 0x40;
    bVar138 = puVar73[0x37] & 0x7f ^ 0x40;
    bVar139 = puVar73[0x3b] & 0x7f ^ 0x40;
    bVar140 = puVar73[0x3f] & 0x7f ^ 0x40;
    auVar27[1] = uVar110;
    auVar27[0] = uVar109;
    auVar27[2] = uVar111;
    auVar27[3] = uVar112;
    auVar27[4] = uVar113;
    auVar27[5] = uVar114;
    auVar27[6] = uVar115;
    auVar27[7] = uVar116;
    auVar27[8] = uVar117;
    auVar27[9] = uVar118;
    auVar27[10] = uVar119;
    auVar27[11] = uVar120;
    auVar27[12] = uVar121;
    auVar27[13] = uVar122;
    auVar27[14] = uVar123;
    auVar27[15] = uVar124;
    auVar194 = NEON_cmeq(auVar27,auVar168,1);
    auVar10[1] = uVar94;
    auVar10[0] = uVar93;
    auVar10[2] = uVar95;
    auVar10[3] = uVar96;
    auVar10[4] = uVar97;
    auVar10[5] = uVar98;
    auVar10[6] = uVar99;
    auVar10[7] = uVar100;
    auVar10[8] = uVar101;
    auVar10[9] = uVar102;
    auVar10[10] = uVar103;
    auVar10[11] = uVar104;
    auVar10[12] = uVar105;
    auVar10[13] = uVar106;
    auVar10[14] = uVar107;
    auVar10[15] = uVar108;
    auVar187 = NEON_cmeq(auVar10,auVar156,1);
    auVar28[1] = uVar110;
    auVar28[0] = uVar109;
    auVar28[2] = uVar111;
    auVar28[3] = uVar112;
    auVar28[4] = uVar113;
    auVar28[5] = uVar114;
    auVar28[6] = uVar115;
    auVar28[7] = uVar116;
    auVar28[8] = uVar117;
    auVar28[9] = uVar118;
    auVar28[10] = uVar119;
    auVar28[11] = uVar120;
    auVar28[12] = uVar121;
    auVar28[13] = uVar122;
    auVar28[14] = uVar123;
    auVar28[15] = uVar124;
    auVar155 = NEON_cmhi(auVar168,auVar28,1);
    auVar11[1] = uVar94;
    auVar11[0] = uVar93;
    auVar11[2] = uVar95;
    auVar11[3] = uVar96;
    auVar11[4] = uVar97;
    auVar11[5] = uVar98;
    auVar11[6] = uVar99;
    auVar11[7] = uVar100;
    auVar11[8] = uVar101;
    auVar11[9] = uVar102;
    auVar11[10] = uVar103;
    auVar11[11] = uVar104;
    auVar11[12] = uVar105;
    auVar11[13] = uVar106;
    auVar11[14] = uVar107;
    auVar11[15] = uVar108;
    auVar198 = NEON_cmhi(auVar156,auVar11,1);
    auVar1[1] = uVar78;
    auVar1[0] = uVar77;
    auVar1[2] = uVar79;
    auVar1[3] = uVar80;
    auVar1[4] = uVar81;
    auVar1[5] = uVar82;
    auVar1[6] = uVar83;
    auVar1[7] = uVar84;
    auVar1[8] = uVar85;
    auVar1[9] = uVar86;
    auVar1[10] = uVar87;
    auVar1[11] = uVar88;
    auVar1[12] = uVar89;
    auVar1[13] = uVar90;
    auVar1[14] = uVar91;
    auVar1[15] = uVar92;
    auVar141 = NEON_cmhi(auVar144,auVar1,1);
    auVar46[8] = bVar133;
    auVar46._0_8_ =
         (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128
                                                  ,CONCAT12(bVar127,CONCAT11(bVar126,bVar125)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar46[9] = bVar134;
    auVar46[10] = bVar135;
    auVar46[11] = bVar136;
    auVar46[12] = bVar137;
    auVar46[13] = bVar138;
    auVar46[14] = bVar139;
    auVar46[15] = bVar140;
    auVar199 = NEON_cmeq(auVar46,auVar177,1);
    auVar145[0] = *puVar55;
    auVar157[0] = puVar55[1];
    auVar169[0] = puVar55[2];
    puVar56 = puVar55 + 3;
    auVar145[1] = puVar55[4];
    auVar157[1] = puVar55[5];
    auVar169[1] = puVar55[6];
    puVar57 = puVar55 + 7;
    auVar145[2] = puVar55[8];
    auVar157[2] = puVar55[9];
    auVar169[2] = puVar55[10];
    puVar58 = puVar55 + 0xb;
    auVar145[3] = puVar55[0xc];
    auVar157[3] = puVar55[0xd];
    auVar169[3] = puVar55[0xe];
    puVar59 = puVar55 + 0xf;
    auVar145[4] = puVar55[0x10];
    auVar157[4] = puVar55[0x11];
    auVar169[4] = puVar55[0x12];
    puVar60 = puVar55 + 0x13;
    auVar145[5] = puVar55[0x14];
    auVar157[5] = puVar55[0x15];
    auVar169[5] = puVar55[0x16];
    puVar61 = puVar55 + 0x17;
    auVar145[6] = puVar55[0x18];
    auVar157[6] = puVar55[0x19];
    auVar169[6] = puVar55[0x1a];
    puVar62 = puVar55 + 0x1b;
    auVar145[7] = puVar55[0x1c];
    auVar157[7] = puVar55[0x1d];
    auVar169[7] = puVar55[0x1e];
    puVar63 = puVar55 + 0x1f;
    auVar145[8] = puVar55[0x20];
    auVar157[8] = puVar55[0x21];
    auVar169[8] = puVar55[0x22];
    pbVar64 = puVar55 + 0x23;
    auVar145[9] = puVar55[0x24];
    auVar157[9] = puVar55[0x25];
    auVar169[9] = puVar55[0x26];
    pbVar65 = puVar55 + 0x27;
    auVar145[10] = puVar55[0x28];
    auVar157[10] = puVar55[0x29];
    auVar169[10] = puVar55[0x2a];
    pbVar66 = puVar55 + 0x2b;
    auVar145[11] = puVar55[0x2c];
    auVar157[11] = puVar55[0x2d];
    auVar169[11] = puVar55[0x2e];
    pbVar67 = puVar55 + 0x2f;
    auVar145[12] = puVar55[0x30];
    auVar157[12] = puVar55[0x31];
    auVar169[12] = puVar55[0x32];
    pbVar68 = puVar55 + 0x33;
    auVar145[13] = puVar55[0x34];
    auVar157[13] = puVar55[0x35];
    auVar169[13] = puVar55[0x36];
    pbVar69 = puVar55 + 0x37;
    auVar145[14] = puVar55[0x38];
    auVar157[14] = puVar55[0x39];
    auVar169[14] = puVar55[0x3a];
    pbVar70 = puVar55 + 0x3b;
    auVar145[15] = puVar55[0x3c];
    auVar157[15] = puVar55[0x3d];
    auVar169[15] = puVar55[0x3e];
    pbVar71 = puVar55 + 0x3f;
    puVar55 = puVar55 + 0x40;
    auVar178._0_8_ =
         CONCAT17(*puVar63,CONCAT16(*puVar62,CONCAT15(*puVar61,CONCAT14(*puVar60,CONCAT13(*puVar59,
                                                  CONCAT12(*puVar58,CONCAT11(*puVar57,*puVar56))))))
                 ) & 0x3f3f3f3f3f3f3f3f;
    auVar178[8] = *pbVar64 & 0x3f;
    auVar178[9] = *pbVar65 & 0x3f;
    auVar178[10] = *pbVar66 & 0x3f;
    auVar178[11] = *pbVar67 & 0x3f;
    auVar178[12] = *pbVar68 & 0x3f;
    auVar178[13] = *pbVar69 & 0x3f;
    auVar178[14] = *pbVar70 & 0x3f;
    auVar178[15] = *pbVar71 & 0x3f;
    auVar29[1] = uVar110;
    auVar29[0] = uVar109;
    auVar29[2] = uVar111;
    auVar29[3] = uVar112;
    auVar29[4] = uVar113;
    auVar29[5] = uVar114;
    auVar29[6] = uVar115;
    auVar29[7] = uVar116;
    auVar29[8] = uVar117;
    auVar29[9] = uVar118;
    auVar29[10] = uVar119;
    auVar29[11] = uVar120;
    auVar29[12] = uVar121;
    auVar29[13] = uVar122;
    auVar29[14] = uVar123;
    auVar29[15] = uVar124;
    auVar190 = NEON_cmeq(auVar29,auVar169,1);
    auVar12[1] = uVar94;
    auVar12[0] = uVar93;
    auVar12[2] = uVar95;
    auVar12[3] = uVar96;
    auVar12[4] = uVar97;
    auVar12[5] = uVar98;
    auVar12[6] = uVar99;
    auVar12[7] = uVar100;
    auVar12[8] = uVar101;
    auVar12[9] = uVar102;
    auVar12[10] = uVar103;
    auVar12[11] = uVar104;
    auVar12[12] = uVar105;
    auVar12[13] = uVar106;
    auVar12[14] = uVar107;
    auVar12[15] = uVar108;
    auVar188 = NEON_cmeq(auVar12,auVar157,1);
    auVar30[1] = uVar110;
    auVar30[0] = uVar109;
    auVar30[2] = uVar111;
    auVar30[3] = uVar112;
    auVar30[4] = uVar113;
    auVar30[5] = uVar114;
    auVar30[6] = uVar115;
    auVar30[7] = uVar116;
    auVar30[8] = uVar117;
    auVar30[9] = uVar118;
    auVar30[10] = uVar119;
    auVar30[11] = uVar120;
    auVar30[12] = uVar121;
    auVar30[13] = uVar122;
    auVar30[14] = uVar123;
    auVar30[15] = uVar124;
    auVar165 = NEON_cmhi(auVar169,auVar30,1);
    auVar13[1] = uVar94;
    auVar13[0] = uVar93;
    auVar13[2] = uVar95;
    auVar13[3] = uVar96;
    auVar13[4] = uVar97;
    auVar13[5] = uVar98;
    auVar13[6] = uVar99;
    auVar13[7] = uVar100;
    auVar13[8] = uVar101;
    auVar13[9] = uVar102;
    auVar13[10] = uVar103;
    auVar13[11] = uVar104;
    auVar13[12] = uVar105;
    auVar13[13] = uVar106;
    auVar13[14] = uVar107;
    auVar13[15] = uVar108;
    auVar150 = NEON_cmhi(auVar157,auVar13,1);
    auVar2[1] = uVar78;
    auVar2[0] = uVar77;
    auVar2[2] = uVar79;
    auVar2[3] = uVar80;
    auVar2[4] = uVar81;
    auVar2[5] = uVar82;
    auVar2[6] = uVar83;
    auVar2[7] = uVar84;
    auVar2[8] = uVar85;
    auVar2[9] = uVar86;
    auVar2[10] = uVar87;
    auVar2[11] = uVar88;
    auVar2[12] = uVar89;
    auVar2[13] = uVar90;
    auVar2[14] = uVar91;
    auVar2[15] = uVar92;
    auVar149 = NEON_cmhi(auVar145,auVar2,1);
    auVar47[8] = bVar133;
    auVar47._0_8_ =
         (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128
                                                  ,CONCAT12(bVar127,CONCAT11(bVar126,bVar125)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar47[9] = bVar134;
    auVar47[10] = bVar135;
    auVar47[11] = bVar136;
    auVar47[12] = bVar137;
    auVar47[13] = bVar138;
    auVar47[14] = bVar139;
    auVar47[15] = bVar140;
    auVar200 = NEON_cmeq(auVar47,auVar178,1);
    auVar179._0_8_ =
         CONCAT17(bStack_d,CONCAT16(bStack_d,CONCAT15(bStack_d,CONCAT14(bStack_d,CONCAT13(bStack_d,
                                                  CONCAT12(bStack_d,CONCAT11(bStack_d,bStack_d))))))
                 ) & 0x3f3f3f3f3f3f3f3f;
    auVar179[8] = bStack_d & 0x3f;
    auVar179[9] = bStack_d & 0x3f;
    auVar179[10] = bStack_d & 0x3f;
    auVar179[11] = bStack_d & 0x3f;
    auVar179[12] = bStack_d & 0x3f;
    auVar179[13] = bStack_d & 0x3f;
    auVar179[14] = bStack_d & 0x3f;
    auVar179[15] = bStack_d & 0x3f;
    auVar31[1] = uVar110;
    auVar31[0] = uVar109;
    auVar31[2] = uVar111;
    auVar31[3] = uVar112;
    auVar31[4] = uVar113;
    auVar31[5] = uVar114;
    auVar31[6] = uVar115;
    auVar31[7] = uVar116;
    auVar31[8] = uVar117;
    auVar31[9] = uVar118;
    auVar31[10] = uVar119;
    auVar31[11] = uVar120;
    auVar31[12] = uVar121;
    auVar31[13] = uVar122;
    auVar31[14] = uVar123;
    auVar31[15] = uVar124;
    auVar162 = NEON_cmeq(auVar31,auVar165,1);
    auVar14[1] = uVar94;
    auVar14[0] = uVar93;
    auVar14[2] = uVar95;
    auVar14[3] = uVar96;
    auVar14[4] = uVar97;
    auVar14[5] = uVar98;
    auVar14[6] = uVar99;
    auVar14[7] = uVar100;
    auVar14[8] = uVar101;
    auVar14[9] = uVar102;
    auVar14[10] = uVar103;
    auVar14[11] = uVar104;
    auVar14[12] = uVar105;
    auVar14[13] = uVar106;
    auVar14[14] = uVar107;
    auVar14[15] = uVar108;
    auVar193 = NEON_cmeq(auVar14,auVar150,1);
    auVar32[1] = uVar110;
    auVar32[0] = uVar109;
    auVar32[2] = uVar111;
    auVar32[3] = uVar112;
    auVar32[4] = uVar113;
    auVar32[5] = uVar114;
    auVar32[6] = uVar115;
    auVar32[7] = uVar116;
    auVar32[8] = uVar117;
    auVar32[9] = uVar118;
    auVar32[10] = uVar119;
    auVar32[11] = uVar120;
    auVar32[12] = uVar121;
    auVar32[13] = uVar122;
    auVar32[14] = uVar123;
    auVar32[15] = uVar124;
    auVar167 = NEON_cmhi(auVar165,auVar32,1);
    auVar15[1] = uVar94;
    auVar15[0] = uVar93;
    auVar15[2] = uVar95;
    auVar15[3] = uVar96;
    auVar15[4] = uVar97;
    auVar15[5] = uVar98;
    auVar15[6] = uVar99;
    auVar15[7] = uVar100;
    auVar15[8] = uVar101;
    auVar15[9] = uVar102;
    auVar15[10] = uVar103;
    auVar15[11] = uVar104;
    auVar15[12] = uVar105;
    auVar15[13] = uVar106;
    auVar15[14] = uVar107;
    auVar15[15] = uVar108;
    auVar152 = NEON_cmhi(auVar150,auVar15,1);
    auVar3[1] = uVar78;
    auVar3[0] = uVar77;
    auVar3[2] = uVar79;
    auVar3[3] = uVar80;
    auVar3[4] = uVar81;
    auVar3[5] = uVar82;
    auVar3[6] = uVar83;
    auVar3[7] = uVar84;
    auVar3[8] = uVar85;
    auVar3[9] = uVar86;
    auVar3[10] = uVar87;
    auVar3[11] = uVar88;
    auVar3[12] = uVar89;
    auVar3[13] = uVar90;
    auVar3[14] = uVar91;
    auVar3[15] = uVar92;
    auVar161 = NEON_cmhi(auVar149,auVar3,1);
    auVar48[8] = bVar133;
    auVar48._0_8_ =
         (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128
                                                  ,CONCAT12(bVar127,CONCAT11(bVar126,bVar125)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar48[9] = bVar134;
    auVar48[10] = bVar135;
    auVar48[11] = bVar136;
    auVar48[12] = bVar137;
    auVar48[13] = bVar138;
    auVar48[14] = bVar139;
    auVar48[15] = bVar140;
    auVar201 = NEON_cmeq(auVar48,auVar179,1);
    auVar146[0] = *puVar74;
    auVar158[0] = puVar74[1];
    auVar170[0] = puVar74[2];
    auVar146[1] = puVar74[4];
    auVar158[1] = puVar74[5];
    auVar170[1] = puVar74[6];
    auVar146[2] = puVar74[8];
    auVar158[2] = puVar74[9];
    auVar170[2] = puVar74[10];
    auVar146[3] = puVar74[0xc];
    auVar158[3] = puVar74[0xd];
    auVar170[3] = puVar74[0xe];
    auVar146[4] = puVar74[0x10];
    auVar158[4] = puVar74[0x11];
    auVar170[4] = puVar74[0x12];
    auVar146[5] = puVar74[0x14];
    auVar158[5] = puVar74[0x15];
    auVar170[5] = puVar74[0x16];
    auVar146[6] = puVar74[0x18];
    auVar158[6] = puVar74[0x19];
    auVar170[6] = puVar74[0x1a];
    auVar146[7] = puVar74[0x1c];
    auVar158[7] = puVar74[0x1d];
    auVar170[7] = puVar74[0x1e];
    auVar146[8] = puVar74[0x20];
    auVar158[8] = puVar74[0x21];
    auVar170[8] = puVar74[0x22];
    auVar146[9] = puVar74[0x24];
    auVar158[9] = puVar74[0x25];
    auVar170[9] = puVar74[0x26];
    auVar146[10] = puVar74[0x28];
    auVar158[10] = puVar74[0x29];
    auVar170[10] = puVar74[0x2a];
    auVar146[11] = puVar74[0x2c];
    auVar158[11] = puVar74[0x2d];
    auVar170[11] = puVar74[0x2e];
    auVar146[12] = puVar74[0x30];
    auVar158[12] = puVar74[0x31];
    auVar170[12] = puVar74[0x32];
    auVar146[13] = puVar74[0x34];
    auVar158[13] = puVar74[0x35];
    auVar170[13] = puVar74[0x36];
    auVar146[14] = puVar74[0x38];
    auVar158[14] = puVar74[0x39];
    auVar170[14] = puVar74[0x3a];
    auVar146[15] = puVar74[0x3c];
    auVar158[15] = puVar74[0x3d];
    auVar170[15] = puVar74[0x3e];
    auVar180._0_8_ =
         CONCAT17(puVar74[0x1f],
                  CONCAT16(puVar74[0x1b],
                           CONCAT15(puVar74[0x17],
                                    CONCAT14(puVar74[0x13],
                                             CONCAT13(puVar74[0xf],
                                                      CONCAT12(puVar74[0xb],
                                                               CONCAT11(puVar74[7],puVar74[3])))))))
         & 0x3f3f3f3f3f3f3f3f;
    auVar180[8] = puVar74[0x23] & 0x3f;
    auVar180[9] = puVar74[0x27] & 0x3f;
    auVar180[10] = puVar74[0x2b] & 0x3f;
    auVar180[11] = puVar74[0x2f] & 0x3f;
    auVar180[12] = puVar74[0x33] & 0x3f;
    auVar180[13] = puVar74[0x37] & 0x3f;
    auVar180[14] = puVar74[0x3b] & 0x3f;
    auVar180[15] = puVar74[0x3f] & 0x3f;
    auVar33[1] = uVar110;
    auVar33[0] = uVar109;
    auVar33[2] = uVar111;
    auVar33[3] = uVar112;
    auVar33[4] = uVar113;
    auVar33[5] = uVar114;
    auVar33[6] = uVar115;
    auVar33[7] = uVar116;
    auVar33[8] = uVar117;
    auVar33[9] = uVar118;
    auVar33[10] = uVar119;
    auVar33[11] = uVar120;
    auVar33[12] = uVar121;
    auVar33[13] = uVar122;
    auVar33[14] = uVar123;
    auVar33[15] = uVar124;
    auVar164 = NEON_cmeq(auVar33,auVar170,1);
    auVar16[1] = uVar94;
    auVar16[0] = uVar93;
    auVar16[2] = uVar95;
    auVar16[3] = uVar96;
    auVar16[4] = uVar97;
    auVar16[5] = uVar98;
    auVar16[6] = uVar99;
    auVar16[7] = uVar100;
    auVar16[8] = uVar101;
    auVar16[9] = uVar102;
    auVar16[10] = uVar103;
    auVar16[11] = uVar104;
    auVar16[12] = uVar105;
    auVar16[13] = uVar106;
    auVar16[14] = uVar107;
    auVar16[15] = uVar108;
    auVar197 = NEON_cmeq(auVar16,auVar158,1);
    auVar34[1] = uVar110;
    auVar34[0] = uVar109;
    auVar34[2] = uVar111;
    auVar34[3] = uVar112;
    auVar34[4] = uVar113;
    auVar34[5] = uVar114;
    auVar34[6] = uVar115;
    auVar34[7] = uVar116;
    auVar34[8] = uVar117;
    auVar34[9] = uVar118;
    auVar34[10] = uVar119;
    auVar34[11] = uVar120;
    auVar34[12] = uVar121;
    auVar34[13] = uVar122;
    auVar34[14] = uVar123;
    auVar34[15] = uVar124;
    auVar189 = NEON_cmhi(auVar170,auVar34,1);
    auVar17[1] = uVar94;
    auVar17[0] = uVar93;
    auVar17[2] = uVar95;
    auVar17[3] = uVar96;
    auVar17[4] = uVar97;
    auVar17[5] = uVar98;
    auVar17[6] = uVar99;
    auVar17[7] = uVar100;
    auVar17[8] = uVar101;
    auVar17[9] = uVar102;
    auVar17[10] = uVar103;
    auVar17[11] = uVar104;
    auVar17[12] = uVar105;
    auVar17[13] = uVar106;
    auVar17[14] = uVar107;
    auVar17[15] = uVar108;
    auVar153 = NEON_cmhi(auVar158,auVar17,1);
    auVar4[1] = uVar78;
    auVar4[0] = uVar77;
    auVar4[2] = uVar79;
    auVar4[3] = uVar80;
    auVar4[4] = uVar81;
    auVar4[5] = uVar82;
    auVar4[6] = uVar83;
    auVar4[7] = uVar84;
    auVar4[8] = uVar85;
    auVar4[9] = uVar86;
    auVar4[10] = uVar87;
    auVar4[11] = uVar88;
    auVar4[12] = uVar89;
    auVar4[13] = uVar90;
    auVar4[14] = uVar91;
    auVar4[15] = uVar92;
    auVar173 = NEON_cmhi(auVar146,auVar4,1);
    auVar49[8] = bVar133;
    auVar49._0_8_ =
         (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128
                                                  ,CONCAT12(bVar127,CONCAT11(bVar126,bVar125)))))))
                & 0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
             0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
           0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
         0x7fffffffffffffff ^ 0x4000000000000000;
    auVar49[9] = bVar134;
    auVar49[10] = bVar135;
    auVar49[11] = bVar136;
    auVar49[12] = bVar137;
    auVar49[13] = bVar138;
    auVar49[14] = bVar139;
    auVar49[15] = bVar140;
    auVar186 = NEON_cmeq(auVar49,auVar180,1);
    *pbVar72 = (bVar125 & 0x7f ^ 0x40) >> 3 |
               ~((auVar155[0] | auVar194[0] & auVar198[0] | auVar194[0] & auVar187[0] & auVar141[0])
                & ~auVar199[0]) &
               ~((auVar165[0] | auVar190[0] & auVar150[0] | auVar190[0] & auVar188[0] & auVar149[0])
                & ~auVar200[0]) &
               ~((auVar167[0] | auVar162[0] & auVar152[0] | auVar162[0] & auVar193[0] & auVar161[0])
                & ~auVar201[0]) &
               ~((auVar189[0] | auVar164[0] & auVar153[0] | auVar164[0] & auVar197[0] & auVar173[0])
                & ~auVar186[0]);
    pbVar72[1] = (bVar126 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[1] | auVar194[1] & auVar198[1] |
                   auVar194[1] & auVar187[1] & auVar141[1]) & ~auVar199[1]) &
                 ~((auVar165[1] | auVar190[1] & auVar150[1] |
                   auVar190[1] & auVar188[1] & auVar149[1]) & ~auVar200[1]) &
                 ~((auVar167[1] | auVar162[1] & auVar152[1] |
                   auVar162[1] & auVar193[1] & auVar161[1]) & ~auVar201[1]) &
                 ~((auVar189[1] | auVar164[1] & auVar153[1] |
                   auVar164[1] & auVar197[1] & auVar173[1]) & ~auVar186[1]);
    pbVar72[2] = (bVar127 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[2] | auVar194[2] & auVar198[2] |
                   auVar194[2] & auVar187[2] & auVar141[2]) & ~auVar199[2]) &
                 ~((auVar165[2] | auVar190[2] & auVar150[2] |
                   auVar190[2] & auVar188[2] & auVar149[2]) & ~auVar200[2]) &
                 ~((auVar167[2] | auVar162[2] & auVar152[2] |
                   auVar162[2] & auVar193[2] & auVar161[2]) & ~auVar201[2]) &
                 ~((auVar189[2] | auVar164[2] & auVar153[2] |
                   auVar164[2] & auVar197[2] & auVar173[2]) & ~auVar186[2]);
    pbVar72[3] = (bVar128 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[3] | auVar194[3] & auVar198[3] |
                   auVar194[3] & auVar187[3] & auVar141[3]) & ~auVar199[3]) &
                 ~((auVar165[3] | auVar190[3] & auVar150[3] |
                   auVar190[3] & auVar188[3] & auVar149[3]) & ~auVar200[3]) &
                 ~((auVar167[3] | auVar162[3] & auVar152[3] |
                   auVar162[3] & auVar193[3] & auVar161[3]) & ~auVar201[3]) &
                 ~((auVar189[3] | auVar164[3] & auVar153[3] |
                   auVar164[3] & auVar197[3] & auVar173[3]) & ~auVar186[3]);
    pbVar72[4] = (bVar129 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[4] | auVar194[4] & auVar198[4] |
                   auVar194[4] & auVar187[4] & auVar141[4]) & ~auVar199[4]) &
                 ~((auVar165[4] | auVar190[4] & auVar150[4] |
                   auVar190[4] & auVar188[4] & auVar149[4]) & ~auVar200[4]) &
                 ~((auVar167[4] | auVar162[4] & auVar152[4] |
                   auVar162[4] & auVar193[4] & auVar161[4]) & ~auVar201[4]) &
                 ~((auVar189[4] | auVar164[4] & auVar153[4] |
                   auVar164[4] & auVar197[4] & auVar173[4]) & ~auVar186[4]);
    pbVar72[5] = (bVar130 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[5] | auVar194[5] & auVar198[5] |
                   auVar194[5] & auVar187[5] & auVar141[5]) & ~auVar199[5]) &
                 ~((auVar165[5] | auVar190[5] & auVar150[5] |
                   auVar190[5] & auVar188[5] & auVar149[5]) & ~auVar200[5]) &
                 ~((auVar167[5] | auVar162[5] & auVar152[5] |
                   auVar162[5] & auVar193[5] & auVar161[5]) & ~auVar201[5]) &
                 ~((auVar189[5] | auVar164[5] & auVar153[5] |
                   auVar164[5] & auVar197[5] & auVar173[5]) & ~auVar186[5]);
    pbVar72[6] = (bVar131 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[6] | auVar194[6] & auVar198[6] |
                   auVar194[6] & auVar187[6] & auVar141[6]) & ~auVar199[6]) &
                 ~((auVar165[6] | auVar190[6] & auVar150[6] |
                   auVar190[6] & auVar188[6] & auVar149[6]) & ~auVar200[6]) &
                 ~((auVar167[6] | auVar162[6] & auVar152[6] |
                   auVar162[6] & auVar193[6] & auVar161[6]) & ~auVar201[6]) &
                 ~((auVar189[6] | auVar164[6] & auVar153[6] |
                   auVar164[6] & auVar197[6] & auVar173[6]) & ~auVar186[6]);
    pbVar72[7] = (bVar132 & 0x7f ^ 0x40) >> 3 |
                 ~((auVar155[7] | auVar194[7] & auVar198[7] |
                   auVar194[7] & auVar187[7] & auVar141[7]) & ~auVar199[7]) &
                 ~((auVar165[7] | auVar190[7] & auVar150[7] |
                   auVar190[7] & auVar188[7] & auVar149[7]) & ~auVar200[7]) &
                 ~((auVar167[7] | auVar162[7] & auVar152[7] |
                   auVar162[7] & auVar193[7] & auVar161[7]) & ~auVar201[7]) &
                 ~((auVar189[7] | auVar164[7] & auVar153[7] |
                   auVar164[7] & auVar197[7] & auVar173[7]) & ~auVar186[7]);
    pbVar72[8] = bVar133 >> 3 |
                 ~((auVar155[8] | auVar194[8] & auVar198[8] |
                   auVar194[8] & auVar187[8] & auVar141[8]) & ~auVar199[8]) &
                 ~((auVar165[8] | auVar190[8] & auVar150[8] |
                   auVar190[8] & auVar188[8] & auVar149[8]) & ~auVar200[8]) &
                 ~((auVar167[8] | auVar162[8] & auVar152[8] |
                   auVar162[8] & auVar193[8] & auVar161[8]) & ~auVar201[8]) &
                 ~((auVar189[8] | auVar164[8] & auVar153[8] |
                   auVar164[8] & auVar197[8] & auVar173[8]) & ~auVar186[8]);
    pbVar72[9] = bVar134 >> 3 |
                 ~((auVar155[9] | auVar194[9] & auVar198[9] |
                   auVar194[9] & auVar187[9] & auVar141[9]) & ~auVar199[9]) &
                 ~((auVar165[9] | auVar190[9] & auVar150[9] |
                   auVar190[9] & auVar188[9] & auVar149[9]) & ~auVar200[9]) &
                 ~((auVar167[9] | auVar162[9] & auVar152[9] |
                   auVar162[9] & auVar193[9] & auVar161[9]) & ~auVar201[9]) &
                 ~((auVar189[9] | auVar164[9] & auVar153[9] |
                   auVar164[9] & auVar197[9] & auVar173[9]) & ~auVar186[9]);
    pbVar72[10] = bVar135 >> 3 |
                  ~((auVar155[10] | auVar194[10] & auVar198[10] |
                    auVar194[10] & auVar187[10] & auVar141[10]) & ~auVar199[10]) &
                  ~((auVar165[10] | auVar190[10] & auVar150[10] |
                    auVar190[10] & auVar188[10] & auVar149[10]) & ~auVar200[10]) &
                  ~((auVar167[10] | auVar162[10] & auVar152[10] |
                    auVar162[10] & auVar193[10] & auVar161[10]) & ~auVar201[10]) &
                  ~((auVar189[10] | auVar164[10] & auVar153[10] |
                    auVar164[10] & auVar197[10] & auVar173[10]) & ~auVar186[10]);
    pbVar72[0xb] = bVar136 >> 3 |
                   ~((auVar155[11] | auVar194[11] & auVar198[11] |
                     auVar194[11] & auVar187[11] & auVar141[11]) & ~auVar199[11]) &
                   ~((auVar165[11] | auVar190[11] & auVar150[11] |
                     auVar190[11] & auVar188[11] & auVar149[11]) & ~auVar200[11]) &
                   ~((auVar167[11] | auVar162[11] & auVar152[11] |
                     auVar162[11] & auVar193[11] & auVar161[11]) & ~auVar201[11]) &
                   ~((auVar189[11] | auVar164[11] & auVar153[11] |
                     auVar164[11] & auVar197[11] & auVar173[11]) & ~auVar186[11]);
    pbVar72[0xc] = bVar137 >> 3 |
                   ~((auVar155[12] | auVar194[12] & auVar198[12] |
                     auVar194[12] & auVar187[12] & auVar141[12]) & ~auVar199[12]) &
                   ~((auVar165[12] | auVar190[12] & auVar150[12] |
                     auVar190[12] & auVar188[12] & auVar149[12]) & ~auVar200[12]) &
                   ~((auVar167[12] | auVar162[12] & auVar152[12] |
                     auVar162[12] & auVar193[12] & auVar161[12]) & ~auVar201[12]) &
                   ~((auVar189[12] | auVar164[12] & auVar153[12] |
                     auVar164[12] & auVar197[12] & auVar173[12]) & ~auVar186[12]);
    pbVar72[0xd] = bVar138 >> 3 |
                   ~((auVar155[13] | auVar194[13] & auVar198[13] |
                     auVar194[13] & auVar187[13] & auVar141[13]) & ~auVar199[13]) &
                   ~((auVar165[13] | auVar190[13] & auVar150[13] |
                     auVar190[13] & auVar188[13] & auVar149[13]) & ~auVar200[13]) &
                   ~((auVar167[13] | auVar162[13] & auVar152[13] |
                     auVar162[13] & auVar193[13] & auVar161[13]) & ~auVar201[13]) &
                   ~((auVar189[13] | auVar164[13] & auVar153[13] |
                     auVar164[13] & auVar197[13] & auVar173[13]) & ~auVar186[13]);
    pbVar72[0xe] = bVar139 >> 3 |
                   ~((auVar155[14] | auVar194[14] & auVar198[14] |
                     auVar194[14] & auVar187[14] & auVar141[14]) & ~auVar199[14]) &
                   ~((auVar165[14] | auVar190[14] & auVar150[14] |
                     auVar190[14] & auVar188[14] & auVar149[14]) & ~auVar200[14]) &
                   ~((auVar167[14] | auVar162[14] & auVar152[14] |
                     auVar162[14] & auVar193[14] & auVar161[14]) & ~auVar201[14]) &
                   ~((auVar189[14] | auVar164[14] & auVar153[14] |
                     auVar164[14] & auVar197[14] & auVar173[14]) & ~auVar186[14]);
    pbVar72[0xf] = bVar140 >> 3 |
                   ~((auVar155[15] | auVar194[15] & auVar198[15] |
                     auVar194[15] & auVar187[15] & auVar141[15]) & ~auVar199[15]) &
                   ~((auVar165[15] | auVar190[15] & auVar150[15] |
                     auVar190[15] & auVar188[15] & auVar149[15]) & ~auVar200[15]) &
                   ~((auVar167[15] | auVar162[15] & auVar152[15] |
                     auVar162[15] & auVar193[15] & auVar161[15]) & ~auVar201[15]) &
                   ~((auVar189[15] | auVar164[15] & auVar153[15] |
                     auVar164[15] & auVar197[15] & auVar173[15]) & ~auVar186[15]);
    iVar76 = iVar76 + -0x10;
    pbVar64 = pbVar72 + 0x10;
    puVar60 = puVar73 + 0x40;
    puVar63 = puVar74 + 0x40;
    puVar62 = puVar75 + 0x40;
  } while (iVar76 != 0);
  uVar77 = puVar73[0x40];
  uVar93 = puVar73[0x41];
  uVar109 = puVar73[0x42];
  bVar125 = puVar73[0x43];
  uVar78 = puVar73[0x44];
  uVar94 = puVar73[0x45];
  uVar110 = puVar73[0x46];
  bVar126 = puVar73[0x47];
  uVar79 = puVar73[0x48];
  uVar95 = puVar73[0x49];
  uVar111 = puVar73[0x4a];
  bVar127 = puVar73[0x4b];
  uVar80 = puVar73[0x4c];
  uVar96 = puVar73[0x4d];
  uVar112 = puVar73[0x4e];
  bVar128 = puVar73[0x4f];
  uVar81 = puVar73[0x50];
  uVar97 = puVar73[0x51];
  uVar113 = puVar73[0x52];
  bVar129 = puVar73[0x53];
  uVar82 = puVar73[0x54];
  uVar98 = puVar73[0x55];
  uVar114 = puVar73[0x56];
  bVar130 = puVar73[0x57];
  uVar83 = puVar73[0x58];
  uVar99 = puVar73[0x59];
  uVar115 = puVar73[0x5a];
  bVar131 = puVar73[0x5b];
  uVar84 = puVar73[0x5c];
  uVar100 = puVar73[0x5d];
  uVar116 = puVar73[0x5e];
  bVar132 = puVar73[0x5f];
  uVar85 = puVar73[0x60];
  uVar101 = puVar73[0x61];
  uVar117 = puVar73[0x62];
  uVar86 = puVar73[100];
  uVar102 = puVar73[0x65];
  uVar118 = puVar73[0x66];
  uVar87 = puVar73[0x68];
  uVar103 = puVar73[0x69];
  uVar119 = puVar73[0x6a];
  uVar88 = puVar73[0x6c];
  uVar104 = puVar73[0x6d];
  uVar120 = puVar73[0x6e];
  uVar89 = puVar73[0x70];
  uVar105 = puVar73[0x71];
  uVar121 = puVar73[0x72];
  uVar90 = puVar73[0x74];
  uVar106 = puVar73[0x75];
  uVar122 = puVar73[0x76];
  uVar91 = puVar73[0x78];
  uVar107 = puVar73[0x79];
  uVar123 = puVar73[0x7a];
  uVar92 = puVar73[0x7c];
  uVar108 = puVar73[0x7d];
  uVar124 = puVar73[0x7e];
  auVar147[0] = puVar75[0x40];
  auVar159[0] = puVar75[0x41];
  auVar171[0] = puVar75[0x42];
  auVar147[1] = puVar75[0x44];
  auVar159[1] = puVar75[0x45];
  auVar171[1] = puVar75[0x46];
  auVar147[2] = puVar75[0x48];
  auVar159[2] = puVar75[0x49];
  auVar171[2] = puVar75[0x4a];
  auVar147[3] = puVar75[0x4c];
  auVar159[3] = puVar75[0x4d];
  auVar171[3] = puVar75[0x4e];
  auVar147[4] = puVar75[0x50];
  auVar159[4] = puVar75[0x51];
  auVar171[4] = puVar75[0x52];
  auVar147[5] = puVar75[0x54];
  auVar159[5] = puVar75[0x55];
  auVar171[5] = puVar75[0x56];
  auVar147[6] = puVar75[0x58];
  auVar159[6] = puVar75[0x59];
  auVar171[6] = puVar75[0x5a];
  auVar147[7] = puVar75[0x5c];
  auVar159[7] = puVar75[0x5d];
  auVar171[7] = puVar75[0x5e];
  auVar147[8] = puVar75[0x60];
  auVar159[8] = puVar75[0x61];
  auVar171[8] = puVar75[0x62];
  auVar147[9] = puVar75[100];
  auVar159[9] = puVar75[0x65];
  auVar171[9] = puVar75[0x66];
  auVar147[10] = puVar75[0x68];
  auVar159[10] = puVar75[0x69];
  auVar171[10] = puVar75[0x6a];
  auVar147[11] = puVar75[0x6c];
  auVar159[11] = puVar75[0x6d];
  auVar171[11] = puVar75[0x6e];
  auVar147[12] = puVar75[0x70];
  auVar159[12] = puVar75[0x71];
  auVar171[12] = puVar75[0x72];
  auVar147[13] = puVar75[0x74];
  auVar159[13] = puVar75[0x75];
  auVar171[13] = puVar75[0x76];
  auVar147[14] = puVar75[0x78];
  auVar159[14] = puVar75[0x79];
  auVar171[14] = puVar75[0x7a];
  auVar147[15] = puVar75[0x7c];
  auVar159[15] = puVar75[0x7d];
  auVar171[15] = puVar75[0x7e];
  auVar181._0_8_ =
       CONCAT17(puVar75[0x5f],
                CONCAT16(puVar75[0x5b],
                         CONCAT15(puVar75[0x57],
                                  CONCAT14(puVar75[0x53],
                                           CONCAT13(puVar75[0x4f],
                                                    CONCAT12(puVar75[0x4b],
                                                             CONCAT11(puVar75[0x47],puVar75[0x43])))
                                          )))) & 0x3f3f3f3f3f3f3f3f;
  auVar181[8] = puVar75[99] & 0x3f;
  auVar181[9] = puVar75[0x67] & 0x3f;
  auVar181[10] = puVar75[0x6b] & 0x3f;
  auVar181[11] = puVar75[0x6f] & 0x3f;
  auVar181[12] = puVar75[0x73] & 0x3f;
  auVar181[13] = puVar75[0x77] & 0x3f;
  auVar181[14] = puVar75[0x7b] & 0x3f;
  auVar181[15] = puVar75[0x7f] & 0x3f;
  bVar133 = puVar73[99] & 0x7f ^ 0x40;
  bVar134 = puVar73[0x67] & 0x7f ^ 0x40;
  bVar135 = puVar73[0x6b] & 0x7f ^ 0x40;
  bVar136 = puVar73[0x6f] & 0x7f ^ 0x40;
  bVar137 = puVar73[0x73] & 0x7f ^ 0x40;
  bVar138 = puVar73[0x77] & 0x7f ^ 0x40;
  bVar139 = puVar73[0x7b] & 0x7f ^ 0x40;
  bVar140 = puVar73[0x7f] & 0x7f ^ 0x40;
  auVar35[1] = uVar110;
  auVar35[0] = uVar109;
  auVar35[2] = uVar111;
  auVar35[3] = uVar112;
  auVar35[4] = uVar113;
  auVar35[5] = uVar114;
  auVar35[6] = uVar115;
  auVar35[7] = uVar116;
  auVar35[8] = uVar117;
  auVar35[9] = uVar118;
  auVar35[10] = uVar119;
  auVar35[11] = uVar120;
  auVar35[12] = uVar121;
  auVar35[13] = uVar122;
  auVar35[14] = uVar123;
  auVar35[15] = uVar124;
  auVar194 = NEON_cmeq(auVar35,auVar171,1);
  auVar18[1] = uVar94;
  auVar18[0] = uVar93;
  auVar18[2] = uVar95;
  auVar18[3] = uVar96;
  auVar18[4] = uVar97;
  auVar18[5] = uVar98;
  auVar18[6] = uVar99;
  auVar18[7] = uVar100;
  auVar18[8] = uVar101;
  auVar18[9] = uVar102;
  auVar18[10] = uVar103;
  auVar18[11] = uVar104;
  auVar18[12] = uVar105;
  auVar18[13] = uVar106;
  auVar18[14] = uVar107;
  auVar18[15] = uVar108;
  auVar187 = NEON_cmeq(auVar18,auVar159,1);
  auVar36[1] = uVar110;
  auVar36[0] = uVar109;
  auVar36[2] = uVar111;
  auVar36[3] = uVar112;
  auVar36[4] = uVar113;
  auVar36[5] = uVar114;
  auVar36[6] = uVar115;
  auVar36[7] = uVar116;
  auVar36[8] = uVar117;
  auVar36[9] = uVar118;
  auVar36[10] = uVar119;
  auVar36[11] = uVar120;
  auVar36[12] = uVar121;
  auVar36[13] = uVar122;
  auVar36[14] = uVar123;
  auVar36[15] = uVar124;
  auVar155 = NEON_cmhi(auVar171,auVar36,1);
  auVar19[1] = uVar94;
  auVar19[0] = uVar93;
  auVar19[2] = uVar95;
  auVar19[3] = uVar96;
  auVar19[4] = uVar97;
  auVar19[5] = uVar98;
  auVar19[6] = uVar99;
  auVar19[7] = uVar100;
  auVar19[8] = uVar101;
  auVar19[9] = uVar102;
  auVar19[10] = uVar103;
  auVar19[11] = uVar104;
  auVar19[12] = uVar105;
  auVar19[13] = uVar106;
  auVar19[14] = uVar107;
  auVar19[15] = uVar108;
  auVar198 = NEON_cmhi(auVar159,auVar19,1);
  auVar5[1] = uVar78;
  auVar5[0] = uVar77;
  auVar5[2] = uVar79;
  auVar5[3] = uVar80;
  auVar5[4] = uVar81;
  auVar5[5] = uVar82;
  auVar5[6] = uVar83;
  auVar5[7] = uVar84;
  auVar5[8] = uVar85;
  auVar5[9] = uVar86;
  auVar5[10] = uVar87;
  auVar5[11] = uVar88;
  auVar5[12] = uVar89;
  auVar5[13] = uVar90;
  auVar5[14] = uVar91;
  auVar5[15] = uVar92;
  auVar141 = NEON_cmhi(auVar147,auVar5,1);
  auVar50[8] = bVar133;
  auVar50._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar50[9] = bVar134;
  auVar50[10] = bVar135;
  auVar50[11] = bVar136;
  auVar50[12] = bVar137;
  auVar50[13] = bVar138;
  auVar50[14] = bVar139;
  auVar50[15] = bVar140;
  auVar199 = NEON_cmeq(auVar50,auVar181,1);
  auVar182[1] = bStack_d;
  auVar182[0] = bStack_d;
  auVar182[2] = bStack_d;
  auVar182[3] = bStack_d;
  auVar182[4] = bStack_d;
  auVar182[5] = bStack_d;
  auVar182[6] = bStack_d;
  auVar182[7] = bStack_d;
  auVar182[8] = bStack_d;
  auVar182[9] = bStack_d;
  auVar182[10] = bStack_d;
  auVar182[11] = bStack_d;
  auVar182[12] = bStack_d;
  auVar182[13] = bStack_d;
  auVar182[14] = bStack_d;
  auVar182[15] = bStack_d;
  auVar6[1] = uVar78;
  auVar6[0] = uVar77;
  auVar6[2] = uVar79;
  auVar6[3] = uVar80;
  auVar6[4] = uVar81;
  auVar6[5] = uVar82;
  auVar6[6] = uVar83;
  auVar6[7] = uVar84;
  auVar6[8] = uVar85;
  auVar6[9] = uVar86;
  auVar6[10] = uVar87;
  auVar6[11] = uVar88;
  auVar6[12] = uVar89;
  auVar6[13] = uVar90;
  auVar6[14] = uVar91;
  auVar6[15] = uVar92;
  auVar149 = NEON_ext(auVar6,auVar141,1,1);
  auVar20[1] = uVar94;
  auVar20[0] = uVar93;
  auVar20[2] = uVar95;
  auVar20[3] = uVar96;
  auVar20[4] = uVar97;
  auVar20[5] = uVar98;
  auVar20[6] = uVar99;
  auVar20[7] = uVar100;
  auVar20[8] = uVar101;
  auVar20[9] = uVar102;
  auVar20[10] = uVar103;
  auVar20[11] = uVar104;
  auVar20[12] = uVar105;
  auVar20[13] = uVar106;
  auVar20[14] = uVar107;
  auVar20[15] = uVar108;
  auVar161 = NEON_ext(auVar20,auVar198,1,1);
  auVar37[1] = uVar110;
  auVar37[0] = uVar109;
  auVar37[2] = uVar111;
  auVar37[3] = uVar112;
  auVar37[4] = uVar113;
  auVar37[5] = uVar114;
  auVar37[6] = uVar115;
  auVar37[7] = uVar116;
  auVar37[8] = uVar117;
  auVar37[9] = uVar118;
  auVar37[10] = uVar119;
  auVar37[11] = uVar120;
  auVar37[12] = uVar121;
  auVar37[13] = uVar122;
  auVar37[14] = uVar123;
  auVar37[15] = uVar124;
  auVar173 = NEON_ext(auVar37,auVar155,1,1);
  auVar51[8] = bVar133;
  auVar51._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar51[9] = bVar134;
  auVar51[10] = bVar135;
  auVar51[11] = bVar136;
  auVar51[12] = bVar137;
  auVar51[13] = bVar138;
  auVar51[14] = bVar139;
  auVar51[15] = bVar140;
  auVar150 = NEON_ext(auVar51,auVar182,1,1);
  auVar183._0_8_ = auVar150._0_8_ & 0x3f3f3f3f3f3f3f3f;
  auVar183[8] = auVar150[8] & 0x3f;
  auVar183[9] = auVar150[9] & 0x3f;
  auVar183[10] = auVar150[10] & 0x3f;
  auVar183[11] = auVar150[11] & 0x3f;
  auVar183[12] = auVar150[12] & 0x3f;
  auVar183[13] = auVar150[13] & 0x3f;
  auVar183[14] = auVar150[14] & 0x3f;
  auVar183[15] = auVar150[15] & 0x3f;
  auVar38[1] = uVar110;
  auVar38[0] = uVar109;
  auVar38[2] = uVar111;
  auVar38[3] = uVar112;
  auVar38[4] = uVar113;
  auVar38[5] = uVar114;
  auVar38[6] = uVar115;
  auVar38[7] = uVar116;
  auVar38[8] = uVar117;
  auVar38[9] = uVar118;
  auVar38[10] = uVar119;
  auVar38[11] = uVar120;
  auVar38[12] = uVar121;
  auVar38[13] = uVar122;
  auVar38[14] = uVar123;
  auVar38[15] = uVar124;
  auVar190 = NEON_cmeq(auVar38,auVar173,1);
  auVar21[1] = uVar94;
  auVar21[0] = uVar93;
  auVar21[2] = uVar95;
  auVar21[3] = uVar96;
  auVar21[4] = uVar97;
  auVar21[5] = uVar98;
  auVar21[6] = uVar99;
  auVar21[7] = uVar100;
  auVar21[8] = uVar101;
  auVar21[9] = uVar102;
  auVar21[10] = uVar103;
  auVar21[11] = uVar104;
  auVar21[12] = uVar105;
  auVar21[13] = uVar106;
  auVar21[14] = uVar107;
  auVar21[15] = uVar108;
  auVar188 = NEON_cmeq(auVar21,auVar161,1);
  auVar39[1] = uVar110;
  auVar39[0] = uVar109;
  auVar39[2] = uVar111;
  auVar39[3] = uVar112;
  auVar39[4] = uVar113;
  auVar39[5] = uVar114;
  auVar39[6] = uVar115;
  auVar39[7] = uVar116;
  auVar39[8] = uVar117;
  auVar39[9] = uVar118;
  auVar39[10] = uVar119;
  auVar39[11] = uVar120;
  auVar39[12] = uVar121;
  auVar39[13] = uVar122;
  auVar39[14] = uVar123;
  auVar39[15] = uVar124;
  auVar165 = NEON_cmhi(auVar173,auVar39,1);
  auVar22[1] = uVar94;
  auVar22[0] = uVar93;
  auVar22[2] = uVar95;
  auVar22[3] = uVar96;
  auVar22[4] = uVar97;
  auVar22[5] = uVar98;
  auVar22[6] = uVar99;
  auVar22[7] = uVar100;
  auVar22[8] = uVar101;
  auVar22[9] = uVar102;
  auVar22[10] = uVar103;
  auVar22[11] = uVar104;
  auVar22[12] = uVar105;
  auVar22[13] = uVar106;
  auVar22[14] = uVar107;
  auVar22[15] = uVar108;
  auVar150 = NEON_cmhi(auVar161,auVar22,1);
  auVar7[1] = uVar78;
  auVar7[0] = uVar77;
  auVar7[2] = uVar79;
  auVar7[3] = uVar80;
  auVar7[4] = uVar81;
  auVar7[5] = uVar82;
  auVar7[6] = uVar83;
  auVar7[7] = uVar84;
  auVar7[8] = uVar85;
  auVar7[9] = uVar86;
  auVar7[10] = uVar87;
  auVar7[11] = uVar88;
  auVar7[12] = uVar89;
  auVar7[13] = uVar90;
  auVar7[14] = uVar91;
  auVar7[15] = uVar92;
  auVar149 = NEON_cmhi(auVar149,auVar7,1);
  auVar52[8] = bVar133;
  auVar52._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar52[9] = bVar134;
  auVar52[10] = bVar135;
  auVar52[11] = bVar136;
  auVar52[12] = bVar137;
  auVar52[13] = bVar138;
  auVar52[14] = bVar139;
  auVar52[15] = bVar140;
  auVar200 = NEON_cmeq(auVar52,auVar183,1);
  auVar184._0_8_ =
       CONCAT17(bStack_d,CONCAT16(bStack_d,CONCAT15(bStack_d,CONCAT14(bStack_d,CONCAT13(bStack_d,
                                                  CONCAT12(bStack_d,CONCAT11(bStack_d,bStack_d))))))
               ) & 0x3f3f3f3f3f3f3f3f;
  auVar184[8] = bStack_d & 0x3f;
  auVar184[9] = bStack_d & 0x3f;
  auVar184[10] = bStack_d & 0x3f;
  auVar184[11] = bStack_d & 0x3f;
  auVar184[12] = bStack_d & 0x3f;
  auVar184[13] = bStack_d & 0x3f;
  auVar184[14] = bStack_d & 0x3f;
  auVar184[15] = bStack_d & 0x3f;
  auVar40[1] = uVar110;
  auVar40[0] = uVar109;
  auVar40[2] = uVar111;
  auVar40[3] = uVar112;
  auVar40[4] = uVar113;
  auVar40[5] = uVar114;
  auVar40[6] = uVar115;
  auVar40[7] = uVar116;
  auVar40[8] = uVar117;
  auVar40[9] = uVar118;
  auVar40[10] = uVar119;
  auVar40[11] = uVar120;
  auVar40[12] = uVar121;
  auVar40[13] = uVar122;
  auVar40[14] = uVar123;
  auVar40[15] = uVar124;
  auVar162 = NEON_cmeq(auVar40,auVar165,1);
  auVar23[1] = uVar94;
  auVar23[0] = uVar93;
  auVar23[2] = uVar95;
  auVar23[3] = uVar96;
  auVar23[4] = uVar97;
  auVar23[5] = uVar98;
  auVar23[6] = uVar99;
  auVar23[7] = uVar100;
  auVar23[8] = uVar101;
  auVar23[9] = uVar102;
  auVar23[10] = uVar103;
  auVar23[11] = uVar104;
  auVar23[12] = uVar105;
  auVar23[13] = uVar106;
  auVar23[14] = uVar107;
  auVar23[15] = uVar108;
  auVar193 = NEON_cmeq(auVar23,auVar150,1);
  auVar41[1] = uVar110;
  auVar41[0] = uVar109;
  auVar41[2] = uVar111;
  auVar41[3] = uVar112;
  auVar41[4] = uVar113;
  auVar41[5] = uVar114;
  auVar41[6] = uVar115;
  auVar41[7] = uVar116;
  auVar41[8] = uVar117;
  auVar41[9] = uVar118;
  auVar41[10] = uVar119;
  auVar41[11] = uVar120;
  auVar41[12] = uVar121;
  auVar41[13] = uVar122;
  auVar41[14] = uVar123;
  auVar41[15] = uVar124;
  auVar167 = NEON_cmhi(auVar165,auVar41,1);
  auVar24[1] = uVar94;
  auVar24[0] = uVar93;
  auVar24[2] = uVar95;
  auVar24[3] = uVar96;
  auVar24[4] = uVar97;
  auVar24[5] = uVar98;
  auVar24[6] = uVar99;
  auVar24[7] = uVar100;
  auVar24[8] = uVar101;
  auVar24[9] = uVar102;
  auVar24[10] = uVar103;
  auVar24[11] = uVar104;
  auVar24[12] = uVar105;
  auVar24[13] = uVar106;
  auVar24[14] = uVar107;
  auVar24[15] = uVar108;
  auVar152 = NEON_cmhi(auVar150,auVar24,1);
  auVar8[1] = uVar78;
  auVar8[0] = uVar77;
  auVar8[2] = uVar79;
  auVar8[3] = uVar80;
  auVar8[4] = uVar81;
  auVar8[5] = uVar82;
  auVar8[6] = uVar83;
  auVar8[7] = uVar84;
  auVar8[8] = uVar85;
  auVar8[9] = uVar86;
  auVar8[10] = uVar87;
  auVar8[11] = uVar88;
  auVar8[12] = uVar89;
  auVar8[13] = uVar90;
  auVar8[14] = uVar91;
  auVar8[15] = uVar92;
  auVar161 = NEON_cmhi(auVar149,auVar8,1);
  auVar53[8] = bVar133;
  auVar53._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar53[9] = bVar134;
  auVar53[10] = bVar135;
  auVar53[11] = bVar136;
  auVar53[12] = bVar137;
  auVar53[13] = bVar138;
  auVar53[14] = bVar139;
  auVar53[15] = bVar140;
  auVar201 = NEON_cmeq(auVar53,auVar184,1);
  auVar148[0] = puVar74[0x40];
  auVar160[0] = puVar74[0x41];
  auVar172[0] = puVar74[0x42];
  auVar148[1] = puVar74[0x44];
  auVar160[1] = puVar74[0x45];
  auVar172[1] = puVar74[0x46];
  auVar148[2] = puVar74[0x48];
  auVar160[2] = puVar74[0x49];
  auVar172[2] = puVar74[0x4a];
  auVar148[3] = puVar74[0x4c];
  auVar160[3] = puVar74[0x4d];
  auVar172[3] = puVar74[0x4e];
  auVar148[4] = puVar74[0x50];
  auVar160[4] = puVar74[0x51];
  auVar172[4] = puVar74[0x52];
  auVar148[5] = puVar74[0x54];
  auVar160[5] = puVar74[0x55];
  auVar172[5] = puVar74[0x56];
  auVar148[6] = puVar74[0x58];
  auVar160[6] = puVar74[0x59];
  auVar172[6] = puVar74[0x5a];
  auVar148[7] = puVar74[0x5c];
  auVar160[7] = puVar74[0x5d];
  auVar172[7] = puVar74[0x5e];
  auVar148[8] = puVar74[0x60];
  auVar160[8] = puVar74[0x61];
  auVar172[8] = puVar74[0x62];
  auVar148[9] = puVar74[100];
  auVar160[9] = puVar74[0x65];
  auVar172[9] = puVar74[0x66];
  auVar148[10] = puVar74[0x68];
  auVar160[10] = puVar74[0x69];
  auVar172[10] = puVar74[0x6a];
  auVar148[11] = puVar74[0x6c];
  auVar160[11] = puVar74[0x6d];
  auVar172[11] = puVar74[0x6e];
  auVar148[12] = puVar74[0x70];
  auVar160[12] = puVar74[0x71];
  auVar172[12] = puVar74[0x72];
  auVar148[13] = puVar74[0x74];
  auVar160[13] = puVar74[0x75];
  auVar172[13] = puVar74[0x76];
  auVar148[14] = puVar74[0x78];
  auVar160[14] = puVar74[0x79];
  auVar172[14] = puVar74[0x7a];
  auVar148[15] = puVar74[0x7c];
  auVar160[15] = puVar74[0x7d];
  auVar172[15] = puVar74[0x7e];
  auVar185._0_8_ =
       CONCAT17(puVar74[0x5f],
                CONCAT16(puVar74[0x5b],
                         CONCAT15(puVar74[0x57],
                                  CONCAT14(puVar74[0x53],
                                           CONCAT13(puVar74[0x4f],
                                                    CONCAT12(puVar74[0x4b],
                                                             CONCAT11(puVar74[0x47],puVar74[0x43])))
                                          )))) & 0x3f3f3f3f3f3f3f3f;
  auVar185[8] = puVar74[99] & 0x3f;
  auVar185[9] = puVar74[0x67] & 0x3f;
  auVar185[10] = puVar74[0x6b] & 0x3f;
  auVar185[11] = puVar74[0x6f] & 0x3f;
  auVar185[12] = puVar74[0x73] & 0x3f;
  auVar185[13] = puVar74[0x77] & 0x3f;
  auVar185[14] = puVar74[0x7b] & 0x3f;
  auVar185[15] = puVar74[0x7f] & 0x3f;
  auVar42[1] = uVar110;
  auVar42[0] = uVar109;
  auVar42[2] = uVar111;
  auVar42[3] = uVar112;
  auVar42[4] = uVar113;
  auVar42[5] = uVar114;
  auVar42[6] = uVar115;
  auVar42[7] = uVar116;
  auVar42[8] = uVar117;
  auVar42[9] = uVar118;
  auVar42[10] = uVar119;
  auVar42[11] = uVar120;
  auVar42[12] = uVar121;
  auVar42[13] = uVar122;
  auVar42[14] = uVar123;
  auVar42[15] = uVar124;
  auVar164 = NEON_cmeq(auVar42,auVar172,1);
  auVar25[1] = uVar94;
  auVar25[0] = uVar93;
  auVar25[2] = uVar95;
  auVar25[3] = uVar96;
  auVar25[4] = uVar97;
  auVar25[5] = uVar98;
  auVar25[6] = uVar99;
  auVar25[7] = uVar100;
  auVar25[8] = uVar101;
  auVar25[9] = uVar102;
  auVar25[10] = uVar103;
  auVar25[11] = uVar104;
  auVar25[12] = uVar105;
  auVar25[13] = uVar106;
  auVar25[14] = uVar107;
  auVar25[15] = uVar108;
  auVar197 = NEON_cmeq(auVar25,auVar160,1);
  auVar43[1] = uVar110;
  auVar43[0] = uVar109;
  auVar43[2] = uVar111;
  auVar43[3] = uVar112;
  auVar43[4] = uVar113;
  auVar43[5] = uVar114;
  auVar43[6] = uVar115;
  auVar43[7] = uVar116;
  auVar43[8] = uVar117;
  auVar43[9] = uVar118;
  auVar43[10] = uVar119;
  auVar43[11] = uVar120;
  auVar43[12] = uVar121;
  auVar43[13] = uVar122;
  auVar43[14] = uVar123;
  auVar43[15] = uVar124;
  auVar189 = NEON_cmhi(auVar172,auVar43,1);
  auVar26[1] = uVar94;
  auVar26[0] = uVar93;
  auVar26[2] = uVar95;
  auVar26[3] = uVar96;
  auVar26[4] = uVar97;
  auVar26[5] = uVar98;
  auVar26[6] = uVar99;
  auVar26[7] = uVar100;
  auVar26[8] = uVar101;
  auVar26[9] = uVar102;
  auVar26[10] = uVar103;
  auVar26[11] = uVar104;
  auVar26[12] = uVar105;
  auVar26[13] = uVar106;
  auVar26[14] = uVar107;
  auVar26[15] = uVar108;
  auVar153 = NEON_cmhi(auVar160,auVar26,1);
  auVar9[1] = uVar78;
  auVar9[0] = uVar77;
  auVar9[2] = uVar79;
  auVar9[3] = uVar80;
  auVar9[4] = uVar81;
  auVar9[5] = uVar82;
  auVar9[6] = uVar83;
  auVar9[7] = uVar84;
  auVar9[8] = uVar85;
  auVar9[9] = uVar86;
  auVar9[10] = uVar87;
  auVar9[11] = uVar88;
  auVar9[12] = uVar89;
  auVar9[13] = uVar90;
  auVar9[14] = uVar91;
  auVar9[15] = uVar92;
  auVar173 = NEON_cmhi(auVar148,auVar9,1);
  auVar54[8] = bVar133;
  auVar54._0_8_ =
       (((((((CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13(bVar128,
                                                  CONCAT12(bVar127,CONCAT11(bVar126,bVar125))))))) &
              0xffffffffffffff7f ^ 0x40) & 0xffffffffffff7fff ^ 0x4000) & 0xffffffffff7fffff ^
           0x400000) & 0xffffffff7fffffff ^ 0x40000000) & 0xffffff7fffffffff ^ 0x4000000000) &
         0xffff7fffffffffff ^ 0x400000000000) & 0xff7fffffffffffff ^ 0x40000000000000) &
       0x7fffffffffffffff ^ 0x4000000000000000;
  auVar54[9] = bVar134;
  auVar54[10] = bVar135;
  auVar54[11] = bVar136;
  auVar54[12] = bVar137;
  auVar54[13] = bVar138;
  auVar54[14] = bVar139;
  auVar54[15] = bVar140;
  auVar186 = NEON_cmeq(auVar54,auVar185,1);
  pbVar72[0x10] =
       (bVar125 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[0] | auVar194[0] & auVar198[0] | auVar194[0] & auVar187[0] & auVar141[0]) &
        ~auVar199[0]) &
       ~((auVar165[0] | auVar190[0] & auVar150[0] | auVar190[0] & auVar188[0] & auVar149[0]) &
        ~auVar200[0]) &
       ~((auVar167[0] | auVar162[0] & auVar152[0] | auVar162[0] & auVar193[0] & auVar161[0]) &
        ~auVar201[0]) &
       ~((auVar189[0] | auVar164[0] & auVar153[0] | auVar164[0] & auVar197[0] & auVar173[0]) &
        ~auVar186[0]);
  pbVar72[0x11] =
       (bVar126 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[1] | auVar194[1] & auVar198[1] | auVar194[1] & auVar187[1] & auVar141[1]) &
        ~auVar199[1]) &
       ~((auVar165[1] | auVar190[1] & auVar150[1] | auVar190[1] & auVar188[1] & auVar149[1]) &
        ~auVar200[1]) &
       ~((auVar167[1] | auVar162[1] & auVar152[1] | auVar162[1] & auVar193[1] & auVar161[1]) &
        ~auVar201[1]) &
       ~((auVar189[1] | auVar164[1] & auVar153[1] | auVar164[1] & auVar197[1] & auVar173[1]) &
        ~auVar186[1]);
  pbVar72[0x12] =
       (bVar127 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[2] | auVar194[2] & auVar198[2] | auVar194[2] & auVar187[2] & auVar141[2]) &
        ~auVar199[2]) &
       ~((auVar165[2] | auVar190[2] & auVar150[2] | auVar190[2] & auVar188[2] & auVar149[2]) &
        ~auVar200[2]) &
       ~((auVar167[2] | auVar162[2] & auVar152[2] | auVar162[2] & auVar193[2] & auVar161[2]) &
        ~auVar201[2]) &
       ~((auVar189[2] | auVar164[2] & auVar153[2] | auVar164[2] & auVar197[2] & auVar173[2]) &
        ~auVar186[2]);
  pbVar72[0x13] =
       (bVar128 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[3] | auVar194[3] & auVar198[3] | auVar194[3] & auVar187[3] & auVar141[3]) &
        ~auVar199[3]) &
       ~((auVar165[3] | auVar190[3] & auVar150[3] | auVar190[3] & auVar188[3] & auVar149[3]) &
        ~auVar200[3]) &
       ~((auVar167[3] | auVar162[3] & auVar152[3] | auVar162[3] & auVar193[3] & auVar161[3]) &
        ~auVar201[3]) &
       ~((auVar189[3] | auVar164[3] & auVar153[3] | auVar164[3] & auVar197[3] & auVar173[3]) &
        ~auVar186[3]);
  pbVar72[0x14] =
       (bVar129 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[4] | auVar194[4] & auVar198[4] | auVar194[4] & auVar187[4] & auVar141[4]) &
        ~auVar199[4]) &
       ~((auVar165[4] | auVar190[4] & auVar150[4] | auVar190[4] & auVar188[4] & auVar149[4]) &
        ~auVar200[4]) &
       ~((auVar167[4] | auVar162[4] & auVar152[4] | auVar162[4] & auVar193[4] & auVar161[4]) &
        ~auVar201[4]) &
       ~((auVar189[4] | auVar164[4] & auVar153[4] | auVar164[4] & auVar197[4] & auVar173[4]) &
        ~auVar186[4]);
  pbVar72[0x15] =
       (bVar130 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[5] | auVar194[5] & auVar198[5] | auVar194[5] & auVar187[5] & auVar141[5]) &
        ~auVar199[5]) &
       ~((auVar165[5] | auVar190[5] & auVar150[5] | auVar190[5] & auVar188[5] & auVar149[5]) &
        ~auVar200[5]) &
       ~((auVar167[5] | auVar162[5] & auVar152[5] | auVar162[5] & auVar193[5] & auVar161[5]) &
        ~auVar201[5]) &
       ~((auVar189[5] | auVar164[5] & auVar153[5] | auVar164[5] & auVar197[5] & auVar173[5]) &
        ~auVar186[5]);
  pbVar72[0x16] =
       (bVar131 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[6] | auVar194[6] & auVar198[6] | auVar194[6] & auVar187[6] & auVar141[6]) &
        ~auVar199[6]) &
       ~((auVar165[6] | auVar190[6] & auVar150[6] | auVar190[6] & auVar188[6] & auVar149[6]) &
        ~auVar200[6]) &
       ~((auVar167[6] | auVar162[6] & auVar152[6] | auVar162[6] & auVar193[6] & auVar161[6]) &
        ~auVar201[6]) &
       ~((auVar189[6] | auVar164[6] & auVar153[6] | auVar164[6] & auVar197[6] & auVar173[6]) &
        ~auVar186[6]);
  pbVar72[0x17] =
       (bVar132 & 0x7f ^ 0x40) >> 3 |
       ~((auVar155[7] | auVar194[7] & auVar198[7] | auVar194[7] & auVar187[7] & auVar141[7]) &
        ~auVar199[7]) &
       ~((auVar165[7] | auVar190[7] & auVar150[7] | auVar190[7] & auVar188[7] & auVar149[7]) &
        ~auVar200[7]) &
       ~((auVar167[7] | auVar162[7] & auVar152[7] | auVar162[7] & auVar193[7] & auVar161[7]) &
        ~auVar201[7]) &
       ~((auVar189[7] | auVar164[7] & auVar153[7] | auVar164[7] & auVar197[7] & auVar173[7]) &
        ~auVar186[7]);
  pbVar72[0x18] =
       bVar133 >> 3 |
       ~((auVar155[8] | auVar194[8] & auVar198[8] | auVar194[8] & auVar187[8] & auVar141[8]) &
        ~auVar199[8]) &
       ~((auVar165[8] | auVar190[8] & auVar150[8] | auVar190[8] & auVar188[8] & auVar149[8]) &
        ~auVar200[8]) &
       ~((auVar167[8] | auVar162[8] & auVar152[8] | auVar162[8] & auVar193[8] & auVar161[8]) &
        ~auVar201[8]) &
       ~((auVar189[8] | auVar164[8] & auVar153[8] | auVar164[8] & auVar197[8] & auVar173[8]) &
        ~auVar186[8]);
  pbVar72[0x19] =
       bVar134 >> 3 |
       ~((auVar155[9] | auVar194[9] & auVar198[9] | auVar194[9] & auVar187[9] & auVar141[9]) &
        ~auVar199[9]) &
       ~((auVar165[9] | auVar190[9] & auVar150[9] | auVar190[9] & auVar188[9] & auVar149[9]) &
        ~auVar200[9]) &
       ~((auVar167[9] | auVar162[9] & auVar152[9] | auVar162[9] & auVar193[9] & auVar161[9]) &
        ~auVar201[9]) &
       ~((auVar189[9] | auVar164[9] & auVar153[9] | auVar164[9] & auVar197[9] & auVar173[9]) &
        ~auVar186[9]);
  pbVar72[0x1a] =
       bVar135 >> 3 |
       ~((auVar155[10] | auVar194[10] & auVar198[10] | auVar194[10] & auVar187[10] & auVar141[10]) &
        ~auVar199[10]) &
       ~((auVar165[10] | auVar190[10] & auVar150[10] | auVar190[10] & auVar188[10] & auVar149[10]) &
        ~auVar200[10]) &
       ~((auVar167[10] | auVar162[10] & auVar152[10] | auVar162[10] & auVar193[10] & auVar161[10]) &
        ~auVar201[10]) &
       ~((auVar189[10] | auVar164[10] & auVar153[10] | auVar164[10] & auVar197[10] & auVar173[10]) &
        ~auVar186[10]);
  pbVar72[0x1b] =
       bVar136 >> 3 |
       ~((auVar155[11] | auVar194[11] & auVar198[11] | auVar194[11] & auVar187[11] & auVar141[11]) &
        ~auVar199[11]) &
       ~((auVar165[11] | auVar190[11] & auVar150[11] | auVar190[11] & auVar188[11] & auVar149[11]) &
        ~auVar200[11]) &
       ~((auVar167[11] | auVar162[11] & auVar152[11] | auVar162[11] & auVar193[11] & auVar161[11]) &
        ~auVar201[11]) &
       ~((auVar189[11] | auVar164[11] & auVar153[11] | auVar164[11] & auVar197[11] & auVar173[11]) &
        ~auVar186[11]);
  pbVar72[0x1c] =
       bVar137 >> 3 |
       ~((auVar155[12] | auVar194[12] & auVar198[12] | auVar194[12] & auVar187[12] & auVar141[12]) &
        ~auVar199[12]) &
       ~((auVar165[12] | auVar190[12] & auVar150[12] | auVar190[12] & auVar188[12] & auVar149[12]) &
        ~auVar200[12]) &
       ~((auVar167[12] | auVar162[12] & auVar152[12] | auVar162[12] & auVar193[12] & auVar161[12]) &
        ~auVar201[12]) &
       ~((auVar189[12] | auVar164[12] & auVar153[12] | auVar164[12] & auVar197[12] & auVar173[12]) &
        ~auVar186[12]);
  pbVar72[0x1d] =
       bVar138 >> 3 |
       ~((auVar155[13] | auVar194[13] & auVar198[13] | auVar194[13] & auVar187[13] & auVar141[13]) &
        ~auVar199[13]) &
       ~((auVar165[13] | auVar190[13] & auVar150[13] | auVar190[13] & auVar188[13] & auVar149[13]) &
        ~auVar200[13]) &
       ~((auVar167[13] | auVar162[13] & auVar152[13] | auVar162[13] & auVar193[13] & auVar161[13]) &
        ~auVar201[13]) &
       ~((auVar189[13] | auVar164[13] & auVar153[13] | auVar164[13] & auVar197[13] & auVar173[13]) &
        ~auVar186[13]);
  pbVar72[0x1e] =
       bVar139 >> 3 |
       ~((auVar155[14] | auVar194[14] & auVar198[14] | auVar194[14] & auVar187[14] & auVar141[14]) &
        ~auVar199[14]) &
       ~((auVar165[14] | auVar190[14] & auVar150[14] | auVar190[14] & auVar188[14] & auVar149[14]) &
        ~auVar200[14]) &
       ~((auVar167[14] | auVar162[14] & auVar152[14] | auVar162[14] & auVar193[14] & auVar161[14]) &
        ~auVar201[14]) &
       ~((auVar189[14] | auVar164[14] & auVar153[14] | auVar164[14] & auVar197[14] & auVar173[14]) &
        ~auVar186[14]);
  pbVar72[0x1f] =
       bVar140 >> 3 |
       ~((auVar155[15] | auVar194[15] & auVar198[15] | auVar194[15] & auVar187[15] & auVar141[15]) &
        ~auVar199[15]) &
       ~((auVar165[15] | auVar190[15] & auVar150[15] | auVar190[15] & auVar188[15] & auVar149[15]) &
        ~auVar200[15]) &
       ~((auVar167[15] | auVar162[15] & auVar152[15] | auVar162[15] & auVar193[15] & auVar161[15]) &
        ~auVar201[15]) &
       ~((auVar189[15] | auVar164[15] & auVar153[15] | auVar164[15] & auVar197[15] & auVar173[15]) &
        ~auVar186[15]);
  auVar202._8_8_ = puVar73 + 0x80;
  auVar202._0_8_ = pbVar72 + 0x20;
  return auVar202;
}


