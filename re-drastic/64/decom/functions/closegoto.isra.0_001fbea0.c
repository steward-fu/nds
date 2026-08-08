/*
 * Ghidra decompilation
 *
 * Function : closegoto.isra.0
 * Address  : 001fbea0
 * Program  : drastic64
 */


void closegoto_isra_0(long param_1,int param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x58);
  plVar3 = *(long **)(param_1 + 0x30);
  lVar5 = (long)param_2 * 0x18;
  lVar1 = *(long *)(lVar6 + 0x10) + lVar5;
  if ((uint)param_4 <= (uint)*(byte *)(lVar1 + 0x10)) {
    luaK_patchlist(plVar3,*(undefined4 *)(lVar1 + 8));
    iVar2 = *(int *)(lVar6 + 0x18) + -1;
    if (param_2 < iVar2) {
      memmove((void *)(*(long *)(lVar6 + 0x10) + lVar5),
              (void *)(*(long *)(lVar6 + 0x10) + lVar5 + 0x18),
              (ulong)((*(int *)(lVar6 + 0x18) - param_2) - 2) * 0x18 + 0x18);
    }
    *(int *)(lVar6 + 0x18) = iVar2;
    return;
  }
  uVar4 = luaO_pushfstring(*(undefined8 *)(param_1 + 0x38),
                           "<goto %s> at line %d jumps into the scope of local \'%s\'",
                           *(long *)(*(long *)(lVar6 + 0x10) + lVar5) + 0x20,
                           *(undefined4 *)(lVar1 + 0xc),
                           *(long *)(*(long *)(*plVar3 + 0x50) +
                                    (long)*(short *)(**(long **)(plVar3[2] + 0x58) +
                                                    (long)(int)((uint)*(byte *)(lVar1 + 0x10) +
                                                               *(int *)((long)plVar3 + 0x34)) * 2) *
                                    0x10) + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(param_1,uVar4);
}


