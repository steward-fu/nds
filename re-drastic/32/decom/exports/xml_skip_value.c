/*
 * Ghidra decompilation
 *
 * Function : xml_skip_value
 * Address  : 08093788
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * xml_skip_value(char *str)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *str;
  if (cVar1 != '\0' && cVar1 != '\'') {
    do {
      while (bVar2 = cVar1 != '\\', cVar1 = str[1], bVar2) {
        str = str + 1;
        if (cVar1 == '\'' || cVar1 == '\0') {
          return str;
        }
      }
      if (cVar1 == '\'') {
        cVar1 = str[2];
        str = str + 1;
      }
      str = str + 1;
    } while (cVar1 != '\'' && cVar1 != '\0');
  }
  return str;
}


