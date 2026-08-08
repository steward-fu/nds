/*
 * Ghidra decompilation
 *
 * Function : InitFilters30
 * Address  : 001d0160
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::InitFilters30() */

void Unpack::InitFilters30(void)

{
  long in_x0;
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (*(void **)(in_x0 + 0xe950) != (void *)0x0) {
    free(*(void **)(in_x0 + 0xe950));
    *(undefined8 *)(in_x0 + 0xe950) = 0;
  }
  *(undefined8 *)(in_x0 + 0xe958) = 0;
  *(undefined8 *)(in_x0 + 0xe960) = 0;
  uVar2 = *(ulong *)(in_x0 + 0xe918);
  pvVar1 = *(void **)(in_x0 + 0xe910);
  *(undefined4 *)(in_x0 + 0xe970) = 0;
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
        pvVar1 = *(void **)(in_x0 + 0xe910);
        uVar2 = *(ulong *)(in_x0 + 0xe918);
      }
    } while (uVar4 < uVar2);
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *(undefined8 *)(in_x0 + 0xe910) = 0;
  }
  *(undefined8 *)(in_x0 + 0xe918) = 0;
  *(undefined8 *)(in_x0 + 0xe920) = 0;
  uVar2 = *(ulong *)(in_x0 + 0xe938);
  pvVar1 = *(void **)(in_x0 + 0xe930);
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
        pvVar1 = *(void **)(in_x0 + 0xe930);
        uVar2 = *(ulong *)(in_x0 + 0xe938);
      }
    } while (uVar4 < uVar2);
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *(undefined8 *)(in_x0 + 0xe930) = 0;
  }
  *(undefined8 *)(in_x0 + 0xe938) = 0;
  *(undefined8 *)(in_x0 + 0xe940) = 0;
  return;
}


