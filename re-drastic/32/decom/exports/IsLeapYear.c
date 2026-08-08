/*
 * Ghidra decompilation
 *
 * Function : IsLeapYear
 * Address  : 080e1eec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsLeapYear(int Year)

{
  bool bVar1;
  
  if ((Year & 3U) != 0) {
    return false;
  }
  if (Year % 100 == 0) {
    bVar1 = Year % 400 == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


