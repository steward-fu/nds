/*
 * Ghidra decompilation
 *
 * Function : FUN_080dc4dc
 * Address  : 080dc4dc
 * Program  : drastic16
 */


int FUN_080dc4dc(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 + 8;
    pcVar3 = (char *)(param_1 + 3);
    iVar5 = param_3 + 0xc + (param_2 - 4 & 0xfffffffc);
    if (param_4 == 0) {
      cVar1 = *pcVar3;
      while( true ) {
        if (cVar1 == -0x15) {
          uVar4 = ((uint)(byte)pcVar3[-1] << 0x10 | (uint)(byte)pcVar3[-2] << 8 |
                  (uint)(byte)pcVar3[-3]) * 4 - iVar2;
          pcVar3[-3] = (char)(uVar4 >> 2);
          pcVar3[-1] = (char)(uVar4 >> 0x12);
          pcVar3[-2] = (char)(uVar4 >> 10);
        }
        if (iVar2 + 4 == iVar5) break;
        iVar2 = iVar2 + 4;
        pcVar3 = pcVar3 + 4;
        cVar1 = *pcVar3;
      }
    }
    else {
      do {
        if (*pcVar3 == -0x15) {
          uVar4 = iVar2 + ((uint)(byte)pcVar3[-2] << 8 | (uint)(byte)pcVar3[-1] << 0x10 |
                          (uint)(byte)pcVar3[-3]) * 4;
          pcVar3[-3] = (char)(uVar4 >> 2);
          pcVar3[-1] = (char)(uVar4 >> 0x12);
          pcVar3[-2] = (char)(uVar4 >> 10);
        }
        iVar2 = iVar2 + 4;
        pcVar3 = pcVar3 + 4;
      } while (iVar2 != iVar5);
    }
    iVar2 = ((param_2 - 4 >> 2) + 1) * 4;
  }
  return iVar2;
}


