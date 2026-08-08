/*
 * Ghidra decompilation
 *
 * Function : set_screen_hires_mode
 * Address  : 0018a2c0
 * Program  : drastic64
 */


void set_screen_hires_mode(uint param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)(param_1 ^ (uint)DAT_040315cc);
  if ((byte)(&DAT_04031541)[uVar8 * 0x28] != param_2) {
    bVar1 = param_2 != 0;
    iVar4 = 0xc000;
    if (bVar1) {
      iVar4 = 0x30000;
    }
    uVar6 = 0x100;
    if (bVar1) {
      uVar6 = 0x200;
    }
    uVar7 = 0xc0;
    if (bVar1) {
      uVar7 = 0x180;
    }
    if ((&SDL_screen)[uVar8 * 5] != 0) {
      SDL_DestroyTexture();
    }
    uVar2 = SDL_CreateTexture(DAT_04031578,DAT_040315a0,1,uVar6,uVar7);
    lVar5 = uVar8 * 0x28;
    (&SDL_screen)[uVar8 * 5] = uVar2;
    if (*(void **)(&DAT_04031528 + lVar5) == (void *)0x0) {
      pvVar3 = malloc((ulong)(uint)(iVar4 * DAT_040315a8));
      *(void **)(&DAT_04031528 + lVar5) = pvVar3;
    }
    else {
      pvVar3 = realloc(*(void **)(&DAT_04031528 + lVar5),(ulong)(uint)(iVar4 * DAT_040315a8));
      *(void **)(&DAT_04031528 + lVar5) = pvVar3;
    }
    (&DAT_04031541)[uVar8 * 0x28] = (char)param_2;
  }
  return;
}


