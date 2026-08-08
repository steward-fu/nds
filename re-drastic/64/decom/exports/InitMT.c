/*
 * Ghidra decompilation
 *
 * Function : InitMT
 * Address  : 001ccf10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::InitMT() */

void Unpack::InitMT(void)

{
  uint uVar1;
  long in_x0;
  long lVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x38) == 0) {
    pvVar4 = operator_new__(0x400400);
    *(void **)(in_x0 + 0x38) = pvVar4;
    memset(pvVar4,0,0x400400);
    lVar2 = *(long *)(in_x0 + 0x28);
  }
  else {
    lVar2 = *(long *)(in_x0 + 0x28);
  }
  if (lVar2 == 0) {
    uVar1 = *(int *)(in_x0 + 0x30) * 2;
    uVar6 = (ulong)uVar1;
    puVar3 = (ulong *)operator_new__(uVar6 * 0x4af8 + 8);
    lVar2 = uVar6 - 1;
    puVar5 = puVar3 + 1;
    *puVar3 = uVar6;
    puVar3 = puVar5;
    if (uVar6 != 0) {
      do {
                    /* try { // try from 001ccfe8 to 001ccfeb has its CatchHandler @ 001cd2d0 */
        BitInput::BitInput((BitInput *)(puVar3 + 1),false);
        puVar3[0x95c] = 0;
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 0x95f;
      } while (lVar2 != -1);
    }
    *(ulong **)(in_x0 + 0x28) = puVar5;
    if (uVar1 != 0) {
      lVar2 = 0;
      while( true ) {
        *(undefined8 *)((long)puVar5 + lVar2) = 0;
        BitInput::BitInput((BitInput *)&local_20,false);
        *(undefined8 *)((long)puVar5 + lVar2 + 8) = local_20;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x10) = uStack_18;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x18) = local_10;
        BitInput::~BitInput((BitInput *)&local_20);
        *(undefined *)((long)puVar5 + lVar2 + 0x20) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x24) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2c) = 0;
        *(undefined2 *)((long)puVar5 + lVar2 + 0x34) = 0;
        *(undefined *)((long)puVar5 + lVar2 + 0x38) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0x3c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x40) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x48) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x50) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x58) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x60) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x68) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x70) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x78) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x80) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x88) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x90) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x98) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xa0) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xa8) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xb0) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xb8) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0xc0) = 0;
        memset((void *)((long)puVar5 + lVar2 + 0xc4),0,0x400);
        memset((void *)((long)puVar5 + lVar2 + 0x4c4),0,0x800);
        memset((void *)((long)puVar5 + lVar2 + 0xcc4),0,0x264);
        *(undefined4 *)((long)puVar5 + lVar2 + 0xf28) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf2c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf34) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf3c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf44) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf4c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf54) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf5c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf64) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf6c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf74) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf7c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf84) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf8c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf94) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xf9c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0xfa4) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0xfac) = 0;
        memset((void *)((long)puVar5 + lVar2 + 0xfb0),0,0x400);
        memset((void *)((long)puVar5 + lVar2 + 0x13b0),0,0x800);
        memset((void *)((long)puVar5 + lVar2 + 0x1bb0),0,0x264);
        *(undefined4 *)((long)puVar5 + lVar2 + 0x1e14) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e18) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e20) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e28) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e30) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e38) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e40) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e48) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e50) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e58) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e60) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e68) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e70) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e78) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e80) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e88) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x1e90) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0x1e98) = 0;
        memset((void *)((long)puVar5 + lVar2 + 0x1e9c),0,0x400);
        memset((void *)((long)puVar5 + lVar2 + 0x229c),0,0x800);
        memset((void *)((long)puVar5 + lVar2 + 0x2a9c),0,0x264);
        *(undefined4 *)((long)puVar5 + lVar2 + 0x2d00) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d04) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d0c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d14) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d1c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d24) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d2c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d34) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d3c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d44) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d4c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d54) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d5c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d64) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d6c) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d74) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x2d7c) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0x2d84) = 0;
        memset((void *)((long)puVar5 + lVar2 + 0x2d88),0,0x400);
        memset((void *)((long)puVar5 + lVar2 + 0x3188),0,0x800);
        memset((void *)((long)puVar5 + lVar2 + 0x3988),0,0x264);
        *(undefined4 *)((long)puVar5 + lVar2 + 0x3bec) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3bf0) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3bf8) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c00) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c08) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c10) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c18) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c20) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c28) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c30) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c38) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c40) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c48) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c50) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c58) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c60) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x3c68) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0x3c70) = 0;
        memset((void *)((long)puVar5 + lVar2 + 0x3c74),0,0x400);
        memset((void *)((long)puVar5 + lVar2 + 0x4074),0,0x800);
        memset((void *)((long)puVar5 + lVar2 + 0x4874),0,0x264);
        *(undefined8 *)((long)puVar5 + lVar2 + 0x4ad8) = 0;
        *(undefined4 *)((long)puVar5 + lVar2 + 0x4af0) = 0;
        *(undefined8 *)((long)puVar5 + lVar2 + 0x4ae8) = 0x410000000000;
        pvVar4 = malloc(0x30c00);
        *(void **)((long)puVar5 + lVar2 + 0x4ae0) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        lVar2 = lVar2 + 0x4af8;
        if ((ulong)(uVar1 - 1) * 0x4af8 + 0x4af8 == lVar2) break;
        puVar5 = *(ulong **)(in_x0 + 0x28);
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


