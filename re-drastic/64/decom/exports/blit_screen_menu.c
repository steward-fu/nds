/*
 * Ghidra decompilation
 *
 * Function : blit_screen_menu
 * Address  : 00188570
 * Program  : drastic64
 */


void blit_screen_menu(long param_1,ulong param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  lVar2 = get_screen_ptr(0);
  uVar3 = get_screen_pitch(0);
  uVar6 = (uint)(uVar3 >> 1) & 0x7fffffff;
  puVar5 = (undefined2 *)(lVar2 + ((ulong)(uVar6 * param_3) + (param_2 & 0xffffffff)) * 2);
  if (param_5 != 0) {
    uVar9 = 0;
    iVar8 = 0;
    uVar3 = uVar9;
    uVar7 = param_4;
    puVar4 = puVar5;
    if (param_4 != 0) {
      do {
        do {
          *puVar5 = *(undefined2 *)(param_1 + uVar9 * 2);
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          puVar5 = puVar5 + 1;
        } while (uVar1 != uVar7);
        iVar8 = iVar8 + 1;
        puVar5 = (undefined2 *)((long)puVar4 + (ulong)(uVar6 << 1));
        uVar9 = (ulong)((int)uVar3 + param_4);
        uVar7 = uVar7 + param_4;
        uVar3 = uVar9;
        puVar4 = puVar5;
      } while (param_5 != iVar8);
    }
  }
  return;
}


