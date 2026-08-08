/*
 * Ghidra decompilation
 *
 * Function : escape_str
 * Address  : 08093490
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void escape_str(char *dest,char *src)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = *src;
  if (cVar2 != '\0') {
    do {
      switch(cVar2) {
      case '\"':
        puVar1 = (undefined4 *)((int)dest + 5);
        *(undefined4 *)dest = 0x6f757126;
        *(undefined2 *)((int)dest + 4) = 0x3b74;
        *(undefined *)((int)dest + 6) = 0;
        break;
      default:
        puVar1 = (undefined4 *)((int)dest + 1);
        *dest = cVar2;
        break;
      case '&':
        puVar1 = (undefined4 *)((int)dest + 5);
        *(undefined4 *)dest = 0x706d6126;
        *(undefined2 *)((int)dest + 4) = 0x3b;
        break;
      case '\'':
        *(undefined4 *)dest = 0x6f706126;
        *(undefined2 *)((int)dest + 4) = 0x3b73;
        puVar1 = (undefined4 *)((int)dest + 6);
        *(undefined *)puVar1 = 0;
        break;
      case '<':
        *(undefined4 *)dest = 0x3b746c26;
        puVar1 = (undefined4 *)((int)dest + 4);
        *(undefined *)puVar1 = 0;
        break;
      case '>':
        *(undefined4 *)dest = 0x3b746726;
        puVar1 = (undefined4 *)((int)dest + 4);
        *(undefined *)puVar1 = 0;
      }
      src = src + 1;
      cVar2 = *src;
      dest = (char *)puVar1;
    } while (cVar2 != '\0');
    *(undefined *)puVar1 = 0;
    return;
  }
  *dest = '\0';
  return;
}


