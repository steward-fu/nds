/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command
 * Address  : 001627b0
 * Program  : drastic64
 */


void queue_geometry_command(long param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_1 + 0x9ac1);
  if (cVar1 == '\0') {
    param_2 = param_2 & 0x7f;
    puVar4 = *(undefined **)(param_1 + 0x9a68);
    if ((*(char *)(param_1 + 0x9aca) == '\0') ||
       (lVar5 = *(long *)(param_1 + 0x9a30), nds_system[lVar5 + 0x362e99f] == '\0')) {
      bVar2 = geometry_command_parameters[param_2];
      if (param_2 == 0x50) {
        *(undefined *)(param_1 + 0x9aca) = 1;
        *puVar4 = (char)param_2;
      }
      else {
        *puVar4 = (char)param_2;
        if (1 < bVar2) {
          puVar3 = *(undefined4 **)(param_1 + 0x9a70);
          *puVar3 = param_3;
          *(undefined4 **)(param_1 + 0x9a80) = puVar3 + 1;
          *(byte *)(param_1 + 0x9ac1) = bVar2 - 1;
          return;
        }
      }
      puVar4 = puVar4 + 1;
      if (bVar2 != 0) {
        puVar3 = *(undefined4 **)(param_1 + 0x9a70) + 1;
        **(undefined4 **)(param_1 + 0x9a70) = param_3;
        *(undefined4 **)(param_1 + 0x9a70) = puVar3;
        *(undefined4 **)(param_1 + 0x9a80) = puVar3;
      }
      *(undefined **)(param_1 + 0x9a68) = puVar4;
      *(undefined **)(param_1 + 0x9a78) = puVar4;
      if (0x400 < (long)puVar4 - (param_1 + 0x79b00)) {
        process_geometry(param_1);
      }
      if (*(char *)(param_1 + 0x9aca) != '\0') {
        process_geometry(param_1);
        *(undefined *)(param_1 + 0x9aca) = 1;
      }
    }
    else {
      *(uint *)((long)&__DT_SYMTAB[0x103].st_name + param_1) = param_2;
      *(undefined4 *)(&__DT_SYMTAB[0x103].st_info + param_1) = param_3;
      *(undefined *)(param_1 + 0x9ac9) = 1;
      *(undefined4 *)(nds_system + lVar5 + 0x10cde58) = 0;
      *(uint *)(nds_system + lVar5 + 0x10cde60) = *(uint *)(nds_system + lVar5 + 0x10cde60) | 4;
      *(uint *)(nds_system + lVar5 + 0x10cdff8) = *(uint *)(nds_system + lVar5 + 0x10cdff8) | 0x10;
    }
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x9a80) + 1;
    **(undefined4 **)(param_1 + 0x9a80) = param_3;
    *(undefined4 **)(param_1 + 0x9a80) = puVar3;
    if (cVar1 == '\x01') {
      lVar5 = *(long *)(param_1 + 0x9a68) + 1;
      *(long *)(param_1 + 0x9a68) = lVar5;
      *(undefined4 **)(param_1 + 0x9a70) = puVar3;
      *(long *)(param_1 + 0x9a78) = lVar5;
      if (0x400 < lVar5 - (param_1 + 0x79b00)) {
        process_geometry();
      }
    }
    *(char *)(param_1 + 0x9ac1) = cVar1 + -1;
  }
  return;
}


