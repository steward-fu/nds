/*
 * Ghidra decompilation
 *
 * Function : FUN_001d015c
 * Address  : 001d015c
 * Program  : drastic64
 */


void FUN_001d015c(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (*(void **)(param_1 + 0xe950) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe950));
    *(undefined8 *)(param_1 + 0xe950) = 0;
  }
  *(undefined8 *)(param_1 + 0xe958) = 0;
  *(undefined8 *)(param_1 + 0xe960) = 0;
  uVar2 = *(ulong *)(param_1 + 0xe918);
  pvVar1 = *(void **)(param_1 + 0xe910);
  *(undefined4 *)(param_1 + 0xe970) = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar3 = *(void **)((long)pvVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((long)pvVar3 + 0x68) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x68));
        }
        if (*(void **)((long)pvVar3 + 0x48) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x48));
        }
        if (*(void **)((long)pvVar3 + 0x18) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x18));
        }
        operator_delete(pvVar3,0xb8);
        pvVar1 = *(void **)(param_1 + 0xe910);
        uVar2 = *(ulong *)(param_1 + 0xe918);
      }
    } while (uVar4 < uVar2);
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *(undefined8 *)(param_1 + 0xe910) = 0;
  }
  *(undefined8 *)(param_1 + 0xe918) = 0;
  *(undefined8 *)(param_1 + 0xe920) = 0;
  uVar2 = *(ulong *)(param_1 + 0xe938);
  pvVar1 = *(void **)(param_1 + 0xe930);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar3 = *(void **)((long)pvVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((long)pvVar3 + 0x68) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x68));
        }
        if (*(void **)((long)pvVar3 + 0x48) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x48));
        }
        if (*(void **)((long)pvVar3 + 0x18) != (void *)0x0) {
          free(*(void **)((long)pvVar3 + 0x18));
        }
        operator_delete(pvVar3,0xb8);
        pvVar1 = *(void **)(param_1 + 0xe930);
        uVar2 = *(ulong *)(param_1 + 0xe938);
      }
    } while (uVar4 < uVar2);
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *(undefined8 *)(param_1 + 0xe930) = 0;
  }
  *(undefined8 *)(param_1 + 0xe938) = 0;
  *(undefined8 *)(param_1 + 0xe940) = 0;
  return;
}


