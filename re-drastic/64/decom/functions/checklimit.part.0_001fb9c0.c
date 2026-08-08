/*
 * Ghidra decompilation
 *
 * Function : checklimit.part.0
 * Address  : 001fb9c0
 * Program  : drastic64
 */


void checklimit_part_0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = "main function";
  iVar1 = *(int *)(*param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1[2] + 0x38);
  if (iVar1 != 0) {
    pcVar2 = (char *)luaO_pushfstring(uVar3,"function at line %d",iVar1,*param_1,"main function");
  }
  uVar3 = luaO_pushfstring(uVar3,"too many %s (limit is %d) in %s",param_3,param_2,pcVar2);
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(param_1[2],uVar3);
}


