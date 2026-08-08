/*
 * Ghidra decompilation
 *
 * Function : operator=
 * Address  : 08102d18
 * Program  : drastic
 */


/* DWARF original prototype: FileHeader * operator=(FileHeader * this, FileHeader * hd) */

FileHeader * __thiscall FileHeader::operator=(FileHeader *this,FileHeader *hd)

{
  uchar *puVar1;
  uchar *NewBuffer;
  uint __size;
  size_t __n;
  size_t NewSize;
  
  puVar1 = (this->SubData).Buffer;
  if (puVar1 != (uchar *)0x0) {
    free(puVar1);
    (this->SubData).Buffer = (uchar *)0x0;
  }
  (this->SubData).BufSize = 0;
  (this->SubData).AllocSize = 0;
  memcpy(this,hd,0x4300);
  (this->SubData).BufSize = 0;
  (this->SubData).AllocSize = 0;
  (this->SubData).MaxSize = 0;
  __size = (hd->SubData).BufSize;
  (this->SubData).Buffer = (uchar *)0x0;
  if (__size != 0) {
    (this->SubData).BufSize = __size;
    if (__size < 0x20) {
      __size = 0x20;
    }
    puVar1 = (uchar *)realloc((void *)0x0,__size);
    if (puVar1 == (uchar *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    (this->SubData).AllocSize = __size;
    __n = (hd->SubData).BufSize;
    (this->SubData).Buffer = puVar1;
    if (__n != 0) {
      memcpy(puVar1,(hd->SubData).Buffer,__n);
    }
  }
  return this;
}


