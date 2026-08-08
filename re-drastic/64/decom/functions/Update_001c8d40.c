/*
 * Ghidra decompilation
 *
 * Function : Update
 * Address  : 001c8d40
 * Program  : drastic64
 */


/* DataHash::Update(void const*, unsigned long) */

void __thiscall DataHash::Update(DataHash *this,void *param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)this;
  if (iVar4 == 1) {
    uVar2 = Checksum14(*(ushort *)(this + 4),param_1,param_2);
    iVar4 = *(int *)this;
    *(uint *)(this + 4) = uVar2 & 0xffff;
  }
  if (iVar4 == 2) {
    uVar1 = CRC32(*(uint *)(this + 4),param_1,param_2);
    iVar4 = *(int *)this;
    *(undefined4 *)(this + 4) = uVar1;
  }
  if (iVar4 != 3) {
    return;
  }
  uVar2 = *(uint *)(this + 0xc48);
  lVar3 = *(long *)(this + 0xc40);
  if ((1 < uVar2) && (lVar3 == 0)) {
    lVar3 = CreateThreadPool();
    uVar2 = *(uint *)(this + 0xc48);
    *(long *)(this + 0xc40) = lVar3;
  }
  *(long *)(this + 0xc30) = lVar3;
  *(uint *)(this + 0xc38) = uVar2;
  blake2sp_update((blake2sp_state *)(this + 8),(uchar *)param_1,param_2);
  return;
}


