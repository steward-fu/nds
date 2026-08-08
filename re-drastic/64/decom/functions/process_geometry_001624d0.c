/*
 * Ghidra decompilation
 *
 * Function : process_geometry
 * Address  : 001624d0
 * Program  : drastic64
 */


void process_geometry(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *__src;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong __n;
  void *__src_00;
  
  __ptr = (void *)(param_1 + 0x79b00);
  __ptr_00 = (void *)(param_1 + 0x81b00);
  __src = *(void **)(param_1 + 0x9a68);
  if ((*(uint *)(*(long *)(param_1 + 0x9a30) + 0x8a374) >> 4 & 1) == 0) {
    uVar1 = (long)__src - (long)__ptr & 0xffffffff;
    if ((*(char *)((long)&__DT_SYMTAB[0x104].st_size + param_1) == '\x02') && (__src != __ptr)) {
      __printf_chk(1,"logging %d commands, %d parameters\n",(long)__src - (long)__ptr,
                   (ulong)(*(long *)(param_1 + 0x9a70) - (long)__ptr_00) >> 2 & 0xffffffff);
      fwrite(__ptr,1,(ulong)(uint)((int)*(undefined8 *)(param_1 + 0x9a68) - (int)__ptr),
             *(FILE **)((long)&__DT_SYMTAB[0x103].st_value + param_1));
      fwrite(__ptr_00,1,*(long *)(param_1 + 0x9a70) - (long)__ptr_00 & 0x3fffffffc,
             *(FILE **)((long)&__DT_SYMTAB[0x103].st_size + param_1));
      uVar1 = (ulong)(uint)((int)*(undefined8 *)(param_1 + 0x9a68) - (int)__ptr);
    }
    process_geometry_commands(param_1,uVar1);
    __src = *(void **)(param_1 + 0x9a68);
  }
  __src_00 = *(void **)(param_1 + 0x9a70);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x9a78);
  uVar3 = *(long *)(param_1 + 0x9a80) - (long)__src_00 >> 2;
  uVar1 = (ulong)(uint)(iVar2 - (int)__src);
  if (iVar2 != (int)__src) {
    memcpy(__ptr,__src,uVar1);
  }
  __n = -(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2;
  if ((int)uVar3 != 0) {
    memcpy(__ptr_00,__src_00,__n);
  }
  *(void **)(param_1 + 0x9a68) = __ptr;
  *(void **)(param_1 + 0x9a70) = __ptr_00;
  *(ulong *)(param_1 + 0x9a78) = (long)__ptr + uVar1;
  *(ulong *)(param_1 + 0x9a80) = (long)__ptr_00 + __n;
  *(undefined *)(param_1 + 0x9aca) = 0;
  return;
}


