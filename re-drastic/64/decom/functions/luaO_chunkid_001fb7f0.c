/*
 * Ghidra decompilation
 *
 * Function : luaO_chunkid
 * Address  : 001fb7f0
 * Program  : drastic64
 */


void luaO_chunkid(undefined8 *param_1,char *param_2,ulong param_3)

{
  void *__dest;
  size_t __n;
  size_t __n_00;
  char *pcVar1;
  
  __n_00 = strlen(param_2);
  if (*param_2 == '=') {
    if (param_3 < __n_00) {
      memcpy(param_1,param_2 + 1,param_3 - 1);
      *(undefined *)((long)param_1 + (param_3 - 1)) = 0;
      return;
    }
  }
  else {
    if (*param_2 != '@') {
      pcVar1 = strchr(param_2,10);
      __dest = (void *)((long)param_1 + 9);
      *param_1 = 0x20676e697274735b;
      *(char *)(param_1 + 1) = '\"';
      param_3 = param_3 - 0xf;
      if (pcVar1 == (char *)0x0 && __n_00 < param_3) {
        memcpy(__dest,param_2,__n_00);
      }
      else {
        __n = (long)pcVar1 - (long)param_2;
        if (pcVar1 == (char *)0x0) {
          __n = __n_00;
        }
        if (param_3 < __n) {
          __n = param_3;
        }
        memcpy(__dest,param_2,__n);
        __n_00 = __n + 3;
        *(undefined2 *)((long)__dest + __n) = 0x2e2e;
        *(undefined *)((long)__dest + __n + 2) = 0x2e;
      }
      *(undefined2 *)((long)__dest + __n_00) = 0x5d22;
      *(undefined *)((undefined2 *)((long)__dest + __n_00) + 1) = 0;
      return;
    }
    if (param_3 < __n_00) {
      *(undefined2 *)param_1 = 0x2e2e;
      *(undefined *)((long)param_1 + 2) = 0x2e;
      memcpy((void *)((long)param_1 + 3),param_2 + (__n_00 - (param_3 - 3)) + 1,param_3 - 3);
      return;
    }
  }
  memcpy(param_1,param_2 + 1,__n_00);
  return;
}


