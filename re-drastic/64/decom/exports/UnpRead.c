/*
 * Ghidra decompilation
 *
 * Function : UnpRead
 * Address  : 001c30f0
 * Program  : drastic64
 */


/* ComprDataIO::UnpRead(unsigned char*, unsigned long) */

int __thiscall ComprDataIO::UnpRead(ComprDataIO *this,uchar *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  
  uVar7 = param_2 & 0xfffffffffffffff0;
  if (this[0x45c1] == (ComprDataIO)0x0) {
    uVar7 = param_2;
  }
  iVar10 = 0;
  uVar12 = 0;
  puVar9 = param_1;
  do {
    iVar11 = (int)uVar12;
    plVar13 = *(long **)(this + 0x50);
    if (uVar7 == 0) {
LAB_001c326c:
      if ((plVar13 != (long *)0x0) && (this[0x48] != (ComprDataIO)0x0)) {
        lVar5 = plVar13[0x223f] + *(long *)(this + 0x20b0);
        lVar6 = *(longlong *)(this + 0x2098);
        if (*(long *)(this + 0x20c8) != 0) {
          lVar5 = lVar5 + *(long *)(this + 0x20c0);
          lVar6 = *(long *)(this + 0x20c8);
        }
        lVar8 = plVar13[0xec0];
        iVar3 = ToPercent(lVar5,lVar6);
        if ((*(char *)(lVar8 + 0xc250) == '\0') && (iVar3 != *(int *)(this + 0x2088))) {
          *(int *)(this + 0x2088) = iVar3;
        }
      }
      if (iVar11 == -1) {
        iVar10 = -1;
      }
      else if (this[0x45c1] != (ComprDataIO)0x0) {
        CryptData::DecryptBlock((CryptData *)(this + 0x1080),param_1,(long)iVar10);
      }
      Wait();
      return iVar10;
    }
    if (*this == (ComprDataIO)0x0) {
      uVar12 = *(ulong *)(this + 0x40);
      if ((long)uVar12 < (long)uVar7) {
        if (uVar12 == 0) {
          return 0;
        }
        lVar5 = plVar13[1];
      }
      else {
        lVar5 = plVar13[1];
        uVar12 = uVar7;
      }
      if (lVar5 == 0) {
        return -1;
      }
      uVar4 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar9,uVar12);
      uVar12 = uVar4 & 0xffffffff;
      plVar1 = plVar13 + 0x10ee;
      if (*(long **)(this + 0x68) != (long *)0x0) {
        plVar1 = *(long **)(this + 0x68);
      }
      uVar4 = (ulong)(int)uVar4;
      if (*(char *)((long)plVar1 + 0x2099) != '\0') {
        DataHash::Update((DataHash *)(this + 0x20d0),puVar9,uVar4);
      }
    }
    else {
      memcpy(param_1,*(void **)(this + 0x10),*(size_t *)(this + 8));
      uVar4 = *(ulong *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      uVar12 = uVar4 & 0xffffffff;
      uVar4 = (ulong)(int)uVar4;
    }
    lVar5 = *(long *)(this + 0x40);
    iVar11 = (int)uVar12;
    iVar10 = iVar10 + iVar11;
    *(ulong *)(this + 0x40) = lVar5 - uVar4;
    *(ulong *)(this + 0x20b0) = *(long *)(this + 0x20b0) + uVar4;
    puVar9 = puVar9 + uVar4;
    uVar7 = uVar7 - uVar4;
    if ((lVar5 - uVar4 != 0) || (this[0x2091] == (ComprDataIO)0x0)) {
      plVar13 = *(long **)(this + 0x50);
      goto LAB_001c326c;
    }
    cVar2 = MergeArchive((Archive *)plVar13,this,true,*(wchar_t *)(this + 0x208c));
    if (cVar2 == '\0') {
      this[0x2092] = (ComprDataIO)0x1;
      return -1;
    }
  } while( true );
}


