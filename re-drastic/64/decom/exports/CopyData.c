/*
 * Ghidra decompilation
 *
 * Function : CopyData
 * Address  : 001e1720
 * Program  : drastic64
 */


/* FragmentedWindow::CopyData(unsigned char*, unsigned long, unsigned long) */

void __thiscall
FragmentedWindow::CopyData(FragmentedWindow *this,uchar *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uchar *puVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = param_2;
    do {
      if (uVar4 < *(ulong *)(this + 0x100)) {
        puVar3 = (uchar *)(*(long *)this + uVar4);
      }
      else {
        uVar2 = 1;
        do {
          uVar1 = uVar2 + 1;
          if (uVar4 < *(ulong *)(this + uVar2 * 8 + 0x100)) {
            puVar3 = (uchar *)(*(long *)(this + (uVar2 & 0xffffffff) * 8) +
                              (uVar4 - *(long *)(this + ((ulong)((int)uVar2 - 1) + 0x20) * 8)));
            goto LAB_001e1780;
          }
          uVar2 = uVar1;
        } while (uVar1 != 0x20);
        puVar3 = *(uchar **)this;
      }
LAB_001e1780:
      param_1[uVar4 - param_2] = *puVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3 + param_2);
  }
  return;
}


