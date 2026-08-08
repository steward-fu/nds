/*
 * Ghidra decompilation
 *
 * Function : FUN_080692d8
 * Address  : 080692d8
 * Program  : drastic16
 */


undefined4 FUN_080692d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  FILE *__stream;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char acStack_420 [1024];
  
  sprintf(acStack_420,"%s%ccheats%c%s.cht",param_2 + 0x82030,0x2f,0x2f,param_2 + 0x82830);
  __stream = fopen(acStack_420,"wb");
  if (__stream == (FILE *)0x0) {
    printf("Can\'t save custom cheat file at %s.\n",acStack_420);
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x410) != 0) {
      uVar7 = 0;
      uVar8 = uVar7;
      do {
        piVar6 = (int *)(*(int *)(param_1 + 0x408) + uVar7);
        fprintf(__stream,"[%s]",piVar6[1]);
        if (*(char *)piVar6[5] != '\0') {
          fputc(0x2b,__stream);
        }
        fputc(10,__stream);
        if (piVar6[3] != 0) {
          iVar5 = 4;
          uVar4 = 0;
          do {
            iVar1 = uVar4 * 4;
            uVar4 = uVar4 + 2;
            puVar2 = (undefined4 *)(*piVar6 + iVar5);
            iVar5 = iVar5 + 8;
            fprintf(__stream,"%08X %08X\n",*(undefined4 *)(*piVar6 + iVar1),*puVar2);
          } while (uVar4 < (uint)piVar6[3]);
        }
        fputc(10,__stream);
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 0x18;
      } while (uVar8 < *(uint *)(param_1 + 0x410));
    }
    fclose(__stream);
    uVar3 = 0;
  }
  return uVar3;
}


