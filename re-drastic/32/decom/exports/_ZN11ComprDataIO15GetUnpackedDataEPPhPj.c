/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO15GetUnpackedDataEPPhPj
 * Address  : 080e263c
 * Program  : drastic
 */


/* DWARF original prototype: void GetUnpackedData(ComprDataIO * this, byte * * Data, size_t * Size)
    */

void __thiscall ComprDataIO::GetUnpackedData(ComprDataIO *this,byte **Data,size_t *Size)

{
  size_t sVar1;
  
  sVar1 = this->UnpWrSize;
  *Data = this->UnpWrAddr;
  *Size = sVar1;
  return;
}


