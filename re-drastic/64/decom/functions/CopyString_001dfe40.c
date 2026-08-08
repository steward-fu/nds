/*
 * Ghidra decompilation
 *
 * Function : CopyString
 * Address  : 001dfe40
 * Program  : drastic64
 */


/* FragmentedWindow::CopyString(unsigned int, unsigned int, unsigned long&, unsigned long) */

void __thiscall
FragmentedWindow::CopyString
          (FragmentedWindow *this,uint param_1,uint param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  uVar6 = *param_3;
  uVar5 = uVar6 - param_2;
  uVar2 = (ulong)(param_1 - 1) + 1 + uVar5;
  if (param_1 != 0) {
    do {
      uVar3 = param_4 & uVar5;
      uVar5 = uVar5 + 1;
      if (uVar3 < *(ulong *)(this + 0x100)) {
        puVar4 = (undefined *)(*(long *)this + uVar3);
      }
      else {
        uVar8 = 1;
        do {
          uVar1 = uVar8 + 1;
          if (uVar3 < *(ulong *)(this + uVar8 * 8 + 0x100)) {
            puVar4 = (undefined *)
                     (*(long *)(this + (uVar8 & 0xffffffff) * 8) +
                     (uVar3 - *(long *)(this + ((ulong)((int)uVar8 - 1) + 0x20) * 8)));
            goto LAB_001dfeb0;
          }
          uVar8 = uVar1;
        } while (uVar1 != 0x20);
        puVar4 = *(undefined **)this;
      }
LAB_001dfeb0:
      if (uVar6 < *(ulong *)(this + 0x100)) {
        puVar7 = (undefined *)(*(long *)this + uVar6);
      }
      else {
        uVar3 = 1;
        do {
          uVar8 = uVar3 + 1;
          if (uVar6 < *(ulong *)(this + uVar3 * 8 + 0x100)) {
            puVar7 = (undefined *)
                     (*(long *)(this + (uVar3 & 0xffffffff) * 8) +
                     (uVar6 - *(long *)(this + ((ulong)((int)uVar3 - 1) + 0x20) * 8)));
            goto LAB_001dfef4;
          }
          uVar3 = uVar8;
        } while (uVar8 != 0x20);
        puVar7 = *(undefined **)this;
      }
LAB_001dfef4:
      *puVar7 = *puVar4;
      uVar6 = *param_3 + 1 & param_4;
      *param_3 = uVar6;
    } while (uVar5 != uVar2);
  }
  return;
}


