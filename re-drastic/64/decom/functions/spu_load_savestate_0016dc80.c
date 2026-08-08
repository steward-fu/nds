/*
 * Ghidra decompilation
 *
 * Function : spu_load_savestate
 * Address  : 0016dc80
 * Program  : drastic64
 */


void spu_load_savestate(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint extraout_w13;
  undefined8 *puVar10;
  
  puVar8 = *(undefined8 **)(param_2 + 0x20);
  puVar10 = (undefined8 *)(param_1 + 0x400a8);
  do {
    *puVar10 = *puVar8;
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 0xc;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(lVar5 + 0xc);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 4;
    *(undefined4 *)((long)puVar10 + 0x2c) = *(undefined4 *)(lVar5 + 4);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 4;
    *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(lVar5 + 4);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 4;
    *(undefined2 *)(puVar10 + 7) = *(undefined2 *)(lVar5 + 4);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 2;
    *(undefined2 *)((long)puVar10 + 0x3a) = *(undefined2 *)(lVar5 + 2);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 2;
    *(undefined *)((long)puVar10 + 0x3f) = *(undefined *)(lVar5 + 2);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 1;
    *(undefined *)(puVar10 + 8) = *(undefined *)(lVar5 + 1);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 1;
    *(undefined *)((long)puVar10 + 0x41) = *(undefined *)(lVar5 + 1);
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 1;
    bVar9 = *(byte *)(lVar5 + 1);
    *(byte *)((long)puVar10 + 0x3c) = bVar9;
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar5 + 1;
    *(undefined *)((long)puVar10 + 0x3e) = *(undefined *)(lVar5 + 1);
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x20) + 1);
    *(undefined8 **)(param_2 + 0x20) = puVar8;
    if (bVar9 == 3) {
      puVar10[4] = psg_samples + ((ulong)*(byte *)(puVar10[3] + 3) & 7) * 0x10;
    }
    else if (bVar9 < 4) {
      uVar1 = *(uint *)(puVar10 + 5);
      plVar6 = *(long **)(param_1 + 0x40cf8);
      if (param_3 < 7) {
        lVar5 = *plVar6;
        *(uint *)(puVar10 + 5) = uVar1 + 0x2000000;
        puVar10[4] = lVar5 + (ulong)uVar1;
      }
      else {
        uVar4 = uVar1 >> 0x17;
        if (*(char *)(plVar6 + (ulong)uVar4 * 0xc + 0x1f8de) == '\0') {
          puVar10[4] = plVar6[(ulong)uVar4 * 0xc + 0x1f8d4] +
                       (ulong)(uVar1 & *(uint *)(plVar6 + (ulong)uVar4 * 0xc + 0x1f8d3));
        }
        else if (*(char *)(plVar6 + (ulong)uVar4 * 0xc + 0x1f8de) == '\x01') {
          uVar7 = (*(code *)plVar6[(ulong)uVar4 * 0xc + 0x1f8d4])();
          bVar9 = *(byte *)((long)puVar10 + 0x3c);
          puVar10[4] = uVar7;
        }
        else {
          puVar10[4] = 0;
          *(undefined *)((long)puVar10 + 0x3e) = 0;
        }
      }
      if (bVar9 == 2) {
        puVar8 = puVar10 + -0x10;
        uVar1 = *(uint *)((long)puVar10 + 4) - 0x40;
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        *(uint *)(puVar10 + 2) = uVar1 & 0xfffffff8;
        if ((uVar1 & 0xfffffff8) <= *(uint *)((long)puVar10 + 4)) {
          do {
            puVar8 = (undefined8 *)spu_adpcm_decode_block(puVar8);
          } while (*(uint *)(puVar10 + 2) <= extraout_w13);
        }
      }
      puVar8 = *(undefined8 **)(param_2 + 0x20);
    }
    else if (bVar9 == 4) {
      puVar10[4] = &noise_samples;
    }
    *(undefined *)((long)puVar10 + 0x3d) = 3;
    puVar10 = puVar10 + 0x19;
  } while (puVar10 != (undefined8 *)(param_1 + 0x40d28));
  *(undefined8 *)(param_1 + 0x40d00) = *puVar8;
  lVar5 = *(long *)(param_1 + 0x40ce8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
  cVar2 = *(char *)(lVar5 + 0x108);
  *(char *)(param_1 + 0x40cc4) = cVar2;
  if (cVar2 < '\0') {
    *(ulong *)(param_1 + 0x40cb8) =
         **(long **)(param_1 + 0x40cf8) + ((ulong)*(uint *)(lVar5 + 0x110) & 0x3fffff);
    uVar3 = *(ushort *)(lVar5 + 0x114);
    *(undefined8 *)(param_1 + 0x40ca8) = 0;
    *(uint *)(param_1 + 0x40cc0) = (uint)uVar3 * 2;
  }
  cVar2 = *(char *)(lVar5 + 0x108);
  *(char *)(param_1 + 0x40ce4) = cVar2;
  if (cVar2 < '\0') {
    *(ulong *)(param_1 + 0x40cd8) =
         **(long **)(param_1 + 0x40cf8) + ((ulong)*(uint *)(lVar5 + 0x118) & 0x3fffff);
    uVar3 = *(ushort *)(lVar5 + 0x11c);
    *(undefined8 *)(param_1 + 0x40cc8) = 0;
    *(uint *)(param_1 + 0x40ce0) = (uint)uVar3 * 2;
  }
  audio_reset_buffer(param_1);
  return;
}


