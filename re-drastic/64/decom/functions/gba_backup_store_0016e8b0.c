/*
 * Ghidra decompilation
 *
 * Function : gba_backup_store
 * Address  : 0016e8b0
 * Program  : drastic64
 */


void gba_backup_store(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 & 0xff;
  uVar4 = (uint)param_2;
  if (*(char *)(param_1 + 0x440) == '\x01') {
    *(char *)(*(long *)(param_1 + 0x428) + (ulong)(*(int *)(param_1 + 0x434) - 1U & uVar4)) =
         (char)param_3;
    *(undefined4 *)(param_1 + 0x43c) = 0x3c;
    return;
  }
  if (*(char *)(param_1 + 0x440) != '\x03') {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x441);
  if (uVar1 == 0xf0 && cVar2 == '\x02') goto LAB_0016e938;
  if (uVar4 == 0x5555) {
    if (cVar2 != '\x03') {
      if (uVar1 == 0xaa && *(char *)(param_1 + 0x442) == '\0') {
        *(undefined *)(param_1 + 0x442) = 1;
        return;
      }
      if (*(char *)(param_1 + 0x442) != '\x02') {
        return;
      }
      if (uVar1 == 0x90) {
        if (cVar2 == '\0') {
          *(undefined *)(param_1 + 0x441) = 2;
          *(undefined *)(param_1 + 0x442) = 0;
          return;
        }
      }
      else if (uVar1 < 0x91) {
        if (uVar1 == 0x10) {
          if (cVar2 == '\x01') {
            memset(*(void **)(param_1 + 0x428),0,(ulong)*(uint *)(param_1 + 0x434));
            *(undefined4 *)(param_1 + 0x43c) = 0x3c;
            *(undefined *)(param_1 + 0x441) = 0;
            *(undefined *)(param_1 + 0x442) = 0;
            return;
          }
        }
        else if ((uVar1 == 0x80) && (cVar2 == '\0')) {
          *(undefined *)(param_1 + 0x441) = 1;
        }
      }
      else if (uVar1 == 0xa0) {
        if (cVar2 == '\0') {
          *(undefined *)(param_1 + 0x441) = 3;
          *(undefined *)(param_1 + 0x442) = 0;
          return;
        }
      }
      else if ((uVar1 == 0xb0) && (*(int *)(param_1 + 0x434) == 0x20000 && cVar2 == '\0')) {
        *(undefined *)(param_1 + 0x441) = 4;
        *(undefined *)(param_1 + 0x442) = 0;
        return;
      }
      *(undefined *)(param_1 + 0x442) = 0;
      return;
    }
LAB_0016e9c0:
    uVar3 = *(uint *)(param_1 + 0x440) & 0xffff00;
    if (uVar3 == 0x20100) {
      if (uVar1 != 0x30) {
        return;
      }
      memset((void *)(*(long *)(param_1 + 0x428) +
                     (ulong)*(uint *)(param_1 + 0x438) + (param_2 & 0xf000)),0xff,0x1000);
      *(undefined2 *)(param_1 + 0x441) = 0;
      *(undefined4 *)(param_1 + 0x43c) = 0x3c;
      return;
    }
  }
  else {
    if (uVar1 != 0x55 || uVar4 != 0x2aaa) goto LAB_0016e9c0;
    if (*(char *)(param_1 + 0x442) == '\x01') {
      *(undefined *)(param_1 + 0x442) = 2;
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x440) & 0xffff00;
    if (uVar3 == 0x20100) {
      return;
    }
  }
  if (uVar3 != 0x400) {
    if (uVar3 != 0x300) {
      return;
    }
    *(char *)(*(long *)(param_1 + 0x428) + (ulong)(uVar4 + *(int *)(param_1 + 0x438))) =
         (char)param_3;
    *(undefined4 *)(param_1 + 0x43c) = 0x3c;
    *(undefined *)(param_1 + 0x441) = 0;
    return;
  }
  if (uVar4 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x438) = (param_3 & 1) << 0x10;
LAB_0016e938:
  *(undefined *)(param_1 + 0x441) = 0;
  return;
}


