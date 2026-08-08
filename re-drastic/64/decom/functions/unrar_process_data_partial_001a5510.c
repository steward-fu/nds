/*
 * Ghidra decompilation
 *
 * Function : unrar_process_data_partial
 * Address  : 001a5510
 * Program  : drastic64
 */


bool unrar_process_data_partial(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar5 = DAT_004ec428;
  uVar4 = DAT_004ec424;
  DAT_004ec428 = param_2 + DAT_004ec428;
  if (DAT_004ec428 < DAT_004ec424) {
    return DAT_004ec420 != 0;
  }
  uVar2 = DAT_004ec428 - DAT_004ec424;
  uVar1 = uVar2;
  if (DAT_004ec420 < uVar2) {
    uVar1 = DAT_004ec420;
  }
  if (DAT_004ec420 < uVar2) {
    uVar2 = DAT_004ec420;
  }
  iVar3 = DAT_004ec420 - uVar2;
  pvVar6 = memcpy(unrar_userdata,(void *)(param_1 + (ulong)(DAT_004ec424 - iVar5)),(ulong)uVar1);
  unrar_userdata = (void *)((long)pvVar6 + (ulong)uVar1);
  DAT_004ec420 = iVar3;
  DAT_004ec424 = uVar4 + uVar2;
  return iVar3 != 0;
}


