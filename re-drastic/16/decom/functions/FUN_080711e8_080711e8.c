/*
 * Ghidra decompilation
 *
 * Function : FUN_080711e8
 * Address  : 080711e8
 * Program  : drastic16
 */


void FUN_080711e8(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FILE *__stream;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  size_t local_6c;
  undefined4 local_68;
  
  __stream = fopen(param_2,"wb");
  local_6c = 0;
  local_70 = 0;
  local_68 = 0x20;
  local_80 = 0;
  local_78 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  local_88[0] = malloc(0x400);
  FUN_08070ee8(param_1 + 0x1383000,0x10000,local_88);
  FUN_08070ee8(param_1 + 0x1403000,0x4000,local_88);
  uVar4 = uStack_74;
  uVar3 = local_78;
  uVar2 = uStack_7c;
  uVar1 = local_80;
  printf("Scan found %d blocks consisting of %d bytes.\n",local_6c,
         *(int *)(param_1 + 0x14a3000) - (param_1 + 0x83000));
  qsort(local_88[0],local_6c,0x20,(__compar_fn_t)&LAB_0806990c);
  if (local_6c != 0) {
    uVar9 = 0;
    iVar10 = 0;
    __aeabi_ul2d(uVar1,uVar2);
    uVar12 = 0;
    __aeabi_ul2d(uVar3,uVar4);
    uVar7 = 0;
    do {
      puVar8 = (undefined8 *)((int)local_88[0] + uVar7 * 0x20);
      uVar13 = *puVar8;
      uVar12 = VectorAdd(uVar12,uVar13,8);
      uVar5 = *(uint *)(puVar8 + 1);
      iVar6 = *(int *)((int)puVar8 + 0xc);
      bVar11 = CARRY4(uVar9,uVar5);
      uVar9 = uVar9 + uVar5;
      iVar10 = iVar10 + iVar6 + (uint)bVar11;
      __aeabi_ul2d((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      __aeabi_ul2d((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      __aeabi_ul2d(uVar5,iVar6);
      __aeabi_ul2d(uVar9,iVar10);
      uVar5 = uVar7 + 1;
      fprintf(__stream,
              "Block %d:\n Block exec:       %llu/%llu, %lf%% (%lf%% total)\n Block * ins exec: %llu/%llu, %lf%% (%lf%% total)\n Block size:       %d/%d, %lf%% (%lf%% total)\n"
              ,uVar7);
      FUN_080893c8(param_1,__stream,*(undefined4 *)(puVar8 + 3));
      fflush(__stream);
      uVar7 = uVar5;
    } while (uVar5 < local_6c);
  }
  free(local_88[0]);
  fputc(10,__stream);
  fwrite("Secondary translation instructions (stubs):\n",1,0x2c,__stream);
  FUN_080887d8(__stream,*(undefined4 *)(param_1 + 0x14a3004),param_1 + 0x1083000);
  fclose(__stream);
  return;
}


