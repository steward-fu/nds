/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c66c
 * Address  : 0805c66c
 * Program  : drastic16
 */


uint FUN_0805c66c(int param_1,int param_2,byte param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x11);
  uVar5 = ((uint)bVar1 << 0x19) >> 0x1d;
  uVar3 = (uint)*(ushort *)(param_1 + uVar5 * 2);
  if (uVar5 == 6) {
    if (*(char *)(param_2 + 0x159e015) == '\0') {
      *(undefined2 *)(param_1 + 0xc) = 0;
      uVar3 = 0;
    }
    else if (*(char *)(param_2 + 0x2916467) == '\x01') {
      uVar3 = 0;
    }
    else if (*(char *)(param_2 + 0x2916467) == '\x02') {
      iVar4 = FUN_08058c20(param_2 + 0x155e000,param_2,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc),param_4);
      uVar3 = iVar4 + 0x8000 >> 4;
    }
    else {
      uVar3 = 0;
      *(undefined *)(param_2 + 0x2916467) = 1;
    }
  }
  if (cVar2 == '\x01') {
    if ((bVar1 & 8) != 0) {
      uVar3 = uVar3 & 0xfffffff0;
    }
    *(undefined *)(param_1 + 0x11) = 2;
    uVar3 = uVar3 << 3;
  }
  else {
    if (cVar2 == '\0') {
      uVar3 = (uVar3 << 0x13) >> 0x18;
      *(undefined *)(param_1 + 0x11) = 1;
      goto LAB_0805c6ac;
    }
    if (cVar2 == '\x02') {
      uVar3 = 0;
      goto LAB_0805c6ac;
    }
  }
  uVar3 = uVar3 & 0xff;
LAB_0805c6ac:
  if ((param_3 & 0x80) != 0) {
    *(byte *)(param_1 + 0x10) = param_3;
    *(undefined *)(param_1 + 0x11) = 0;
  }
  return uVar3;
}


