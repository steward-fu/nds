/*
 * Ghidra decompilation
 *
 * Function : FUN_001c152c
 * Address  : 001c152c
 * Program  : drastic64
 */


void FUN_001c152c(CryptData *param_1,byte *param_2,ulong param_3)

{
  CryptData CVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(param_1 + 0x9e4);
  if (uVar4 == 3) {
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        pbVar7 = param_2 + uVar9;
        uVar9 = uVar9 + 0x10;
        CryptData::DecryptBlock20(param_1,pbVar7);
      } while (uVar9 < param_3);
      return;
    }
  }
  else if (uVar4 < 4) {
    if (uVar4 == 1) {
      pbVar7 = param_2;
      if (param_3 != 0) {
        do {
          CVar1 = (CryptData)((char)param_1[0xffd] + (char)param_1[0xffe] + (char)param_1[0xffc]);
          param_1[0xffc] = CVar1;
          param_1[0xffd] = (CryptData)((char)param_1[0xffd] + (char)param_1[0xffe]);
          pbVar8 = pbVar7 + 1;
          *pbVar7 = *pbVar7 - (char)CVar1;
          pbVar7 = pbVar8;
        } while (pbVar8 != param_2 + param_3);
      }
    }
    else if ((uVar4 == 2) && (param_3 != 0)) {
      pbVar7 = param_2;
      do {
        uVar2 = *(uint *)(param_1 +
                         ((ulong)(*(ushort *)(param_1 + 0x1000) + 0x1234 >> 1) & 0xff) * 4 + 0xaec)
                ^ (uint)*(ushort *)(param_1 + 0x1002);
        uVar4 = uVar2 & 0xffff ^
                ((uint)(*(ushort *)(param_1 + 0x1006) >> 1) |
                (*(ushort *)(param_1 + 0x1006) & 1) << 0xf);
        uVar5 = (uint)*(ushort *)(param_1 + 0x1004) -
                (*(uint *)(param_1 +
                          ((ulong)(*(ushort *)(param_1 + 0x1000) + 0x1234 >> 1) & 0xff) * 4 + 0xaec)
                >> 0x10);
        uVar6 = uVar4 >> 1;
        uVar4 = uVar4 << 0xf;
        uVar3 = (uVar6 | uVar4 & 0xffff) ^
                *(ushort *)(param_1 + 0x1000) + 0x1234 & 0xffff ^ uVar5 & 0xffff;
        *(short *)(param_1 + 0x1000) = (short)uVar3;
        *(short *)(param_1 + 0x1002) = (short)uVar2;
        *(short *)(param_1 + 0x1004) = (short)uVar5;
        *(ushort *)(param_1 + 0x1006) = (ushort)uVar6 | (ushort)uVar4;
        pbVar8 = pbVar7 + 1;
        *pbVar7 = *pbVar7 ^ (byte)(uVar3 >> 8);
        pbVar7 = pbVar8;
      } while (pbVar8 != param_2 + param_3);
    }
  }
  else if (uVar4 - 4 < 2) {
    Rijndael::blockDecrypt((Rijndael *)(param_1 + 0x9e8),param_2,param_3,param_2);
    return;
  }
  return;
}


