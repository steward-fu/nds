/*
 * Ghidra decompilation
 *
 * Function : SearchBlock
 * Address  : 001bdfd0
 * Program  : drastic64
 */


/* Archive::SearchBlock(HEADER_TYPE) */

long __thiscall Archive::SearchBlock(Archive *this,HEADER_TYPE param_1)

{
  HEADER_TYPE HVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (this[0x11221] == (Archive)0x0) {
    uVar5 = 0;
    if (param_1 != 5) {
      uVar3 = (**(code **)(*(long *)this + 0x20))(this);
      *(undefined8 *)(this + 0x111f8) = uVar3;
      iVar2 = *(int *)(this + 0x11208);
      if (iVar2 == 2) goto LAB_001be17c;
      do {
        if (iVar2 == 3) {
          lVar4 = ReadHeader50();
        }
        else {
          if (iVar2 != 1) {
            return 0;
          }
          lVar4 = ReadHeader14();
        }
        while( true ) {
          if (lVar4 == 0) {
            return 0;
          }
          if (*(long *)(this + 0x11200) <= *(long *)(this + 0x111f8)) goto LAB_001be1d0;
          if (*(int *)(this + 0x7624) == 5) {
            return 0;
          }
          uVar5 = uVar5 + 1;
          if ((uVar5 & 0x7f) == 0) {
            Wait();
            HVar1 = *(HEADER_TYPE *)(this + 0x7624);
          }
          else {
            HVar1 = *(HEADER_TYPE *)(this + 0x7624);
          }
          if (param_1 == HVar1) {
            return lVar4;
          }
          SeekToNext();
          if (this[0x11221] != (Archive)0x0) {
            return 0;
          }
          uVar3 = (**(code **)(*(long *)this + 0x20))(this);
          *(undefined8 *)(this + 0x111f8) = uVar3;
          iVar2 = *(int *)(this + 0x11208);
          if (iVar2 != 2) break;
LAB_001be17c:
          lVar4 = ReadHeader15();
        }
      } while( true );
    }
    do {
      uVar3 = (**(code **)(*(long *)this + 0x20))(this);
      *(undefined8 *)(this + 0x111f8) = uVar3;
      iVar2 = *(int *)(this + 0x11208);
      if (iVar2 == 2) {
        lVar4 = ReadHeader15();
      }
      else if (iVar2 == 3) {
        lVar4 = ReadHeader50();
      }
      else {
        if (iVar2 != 1) {
          return 0;
        }
        lVar4 = ReadHeader14();
      }
      if (lVar4 == 0) {
        return 0;
      }
      if (*(long *)(this + 0x11200) <= *(long *)(this + 0x111f8)) {
LAB_001be1d0:
        this[0x11220] = (Archive)0x1;
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
        return 0;
      }
      uVar5 = uVar5 + 1;
      if ((uVar5 & 0x7f) == 0) {
        Wait();
      }
      if (*(int *)(this + 0x7624) == 5) {
        return lVar4;
      }
      SeekToNext();
    } while (this[0x11221] == (Archive)0x0);
  }
  return 0;
}


