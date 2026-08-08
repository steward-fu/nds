/*
 * Ghidra decompilation
 *
 * Function : audio_callback_copy_block
 * Address  : 0018c870
 * Program  : drastic64
 */


void audio_callback_copy_block(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = (uint)param_3;
  if (uVar5 != 0) {
    uVar3 = uVar5 - 1;
    bVar1 = (ulong)((param_1 + 0xf) - param_2) < 0x1f;
    if ((bVar1 || uVar3 < 8) || !bVar1 && uVar3 == 8) {
      lVar6 = 0;
      do {
        *(undefined2 *)(param_1 + lVar6) = *(undefined2 *)(param_2 + lVar6);
        lVar6 = lVar6 + 2;
      } while (lVar6 != (ulong)uVar3 * 2 + 2);
      return;
    }
    lVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(param_2 + lVar6);
      ((undefined8 *)(param_1 + lVar6))[1] = ((undefined8 *)(param_2 + lVar6))[1];
      *(undefined8 *)(param_1 + lVar6) = uVar7;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != ((ulong)((uVar5 >> 3) - 1) + 1) * 0x10);
    lVar4 = (param_3 & 0xfffffff8) * 2;
    lVar6 = param_1 + lVar4;
    lVar2 = param_2 + lVar4;
    uVar3 = uVar5 & 0xfffffff8;
    if (((((param_3 & 7) != 0) &&
         (*(undefined2 *)(param_1 + lVar4) = *(undefined2 *)(param_2 + lVar4), uVar3 + 1 < uVar5))
        && (*(undefined2 *)(lVar6 + 2) = *(undefined2 *)(lVar2 + 2), uVar3 + 2 < uVar5)) &&
       (((*(undefined2 *)(lVar6 + 4) = *(undefined2 *)(lVar2 + 4), uVar3 + 3 < uVar5 &&
         (*(undefined2 *)(lVar6 + 6) = *(undefined2 *)(lVar2 + 6), uVar3 + 4 < uVar5)) &&
        ((*(undefined2 *)(lVar6 + 8) = *(undefined2 *)(lVar2 + 8), uVar3 + 5 < uVar5 &&
         (*(undefined2 *)(lVar6 + 10) = *(undefined2 *)(lVar2 + 10), uVar3 + 6 < uVar5)))))) {
      *(undefined2 *)(lVar6 + 0xc) = *(undefined2 *)(lVar2 + 0xc);
    }
  }
  return;
}


