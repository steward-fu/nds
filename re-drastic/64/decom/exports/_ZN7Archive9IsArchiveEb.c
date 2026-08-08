/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive9IsArchiveEb
 * Address  : 001bab30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::IsArchive(bool) */

Archive __thiscall Archive::IsArchive(Archive *this,bool param_1)

{
  Archive *pAVar1;
  Archive AVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  Archive AVar9;
  int iVar10;
  uint uVar11;
  void *__ptr;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  char *pcVar18;
  longlong lVar19;
  long local_30;
  longlong local_28;
  uint local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x11214] = (Archive)0x0;
  this[0x11220] = (Archive)0x0;
  pcVar14 = *(code **)(*(long *)this + 0x18);
  this[0x8668] = (Archive)0x0;
  if (pcVar14 == Seek) {
    cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),0,0);
    if (cVar8 == '\0') {
      File::Seek((File *)this,0,0);
    }
  }
  else {
    (*pcVar14)();
  }
  cVar8 = File::IsDevice();
  if (cVar8 == '\0') {
    pAVar1 = this + 0x86ec;
    if (*(code **)(*(long *)this + 0x10) == Read) {
      cVar8 = QuickOpen::Read((QuickOpen *)(this + 0x7630),pAVar1,7,(ulong *)&local_10);
      uVar11 = local_10;
      if (cVar8 == '\0') {
        uVar11 = File::Read((File *)this,pAVar1,7);
      }
    }
    else {
      uVar11 = (**(code **)(*(long *)this + 0x10))(this,pAVar1,7);
    }
    if (uVar11 == 7) {
      *(undefined8 *)(this + 0x11218) = 0;
      AVar9 = (Archive)0x0;
      if (this[0x86ec] == (Archive)0x52) {
        if (this[0x86ed] == (Archive)0x45) {
          if ((this[0x86ee] != (Archive)0x7e) || (this[0x86ef] != (Archive)0x5e)) goto LAB_001bac24;
          pcVar14 = *(code **)(*(long *)this + 0x18);
          *(undefined4 *)(this + 0x11208) = 1;
          if (pcVar14 == Seek) {
            cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),0,0);
            if (cVar8 == '\0') {
              File::Seek((File *)this,0,0);
            }
          }
          else {
            (*pcVar14)(this);
          }
          goto LAB_001bada0;
        }
        if ((((this[0x86ed] != (Archive)0x61) || (this[0x86ee] != (Archive)0x72)) ||
            (this[0x86ef] != (Archive)0x21)) ||
           ((this[0x86f0] != (Archive)0x1a || (this[0x86f1] != (Archive)0x7)))) goto LAB_001bac24;
        AVar2 = this[0x86f2];
        if (AVar2 == (Archive)0x0) {
          *(undefined4 *)(this + 0x11208) = 2;
          goto LAB_001badb4;
        }
        if (AVar2 != (Archive)0x1) {
          if (AVar2 == (Archive)0x2) {
            *(undefined4 *)(this + 0x11208) = 4;
            goto LAB_001bae60;
          }
          goto LAB_001bac24;
        }
        *(undefined4 *)(this + 0x11208) = 3;
LAB_001bb180:
        pAVar1 = this + 0x86f3;
        if (*(code **)(*(long *)this + 0x10) == Read) {
          cVar8 = QuickOpen::Read((QuickOpen *)(this + 0x7630),pAVar1,1,(ulong *)&local_10);
          if (cVar8 == '\0') {
            File::Read((File *)this,pAVar1,1);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x10))(this,pAVar1,1);
        }
        if (this[0x86f3] == (Archive)0x0) {
          *(undefined4 *)(this + 0x86f4) = 8;
LAB_001badbc:
          if (*(long *)(*(long *)(this + 0x7600) + 0x125d0) == 0) {
            this[0x7628] = (Archive)0x1;
          }
          while (((lVar15 = ReadHeader(), lVar15 != 0 && (*(int *)(this + 0x7624) != 1)) &&
                 ((*(int *)(this + 0x7624) == 4 & (byte)this[0x7628]) == 0))) {
            lVar19 = *(longlong *)(this + 0x11200);
            if (*(code **)(*(long *)this + 0x18) == Seek) {
              cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar19,0);
              if (cVar8 == '\0') {
                File::Seek((File *)this,lVar19,0);
              }
            }
            else {
              (**(code **)(*(long *)this + 0x18))(this,lVar19,0);
            }
          }
          if ((byte)(param_1 | (byte)this[0x11221] ^ 1) != 0) {
            lVar19 = *(longlong *)(this + 0x11200);
            if (*(code **)(*(long *)this + 0x18) == Seek) {
              cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar19,0);
              if (cVar8 == '\0') {
                File::Seek((File *)this,lVar19,0);
              }
            }
            else {
              (**(code **)(*(long *)this + 0x18))(this,lVar19,0);
            }
            AVar2 = (Archive)(param_1 | (byte)this[0x11220] ^ 1);
            if (AVar2 != (Archive)0x0) {
              this[0x1120e] = this[0x8714];
              if ((this[0x7628] == (Archive)0x0) || (this[0x11214] == (Archive)0x0)) {
                if (*(code **)(*(long *)this + 0x20) == Tell) {
                  cVar8 = QuickOpen::Tell((QuickOpen *)(this + 0x7630),(longlong *)&local_10);
                  if (cVar8 == '\0') {
                    local_28 = File::Tell();
                  }
                  else {
                    local_28 = CONCAT44(uStack_c,local_10);
                  }
                }
                else {
                  local_28 = (**(code **)(*(long *)this + 0x20))(this);
                }
                uVar12 = *(undefined8 *)(this + 0x111f8);
                uVar13 = *(undefined8 *)(this + 0x11200);
                    /* try { // try from 001bb04c to 001bb0c7 has its CatchHandler @ 001bb404 */
                while (lVar15 = ReadHeader(), lVar15 != 0) {
                  AVar9 = this[0x1120d];
                  if (*(int *)(this + 0x7624) != 3) {
                    AVar9 = (Archive)((byte)AVar9 & *(int *)(this + 0x7624) == 2);
                    if (AVar9 != (Archive)0x0) {
                      AVar9 = (Archive)((byte)this[0xa808] ^ 1);
                    }
                    this[0x11211] = AVar9;
                    break;
                  }
                  if (AVar9 != (Archive)0x0) {
                    AVar9 = (Archive)((byte)this[0xeb60] ^ 1);
                  }
                  this[0x11211] = AVar9;
                  lVar19 = *(longlong *)(this + 0x11200);
                  if (*(code **)(*(long *)this + 0x18) == Seek) {
                    cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),lVar19,0);
                    if (cVar8 == '\0') {
                      File::Seek((File *)this,lVar19,0);
                    }
                  }
                  else {
                    (**(code **)(*(long *)this + 0x18))(this,lVar19,0);
                  }
                }
                pcVar14 = *(code **)(*(long *)this + 0x18);
                *(undefined8 *)(this + 0x111f8) = uVar12;
                *(undefined8 *)(this + 0x11200) = uVar13;
                if (pcVar14 == Seek) {
                  cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),local_28,0);
                  if (cVar8 == '\0') {
                    File::Seek((File *)this,local_28,0);
                  }
                }
                else {
                  (*pcVar14)(this,local_28,0);
                }
              }
              AVar9 = this[0x1120d];
              if ((AVar9 == (Archive)0x0) || (this[0x11211] != (Archive)0x0)) {
                wcscpy((wchar_t *)(this + 0x11254),(wchar_t *)(this + 0x20));
                AVar9 = AVar2;
              }
              goto LAB_001bae60;
            }
          }
        }
      }
      else {
LAB_001bac24:
        __ptr = malloc(0x100000);
        if (__ptr == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        if (*(code **)(*(long *)this + 0x20) == Tell) {
                    /* try { // try from 001bac58 to 001bac97 has its CatchHandler @ 001bb3e4 */
          cVar8 = QuickOpen::Tell((QuickOpen *)(this + 0x7630),(longlong *)&local_10);
          if (cVar8 == '\0') {
                    /* try { // try from 001baf48 to 001baf4b has its CatchHandler @ 001bb3e4 */
            local_30 = File::Tell();
          }
          else {
            local_30 = CONCAT44(uStack_c,local_10);
          }
        }
        else {
          local_30 = (**(code **)(*(long *)this + 0x20))(this);
        }
        if (*(code **)(*(long *)this + 0x10) == Read) {
          cVar8 = QuickOpen::Read((QuickOpen *)(this + 0x7630),__ptr,0xffff0,(ulong *)&local_10);
          if (cVar8 == '\0') {
                    /* try { // try from 001bb210 to 001bb213 has its CatchHandler @ 001bb3e4 */
            uVar16 = File::Read((File *)this,__ptr,0xffff0);
            uVar16 = uVar16 & 0xffffffff;
          }
          else {
            uVar16 = (ulong)local_10;
          }
        }
        else {
                    /* try { // try from 001bb324 to 001bb337 has its CatchHandler @ 001bb3e4 */
          uVar16 = (**(code **)(*(long *)this + 0x10))(this,__ptr,0xffff0);
          uVar16 = uVar16 & 0xffffffff;
        }
        lVar15 = 0;
        pcVar18 = (char *)((long)__ptr + (0x1c - local_30));
        if (0 < (int)uVar16) {
          do {
            iVar17 = (int)lVar15;
            if ((*(char *)((long)__ptr + lVar15) == 'R') &&
               (iVar10 = IsSignature(this,(uchar *)((long)__ptr + lVar15),
                                     (long)((int)uVar16 - iVar17)), iVar10 != 0)) {
              *(int *)(this + 0x11208) = iVar10;
              if (iVar10 == 1) {
                bVar3 = false;
                bVar4 = true;
                bVar6 = false;
                if (local_30 < 0x1c) {
                  iVar10 = (int)uVar16;
                  bVar6 = SBORROW4(iVar10,0x1f);
                  bVar3 = iVar10 + -0x1f < 0;
                  bVar4 = iVar10 == 0x1f;
                }
                bVar7 = false;
                bVar5 = true;
                if (!bVar4 && bVar3 == bVar6) {
                  bVar7 = (int)lVar15 < 0;
                  bVar5 = (int)lVar15 == 0;
                }
                if ((!bVar5 && !bVar7) &&
                   ((((*pcVar18 != 'R' || (pcVar18[1] != 'S')) || (pcVar18[2] != 'F')) ||
                    (pcVar18[3] != 'X')))) goto LAB_001bacc0;
              }
              pcVar14 = *(code **)(*(long *)this + 0x18);
              local_30 = local_30 + iVar17;
              *(long *)(this + 0x11218) = local_30;
              if (pcVar14 == Seek) {
                    /* try { // try from 001bad78 to 001bad7b has its CatchHandler @ 001bb3fc */
                cVar8 = QuickOpen::Seek((QuickOpen *)(this + 0x7630),local_30,0);
                if (cVar8 == '\0') {
                    /* try { // try from 001bb390 to 001bb3bb has its CatchHandler @ 001bb3fc */
                  File::Seek((File *)this,local_30,0);
                }
              }
              else {
                (*pcVar14)(this,local_30,0);
              }
              if (*(int *)(this + 0x11208) - 2U < 2) {
                if (*(code **)(*(long *)this + 0x10) == Read) {
                    /* try { // try from 001bb2e4 to 001bb2ff has its CatchHandler @ 001bb3fc */
                  cVar8 = QuickOpen::Read((QuickOpen *)(this + 0x7630),pAVar1,7,(ulong *)&local_10);
                  if (cVar8 == '\0') {
                    File::Read((File *)this,pAVar1,7);
                  }
                  if (*(long *)(this + 0x11218) != 0) goto LAB_001bb22c;
                  goto LAB_001bb308;
                }
                (**(code **)(*(long *)this + 0x10))(this,pAVar1,7);
              }
              break;
            }
LAB_001bacc0:
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < (int)uVar16);
        }
        if (*(long *)(this + 0x11218) == 0) {
          if (__ptr != (void *)0x0) {
LAB_001bb308:
            free(__ptr);
          }
          goto LAB_001bae60;
        }
        if (__ptr != (void *)0x0) {
LAB_001bb22c:
          free(__ptr);
        }
LAB_001bada0:
        if (*(int *)(this + 0x11208) != 4) {
          if (*(int *)(this + 0x11208) == 3) goto LAB_001bb180;
LAB_001badb4:
          *(undefined4 *)(this + 0x86f4) = 7;
          goto LAB_001badbc;
        }
      }
    }
  }
  AVar9 = (Archive)0x0;
LAB_001bae60:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return AVar9;
}


