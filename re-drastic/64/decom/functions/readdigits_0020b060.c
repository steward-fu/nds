/*
 * Ghidra decompilation
 *
 * Function : readdigits
 * Address  : 0020b060
 * Program  : drastic64
 */


int readdigits(_IO_FILE **param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ushort **ppuVar3;
  _IO_FILE *p_Var4;
  byte *pbVar5;
  ushort *puVar6;
  
  ppuVar3 = __ctype_b_loc();
  uVar2 = *(uint *)(param_1 + 1);
  puVar6 = *ppuVar3;
  if (param_2 == 0) {
    while ((puVar6[(int)uVar2] >> 0xb & 1) != 0) {
      iVar1 = *(int *)((long)param_1 + 0xc);
      if (199 < iVar1) goto LAB_0020b0dc;
      *(int *)((long)param_1 + 0xc) = iVar1 + 1;
      *(char *)((long)param_1 + (long)iVar1 + 0x10) = (char)uVar2;
      p_Var4 = *param_1;
      pbVar5 = (byte *)p_Var4->_IO_read_ptr;
      if (pbVar5 < p_Var4->_IO_read_end) {
        p_Var4->_IO_read_ptr = (char *)(pbVar5 + 1);
        uVar2 = (uint)*pbVar5;
      }
      else {
        uVar2 = __uflow(p_Var4);
        puVar6 = *ppuVar3;
      }
      param_2 = param_2 + 1;
      *(uint *)(param_1 + 1) = uVar2;
    }
  }
  else {
    param_2 = 0;
    while ((puVar6[(int)uVar2] >> 0xc & 1) != 0) {
      iVar1 = *(int *)((long)param_1 + 0xc);
      if (199 < iVar1) {
LAB_0020b0dc:
        *(undefined *)(param_1 + 2) = 0;
        return param_2;
      }
      *(int *)((long)param_1 + 0xc) = iVar1 + 1;
      *(char *)((long)param_1 + (long)iVar1 + 0x10) = (char)uVar2;
      p_Var4 = *param_1;
      pbVar5 = (byte *)p_Var4->_IO_read_ptr;
      if (pbVar5 < p_Var4->_IO_read_end) {
        p_Var4->_IO_read_ptr = (char *)(pbVar5 + 1);
        uVar2 = (uint)*pbVar5;
      }
      else {
        uVar2 = __uflow(p_Var4);
        puVar6 = *ppuVar3;
      }
      param_2 = param_2 + 1;
      *(uint *)(param_1 + 1) = uVar2;
    }
  }
  return param_2;
}


