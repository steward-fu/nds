/*
 * Ghidra decompilation
 *
 * Function : FUN_080b9cf8
 * Address  : 080b9cf8
 * Program  : drastic16
 */


void FUN_080b9cf8(uint *param_1,uint *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  
  local_c = param_3;
  if (param_4 != '\0') {
    local_c = param_2;
    memcpy(param_2,param_3,0x40);
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  *local_c = *local_c >> 8 & 0xff00ff00 | *local_c << 0x18 |
             *local_c >> 0x18 | (*local_c & 0xff00) << 8;
  uVar5 = uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4) + *local_c + (uVar1 >> 0x1b | uVar1 << 5) +
                  0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 << 0x1e;
  local_c[1] = local_c[1] >> 8 & 0xff00ff00 | local_c[1] << 0x18 |
               local_c[1] >> 0x18 | (local_c[1] & 0xff00) << 8;
  uVar4 = uVar4 + ((uVar2 ^ uVar3) & uVar1 ^ uVar3) + local_c[1] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 << 0x1e;
  local_c[2] = local_c[2] >> 8 & 0xff00ff00 | local_c[2] << 0x18 |
               local_c[2] >> 0x18 | (local_c[2] & 0xff00) << 8;
  uVar3 = uVar3 + ((uVar1 ^ uVar2) & uVar5 ^ uVar2) + local_c[2] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  0x5a827999;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  local_c[3] = local_c[3] >> 8 & 0xff00ff00 | local_c[3] << 0x18 |
               local_c[3] >> 0x18 | (local_c[3] & 0xff00) << 8;
  uVar2 = uVar2 + ((uVar5 ^ uVar1) & uVar4 ^ uVar1) + local_c[3] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  0x5a827999;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  local_c[4] = local_c[4] >> 8 & 0xff00ff00 | local_c[4] << 0x18 |
               local_c[4] >> 0x18 | (local_c[4] & 0xff00) << 8;
  uVar1 = uVar1 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5) + local_c[4] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  local_c[5] = local_c[5] >> 8 & 0xff00ff00 | local_c[5] << 0x18 |
               local_c[5] >> 0x18 | (local_c[5] & 0xff00) << 8;
  uVar5 = uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4) + local_c[5] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  local_c[6] = local_c[6] >> 8 & 0xff00ff00 | local_c[6] << 0x18 |
               local_c[6] >> 0x18 | (local_c[6] & 0xff00) << 8;
  uVar4 = uVar4 + ((uVar2 ^ uVar3) & uVar1 ^ uVar3) + local_c[6] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  local_c[7] = local_c[7] >> 8 & 0xff00ff00 | local_c[7] << 0x18 |
               local_c[7] >> 0x18 | (local_c[7] & 0xff00) << 8;
  uVar3 = uVar3 + ((uVar1 ^ uVar2) & uVar5 ^ uVar2) + local_c[7] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  0x5a827999;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  local_c[8] = local_c[8] >> 8 & 0xff00ff00 | local_c[8] << 0x18 |
               local_c[8] >> 0x18 | (local_c[8] & 0xff00) << 8;
  uVar2 = uVar2 + ((uVar5 ^ uVar1) & uVar4 ^ uVar1) + local_c[8] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  0x5a827999;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  local_c[9] = local_c[9] >> 8 & 0xff00ff00 | local_c[9] << 0x18 |
               local_c[9] >> 0x18 | (local_c[9] & 0xff00) << 8;
  uVar1 = uVar1 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5) + local_c[9] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  local_c[10] = local_c[10] >> 8 & 0xff00ff00 | local_c[10] << 0x18 |
                local_c[10] >> 0x18 | (local_c[10] & 0xff00) << 8;
  uVar5 = uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4) + local_c[10] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  local_c[0xb] = local_c[0xb] >> 8 & 0xff00ff00 | local_c[0xb] << 0x18 |
                 local_c[0xb] >> 0x18 | (local_c[0xb] & 0xff00) << 8;
  uVar4 = uVar4 + ((uVar2 ^ uVar3) & uVar1 ^ uVar3) + local_c[0xb] + (uVar5 >> 0x1b | uVar5 * 0x20)
                  + 0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  local_c[0xc] = local_c[0xc] >> 8 & 0xff00ff00 | local_c[0xc] << 0x18 |
                 local_c[0xc] >> 0x18 | (local_c[0xc] & 0xff00) << 8;
  uVar3 = uVar3 + ((uVar1 ^ uVar2) & uVar5 ^ uVar2) + local_c[0xc] + (uVar4 >> 0x1b | uVar4 * 0x20)
                  + 0x5a827999;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  local_c[0xd] = local_c[0xd] >> 8 & 0xff00ff00 | local_c[0xd] << 0x18 |
                 local_c[0xd] >> 0x18 | (local_c[0xd] & 0xff00) << 8;
  uVar2 = uVar2 + ((uVar5 ^ uVar1) & uVar4 ^ uVar1) + local_c[0xd] + (uVar3 >> 0x1b | uVar3 * 0x20)
                  + 0x5a827999;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  local_c[0xe] = local_c[0xe] >> 8 & 0xff00ff00 | local_c[0xe] << 0x18 |
                 local_c[0xe] >> 0x18 | (local_c[0xe] & 0xff00) << 8;
  uVar1 = uVar1 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5) + local_c[0xe] + (uVar2 >> 0x1b | uVar2 * 0x20)
                  + 0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  local_c[0xf] = local_c[0xf] >> 8 & 0xff00ff00 | local_c[0xf] << 0x18 |
                 local_c[0xf] >> 0x18 | (local_c[0xf] & 0xff00) << 8;
  uVar5 = uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4) + local_c[0xf] + (uVar1 >> 0x1b | uVar1 * 0x20)
                  + 0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[0xd] ^ local_c[8] ^ local_c[2] ^ *local_c;
  *local_c = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + ((uVar2 ^ uVar3) & uVar1 ^ uVar3) + *local_c + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[0xe] ^ local_c[9] ^ local_c[3] ^ local_c[1];
  local_c[1] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + ((uVar1 ^ uVar2) & uVar5 ^ uVar2) + local_c[1] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  0x5a827999;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[0xf] ^ local_c[10] ^ local_c[4] ^ local_c[2];
  local_c[2] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + ((uVar5 ^ uVar1) & uVar4 ^ uVar1) + local_c[2] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  0x5a827999;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = *local_c ^ local_c[0xb] ^ local_c[5] ^ local_c[3];
  local_c[3] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5) + local_c[3] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[1] ^ local_c[0xc] ^ local_c[6] ^ local_c[4];
  local_c[4] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[4] + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1
  ;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[2] ^ local_c[0xd] ^ local_c[7] ^ local_c[5];
  local_c[5] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[5] + (uVar5 >> 0x1b | uVar5 * 0x20) + 0x6ed9eba1
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[3] ^ local_c[0xe] ^ local_c[8] ^ local_c[6];
  local_c[6] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[6] + (uVar4 >> 0x1b | uVar4 * 0x20) + 0x6ed9eba1
  ;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[4] ^ local_c[0xf] ^ local_c[9] ^ local_c[7];
  local_c[7] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[7] + (uVar3 >> 0x1b | uVar3 * 0x20) + 0x6ed9eba1
  ;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[5] ^ *local_c ^ local_c[10] ^ local_c[8];
  local_c[8] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[8] + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1
  ;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[6] ^ local_c[1] ^ local_c[0xb] ^ local_c[9];
  local_c[9] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[9] + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1
  ;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[7] ^ local_c[2] ^ local_c[0xc] ^ local_c[10];
  local_c[10] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[10] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  0x6ed9eba1;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[8] ^ local_c[3] ^ local_c[0xd] ^ local_c[0xb];
  local_c[0xb] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[0xb] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  0x6ed9eba1;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[9] ^ local_c[4] ^ local_c[0xe] ^ local_c[0xc];
  local_c[0xc] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[0xc] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  0x6ed9eba1;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[10] ^ local_c[5] ^ local_c[0xf] ^ local_c[0xd];
  local_c[0xd] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[0xd] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  0x6ed9eba1;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[0xb] ^ local_c[6] ^ *local_c ^ local_c[0xe];
  local_c[0xe] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[0xe] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  0x6ed9eba1;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[0xc] ^ local_c[7] ^ local_c[1] ^ local_c[0xf];
  local_c[0xf] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[0xf] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  0x6ed9eba1;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[0xd] ^ local_c[8] ^ local_c[2] ^ *local_c;
  *local_c = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + *local_c + (uVar4 >> 0x1b | uVar4 * 0x20) + 0x6ed9eba1;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[0xe] ^ local_c[9] ^ local_c[3] ^ local_c[1];
  local_c[1] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[1] + (uVar3 >> 0x1b | uVar3 * 0x20) + 0x6ed9eba1
  ;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[0xf] ^ local_c[10] ^ local_c[4] ^ local_c[2];
  local_c[2] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[2] + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1
  ;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = *local_c ^ local_c[0xb] ^ local_c[5] ^ local_c[3];
  local_c[3] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[3] + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1
  ;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[1] ^ local_c[0xc] ^ local_c[6] ^ local_c[4];
  local_c[4] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[4] + (uVar5 >> 0x1b | uVar5 * 0x20) + 0x6ed9eba1
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[2] ^ local_c[0xd] ^ local_c[7] ^ local_c[5];
  local_c[5] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[5] + (uVar4 >> 0x1b | uVar4 * 0x20) + 0x6ed9eba1
  ;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[3] ^ local_c[0xe] ^ local_c[8] ^ local_c[6];
  local_c[6] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[6] + (uVar3 >> 0x1b | uVar3 * 0x20) + 0x6ed9eba1
  ;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[4] ^ local_c[0xf] ^ local_c[9] ^ local_c[7];
  local_c[7] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[7] + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1
  ;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[5] ^ *local_c ^ local_c[10] ^ local_c[8];
  local_c[8] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + ((uVar2 | uVar3) & uVar4 | uVar2 & uVar3) + local_c[8] +
                  (uVar1 >> 0x1b | uVar1 * 0x20) + -0x70e44324;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[6] ^ local_c[1] ^ local_c[0xb] ^ local_c[9];
  local_c[9] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + ((uVar1 | uVar2) & uVar3 | uVar1 & uVar2) + local_c[9] +
                  (uVar5 >> 0x1b | uVar5 * 0x20) + -0x70e44324;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[7] ^ local_c[2] ^ local_c[0xc] ^ local_c[10];
  local_c[10] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + ((uVar5 | uVar1) & uVar2 | uVar5 & uVar1) + local_c[10] +
                  (uVar4 >> 0x1b | uVar4 * 0x20) + -0x70e44324;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[8] ^ local_c[3] ^ local_c[0xd] ^ local_c[0xb];
  local_c[0xb] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + ((uVar4 | uVar5) & uVar1 | uVar4 & uVar5) + local_c[0xb] +
                  (uVar3 >> 0x1b | uVar3 * 0x20) + -0x70e44324;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[9] ^ local_c[4] ^ local_c[0xe] ^ local_c[0xc];
  local_c[0xc] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + ((uVar3 | uVar4) & uVar5 | uVar3 & uVar4) + local_c[0xc] +
                  (uVar2 >> 0x1b | uVar2 * 0x20) + -0x70e44324;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[10] ^ local_c[5] ^ local_c[0xf] ^ local_c[0xd];
  local_c[0xd] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + ((uVar2 | uVar3) & uVar4 | uVar2 & uVar3) + local_c[0xd] +
                  (uVar1 >> 0x1b | uVar1 * 0x20) + -0x70e44324;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[0xb] ^ local_c[6] ^ *local_c ^ local_c[0xe];
  local_c[0xe] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + ((uVar1 | uVar2) & uVar3 | uVar1 & uVar2) + local_c[0xe] +
                  (uVar5 >> 0x1b | uVar5 * 0x20) + -0x70e44324;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[0xc] ^ local_c[7] ^ local_c[1] ^ local_c[0xf];
  local_c[0xf] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + ((uVar5 | uVar1) & uVar2 | uVar5 & uVar1) + local_c[0xf] +
                  (uVar4 >> 0x1b | uVar4 * 0x20) + -0x70e44324;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[0xd] ^ local_c[8] ^ local_c[2] ^ *local_c;
  *local_c = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + ((uVar4 | uVar5) & uVar1 | uVar4 & uVar5) + *local_c +
                  (uVar3 >> 0x1b | uVar3 * 0x20) + -0x70e44324;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[0xe] ^ local_c[9] ^ local_c[3] ^ local_c[1];
  local_c[1] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + ((uVar3 | uVar4) & uVar5 | uVar3 & uVar4) + local_c[1] +
                  (uVar2 >> 0x1b | uVar2 * 0x20) + -0x70e44324;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[0xf] ^ local_c[10] ^ local_c[4] ^ local_c[2];
  local_c[2] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + ((uVar2 | uVar3) & uVar4 | uVar2 & uVar3) + local_c[2] +
                  (uVar1 >> 0x1b | uVar1 * 0x20) + -0x70e44324;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = *local_c ^ local_c[0xb] ^ local_c[5] ^ local_c[3];
  local_c[3] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + ((uVar1 | uVar2) & uVar3 | uVar1 & uVar2) + local_c[3] +
                  (uVar5 >> 0x1b | uVar5 * 0x20) + -0x70e44324;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[1] ^ local_c[0xc] ^ local_c[6] ^ local_c[4];
  local_c[4] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + ((uVar5 | uVar1) & uVar2 | uVar5 & uVar1) + local_c[4] +
                  (uVar4 >> 0x1b | uVar4 * 0x20) + -0x70e44324;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[2] ^ local_c[0xd] ^ local_c[7] ^ local_c[5];
  local_c[5] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + ((uVar4 | uVar5) & uVar1 | uVar4 & uVar5) + local_c[5] +
                  (uVar3 >> 0x1b | uVar3 * 0x20) + -0x70e44324;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[3] ^ local_c[0xe] ^ local_c[8] ^ local_c[6];
  local_c[6] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + ((uVar3 | uVar4) & uVar5 | uVar3 & uVar4) + local_c[6] +
                  (uVar2 >> 0x1b | uVar2 * 0x20) + -0x70e44324;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[4] ^ local_c[0xf] ^ local_c[9] ^ local_c[7];
  local_c[7] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + ((uVar2 | uVar3) & uVar4 | uVar2 & uVar3) + local_c[7] +
                  (uVar1 >> 0x1b | uVar1 * 0x20) + -0x70e44324;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[5] ^ *local_c ^ local_c[10] ^ local_c[8];
  local_c[8] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + ((uVar1 | uVar2) & uVar3 | uVar1 & uVar2) + local_c[8] +
                  (uVar5 >> 0x1b | uVar5 * 0x20) + -0x70e44324;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[6] ^ local_c[1] ^ local_c[0xb] ^ local_c[9];
  local_c[9] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + ((uVar5 | uVar1) & uVar2 | uVar5 & uVar1) + local_c[9] +
                  (uVar4 >> 0x1b | uVar4 * 0x20) + -0x70e44324;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[7] ^ local_c[2] ^ local_c[0xc] ^ local_c[10];
  local_c[10] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + ((uVar4 | uVar5) & uVar1 | uVar4 & uVar5) + local_c[10] +
                  (uVar3 >> 0x1b | uVar3 * 0x20) + -0x70e44324;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[8] ^ local_c[3] ^ local_c[0xd] ^ local_c[0xb];
  local_c[0xb] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + ((uVar3 | uVar4) & uVar5 | uVar3 & uVar4) + local_c[0xb] +
                  (uVar2 >> 0x1b | uVar2 * 0x20) + -0x70e44324;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[9] ^ local_c[4] ^ local_c[0xe] ^ local_c[0xc];
  local_c[0xc] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[0xc] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  -0x359d3e2a;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[10] ^ local_c[5] ^ local_c[0xf] ^ local_c[0xd];
  local_c[0xd] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[0xd] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  -0x359d3e2a;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[0xb] ^ local_c[6] ^ *local_c ^ local_c[0xe];
  local_c[0xe] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[0xe] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  -0x359d3e2a;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[0xc] ^ local_c[7] ^ local_c[1] ^ local_c[0xf];
  local_c[0xf] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[0xf] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  -0x359d3e2a;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[0xd] ^ local_c[8] ^ local_c[2] ^ *local_c;
  *local_c = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + *local_c + (uVar2 >> 0x1b | uVar2 * 0x20) + -0x359d3e2a;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[0xe] ^ local_c[9] ^ local_c[3] ^ local_c[1];
  local_c[1] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[1] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  -0x359d3e2a;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[0xf] ^ local_c[10] ^ local_c[4] ^ local_c[2];
  local_c[2] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[2] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  -0x359d3e2a;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = *local_c ^ local_c[0xb] ^ local_c[5] ^ local_c[3];
  local_c[3] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[3] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  -0x359d3e2a;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[1] ^ local_c[0xc] ^ local_c[6] ^ local_c[4];
  local_c[4] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[4] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  -0x359d3e2a;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[2] ^ local_c[0xd] ^ local_c[7] ^ local_c[5];
  local_c[5] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[5] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  -0x359d3e2a;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[3] ^ local_c[0xe] ^ local_c[8] ^ local_c[6];
  local_c[6] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[6] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  -0x359d3e2a;
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar6 = local_c[4] ^ local_c[0xf] ^ local_c[9] ^ local_c[7];
  local_c[7] = uVar6 >> 0x1f | uVar6 << 1;
  uVar4 = uVar4 + (uVar1 ^ uVar2 ^ uVar3) + local_c[7] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  -0x359d3e2a;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = local_c[5] ^ *local_c ^ local_c[10] ^ local_c[8];
  local_c[8] = uVar6 >> 0x1f | uVar6 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar1 ^ uVar2) + local_c[8] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  -0x359d3e2a;
  uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = local_c[6] ^ local_c[1] ^ local_c[0xb] ^ local_c[9];
  local_c[9] = uVar6 >> 0x1f | uVar6 << 1;
  uVar2 = uVar2 + (uVar4 ^ uVar5 ^ uVar1) + local_c[9] + (uVar3 >> 0x1b | uVar3 * 0x20) +
                  -0x359d3e2a;
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar6 = local_c[7] ^ local_c[2] ^ local_c[0xc] ^ local_c[10];
  local_c[10] = uVar6 >> 0x1f | uVar6 << 1;
  uVar1 = uVar1 + (uVar3 ^ uVar4 ^ uVar5) + local_c[10] + (uVar2 >> 0x1b | uVar2 * 0x20) +
                  -0x359d3e2a;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar6 = local_c[8] ^ local_c[3] ^ local_c[0xd] ^ local_c[0xb];
  local_c[0xb] = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = uVar5 + (uVar2 ^ uVar3 ^ uVar4) + local_c[0xb] + (uVar1 >> 0x1b | uVar1 * 0x20) +
                  -0x359d3e2a;
  local_14 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = local_c[9] ^ local_c[4] ^ local_c[0xe] ^ local_c[0xc];
  local_c[0xc] = uVar2 >> 0x1f | uVar2 << 1;
  uVar4 = uVar4 + (uVar1 ^ local_14 ^ uVar3) + local_c[0xc] + (uVar5 >> 0x1b | uVar5 * 0x20) +
                  -0x359d3e2a;
  uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = local_c[10] ^ local_c[5] ^ local_c[0xf] ^ local_c[0xd];
  local_c[0xd] = uVar1 >> 0x1f | uVar1 << 1;
  uVar3 = uVar3 + (uVar5 ^ uVar2 ^ local_14) + local_c[0xd] + (uVar4 >> 0x1b | uVar4 * 0x20) +
                  -0x359d3e2a;
  local_20 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar1 = local_c[0xb] ^ local_c[6] ^ *local_c ^ local_c[0xe];
  local_c[0xe] = uVar1 >> 0x1f | uVar1 << 1;
  local_14 = local_14 +
             (uVar4 ^ local_20 ^ uVar2) + local_c[0xe] + (uVar3 >> 0x1b | uVar3 * 0x20) +
             -0x359d3e2a;
  local_1c = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = local_c[0xc] ^ local_c[7] ^ local_c[1] ^ local_c[0xf];
  local_c[0xf] = uVar1 >> 0x1f | uVar1 << 1;
  local_10 = uVar2 + (uVar3 ^ local_1c ^ local_20) + local_c[0xf] +
                     (local_14 >> 0x1b | local_14 * 0x20) + -0x359d3e2a;
  local_18 = uVar3 >> 2 | uVar3 * 0x40000000;
  *param_1 = *param_1 + local_10;
  param_1[1] = param_1[1] + local_14;
  param_1[2] = param_1[2] + local_18;
  param_1[3] = param_1[3] + local_1c;
  param_1[4] = param_1[4] + local_20;
  FUN_080b9c84(&local_10,&local_14,&local_18,&local_1c,&local_20);
  return;
}


