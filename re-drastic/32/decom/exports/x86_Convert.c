/*
 * Ghidra decompilation
 *
 * Function : x86_Convert
 * Address  : 08107388
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SizeT x86_Convert(Byte *data,SizeT size,UInt32 ip,UInt32 *state,int encoding)

{
  byte bVar1;
  byte *pbVar2;
  Byte *p;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Byte b;
  uint uVar7;
  UInt32 dest;
  int iVar8;
  
  if (size < 5) {
    return 0;
  }
  iVar8 = 0;
  uVar4 = *state & 7;
  iVar6 = -1;
LAB_081073c8:
  do {
    pbVar2 = data + iVar8;
    if (data + (size - 4) <= pbVar2) {
LAB_0810740c:
      uVar3 = ((int)pbVar2 - (int)data) - iVar6;
      if (uVar3 < 4) {
        uVar4 = uVar4 << (uVar3 - 1 & 0xff) & 7;
      }
      else {
        uVar4 = 0;
      }
      *state = uVar4;
      return (int)pbVar2 - (int)data;
    }
    bVar1 = data[iVar8];
    while ((bVar1 & 0xfe) != 0xe8) {
      pbVar2 = pbVar2 + 1;
      if (pbVar2 == data + (size - 4)) goto LAB_0810740c;
      bVar1 = *pbVar2;
    }
    iVar5 = (int)pbVar2 - (int)data;
    if ((uint)(iVar5 - iVar6) < 4) {
      uVar4 = uVar4 << ((iVar5 - iVar6) - 1U & 0xff) & 7;
      if ((uVar4 == 0) ||
         (("\x01\x01\x01"[uVar4] != '\0' && ((byte)(pbVar2[4 - (uint)""[uVar4]] - 1) < 0xfe))))
      goto LAB_081074b0;
    }
    else {
      uVar4 = 0;
LAB_081074b0:
      if (0xfd < (byte)(pbVar2[4] - 1)) {
        iVar6 = ip + 5 + iVar5;
        uVar3 = *(uint *)(pbVar2 + 1);
        if (encoding == 0) {
          if (uVar4 == 0) {
            uVar7 = uVar3 - iVar6;
          }
          else {
            do {
              uVar7 = uVar3 - iVar6;
              uVar3 = uVar7 ^ (1 << ((uint)""[uVar4] * -8 + 0x20 & 0xff)) - 1U;
            } while (0xfd < ((uVar7 >> ((uint)""[uVar4] * -8 + 0x18 & 0xff)) - 1 & 0xff));
          }
        }
        else if (uVar4 == 0) {
          uVar7 = uVar3 + iVar6;
        }
        else {
          do {
            uVar7 = uVar3 + iVar6;
            uVar3 = (1 << ((uint)""[uVar4] * -8 + 0x20 & 0xff)) - 1U ^ uVar7;
          } while (0xfd < ((uVar7 >> ((uint)""[uVar4] * -8 + 0x18 & 0xff)) - 1 & 0xff));
        }
        pbVar2[1] = (byte)uVar7;
        pbVar2[2] = (byte)(uVar7 >> 8);
        iVar8 = iVar5 + 5;
        pbVar2[3] = (byte)(uVar7 >> 0x10);
        pbVar2[4] = (byte)((int)(uVar7 << 7) >> 0x1f);
        iVar6 = iVar5;
        goto LAB_081073c8;
      }
    }
    iVar8 = iVar5 + 1;
    uVar4 = (uVar4 & 3) << 1 | 1;
    iVar6 = iVar5;
  } while( true );
}


