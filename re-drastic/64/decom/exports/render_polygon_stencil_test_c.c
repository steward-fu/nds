/*
 * Ghidra decompilation
 *
 * Function : render_polygon_stencil_test_c
 * Address  : 00145c30
 * Program  : drastic64
 */


void render_polygon_stencil_test_c(long param_1,long param_2,uint param_3,uint param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  if (param_3 == 0) {
    *param_5 = 0;
    return;
  }
  lVar4 = 0;
  iVar5 = 0;
  do {
    while( true ) {
      uVar3 = *(uint *)(param_2 + lVar4 * 4);
      pcVar1 = (char *)(param_1 + lVar4);
      uVar2 = uVar3 >> 0x1f ^ 1;
      if ((uVar3 >> 0x18 & 0x3f) == param_4) {
        uVar2 = 1;
      }
      if (uVar2 == 0) break;
      *(undefined *)(param_1 + lVar4) = 0;
      lVar4 = lVar4 + 1;
      if (param_3 <= (uint)lVar4) {
        *param_5 = iVar5;
        return;
      }
    }
    lVar4 = lVar4 + 1;
    iVar5 = iVar5 - *pcVar1;
  } while ((uint)lVar4 < param_3);
  *param_5 = iVar5;
  return;
}


