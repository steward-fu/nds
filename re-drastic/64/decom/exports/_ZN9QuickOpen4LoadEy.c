/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4LoadEy
 * Address  : 001ecce0
 * Program  : drastic64
 */


/* QuickOpen::Load(unsigned long long) */

void __thiscall QuickOpen::Load(QuickOpen *this,ulonglong param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  
  plVar2 = *(long **)this;
  if (this[0x1038] == (QuickOpen)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x20))();
    plVar2 = *(long **)this;
    pcVar6 = *(code **)(*plVar2 + 0x20);
    *(undefined8 *)(this + 0x1098) = uVar3;
    this[0x10a0] = (QuickOpen)0x0;
    uVar3 = (*pcVar6)(plVar2);
                    /* try { // try from 001ecd54 to 001ecdab has its CatchHandler @ 001eceb4 */
    (**(code **)(**(long **)this + 0x18))(*(long **)this,param_1,0);
    lVar4 = Archive::ReadHeader();
    if (((lVar4 == 0) || (plVar7 = *(long **)this, *(int *)((long)plVar7 + 0x7624) != 3)) ||
       (iVar1 = wcscmp((wchar_t *)(plVar7 + 0x195d),L"QO"), iVar1 != 0)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3,0);
      return;
    }
    pcVar6 = *(code **)(*plVar7 + 0x20);
    *(long *)(this + 0x1040) = plVar7[0x223f];
    uVar5 = (*pcVar6)(plVar7);
    *(undefined8 *)(this + 0x1048) = uVar5;
    pcVar6 = *(code **)(*plVar2 + 0x18);
    *(undefined8 *)(this + 0x1050) = *(undefined8 *)(*(long *)this + 0xeb28);
    this[0x1038] = (QuickOpen)0x1;
    (*pcVar6)(plVar2,uVar3,0);
    plVar2 = *(long **)this;
  }
  if (*(char *)((long)plVar2 + 0xeb63) != '\0') {
    if (*(char *)(plVar2[0xec0] + 0xa22c) == '\0') {
      return;
    }
    CryptData::SetCryptKeys
              ((CryptData *)(this + 0x30),false,5,(SecPassword *)(plVar2[0xec0] + 0xa02c),
               (uchar *)((long)plVar2 + 0xeb69),(uchar *)((long)plVar2 + 0xeb79),
               *(uint *)((long)plVar2 + 0xebb4),(uchar *)((long)plVar2 + 0xeb93),
               (uchar *)((long)plVar2 + 0xeb8a));
  }
  *(undefined8 *)(this + 0x1058) = 0;
  *(undefined8 *)(this + 0x1060) = 0;
  *(undefined8 *)(this + 0x1068) = 0;
  if (*(void **)(this + 0x1070) != (void *)0x0) {
    free(*(void **)(this + 0x1070));
    *(undefined8 *)(this + 0x1070) = 0;
  }
  *(undefined8 *)(this + 0x1078) = 0;
  *(undefined8 *)(this + 0x1080) = 0;
  *(undefined8 *)(this + 0x1090) = 0;
  ReadBuffer();
  return;
}


