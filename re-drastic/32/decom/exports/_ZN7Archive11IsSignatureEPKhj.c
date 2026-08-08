/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive11IsSignatureEPKhj
 * Address  : 080d795c
 * Program  : drastic
 */


/* DWARF original prototype: RARFORMAT IsSignature(Archive * this, byte * D, size_t Size) */

RARFORMAT __thiscall Archive::IsSignature(Archive *this,byte *D,size_t Size)

{
  byte bVar1;
  RARFORMAT RVar2;
  
  if (Size == 0) {
    RVar2 = RARFMT_NONE;
  }
  else {
    RVar2 = (RARFORMAT)(*D == 'R');
    if (Size < 4) {
      RVar2 = RARFMT_NONE;
    }
    if (RVar2 != RARFMT_NONE) {
      if (D[1] == 'E') {
        if (D[2] == '~') {
          return (uint)(D[3] == '^');
        }
      }
      else if ((((6 < Size) && (D[1] == 'a')) && (D[2] == 'r')) &&
              (((D[3] == '!' && (D[4] == '\x1a')) && (D[5] == '\a')))) {
        bVar1 = D[6];
        if (bVar1 == '\0') {
          return RARFMT15;
        }
        if (bVar1 != '\x01') {
          if (bVar1 == '\x02') {
            return RARFMT_FUTURE;
          }
          return RARFMT_NONE;
        }
        return RARFMT50;
      }
      RVar2 = RARFMT_NONE;
    }
  }
  return RVar2;
}


