/*
 * Ghidra decompilation
 *
 * Function : event_gamecard_irq_function
 * Address  : 0011d2c0
 * Program  : drastic64
 */


void event_gamecard_irq_function(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x918);
  *(undefined *)(param_2 + 0x2da5) = 0;
  lVar3 = *(long *)(nds_system + lVar2 + 0x10cddd0);
  uVar1 = *(uint *)(lVar3 + 0x214) | 0x80000;
  *(uint *)(lVar3 + 0x214) = uVar1;
  if ((*(uint *)(nds_system + lVar2 + 0x10cde60) & 6) == 0) {
    *(uint *)(nds_system + lVar2 + 0x10cde58) =
         -*(int *)(lVar3 + 0x208) & uVar1 & *(uint *)(lVar3 + 0x210);
  }
  return;
}


