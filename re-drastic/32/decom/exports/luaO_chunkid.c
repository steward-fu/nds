/*
 * Ghidra decompilation
 *
 * Function : luaO_chunkid
 * Address  : 08119664
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaO_chunkid(char *out,char *source,size_t bufflen)

{
  size_t __n;
  size_t l;
  char *pcVar1;
  char *nl;
  void *pvVar2;
  char *__src;
  size_t __n_00;
  uint __n_01;
  undefined2 *puVar3;
  
  __n = strlen(source);
  if (*source == '=') {
    if (bufflen < __n) {
      memcpy(out,source + 1,bufflen - 1);
      out[bufflen - 1] = '\0';
      return;
    }
  }
  else {
    if (*source != '@') {
      __n_01 = bufflen - 0xf;
      pcVar1 = strchr(source,10);
      *(undefined4 *)out = 0x7274735b;
      *(undefined4 *)(out + 4) = 0x20676e69;
      out[8] = '\"';
      if (pcVar1 == (char *)0x0 && __n < __n_01) {
        pvVar2 = memcpy(out + 9,source,__n);
        puVar3 = (undefined2 *)((int)pvVar2 + __n);
      }
      else {
        if (pcVar1 != (char *)0x0) {
          __n = (int)pcVar1 - (int)source;
        }
        if (__n < __n_01) {
          __n_01 = __n;
        }
        pvVar2 = memcpy(out + 9,source,__n_01);
        puVar3 = (undefined2 *)((int)pvVar2 + __n_01 + 3);
        *(undefined2 *)((int)pvVar2 + __n_01) = 0x2e2e;
        *(undefined *)((int)pvVar2 + __n_01 + 2) = 0x2e;
      }
      *puVar3 = 0x5d22;
      *(undefined *)(puVar3 + 1) = 0;
      return;
    }
    if (bufflen < __n) {
      __n_00 = bufflen - 3;
      pcVar1 = out + 3;
      __src = source + (1 - __n_00) + __n;
      *(undefined2 *)out = 0x2e2e;
      out[2] = '.';
      goto LAB_08119774;
    }
  }
  __src = source + 1;
  pcVar1 = out;
  __n_00 = __n;
LAB_08119774:
  memcpy(pcVar1,__src,__n_00);
  return;
}


