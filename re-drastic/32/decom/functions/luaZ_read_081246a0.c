/*
 * Ghidra decompilation
 *
 * Function : luaZ_read
 * Address  : 081246a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t luaZ_read(ZIO *z,void *b,size_t n)

{
  char *__src;
  char *buff;
  size_t sVar1;
  size_t m;
  size_t size;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  if (n != 0) {
    sVar1 = z->n;
    do {
      if (sVar1 == 0) {
        __src = (*z->reader)(z->L,z->data,&size);
        if ((__src == (char *)0x0) || (size == 0)) goto LAB_0812475c;
        z->n = size;
        z->p = __src;
        sVar1 = size;
      }
      else {
        __src = z->p;
      }
      m = sVar1;
      if (n < sVar1) {
        m = n;
      }
      memcpy(b,__src,m);
      n = n - m;
      sVar1 = z->n - m;
      z->n = sVar1;
      z->p = z->p + m;
      b = (void *)((int)b + m);
    } while (n != 0);
  }
  n = 0;
LAB_0812475c:
  if (local_1c == __stack_chk_guard) {
    return n;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


