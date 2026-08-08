/*
 * Ghidra decompilation
 *
 * Function : clear_screen_menu
 * Address  : 001883c0
 * Program  : drastic64
 */


void clear_screen_menu(undefined2 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)get_screen_ptr(0);
  uVar2 = get_screen_pitch(0);
  puVar4 = puVar1 + 200;
  iVar5 = 0x1e0;
  puVar6 = puVar1;
  do {
    do {
      puVar3 = puVar1 + 2;
      puVar1[1] = CONCAT26(param_1,CONCAT24(param_1,CONCAT22(param_1,param_1)));
      *puVar1 = CONCAT26(param_1,CONCAT24(param_1,CONCAT22(param_1,param_1)));
      puVar1 = puVar3;
    } while (puVar4 != puVar3);
    puVar1 = (undefined8 *)((long)puVar6 + (uVar2 & 0xfffffffe));
    puVar4 = (undefined8 *)((long)puVar4 + (uVar2 & 0xfffffffe));
    iVar5 = iVar5 + -1;
    puVar6 = puVar1;
  } while (iVar5 != 0);
  return;
}


