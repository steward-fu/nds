/*
 * Ghidra decompilation
 *
 * Function : luaF_getlocalname
 * Address  : 08115ad4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaF_getlocalname(Proto *f,int local_number,int pc)

{
  LocVar *pLVar1;
  int iVar2;
  int iVar3;
  
  if (0 < f->sizelocvars) {
    iVar3 = 0;
    iVar2 = f->locvars->startpc;
    pLVar1 = f->locvars;
    while (iVar2 <= pc) {
      iVar3 = iVar3 + 1;
      if ((pc < pLVar1->endpc) && (local_number = local_number + -1, local_number == 0)) {
        return (char *)&pLVar1->varname[1].tt;
      }
      if (iVar3 == f->sizelocvars) {
        return (char *)0x0;
      }
      iVar2 = pLVar1[1].startpc;
      pLVar1 = pLVar1 + 1;
    }
  }
  return (char *)0x0;
}


