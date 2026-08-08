/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4InitEP7Archiveb
 * Address  : 001eca30
 * Program  : drastic64
 */


/* QuickOpen::Init(Archive*, bool) */

void __thiscall QuickOpen::Init(QuickOpen *this,Archive *param_1,bool param_2)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  if ((param_1 != (Archive *)0x0) && (ppvVar2 = *(void ***)(this + 0x10), ppvVar2 != (void **)0x0))
  {
    pvVar1 = *ppvVar2;
    ppvVar3 = (void **)ppvVar2[3];
    if (pvVar1 == (void *)0x0) goto LAB_001ecaa0;
    do {
      operator_delete__(pvVar1);
      operator_delete(ppvVar2,0x20);
      ppvVar2 = ppvVar3;
      while( true ) {
        if (ppvVar2 == (void **)0x0) goto LAB_001ecaa8;
        pvVar1 = *ppvVar2;
        ppvVar3 = (void **)ppvVar2[3];
        if (pvVar1 != (void *)0x0) break;
LAB_001ecaa0:
        operator_delete(ppvVar2,0x20);
        ppvVar2 = ppvVar3;
      }
    } while( true );
  }
LAB_001ecaa8:
  *(Archive **)this = param_1;
  this[8] = (QuickOpen)param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(this + 0x20) == 0) {
    pvVar1 = operator_new__(0x10000);
    *(void **)(this + 0x20) = pvVar1;
    *(undefined8 *)(this + 0x28) = 0;
    this[0x1038] = (QuickOpen)0x0;
    return;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x1038] = (QuickOpen)0x0;
  return;
}


