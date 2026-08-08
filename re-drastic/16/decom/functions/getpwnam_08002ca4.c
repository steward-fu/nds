/*
 * Ghidra decompilation
 *
 * Function : getpwnam
 * Address  : 08002ca4
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
                    /* WARNING: Treating indirect jump as call */
  ppVar1 = (passwd *)(*(code *)(undefined *)0x0)();
  return ppVar1;
}


