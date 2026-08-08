/*
 * Ghidra decompilation
 *
 * Function : add_custom_cheat
 * Address  : 00181b20
 * Program  : drastic64
 */


undefined8 add_custom_cheat(long param_1,char *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  void *pvVar5;
  long lVar6;
  
  sVar4 = strlen(param_2);
  uVar3 = *(uint *)(param_1 + 0x420);
  uVar1 = uVar3 + 1;
  pvVar5 = realloc(*(void **)(param_1 + 0x410),(ulong)uVar1 * 0x28);
  *(void **)(param_1 + 0x410) = pvVar5;
  pvVar5 = realloc(*(void **)(param_1 + 0x418),(ulong)uVar1);
  lVar6 = *(long *)(param_1 + 0x410);
  *(void **)(param_1 + 0x418) = pvVar5;
  lVar2 = lVar6 + (ulong)uVar3 * 0x28;
  pvVar5 = malloc((ulong)((int)sVar4 + 1));
  *(void **)(lVar2 + 8) = pvVar5;
  memcpy(pvVar5,param_2,sVar4 & 0xffffffff);
  *(undefined *)(*(long *)(lVar2 + 8) + (sVar4 & 0xffffffff)) = 0;
  pvVar5 = malloc((ulong)param_4 << 2);
  *(void **)(lVar6 + (ulong)uVar3 * 0x28) = pvVar5;
  memcpy(pvVar5,param_3,(ulong)param_4 << 2);
  lVar6 = *(long *)(param_1 + 0x418);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(uint *)(lVar2 + 0x18) = param_4;
  *(undefined4 *)(lVar2 + 0x1c) = 0xffffffff;
  *(ulong *)(lVar2 + 0x20) = lVar6 + (ulong)uVar3;
  *(undefined *)(lVar6 + (ulong)uVar3) = 0;
  *(uint *)(param_1 + 0x420) = uVar1;
  return 0;
}


