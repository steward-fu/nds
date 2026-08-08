/*
 * Ghidra decompilation
 *
 * Function : MergeArchive
 * Address  : 001cb2c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MergeArchive(Archive&, ComprDataIO*, bool, wchar_t) */

undefined MergeArchive(Archive *param_1,ComprDataIO *param_2,bool param_3,wchar_t param_4)

{
  wchar_t *pwVar1;
  Archive *pAVar2;
  HEADER_TYPE HVar3;
  uint uVar4;
  HASH_TYPE HVar5;
  bool bVar6;
  char cVar7;
  Archive AVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined uVar12;
  long lVar13;
  Archive *local_4828;
  wchar_t awStack_4808 [2048];
  wchar_t awStack_2808 [2048];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HVar3 = *(HEADER_TYPE *)(param_1 + 0x7624);
  lVar13 = *(long *)(param_1 + 0x7600);
  if (HVar3 == 3) {
    local_4828 = param_1 + 0xcac8;
LAB_001cb608:
    AVar8 = local_4828[0x2099];
    if (AVar8 == (Archive)0x0) goto LAB_001cb338;
    if (param_2 == (ComprDataIO *)0x0) {
      uVar10 = (**(code **)(*(long *)param_1 + 0x20))
                         (param_1,*(code **)(*(long *)param_1 + 0x20),local_4828,0);
      goto LAB_001cb354;
    }
    if ((*(int *)(param_1 + 0x11208) == 3) ||
       ((0x13 < (byte)local_4828[0x19] && (*(int *)(local_4828 + 0x2074) != -1)))) {
      pAVar2 = local_4828 + 0x20cb;
      if (local_4828[0x20ca] == (Archive)0x0) {
        pAVar2 = (Archive *)0x0;
      }
      DataHash::Cmp((DataHash *)(param_2 + 0x20d0),(HashValue *)(local_4828 + 0x2070),
                    (uchar *)pAVar2);
    }
    uVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  }
  else {
    local_4828 = param_1 + 0x8770;
    if (HVar3 - 2 < 2) goto LAB_001cb608;
LAB_001cb338:
    AVar8 = (Archive)0x0;
    uVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (param_2 == (ComprDataIO *)0x0) goto LAB_001cb354;
  }
  lVar11 = File::FileLength((File *)param_1);
  *(long *)(param_2 + 0x20c0) = *(long *)(param_2 + 0x20c0) + lVar11;
LAB_001cb354:
  pwVar1 = (wchar_t *)(param_1 + 0x20);
  File::Close();
  __wcscpy_chk(awStack_4808,pwVar1,0x800);
  NextVolumeName(awStack_4808,0x800,(bool)((byte)param_1[0x11212] ^ 1));
  bVar6 = false;
  cVar7 = File::Open((File *)param_1,awStack_4808,0);
  do {
    if (cVar7 != '\0') {
LAB_001cb468:
      Archive::CheckArc(param_1,true);
      WideToChar(awStack_4808,acStack_808,0x800);
      if (((*(code **)(lVar13 + 0x125d0) == (code *)0x0) ||
          ((iVar9 = (**(code **)(lVar13 + 0x125d0))
                              (3,*(undefined8 *)(lVar13 + 0x125c8),awStack_4808,1), iVar9 != -1 &&
           (iVar9 = (**(code **)(lVar13 + 0x125d0))
                              (0,*(undefined8 *)(lVar13 + 0x125c8),acStack_808,1), iVar9 != -1))))
         && ((*(code **)(lVar13 + 0x125d8) == (code *)0x0 ||
             (iVar9 = (**(code **)(lVar13 + 0x125d8))(acStack_808,1), iVar9 != 0)))) {
        if (AVar8 == (Archive)0x0) {
          Archive::ReadHeader();
          iVar9 = *(int *)(param_1 + 0x7624);
        }
        else {
          Archive::SearchBlock(param_1,HVar3);
          iVar9 = *(int *)(param_1 + 0x7624);
        }
        if (iVar9 == 2) {
          Archive::ConvertAttributes();
          (**(code **)(*(long *)param_1 + 0x18))
                    (param_1,*(long *)(param_1 + 0x11200) - *(long *)(param_1 + 0xa7c8),0);
        }
        uVar12 = 1;
        if (param_2 != (ComprDataIO *)0x0) {
          AVar8 = (Archive)0x0;
          if (HVar3 != 5) {
            AVar8 = local_4828[0x2099];
            *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(local_4828 + 0x2058);
          }
          uVar4 = *(uint *)(lVar13 + 67000);
          uVar12 = 1;
          HVar5 = *(HASH_TYPE *)(local_4828 + 0x2070);
          *(Archive *)(param_2 + 0x2091) = AVar8;
          *(undefined8 *)(param_2 + 0x20b0) = 0;
          DataHash::Init((DataHash *)(param_2 + 0x20d0),HVar5,uVar4);
        }
      }
      else {
        uVar12 = 0;
      }
LAB_001cb718:
      if (local_8 - ___stack_chk_guard == 0) {
        return uVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
    }
    if (param_2 != (ComprDataIO *)0x0) {
      *(undefined8 *)(param_2 + 0x20c8) = 0;
    }
    if (!bVar6) {
      __wcscpy_chk(awStack_2808,pwVar1,0x800);
      NextVolumeName(awStack_2808,0x800,true);
      cVar7 = File::Open((File *)param_1,awStack_2808,0);
      if (cVar7 != '\0') {
        __wcscpy_chk(awStack_4808,awStack_2808,0x800);
        goto LAB_001cb468;
      }
    }
    if (*(long *)(lVar13 + 0x125d0) == 0) {
LAB_001cb5b8:
      if (*(long *)(lVar13 + 0x125d8) != 0) {
        WideToChar(awStack_4808,acStack_808,0x800);
        iVar9 = (**(code **)(lVar13 + 0x125d8))(acStack_808,0);
        if (iVar9 == 0) goto LAB_001cb6e8;
        CharToWide(acStack_808,awStack_4808,0x200);
      }
    }
    else {
      __wcscpy_chk(awStack_2808,awStack_4808,0x800);
      iVar9 = (**(code **)(lVar13 + 0x125d0))(3,*(undefined8 *)(lVar13 + 0x125c8),awStack_4808,0);
      if (iVar9 == -1) {
LAB_001cb6a0:
        if (*(long *)(lVar13 + 0x125d8) != 0) {
          WideToChar(awStack_4808,acStack_808,0x800);
          iVar9 = (**(code **)(lVar13 + 0x125d8))(acStack_808,0);
          if (iVar9 != 0) {
            CharToWide(acStack_808,awStack_4808,0x200);
          }
        }
LAB_001cb6e8:
        *(undefined4 *)(lVar13 + 0x125c0) = 0xf;
        File::Open((File *)param_1,pwVar1,0);
        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar10,0);
        uVar12 = 0;
        goto LAB_001cb718;
      }
      iVar9 = wcscmp(awStack_2808,awStack_4808);
      if (iVar9 == 0) {
        WideToChar(awStack_4808,acStack_808,0x800);
        iVar9 = (**(code **)(lVar13 + 0x125d0))(0,*(undefined8 *)(lVar13 + 0x125c8),acStack_808,0);
        if (iVar9 == -1) goto LAB_001cb6a0;
        CharToWide(acStack_808,awStack_4808,0x800);
        iVar9 = wcscmp(awStack_2808,awStack_4808);
        if (iVar9 == 0) goto LAB_001cb5b8;
      }
    }
    bVar6 = true;
    cVar7 = File::Open((File *)param_1,awStack_4808,0);
  } while( true );
}


