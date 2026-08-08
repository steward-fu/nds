/*
 * Ghidra decompilation
 *
 * Function : convert_touch_coordinates
 * Address  : 0018abe0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void convert_touch_coordinates(int param_1,int param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  if (_DAT_040315bc != 0) {
    uVar1 = (uint)(param_1 * _DAT_040315b4) / _DAT_040315bc;
  }
  uVar2 = 0;
  if (_DAT_040315c0 != 0) {
    uVar2 = (uint)(param_2 * _DAT_040315b8) / _DAT_040315c0;
  }
  uVar4 = uVar1 - *(int *)(&DAT_04031530 + (ulong)((uint)DAT_040315cc ^ 1) * 5);
  uVar3 = uVar2 - *(int *)((long)&DAT_04031530 + (ulong)((uint)DAT_040315cc ^ 1) * 0x28 + 4);
  if (((0xff < uVar4 || 0xbe < uVar3) && (0xff < uVar4 || uVar3 != 0xbf)) && (param_5 != 0)) {
    uVar4 = uVar1 - *(int *)(&DAT_04031530 + (ulong)(uint)DAT_040315cc * 5);
    uVar3 = uVar2 - *(int *)((long)&DAT_04031530 + (ulong)(uint)DAT_040315cc * 0x28 + 4);
    if ((0xff < uVar4 || 0xbe < uVar3) && (0xff < uVar4 || uVar3 != 0xbf)) {
      uVar3 = 0;
      uVar4 = 0;
    }
  }
  *param_3 = uVar4;
  *param_4 = uVar3;
  return;
}


