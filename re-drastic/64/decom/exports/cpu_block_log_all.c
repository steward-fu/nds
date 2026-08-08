/*
 * Ghidra decompilation
 *
 * Function : cpu_block_log_all
 * Address  : 0012f350
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_block_log_all(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  FILE *__stream;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  void *local_30;
  ulong local_28;
  ulong uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar15 = param_1 + 0x8c000;
  __stream = fopen(param_2,"wb");
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0x20;
  local_30 = malloc(0x400);
  cpu_block_log_from_hash(lVar15,param_1 + 0x138c000,0x10000,&local_30);
  cpu_block_log_from_hash(lVar15,param_1 + 0x140c000,0x4000,&local_30);
  uVar8 = local_18;
  uVar6 = uStack_20;
  uVar5 = local_28;
  uVar7 = (undefined4)local_18;
  __printf_chk(1,"Scan found %d blocks consisting of %d bytes.\n",local_18._4_4_,
               (int)*(undefined8 *)(nds_system + param_1 + 0xfb0000) - (int)lVar15);
  qsort(local_30,local_18 >> 0x20,0x20,cpu_block_execution_compare_function);
  if (local_18._4_4_ != 0) {
    dVar18 = (double)(unkuint9)uVar5;
    dVar17 = (double)(unkuint9)uVar6;
    uVar12 = 0;
    lVar16 = 0;
    lVar15 = 0;
    uVar11 = 0;
    do {
      pvVar4 = local_30;
      lVar3 = uVar11 * 0x20;
      uVar9 = *(ulong *)((long)local_30 + lVar3);
      uVar10 = *(ulong *)((long)local_30 + lVar3 + 8);
      lVar15 = lVar15 + uVar9;
      uVar2 = *(uint *)((long)local_30 + lVar3 + 0x14);
      lVar16 = lVar16 + uVar10;
      uVar12 = uVar12 + uVar2;
      dVar13 = (double)NEON_ucvtf(lVar15);
      dVar14 = (double)NEON_ucvtf(lVar16);
      uVar1 = (int)uVar11 + 1;
      __fprintf_chk(((double)(unkuint9)uVar9 * 100.0) / dVar18,(dVar13 * 100.0) / dVar18,
                    ((double)(unkuint9)uVar10 * 100.0) / dVar17,(dVar14 * 100.0) / dVar17,
                    ((double)(ulong)uVar2 * 100.0) / (double)(uVar8 & 0xffffffff),
                    ((double)(ulong)uVar12 * 100.0) / (double)(uVar8 & 0xffffffff),__stream,1,
                    "Block %d:\n Block exec:       %lu/%lu, %lf%% (%lf%% total)\n Block * ins exec: %lu/%lu, %lf%% (%lf%% total)\n Block size:       %d/%d, %lf%% (%lf%% total)\n"
                    ,uVar11,uVar9,uVar5,uVar10,uVar6,uVar2,uVar7);
      cpu_translate_log_block(param_1,__stream,*(undefined8 *)((long)pvVar4 + lVar3 + 0x18));
      fflush(__stream);
      uVar11 = (ulong)uVar1;
    } while (uVar1 < local_18._4_4_);
  }
  free(local_30);
  fputc(10,__stream);
  fwrite("Secondary translation instructions (stubs):\n",1,0x2c,__stream);
  cpu_translate_log_translated_code
            (__stream,*(undefined8 *)(nds_system + param_1 + 0xfb0008),param_1 + 0x108c000);
  fclose(__stream);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


