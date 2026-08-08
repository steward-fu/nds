/*
 * Ghidra decompilation
 *
 * Function : update_screen
 * Address  : 0018a120
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_screen(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_14;
  void *local_10;
  long local_8;
  
  param_1 = param_1 & 0xffffffff;
  lVar4 = param_1 * 0x28;
  local_8 = ___stack_chk_guard;
  if ((&DAT_04031540)[lVar4] != '\0') {
    iVar1 = (uint)(byte)(&DAT_04031541)[lVar4] * 0xc0 + 0xc0;
    uVar2 = ((byte)(&DAT_04031541)[lVar4] + 1) * 0x100 * DAT_040315a8;
    SDL_LockTexture((&SDL_screen)[param_1 * 5],0,&local_10,&local_14,0);
    if (local_14 == uVar2) {
      memcpy(local_10,*(void **)(&DAT_04031528 + lVar4),(ulong)(iVar1 * local_14));
    }
    else {
      iVar5 = 0;
      uVar6 = 0;
      __printf_chk(1,"Funny pitch: %d vs %d\n",local_14,uVar2);
      do {
        uVar3 = iVar5 * local_14;
        iVar5 = iVar5 + 1;
        memcpy((void *)((long)local_10 + (ulong)uVar3),
               (void *)(*(long *)(&DAT_04031528 + lVar4) + uVar6),(ulong)uVar2);
        uVar6 = (ulong)((int)uVar6 + uVar2);
      } while (iVar1 != iVar5);
    }
    SDL_UnlockTexture((&SDL_screen)[param_1 * 5]);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


