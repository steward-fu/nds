/*
 * Ghidra decompilation
 *
 * Function : FUN_08046534
 * Address  : 08046534
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08045b94) */
/* WARNING: Removing unreachable block (ram,0x08045208) */
/* WARNING: Removing unreachable block (ram,0x0804568c) */

void FUN_08046534(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined auVar16 [16];
  undefined auStack_130 [240];
  undefined4 local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  piVar7 = param_1 + 0x6120c;
  uVar10 = param_1[0x638a0] & 0x4000;
  if ((uVar10 != 0) && (uVar10 = (uint)*(ushort *)(param_1[0x63893] + 0x400a), uVar10 != 0)) {
    uVar10 = 1;
  }
  iVar4 = FUN_08058810();
  if (iVar4 != 0) {
    uVar10 = 1;
  }
  if ((param_2 == 0) && ((*(char *)(param_1 + 0x638b1) != '\0' || (uVar10 != 0)))) {
    uVar10 = *(byte *)((int)param_1 + 0x18e2b5) ^ 1;
    *(undefined *)(param_1 + 0x638b1) = 0;
    piVar8 = piVar7 + uVar10 * 0x6001 + 0x26a6;
    if ((param_1[0x638a0] & 0x80U) != 0) {
      param_1[0x601f2] = -1;
      uVar5 = param_1[0x6386b];
      if (((param_1[0x63866] & param_1[0x63865] & param_1[0x63867] & param_1[0x63864] &
            param_1[0x63868] & param_1[0x63869] & param_1[0x6386a] & uVar5) ==
           (param_1[0x63866] | param_1[0x63865] | param_1[0x63867] | param_1[0x63864] |
            param_1[0x63868] | param_1[0x63869] | param_1[0x6386a] | uVar5)) &&
         (uVar1 = uVar5 >> 8, uVar1 == (uVar5 & 0xff & uVar5 >> 0x10 & uVar1))) {
        param_1[0x601f2] = uVar1;
      }
      auVar16 = VectorSub(*(undefined (*) [16])((int)param_1 + 0x18e191),
                          *(undefined (*) [16])(param_1 + 0x63864),1);
      *(longlong *)(param_1 + 0x6386c) = auVar16._0_8_;
      *(longlong *)(param_1 + 0x6386e) = auVar16._8_8_;
      bVar2 = *(byte *)(param_1 + 0x6386a);
      local_2c = (uint)bVar2;
      *(char *)(param_1 + 0x63870) =
           *(char *)((int)param_1 + 0x18e1a1) - *(char *)(param_1 + 0x63868);
      *(char *)((int)param_1 + 0x18e1c1) =
           *(char *)((int)param_1 + 0x18e1a2) - *(char *)((int)param_1 + 0x18e1a1);
      *(char *)((int)param_1 + 0x18e1c2) =
           *(char *)((int)param_1 + 0x18e1a3) - *(char *)((int)param_1 + 0x18e1a2);
      bVar3 = *(byte *)((int)param_1 + 0x18e1aa);
      local_30 = (uint)bVar3;
      *(char *)((int)param_1 + 0x18e1c3) =
           *(char *)(param_1 + 0x63869) - *(char *)((int)param_1 + 0x18e1a3);
      *(char *)(param_1 + 0x63871) =
           *(char *)((int)param_1 + 0x18e1a5) - *(char *)(param_1 + 0x63869);
      *(char *)((int)param_1 + 0x18e1c5) =
           *(char *)((int)param_1 + 0x18e1a6) - *(char *)((int)param_1 + 0x18e1a5);
      *(char *)((int)param_1 + 0x18e1c6) =
           *(char *)((int)param_1 + 0x18e1a7) - *(char *)((int)param_1 + 0x18e1a6);
      *(byte *)((int)param_1 + 0x18e1c7) = bVar2 - *(char *)((int)param_1 + 0x18e1a7);
      local_34 = (uint)*(byte *)((int)param_1 + 0x18e1af);
      *(byte *)(param_1 + 0x63872) = *(char *)((int)param_1 + 0x18e1a9) - bVar2;
      *(byte *)((int)param_1 + 0x18e1c9) = bVar3 - *(char *)((int)param_1 + 0x18e1a9);
      *(byte *)((int)param_1 + 0x18e1ca) = *(char *)((int)param_1 + 0x18e1ab) - bVar3;
      *(char *)((int)param_1 + 0x18e1cb) =
           *(char *)(param_1 + 0x6386b) - *(char *)((int)param_1 + 0x18e1ab);
      *(char *)(param_1 + 0x63873) =
           *(char *)((int)param_1 + 0x18e1ad) - *(char *)(param_1 + 0x6386b);
      *(char *)((int)param_1 + 0x18e1cd) =
           *(char *)((int)param_1 + 0x18e1ae) - *(char *)((int)param_1 + 0x18e1ad);
      *(byte *)((int)param_1 + 0x18e1ce) =
           *(byte *)((int)param_1 + 0x18e1af) - *(char *)((int)param_1 + 0x18e1ae);
    }
    local_40 = 0;
    FUN_0804420c(piVar7,param_1 + 0x4cf10,piVar7 + uVar10 * 0x2801 + 0xe6a8,piVar8);
    if ((*(byte *)((int)param_1 + 0x18e2c1) & 1) == 0) {
      local_40 = 1;
      FUN_0804420c(piVar7,param_1 + 0x4ff1c,piVar7 + uVar10 * 0x2801 + 0x136aa,piVar8);
    }
    else {
      local_40 = 1;
      FUN_080349a8(piVar7,param_1 + 0x4ff1c,piVar7 + uVar10 * 0x2801 + 0x136aa,piVar8);
    }
    *(char *)(param_1 + 0x5535b) = (char)*(undefined4 *)(*(int *)(*param_1 + 0xfba1c) + 0x817b8);
    FUN_08045cb0(param_1 + 0x52f30);
    if (((param_1[0x638a0] & 0x20U) != 0) && (*(int *)(*(int *)(*param_1 + 0xfba1c) + 0x817b8) == 0)
       ) {
      uVar10 = (uint)(param_1[0x638a0] << 0x18) >> 0x1e;
      if (uVar10 == 2) {
        iVar13 = param_1[0x55331];
        uVar10 = (uint)(*(int *)(iVar13 + 0x9a50) << 0x14) >> 0x1c;
        iVar4 = param_1[0x601f1];
        piVar8 = param_1 + 0x5bff0;
        piVar9 = param_1 + 0x41e10;
        iVar15 = iVar13 + 0x99a0;
        uVar10 = uVar10 | ((*(ushort *)(iVar13 + 0x9a72) & 0x7fff) + (0x400 >> uVar10)) * 0x10000;
        piVar7 = param_1 + 0x5ebf0;
        do {
          piVar14 = piVar8 + 0x100;
          piVar11 = piVar8 + 0x200;
          FUN_08092aac(piVar14,auStack_130,iVar13 + 0x9960,uVar10);
          FUN_08092bbc(piVar7,piVar7,auStack_130,*(undefined4 *)(iVar13 + 0x9a64));
          piVar12 = piVar7 + 0x100;
          FUN_080932f0(auStack_130,piVar8,piVar14,piVar11,iVar4);
          FUN_08093260(piVar9,piVar7,auStack_130,iVar15);
          FUN_08092aac(piVar11,auStack_130,iVar13 + 0x9960,uVar10);
          FUN_08092bbc(piVar12,piVar12,auStack_130,*(undefined4 *)(iVar13 + 0x9a64));
          piVar6 = piVar8 + 0x300;
          piVar8 = piVar8 + 0x400;
          FUN_080932f0(auStack_130,piVar14,piVar11,piVar6,iVar4);
          piVar6 = piVar9 + 0x100;
          piVar9 = piVar9 + 0x1000;
          FUN_08093260(piVar6,piVar12,auStack_130,iVar15);
          piVar7 = piVar7 + 0x200;
        } while (piVar8 != param_1 + 0x5ebf0);
        return;
      }
      if (uVar10 == 3) {
        iVar13 = param_1[0x55331];
        uVar10 = (uint)(*(int *)(iVar13 + 0x9a50) << 0x14) >> 0x1c;
        iVar4 = param_1[0x601f1];
        piVar8 = param_1 + 0x5bff0;
        piVar9 = param_1 + 0x41e10;
        iVar15 = iVar13 + 0x99a0;
        uVar10 = uVar10 | ((*(ushort *)(iVar13 + 0x9a72) & 0x7fff) + (0x400 >> uVar10)) * 0x10000;
        piVar7 = param_1 + 0x5ebf0;
        do {
          piVar14 = piVar8 + 0x100;
          piVar11 = piVar8 + 0x200;
          FUN_08092aac(piVar14,auStack_130,iVar13 + 0x9960,uVar10);
          FUN_08092c8c(piVar7,piVar7,auStack_130,*(undefined4 *)(iVar13 + 0x9a64));
          piVar12 = piVar7 + 0x100;
          FUN_080932f0(auStack_130,piVar8,piVar14,piVar11,iVar4);
          FUN_08093260(piVar9,piVar7,auStack_130,iVar15);
          FUN_08092aac(piVar11,auStack_130,iVar13 + 0x9960,uVar10);
          FUN_08092c8c(piVar12,piVar12,auStack_130,*(undefined4 *)(iVar13 + 0x9a64));
          piVar6 = piVar8 + 0x300;
          piVar8 = piVar8 + 0x400;
          FUN_080932f0(auStack_130,piVar14,piVar11,piVar6,iVar4);
          piVar6 = piVar9 + 0x100;
          piVar9 = piVar9 + 0x1000;
          FUN_08093260(piVar6,piVar12,auStack_130,iVar15);
          piVar7 = piVar7 + 0x200;
        } while (piVar8 != param_1 + 0x5ebf0);
        return;
      }
      iVar4 = param_1[0x55331];
      iVar13 = param_1[0x601f1];
      piVar7 = param_1 + 0x5bff0;
      piVar8 = param_1 + 0x41e10;
      piVar9 = param_1 + 0x5ebf0;
      do {
        FUN_080932f0(auStack_130,piVar7,piVar7 + 0x100,piVar7 + 0x200,iVar13);
        FUN_08093260(piVar8,piVar9,auStack_130,iVar4 + 0x99a0);
        FUN_080932f0(auStack_130,piVar7 + 0x100,piVar7 + 0x200,piVar7 + 0x300,iVar13);
        piVar7 = piVar7 + 0x400;
        FUN_08093260(piVar8 + 0x100,piVar9 + 0x100,auStack_130,iVar4 + 0x99a0);
        piVar8 = piVar8 + 0x1000;
        piVar9 = piVar9 + 0x200;
      } while (piVar7 != param_1 + 0x5ebf0);
      return;
    }
  }
  return;
}


