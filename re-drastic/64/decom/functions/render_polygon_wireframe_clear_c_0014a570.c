/*
 * Ghidra decompilation
 *
 * Function : render_polygon_wireframe_clear_c
 * Address  : 0014a570
 * Program  : drastic64
 */


void render_polygon_wireframe_clear_c(long param_1,long param_2,int param_3)

{
  void *__s;
  size_t __n;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x630);
  uVar2 = (uint)*(ushort *)(param_1 + 0x6e0);
  uVar4 = (uint)*(ushort *)(param_1 + 0x6e2);
  iVar5 = 0;
  while( true ) {
    while( true ) {
      iVar1 = uVar3 - (uVar2 + uVar4);
      __s = (void *)(param_2 + (ulong)(ushort)uVar2);
      __n = (ulong)(iVar1 - 1) + 1;
      if (iVar1 != 0) break;
      iVar5 = iVar5 + 1;
      param_2 = (long)__s + (ulong)(ushort)uVar4;
      if (param_3 == iVar5) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
    memset(__s,0xff,__n);
    param_2 = (long)__s + __n + (ushort)uVar4;
    if (param_3 == iVar5) break;
    uVar3 = (uint)*(ushort *)(param_1 + 0x630);
    uVar2 = (uint)*(ushort *)(param_1 + 0x6e0);
    uVar4 = (uint)*(ushort *)(param_1 + 0x6e2);
  }
  return;
}


