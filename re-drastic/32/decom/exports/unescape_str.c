/*
 * Ghidra decompilation
 *
 * Function : unescape_str
 * Address  : 08093604
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void unescape_str(char *dest,char *src,u32 length,u32 dest_length_cap)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *__s1;
  
  if (length != 0) {
    pcVar3 = dest + (dest_length_cap - 1);
    uVar2 = 0;
    do {
      if (src[uVar2] == '&') {
        __s1 = src + uVar2 + 1;
        iVar1 = strncmp(__s1,"amp;",4);
        if (iVar1 == 0) {
          uVar2 = uVar2 + 3;
          *dest = '&';
        }
        else {
          iVar1 = strncmp(__s1,"apos;",5);
          if (iVar1 == 0) {
            uVar2 = uVar2 + 4;
            *dest = '\'';
          }
          else {
            iVar1 = strncmp(__s1,"quot;",5);
            if (iVar1 == 0) {
              uVar2 = uVar2 + 4;
              *dest = '\"';
            }
            else {
              iVar1 = strncmp(__s1,"lt;",3);
              if (iVar1 == 0) {
                uVar2 = uVar2 + 2;
                *dest = '<';
              }
              else {
                iVar1 = strncmp(__s1,"gt;",3);
                if (iVar1 == 0) {
                  uVar2 = uVar2 + 2;
                  *dest = '>';
                }
              }
            }
          }
        }
        src = src + 1;
        if (length <= uVar2) {
          return;
        }
      }
      else {
        *dest = src[uVar2];
      }
      if (pcVar3 == dest) {
        return;
      }
      uVar2 = uVar2 + 1;
      dest = dest + 1;
    } while (uVar2 < length);
  }
  return;
}


