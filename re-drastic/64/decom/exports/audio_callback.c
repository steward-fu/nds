/*
 * Ghidra decompilation
 *
 * Function : audio_callback
 * Address  : 0018c450
 * Program  : drastic64
 */


void audio_callback(ulong param_1,void *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar6 = *(uint *)(param_1 + 0x40008);
  uVar7 = *(int *)(param_1 + 0x4000c) - uVar6;
  uVar5 = uVar7 & 0xffff;
  uVar1 = param_3 / 2;
  if (uVar5 < uVar1) {
    memset((void *)((long)param_2 + (ulong)(ushort)uVar7 * 2),0,(ulong)((uVar1 - uVar5) * 2));
    if (uVar5 == 0) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x40008);
    uVar1 = uVar5;
  }
  uVar5 = uVar1 + uVar6;
  if (*(char *)(param_1 + 0x40020) != '\0') {
    lVar11 = (ulong)uVar6 * 2;
    uVar3 = param_1 + lVar11;
    if (0xffff < uVar5) {
      uVar1 = 0x10000 - uVar6;
      if (uVar1 != 0) {
        bVar9 = (void *)(param_1 + lVar11 + 0x10) <= param_2;
        uVar2 = (long)param_2 + 0x10;
        uVar6 = 0xffff - uVar6;
        if (((!bVar9 && uVar3 <= uVar2) && (bVar9 || uVar2 != uVar3) || uVar6 < 8) ||
            ((bVar9 || uVar3 > uVar2) || !bVar9 && uVar2 == uVar3) && uVar6 == 8) {
          lVar11 = 0;
          do {
            *(undefined2 *)((long)param_2 + lVar11) = *(undefined2 *)(uVar3 + lVar11);
            lVar11 = lVar11 + 2;
          } while (lVar11 != (ulong)uVar6 * 2 + 2);
        }
        else {
          lVar11 = 0;
          do {
            uVar12 = *(undefined8 *)(uVar3 + lVar11);
            ((undefined8 *)((long)param_2 + lVar11))[1] = ((undefined8 *)(uVar3 + lVar11))[1];
            *(undefined8 *)((long)param_2 + lVar11) = uVar12;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != ((ulong)((uVar1 >> 3) - 1) + 1) * 0x10);
          lVar8 = ((ulong)uVar1 & 0xfffffff8) * 2;
          lVar11 = uVar3 + lVar8;
          uVar6 = uVar1 & 0xfffffff8;
          if ((((((uVar1 & 7) != 0) &&
                (*(undefined2 *)((long)param_2 + lVar8) = *(undefined2 *)(uVar3 + lVar8),
                uVar6 + 1 < uVar1)) &&
               (*(undefined2 *)((long)param_2 + lVar8 + 2) = *(undefined2 *)(lVar11 + 2),
               uVar6 + 2 < uVar1)) &&
              ((*(undefined2 *)((long)param_2 + lVar8 + 4) = *(undefined2 *)(lVar11 + 4),
               uVar6 + 3 < uVar1 &&
               (*(undefined2 *)((long)param_2 + lVar8 + 6) = *(undefined2 *)(lVar11 + 6),
               uVar6 + 4 < uVar1)))) &&
             ((*(undefined2 *)((long)param_2 + lVar8 + 8) = *(undefined2 *)(lVar11 + 8),
              uVar6 + 5 < uVar1 &&
              (*(undefined2 *)((long)param_2 + lVar8 + 10) = *(undefined2 *)(lVar11 + 10),
              uVar6 + 6 < uVar1)))) {
            *(undefined2 *)((long)param_2 + lVar8 + 0xc) = *(undefined2 *)(lVar11 + 0xc);
          }
        }
      }
      lVar11 = (ulong)uVar1 * 2;
      pvVar4 = (void *)((long)param_2 + lVar11);
      uVar1 = uVar5 - 0x10000;
      if (uVar1 != 0) {
        bVar10 = param_1 < (ulong)((long)param_2 + lVar11 + 0x10);
        bVar9 = pvVar4 < (void *)(param_1 + 0x10);
        uVar5 = uVar5 - 0x10001;
        if ((bVar10 && bVar9 || uVar5 < 8) || (!bVar10 || !bVar9) && uVar5 == 8) {
          lVar11 = 0;
          do {
            *(undefined2 *)((long)pvVar4 + lVar11) = *(undefined2 *)(param_1 + lVar11);
            lVar11 = lVar11 + 2;
          } while (lVar11 != (ulong)uVar5 * 2 + 2);
        }
        else {
          lVar11 = 0;
          do {
            uVar12 = *(undefined8 *)(param_1 + lVar11);
            ((undefined8 *)((long)pvVar4 + lVar11))[1] = ((undefined8 *)(param_1 + lVar11))[1];
            *(undefined8 *)((long)pvVar4 + lVar11) = uVar12;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != (ulong)(uVar1 >> 3) * 0x10);
          lVar8 = ((ulong)uVar1 & 0xfffffff8) * 2;
          lVar11 = param_1 + lVar8;
          uVar5 = uVar1 & 0xfffffff8;
          if (((((uVar1 & 7) != 0) &&
               (*(undefined2 *)((long)pvVar4 + lVar8) = *(undefined2 *)(param_1 + lVar8),
               uVar5 + 1 < uVar1)) &&
              ((*(undefined2 *)((long)pvVar4 + lVar8 + 2) = *(undefined2 *)(lVar11 + 2),
               uVar5 + 2 < uVar1 &&
               (((*(undefined2 *)((long)pvVar4 + lVar8 + 4) = *(undefined2 *)(lVar11 + 4),
                 uVar5 + 3 < uVar1 &&
                 (*(undefined2 *)((long)pvVar4 + lVar8 + 6) = *(undefined2 *)(lVar11 + 6),
                 uVar5 + 4 < uVar1)) &&
                (*(undefined2 *)((long)pvVar4 + lVar8 + 8) = *(undefined2 *)(lVar11 + 8),
                uVar5 + 5 < uVar1)))))) &&
             (*(undefined2 *)((long)pvVar4 + lVar8 + 10) = *(undefined2 *)(lVar11 + 10),
             uVar5 + 6 < uVar1)) {
            *(undefined2 *)((long)pvVar4 + lVar8 + 0xc) = *(undefined2 *)(lVar11 + 0xc);
          }
        }
      }
      *(uint *)(param_1 + 0x40008) = uVar1;
      return;
    }
    if (uVar1 != 0) {
      uVar2 = (long)param_2 + 0x10;
      bVar9 = (void *)(param_1 + lVar11 + 0x10) <= param_2;
      uVar6 = uVar1 - 1;
      if (((!bVar9 && uVar3 <= uVar2) && (bVar9 || uVar2 != uVar3) || uVar6 < 8) ||
          ((bVar9 || uVar3 > uVar2) || !bVar9 && uVar2 == uVar3) && uVar6 == 8) {
        lVar11 = 0;
        do {
          *(undefined2 *)((long)param_2 + lVar11) = *(undefined2 *)(uVar3 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != (ulong)uVar6 * 2 + 2);
        *(uint *)(param_1 + 0x40008) = uVar5;
        return;
      }
      lVar11 = 0;
      do {
        uVar12 = *(undefined8 *)(uVar3 + lVar11);
        ((undefined8 *)((long)param_2 + lVar11))[1] = ((undefined8 *)(uVar3 + lVar11))[1];
        *(undefined8 *)((long)param_2 + lVar11) = uVar12;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != ((ulong)((uVar1 >> 3) - 1) + 1) * 0x10);
      lVar8 = ((ulong)uVar1 & 0xfffffff8) * 2;
      lVar11 = uVar3 + lVar8;
      uVar6 = uVar1 & 0xfffffff8;
      if (((((uVar1 & 7) != 0) &&
           (*(undefined2 *)((long)param_2 + lVar8) = *(undefined2 *)(uVar3 + lVar8),
           uVar6 + 1 < uVar1)) &&
          ((*(undefined2 *)((long)param_2 + lVar8 + 2) = *(undefined2 *)(lVar11 + 2),
           uVar6 + 2 < uVar1 &&
           ((*(undefined2 *)((long)param_2 + lVar8 + 4) = *(undefined2 *)(lVar11 + 4),
            uVar6 + 3 < uVar1 &&
            (*(undefined2 *)((long)param_2 + lVar8 + 6) = *(undefined2 *)(lVar11 + 6),
            uVar6 + 4 < uVar1)))))) &&
         ((*(undefined2 *)((long)param_2 + lVar8 + 8) = *(undefined2 *)(lVar11 + 8),
          uVar6 + 5 < uVar1 &&
          (*(undefined2 *)((long)param_2 + lVar8 + 10) = *(undefined2 *)(lVar11 + 10),
          uVar6 + 6 < uVar1)))) {
        *(undefined2 *)((long)param_2 + lVar8 + 0xc) = *(undefined2 *)(lVar11 + 0xc);
      }
    }
    *(uint *)(param_1 + 0x40008) = uVar5;
    return;
  }
  uVar6 = uVar1 + (0x10000 - uVar6) * -2;
  if (uVar5 < 0x10000) {
    uVar6 = uVar5;
  }
  *(uint *)(param_1 + 0x40008) = uVar6;
  memset(param_2,0,(ulong)(uVar1 << 1));
  return;
}


