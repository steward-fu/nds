/*
 * Ghidra decompilation
 *
 * Function : BufferOutStream_Write
 * Address  : 080c6b90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable buffer:CBufferOutStream *[r0:4] conflicts with parameter, skipped. */

size_t BufferOutStream_Write(void *pp,void *data,size_t size)

{
  uint uVar1;
  u32 frame_end;
  uint uVar2;
  uint __n;
  int iVar3;
  u32 frame_start;
  
  iVar3 = *(int *)((int)pp + 0xc);
  uVar2 = *(uint *)((int)pp + 0x14);
  uVar1 = iVar3 + size;
  *(uint *)((int)pp + 0xc) = uVar1;
  if (uVar1 < uVar2) {
    __n = 0;
  }
  else {
    __n = *(uint *)((int)pp + 0x10);
    if (uVar1 - uVar2 < *(uint *)((int)pp + 0x10)) {
      __n = uVar1 - uVar2;
    }
    memcpy((void *)(*(int *)((int)pp + 4) + *(int *)((int)pp + 8)),
           (void *)((int)data + (uVar2 - iVar3)),__n);
    *(uint *)((int)pp + 8) = *(int *)((int)pp + 8) + __n;
    *(uint *)((int)pp + 0x10) = *(int *)((int)pp + 0x10) - __n;
    *(uint *)((int)pp + 0x14) = *(int *)((int)pp + 0x14) + __n;
  }
  return __n;
}


