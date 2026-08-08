/*
 * Ghidra decompilation
 *
 * Function : IsSignature
 * Address  : 001b9e40
 * Program  : drastic64
 */


/* Archive::IsSignature(unsigned char const*, unsigned long) */

ulong __thiscall Archive::IsSignature(Archive *this,uchar *param_1,ulong param_2)

{
  uchar uVar1;
  
  if ((param_2 != 0) && (*param_1 == 'R')) {
    if ((param_2 < 4) || (param_1[1] != 'E')) {
      if ((((6 < param_2) && (param_1[1] == 'a')) && (param_1[2] == 'r')) &&
         (((param_1[3] == '!' && (param_1[4] == '\x1a')) && (param_1[5] == '\a')))) {
        uVar1 = param_1[6];
        if (uVar1 == '\0') {
          return 2;
        }
        if (uVar1 != '\x01') {
          return (ulong)(uVar1 == '\x02') << 2;
        }
        return 3;
      }
    }
    else if (param_1[2] == '~') {
      return (ulong)(param_1[3] == '^');
    }
  }
  return 0;
}


