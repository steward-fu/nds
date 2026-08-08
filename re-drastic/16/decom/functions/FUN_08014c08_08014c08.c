/*
 * Ghidra decompilation
 *
 * Function : FUN_08014c08
 * Address  : 08014c08
 * Program  : drastic16
 */


void FUN_08014c08(uint *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar8 = *(ushort *)(param_1 + 5) + 1;
  if (uVar8 == 0x106) {
    *(byte *)(param_1 + 0x9719d9) = *(byte *)(param_1 + 0x9719d9) & 0xfe;
    *(byte *)(param_1 + 0x9739d9) = *(byte *)(param_1 + 0x9739d9) & 0xfe;
  }
  else {
    if (uVar8 == 0x107) {
      puVar3 = param_1 + 0x9a9f56;
      if (((int)param_1[0x9a9f5e] < 0) && (*(char *)(param_1 + 0x9a9f5f) == '\x03')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f58);
      }
      if (((int)param_1[0x9a9f66] < 0) && (*(char *)(param_1 + 0x9a9f67) == '\x03')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f60);
      }
      if (((int)param_1[0x9a9f6e] < 0) && (*(char *)(param_1 + 0x9a9f6f) == '\x03')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f68);
      }
      if (((int)param_1[0x9a9f76] < 0) && (*(char *)(param_1 + 0x9a9f77) == '\x03')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f70);
      }
      FUN_08022bb8(param_1 + 0x9a9fe0);
      uVar6 = 0;
      uVar8 = uVar6;
      goto LAB_08014c44;
    }
    if (uVar8 == 0xc0) {
      bVar1 = *(byte *)(param_1 + 0x9719d9);
      *(byte *)(param_1 + 0x9719d9) = bVar1 | 1;
      if ((bVar1 & 8) != 0) {
        uVar11 = param_1[0x56831e];
        uVar6 = *(uint *)(uVar11 + 0x214) | 1;
        *(uint *)(uVar11 + 0x214) = uVar6;
        if ((*(byte *)((int)param_1 + 0x15a0cfd) & 6) == 0) {
          param_1[0x56833e] = uVar6 & -*(int *)(uVar11 + 0x208) & *(uint *)(uVar11 + 0x210);
        }
      }
      bVar1 = *(byte *)(param_1 + 0x9739d9);
      *(byte *)(param_1 + 0x9739d9) = bVar1 | 1;
      if ((bVar1 & 8) != 0) {
        uVar11 = param_1[0x769c82];
        uVar6 = *(uint *)(uVar11 + 0x214) | 1;
        *(uint *)(uVar11 + 0x214) = uVar6;
        if ((*(byte *)((int)param_1 + 0x1da728d) & 6) == 0) {
          param_1[0x769ca2] = uVar6 & -*(int *)(uVar11 + 0x208) & *(uint *)(uVar11 + 0x210);
        }
      }
      FUN_08022f08(param_1 + 0x9a9fe0);
      FUN_080779b4(param_1 + 0x4bc);
      FUN_08061350(param_1 + 0x205f2);
      FUN_0805d97c(param_1 + 0x295);
      FUN_0805aaa4(param_1 + 0x17e);
      if (((param_1[0x205e6] != 0) && ((param_1[0x769ca2] & 1) != 0)) &&
         ((param_1[0x769d2c] & 0x80) == 0)) {
        FUN_080682f8(param_1,param_1 + 0x6d,*param_1);
      }
      param_1[0x567afa] = param_1[2];
      param_1[0x567afb] = param_1[3];
      if ((param_1[0x20609] & 0x40) == 0) {
        FUN_08059088(param_1);
        if ((*(char *)((int)param_1 + 0x2916467) != '\0') &&
           (*(char *)((int)param_1 + 0x2916467) == '\x01')) {
          FUN_08078c64(param_1 + 0x557800);
          *(undefined *)((int)param_1 + 0x2916467) = 2;
        }
        if (param_1[0x205df] == 0) {
          uVar6 = param_1[0x205ea];
          if (uVar6 != 0) {
            uVar6 = 1;
          }
        }
        else {
          uVar6 = 1;
        }
        FUN_08078b1c(param_1 + 0x557800,uVar6);
      }
      puVar3 = param_1 + 0x9a9f56;
      if (((int)param_1[0x9a9f5e] < 0) && (*(char *)(param_1 + 0x9a9f5f) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f58);
      }
      if (((int)param_1[0x9a9f66] < 0) && (*(char *)(param_1 + 0x9a9f67) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f60);
      }
      if (((int)param_1[0x9a9f6e] < 0) && (*(char *)(param_1 + 0x9a9f6f) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f68);
      }
      if (((int)param_1[0x9a9f76] < 0) && (*(char *)(param_1 + 0x9a9f77) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f70);
      }
      puVar3 = param_1 + 0x9a9f78;
      if (((int)param_1[0x9a9f80] < 0) && (*(char *)(param_1 + 0x9a9f81) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f7a);
      }
      if (((int)param_1[0x9a9f88] < 0) && (*(char *)(param_1 + 0x9a9f89) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f82);
      }
      if (((int)param_1[0x9a9f90] < 0) && (*(char *)(param_1 + 0x9a9f91) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f8a);
      }
      if (((int)param_1[0x9a9f98] < 0) && (*(char *)(param_1 + 0x9a9f99) == '\x01')) {
        FUN_080167d8(puVar3,param_1 + 0x9a9f92);
      }
      uVar11 = *param_1;
      uVar6 = 0xc0;
      *param_1 = uVar11 + 1;
      param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar11);
      goto LAB_08014c44;
    }
    if (uVar8 == 0xd7) {
      FUN_08005058();
      uVar5 = *(undefined *)((int)param_1 + 0x291646a);
      if ((param_1[0x20609] & 8) != 0) {
        uVar5 = 1;
      }
      FUN_08046534(param_1 + 0x9a9fe0,uVar5);
      uVar6 = 0xd7;
      goto LAB_08014c44;
    }
  }
  uVar6 = uVar8 & 0xffff;
LAB_08014c44:
  bVar1 = *(byte *)(param_1 + 0x9719d9);
  if (((uint)(*(ushort *)(param_1 + 0x9719d9) >> 8) | (*(ushort *)(param_1 + 0x9719d9) & 0x80) << 1)
      == uVar8) {
    *(byte *)(param_1 + 0x9719d9) = bVar1 | 4;
    if ((bVar1 & 0x20) != 0) {
      uVar7 = param_1[0x56831e];
      uVar11 = *(uint *)(uVar7 + 0x214) | 4;
      *(uint *)(uVar7 + 0x214) = uVar11;
      if ((*(byte *)((int)param_1 + 0x15a0cfd) & 6) == 0) {
        param_1[0x56833e] = uVar11 & -*(int *)(uVar7 + 0x208) & *(uint *)(uVar7 + 0x210);
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x9719d9) = bVar1 & 0xfb;
  }
  bVar1 = *(byte *)(param_1 + 0x9739d9);
  if (((uint)(*(ushort *)(param_1 + 0x9739d9) >> 8) | (*(ushort *)(param_1 + 0x9739d9) & 0x80) << 1)
      == uVar8) {
    bVar9 = bVar1 | 4;
    *(byte *)(param_1 + 0x9739d9) = bVar9;
    if ((bVar1 & 0x20) != 0) {
      uVar8 = param_1[0x769c82];
      uVar11 = *(uint *)(uVar8 + 0x214) | 4;
      *(uint *)(uVar8 + 0x214) = uVar11;
      if ((*(byte *)((int)param_1 + 0x1da728d) & 6) == 0) {
        param_1[0x769ca2] = uVar11 & -*(int *)(uVar8 + 0x208) & *(uint *)(uVar8 + 0x210);
      }
      bVar9 = *(byte *)(param_1 + 0x9739d9);
    }
  }
  else {
    bVar9 = bVar1 & 0xfb;
  }
  uVar2 = (undefined2)uVar6;
  *(undefined2 *)((int)param_1 + 0x25c6766) = uVar2;
  *(undefined2 *)((int)param_1 + 0x25ce766) = uVar2;
  puVar10 = param_1 + 6;
  *(byte *)(param_1 + 0x9719d9) = *(byte *)(param_1 + 0x9719d9) & 0xfd;
  *(byte *)(param_1 + 0x9739d9) = bVar9 & 0xfd;
  uVar8 = 0xc00;
  puVar3 = (uint *)param_1[0x66];
  *(undefined2 *)(param_1 + 5) = uVar2;
  if ((puVar3 == (uint *)0x0) || (uVar6 = *puVar3, 0xbff < uVar6)) {
    param_1[9] = (uint)puVar3;
    param_1[0x66] = (uint)puVar10;
    param_1[6] = 0xc00;
    param_1[10] = 0;
  }
  else {
    do {
      puVar4 = puVar3;
      puVar3 = (uint *)puVar4[3];
      uVar8 = uVar8 - uVar6;
      if (puVar3 == (uint *)0x0) break;
      uVar6 = *puVar3;
    } while (uVar6 < uVar8);
    param_1[6] = uVar8;
    param_1[9] = (uint)puVar3;
    param_1[10] = (uint)puVar4;
    puVar4[3] = (uint)puVar10;
  }
  if (puVar3 != (uint *)0x0) {
    puVar3[4] = (uint)puVar10;
    *puVar3 = *puVar3 - uVar8;
  }
  return;
}


