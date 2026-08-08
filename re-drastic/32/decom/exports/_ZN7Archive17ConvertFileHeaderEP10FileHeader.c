/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive17ConvertFileHeaderEP10FileHeader
 * Address  : 080db668
 * Program  : drastic
 */


/* DWARF original prototype: void ConvertFileHeader(Archive * this, FileHeader * hd) */

void __thiscall Archive::ConvertFileHeader(Archive *this,FileHeader *hd)

{
  wchar *s;
  wchar *pwVar1;
  wchar wVar2;
  HOST_SYSTEM_TYPE HVar3;
  
  if (((this->Format == RARFMT15) && (hd->UnpVer < 0x14)) && (((hd->field_3).FileAttr & 0x10) != 0))
  {
    HVar3 = hd->HSType;
    hd->Dir = true;
    if (HVar3 != HSYS_UNKNOWN) goto LAB_080db688;
  }
  else {
    HVar3 = hd->HSType;
    if (HVar3 != HSYS_UNKNOWN) goto LAB_080db688;
    if (hd->Dir == false) {
      (hd->field_3).FileAttr = 0x20;
      goto LAB_080db688;
    }
  }
  HVar3 = HSYS_UNKNOWN;
  (hd->field_3).FileAttr = 0x10;
LAB_080db688:
  wVar2 = hd->FileName[0];
  pwVar1 = hd->FileName;
  if (wVar2 == 0) {
    return;
  }
LAB_080db6c8:
  do {
    if (wVar2 == 0x5c) {
      if (this->Format == RARFMT50 && HVar3 == HSYS_WINDOWS) {
        *pwVar1 = 0x5f;
LAB_080db6bc:
        pwVar1 = pwVar1 + 1;
        wVar2 = *pwVar1;
        if (wVar2 == 0) {
          return;
        }
        goto LAB_080db6c8;
      }
      wVar2 = *pwVar1;
      if (wVar2 != 0x2f) goto LAB_080db6b4;
LAB_080db6f0:
      *pwVar1 = 0x2f;
    }
    else {
      wVar2 = *pwVar1;
      if (wVar2 == 0x2f) goto LAB_080db6f0;
LAB_080db6b4:
      if ((wVar2 != 0x5c) || (this->Format == RARFMT50)) goto LAB_080db6bc;
      *pwVar1 = 0x2f;
    }
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
    if (wVar2 == 0) {
      return;
    }
  } while( true );
}


