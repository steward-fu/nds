/*
 * Ghidra decompilation
 *
 * Function : FUN_0808c0d4
 * Address  : 0808c0d4
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0808c0f0) */

undefined4
FUN_0808c0d4(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6,int param_7
            )

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_188;
  byte *local_184;
  int local_170;
  int local_16c;
  uint local_168 [2];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ushort auStack_150 [128];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  local_184 = (byte *)(param_1 + (param_7 + 0x350) * 0x80 + 0x2b8);
  local_170 = param_1 + 0x2b8 + param_7 + 0x20800;
  iVar5 = param_4 + 0x80;
  uStack_160 = 0;
  uVar2 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  local_16c = 4;
  uStack_154 = 0;
  local_188 = param_4;
  do {
    bVar1 = *(byte *)(local_170 + 0x300);
    *(undefined4 *)(local_188 + 0x80) = 0;
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x1c) = 0;
    if (bVar1 != 0) {
      pbVar6 = local_184 + bVar1;
      do {
        while( true ) {
          pbVar6 = pbVar6 + -1;
          iVar9 = param_1 + 0x2b8 + (uint)*pbVar6 * 0x50;
          local_168[0] = (uint)*(short *)(iVar9 + 0x3e);
          uVar7 = (uint)*(byte *)(iVar9 + 0x4e);
          switch(*(undefined *)(iVar9 + 0x4a)) {
          case 0:
            FUN_0808fbe0(iVar9,auStack_150,param_7);
            break;
          case 1:
            FUN_0808fcb0(iVar9,auStack_150,param_7);
            break;
          case 2:
            FUN_0808fe50(iVar9,auStack_150,param_7);
            break;
          case 4:
            FUN_0808fc48(iVar9,auStack_150,param_7);
            break;
          case 5:
            FUN_0808fd80(iVar9,auStack_150,param_7);
            break;
          case 6:
            FUN_0808fe90(iVar9,auStack_150,param_7);
            break;
          case 8:
            uVar7 = FUN_0808b708(iVar9,auStack_150,param_7,local_168);
            break;
          case 9:
            uVar7 = FUN_0808b8cc(iVar9,auStack_150,param_7,local_168);
            break;
          case 10:
            uVar7 = FUN_0808ba7c(iVar9,auStack_150,param_7,local_168);
          }
          switch(uVar7 + 7 >> 3) {
          case 0:
            goto joined_r0x0808c644;
          case 1:
          case 2:
            FUN_08090478(auStack_150,&uStack_50,local_168[0],uVar7);
            break;
          case 3:
          case 4:
            FUN_080903e8(auStack_150,&uStack_50,local_168[0],uVar7);
            break;
          case 5:
          case 6:
          case 7:
          case 8:
            FUN_08090330(auStack_150,&uStack_50,local_168[0],uVar7);
            break;
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
            FUN_0808bc28(auStack_150,&uStack_50,local_168[0],uVar7);
          }
          uVar3 = local_168[0] & 7;
          uVar7 = uVar7 + uVar3;
          uVar4 = local_168[0] - uVar3;
          uVar10 = uVar7 + 0xf & 0xfffffff0;
          puVar8 = auStack_150 + -uVar3;
          local_168[0] = uVar4;
          if (uVar7 < uVar10) {
            memset(auStack_150 + (uVar7 - uVar3),0,(uVar10 - uVar7) * 2);
          }
          bVar1 = *(byte *)(iVar9 + 0x4c);
          if (bVar1 != 0) break;
          FUN_080904f0(param_2 + uVar4 * 2,puVar8,uVar10);
          *(uint *)(local_188 + 0x80) = *(uint *)(local_188 + 0x80) | uStack_50;
          *param_6 = *param_6 & ~uStack_50;
          *param_5 = *param_5 & ~uStack_50;
          *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | uStack_4c;
          param_6[1] = param_6[1] & ~uStack_4c;
          param_5[1] = param_5[1] & ~uStack_4c;
          *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | uStack_48;
          param_6[2] = param_6[2] & ~uStack_48;
          param_5[2] = param_5[2] & ~uStack_48;
          *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | uStack_44;
          param_6[3] = param_6[3] & ~uStack_44;
          param_5[3] = param_5[3] & ~uStack_44;
          *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | uStack_40;
          param_6[4] = param_6[4] & ~uStack_40;
          param_5[4] = param_5[4] & ~uStack_40;
          *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) | uStack_3c;
          param_6[5] = param_6[5] & ~uStack_3c;
          param_5[5] = param_5[5] & ~uStack_3c;
          *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | uStack_38;
          param_6[6] = param_6[6] & ~uStack_38;
          param_5[6] = param_5[6] & ~uStack_38;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | uStack_34;
          param_6[7] = param_6[7] & ~uStack_34;
          param_5[7] = param_5[7] & ~uStack_34;
joined_r0x0808c644:
          if (pbVar6 == local_184) goto LAB_0808c3f0;
        }
        if ((bVar1 & 0x80) == 0) {
          bVar11 = uVar10 != 0;
          if (bVar11) {
            uVar10 = uVar10 << 1;
          }
          if (bVar11) {
            uVar3 = 0;
            uVar7 = uVar3;
            do {
              bVar11 = (*(ushort *)((int)puVar8 + uVar7) & 0x8000) != 0;
              if (bVar11) {
                *(ushort *)(param_2 + uVar4 * 2 + uVar7) = *(ushort *)((int)puVar8 + uVar7);
              }
              uVar7 = uVar7 + 2;
              if (bVar11) {
                *(byte *)(param_3 + uVar4 + uVar3) = bVar1;
              }
              uVar3 = uVar3 + 1;
            } while (uVar7 != uVar10);
          }
          *(uint *)(local_188 + 0x80) = *(uint *)(local_188 + 0x80) | uStack_50;
          *param_6 = *param_6 | uStack_50;
          *param_5 = *param_5 & ~uStack_50;
          *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | uStack_4c;
          param_6[1] = param_6[1] | uStack_4c;
          param_5[1] = param_5[1] & ~uStack_4c;
          *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | uStack_48;
          param_6[2] = param_6[2] | uStack_48;
          param_5[2] = param_5[2] & ~uStack_48;
          *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | uStack_44;
          param_6[3] = param_6[3] | uStack_44;
          param_5[3] = param_5[3] & ~uStack_44;
          *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | uStack_40;
          param_6[4] = param_6[4] | uStack_40;
          param_5[4] = param_5[4] & ~uStack_40;
          *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) | uStack_3c;
          param_6[5] = param_6[5] | uStack_3c;
          param_5[5] = param_5[5] & ~uStack_3c;
          *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | uStack_38;
          param_6[6] = param_6[6] | uStack_38;
          param_5[6] = param_5[6] & ~uStack_38;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | uStack_34;
          param_6[7] = param_6[7] | uStack_34;
          param_5[7] = param_5[7] & ~uStack_34;
          goto joined_r0x0808c644;
        }
        FUN_080904f0(param_2 + uVar4 * 2,puVar8,uVar10);
        *(uint *)(local_188 + 0x80) = *(uint *)(local_188 + 0x80) | uStack_50;
        *param_6 = *param_6 & ~uStack_50;
        *param_5 = *param_5 | uStack_50;
        *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | uStack_4c;
        param_6[1] = param_6[1] & ~uStack_4c;
        param_5[1] = param_5[1] | uStack_4c;
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | uStack_48;
        param_6[2] = param_6[2] & ~uStack_48;
        param_5[2] = param_5[2] | uStack_48;
        *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | uStack_44;
        param_6[3] = param_6[3] & ~uStack_44;
        param_5[3] = param_5[3] | uStack_44;
        *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | uStack_40;
        param_6[4] = param_6[4] & ~uStack_40;
        param_5[4] = param_5[4] | uStack_40;
        *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) | uStack_3c;
        param_6[5] = param_6[5] & ~uStack_3c;
        param_5[5] = param_5[5] | uStack_3c;
        *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | uStack_38;
        param_6[6] = param_6[6] & ~uStack_38;
        param_5[6] = param_5[6] | uStack_38;
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | uStack_34;
        param_6[7] = param_6[7] & ~uStack_34;
        param_5[7] = param_5[7] | uStack_34;
      } while (pbVar6 != local_184);
LAB_0808c3f0:
      uVar2 = 0x10;
    }
    iVar5 = iVar5 + -0x20;
    local_16c = local_16c + -1;
    local_170 = local_170 + -0xc0;
    local_188 = local_188 + -0x20;
    local_184 = local_184 + -0x6000;
    if (local_16c == -1) {
      return uVar2;
    }
  } while( true );
}


