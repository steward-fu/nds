/*
 * Ghidra decompilation
 *
 * Function : _ZN4File4CopyERS_x
 * Address  : 080d64d4
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d655c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: int64 Copy(File * this, File * Dest, int64 Length) */

int64 __thiscall File::Copy(File *this,File *Dest,int64 Length)

{
  void *Data;
  char *NewBuffer;
  int ReadSize;
  void *pvVar1;
  void *in_r2;
  void *pvVar2;
  int in_r3;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  Data = realloc((void *)0x0,0x10000);
  if (Data == (void *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  uVar3 = 0;
  iVar4 = 0;
  pvVar1 = Data;
  if (in_r3 == 0x7fffffff && in_r2 == (void *)0x7fffffff) {
    while( true ) {
      Wait();
      pvVar1 = (void *)(*this->_vptr_File[2])(pvVar1,Data,0x10000);
      if (pvVar1 == (void *)0x0) break;
      Write(Dest,Data,(size_t)pvVar1);
      bVar5 = CARRY4(uVar3,(uint)pvVar1);
      uVar3 = uVar3 + (int)pvVar1;
      iVar4 = iVar4 + ((int)pvVar1 >> 0x1f) + (uint)bVar5;
    }
  }
  else {
    for (; (int)(in_r3 - (uint)(in_r2 == (void *)0x0)) < 0 ==
           (SBORROW4(in_r3,(uint)(in_r2 == (void *)0x0)) != false);
        in_r3 = in_r3 - (((int)pvVar1 >> 0x1f) + (uint)bVar5)) {
      Wait();
      pvVar2 = in_r2;
      if (0 < (int)(in_r3 + (uint)((void *)0xffff < in_r2)) !=
          (SBORROW4(-in_r3,(uint)((void *)0xffff < in_r2)) != false)) {
        pvVar2 = (void *)0x10000;
      }
      pvVar1 = (void *)(*this->_vptr_File[2])(pvVar1,Data,pvVar2);
      if (pvVar1 == (void *)0x0) break;
      Write(Dest,Data,(size_t)pvVar1);
      bVar5 = CARRY4(uVar3,(uint)pvVar1);
      uVar3 = uVar3 + (int)pvVar1;
      iVar4 = iVar4 + ((int)pvVar1 >> 0x1f) + (uint)bVar5;
      bVar5 = in_r2 < pvVar1;
      in_r2 = (void *)((int)in_r2 - (int)pvVar1);
    }
  }
  if (Data != (void *)0x0) {
    free(Data);
  }
  return CONCAT44(iVar4,uVar3);
}


