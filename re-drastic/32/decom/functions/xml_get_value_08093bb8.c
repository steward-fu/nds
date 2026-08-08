/*
 * Ghidra decompilation
 *
 * Function : xml_get_value
 * Address  : 08093bb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * xml_get_value(xml_line_struct *xml_line,char *parameter_name)

{
  int iVar1;
  u32 uVar2;
  char **ppcVar3;
  u32 uVar4;
  
  uVar4 = xml_line->num_parameters;
  if (uVar4 != 0) {
    ppcVar3 = &xml_line->tag_name;
    uVar2 = 0;
    do {
      ppcVar3 = ppcVar3 + 1;
      iVar1 = strcmp(*ppcVar3,parameter_name);
      if (iVar1 == 0) {
        return xml_line->parameter_values[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return (char *)0x0;
}


