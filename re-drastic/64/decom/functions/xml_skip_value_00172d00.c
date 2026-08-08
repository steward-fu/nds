/*
 * Ghidra decompilation
 *
 * Function : xml_skip_value
 * Address  : 00172d00
 * Program  : drastic64
 */


void xml_skip_value(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  do {
    pcVar2 = param_1;
    if (cVar3 == '\'' || cVar3 == '\0') {
      return;
    }
    while( true ) {
      bVar1 = cVar3 == '\\';
      param_1 = pcVar2 + 1;
      cVar3 = *param_1;
      if (bVar1) break;
      pcVar2 = param_1;
      if (cVar3 == '\'' || cVar3 == '\0') {
        return;
      }
    }
    if (cVar3 == '\'') {
      param_1 = pcVar2 + 2;
      cVar3 = *param_1;
    }
  } while( true );
}


