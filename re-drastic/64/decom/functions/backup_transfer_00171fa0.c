/*
 * Ghidra decompilation
 *
 * Function : backup_transfer
 * Address  : 00171fa0
 * Program  : drastic64
 */


uint backup_transfer(long param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  
  bVar3 = *(byte *)(param_1 + 0x2422);
  if (bVar3 == 4) {
    *(byte *)(param_1 + 0x2423) = *(byte *)(param_1 + 0x2423) & 3 | (byte)param_2 & 0xfc;
    return param_2 & 0xff;
  }
  uVar9 = (uint)bVar3;
  if (4 < bVar3) {
    if (bVar3 == 6) {
      uVar9 = *(uint *)(param_1 + 0x2404);
      *(uint *)(param_1 + (ulong)(uVar9 >> 0xe) * 4) =
           *(uint *)(param_1 + (ulong)(uVar9 >> 0xe) * 4) | 1 << ((ulong)(uVar9 >> 9) & 0x1f);
      *(byte *)(*(long *)(param_1 + 0x2410) + (ulong)uVar9) = (byte)param_2;
      *(uint *)(param_1 + 0x2404) = *(int *)(param_1 + 0x2404) + 1U & *(uint *)(param_1 + 0x2408);
      return param_2 & 0xff;
    }
    if (bVar3 == 0xb) {
      *(undefined *)(param_1 + 0x2425) = 0;
      return 0xaa;
    }
    if (uVar9 == 5) {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x2410) + (ulong)*(uint *)(param_1 + 0x2404));
      *(uint *)(param_1 + 0x2404) = *(uint *)(param_1 + 0x2404) + 1 & *(uint *)(param_1 + 0x2408);
      return (uint)bVar3;
    }
LAB_001721f0:
    return param_2 & 0xff;
  }
  if (uVar9 == 2) {
    bVar3 = *(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0x2425) + 0x2418);
    cVar1 = '\0';
    if (*(char *)(param_1 + 0x2425) != '\x02') {
      cVar1 = *(char *)(param_1 + 0x2425) + '\x01';
    }
    *(char *)(param_1 + 0x2425) = cVar1;
    return (uint)bVar3;
  }
  if (bVar3 == 3) {
    return *(byte *)(param_1 + 0x2423) | 0xc;
  }
  if (bVar3 != 0) {
    if (uVar9 == 1) {
      uVar9 = param_2 & 0xff;
      uVar5 = param_2 | *(int *)(param_1 + 0x2404) << 8;
      *(uint *)(param_1 + 0x2404) = uVar5;
      cVar1 = *(char *)(param_1 + 0x2425) + '\x01';
      *(char *)(param_1 + 0x2425) = cVar1;
      if (*(char *)(param_1 + 0x2424) != cVar1) {
        return uVar9;
      }
      uVar4 = *(ushort *)(param_1 + 0x2420);
      uVar5 = uVar5 & *(uint *)(param_1 + 0x2408);
      *(uint *)(param_1 + 0x2404) = uVar5;
      *(undefined *)(param_1 + 0x2425) = 0;
      if (uVar4 == 0xd8) {
        *(undefined4 *)(param_1 + 0x241c) = 0x3c;
        memset((void *)(*(long *)(param_1 + 0x2410) + ((ulong)uVar5 & 0xffff0000)),0xff,0x10000);
        puVar2 = (undefined8 *)(param_1 + (ulong)((uVar5 & 0xffff0000) >> 0xe) * 4);
        *puVar2 = 0xffffffffffffffff;
        puVar2[1] = 0xffffffffffffffff;
        return uVar9;
      }
      if (uVar4 < 0xd9) {
        if (uVar4 == 10) {
LAB_00172294:
          *(undefined4 *)(param_1 + 0x241c) = 0x3c;
          *(undefined *)(param_1 + 0x2422) = 6;
          return uVar9;
        }
        if (uVar4 < 0xb) {
          if (uVar4 == 2) goto LAB_00172294;
          if (uVar4 == 3) goto LAB_00172214;
        }
        else if (uVar4 == 0xb) {
          *(undefined *)(param_1 + 0x2422) = 7;
          return uVar9;
        }
      }
      else {
        if (uVar4 == 0x10a) {
          *(uint *)(param_1 + 0x2404) = uVar5 | 0x100;
          *(undefined4 *)(param_1 + 0x241c) = 0x3c;
          *(undefined *)(param_1 + 0x2422) = 6;
          return uVar9;
        }
        if (uVar4 < 0x10b) {
          if (uVar4 == 0xdb) {
            *(undefined4 *)(param_1 + 0x241c) = 0x3c;
            memset((void *)(*(long *)(param_1 + 0x2410) + ((ulong)uVar5 & 0xffffff00)),0xff,0x100);
            uVar6 = (ulong)(*(uint *)(param_1 + 0x2404) >> 0xe);
            *(uint *)(param_1 + uVar6 * 4) =
                 *(uint *)(param_1 + uVar6 * 4) |
                 1 << ((ulong)(*(uint *)(param_1 + 0x2404) >> 9) & 0x1f);
            return uVar9;
          }
          if (uVar4 == 0x102) goto LAB_00172294;
        }
        else if (uVar4 == 0x10b) {
          *(uint *)(param_1 + 0x2404) = uVar5 | 0x100;
LAB_00172214:
          *(undefined *)(param_1 + 0x2422) = 5;
          return uVar9;
        }
      }
    }
    goto LAB_001721f0;
  }
  if (param_2 == 6) {
    *(undefined *)(param_1 + 0x2422) = 0;
    *(byte *)(param_1 + 0x2423) = *(byte *)(param_1 + 0x2423) | 2;
    uVar8 = 6;
    goto LAB_00172198;
  }
  uVar7 = (undefined2)param_2;
  uVar8 = uVar7;
  if (param_2 < 7) {
    if (param_2 == 4) {
      *(undefined *)(param_1 + 0x2422) = 0;
      *(byte *)(param_1 + 0x2423) = *(byte *)(param_1 + 0x2423) & 0xfd;
      uVar8 = 4;
      goto LAB_00172198;
    }
    if (param_2 == 5) {
      *(undefined *)(param_1 + 0x2422) = 3;
      uVar8 = 5;
      goto LAB_00172198;
    }
    if (param_2 == 3) {
      *(undefined *)(param_1 + 0x2422) = 1;
      uVar8 = 3;
      goto LAB_00172198;
    }
    if (*(int *)(param_1 + 0x2400) != 1) {
      if (param_2 == 2) {
        *(undefined *)(param_1 + 0x2422) = 1;
        uVar8 = 0x102;
        goto LAB_00172198;
      }
      if (param_2 < 3) {
        if (param_2 == 1) {
          *(undefined *)(param_1 + 0x2422) = 4;
          uVar8 = 1;
        }
        goto LAB_00172198;
      }
      goto LAB_00172318;
    }
LAB_0017235c:
    if ((param_2 != 2) && (uVar8 = uVar7, 1 < param_2 - 10)) goto LAB_00172198;
  }
  else {
    if (param_2 == 8) {
      *(undefined *)(param_1 + 0x2422) = 0xb;
      uVar8 = 8;
      goto LAB_00172198;
    }
    if (param_2 == 0x9f) {
      *(undefined *)(param_1 + 0x2422) = 2;
      uVar8 = 0x9f;
      goto LAB_00172198;
    }
    if (*(int *)(param_1 + 0x2400) == 1) {
      if (param_2 == 0xb9) {
        *(undefined *)(param_1 + 0x2422) = 10;
        uVar8 = 0xb9;
        goto LAB_00172198;
      }
      if (param_2 < 0xba) {
        uVar8 = 0xab;
        if ((param_2 == 0xab) || (uVar8 = uVar7, 0xab < param_2)) goto LAB_00172198;
        goto LAB_0017235c;
      }
      if ((param_2 != 0xd8) && (param_2 != 0xdb)) goto LAB_00172198;
    }
    else {
LAB_00172318:
      if ((1 < param_2 - 10) || (*(int *)(param_1 + 0x2408) != 0x1ff)) goto LAB_00172198;
      param_2 = param_2 | 0x100;
    }
  }
  *(undefined *)(param_1 + 0x2422) = 1;
  uVar8 = (short)param_2;
LAB_00172198:
  *(undefined2 *)(param_1 + 0x2420) = uVar8;
  *(undefined *)(param_1 + 0x2425) = 0;
  *(undefined4 *)(param_1 + 0x2404) = 0;
  return uVar9;
}


