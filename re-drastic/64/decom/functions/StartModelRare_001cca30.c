/*
 * Ghidra decompilation
 *
 * Function : StartModelRare
 * Address  : 001cca30
 * Program  : drastic64
 */


/* ModelPPM::StartModelRare(int) */

void __thiscall ModelPPM::StartModelRare(ModelPPM *this,int param_1)

{
  int iVar1;
  ModelPPM *pMVar2;
  int iVar3;
  ModelPPM MVar4;
  int iVar5;
  
  *(int *)(this + 0x674) = param_1;
  this[0xa80] = (ModelPPM)0x1;
  RestartModelRare();
  *(undefined2 *)(this + 0x880) = 0x200;
  *(undefined8 *)(this + 0x882) = 0x404040404040404;
  this[0x88a] = (ModelPPM)0x4;
  memset(this + 0x88b,6,0xf5);
  iVar5 = 1;
  pMVar2 = this + 0x783;
  iVar3 = 1;
  MVar4 = (ModelPPM)0x3;
  *(undefined2 *)(this + 0x780) = 0x100;
  this[0x782] = (ModelPPM)0x2;
  do {
    *pMVar2 = MVar4;
    iVar1 = iVar5;
    iVar3 = iVar3 + -1;
    while (iVar5 = iVar1, pMVar2 = pMVar2 + 1, iVar3 == 0) {
      MVar4 = (ModelPPM)((char)MVar4 + '\x01');
      if (pMVar2 == this + 0x880) goto LAB_001ccadc;
      *pMVar2 = MVar4;
      iVar1 = iVar5 + 1;
      iVar3 = iVar5;
    }
  } while (pMVar2 != this + 0x880);
LAB_001ccadc:
  *(undefined8 *)(this + 0x980) = 0;
  *(undefined8 *)(this + 0x988) = 0;
  *(undefined8 *)(this + 0x990) = 0;
  *(undefined8 *)(this + 0x998) = 0;
  *(undefined8 *)(this + 0x9a0) = 0;
  *(undefined8 *)(this + 0x9a8) = 0;
  *(undefined8 *)(this + 0x9b0) = 0;
  *(undefined8 *)(this + 0x9b8) = 0;
  memset(this + 0x9c0,8,0xc0);
  this[0x642] = (ModelPPM)0x7;
  return;
}


