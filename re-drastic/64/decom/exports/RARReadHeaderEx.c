/*
 * Ghidra decompilation
 *
 * Function : RARReadHeaderEx
 * Address  : 001b3ae0
 * Program  : drastic64
 */


ulong RARReadHeaderEx(void *param_1,char *param_2)

{
  Archive *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  this = (Archive *)((long)param_1 + 0x169d0);
                    /* try { // try from 001b3b08 to 001b3dcb has its CatchHandler @ 001b3e10 */
  iVar3 = Archive::SearchBlock(this,2);
  *(int *)((long)param_1 + 0x3242c) = iVar3;
  if (iVar3 < 1) {
    if (((*(char *)((long)param_1 + 0x27bdd) == '\0') || (*(int *)((long)param_1 + 0x1dff4) != 5))
       || (*(char *)((long)param_1 + 0x23474) == '\0')) {
      if (*(char *)((long)param_1 + 0x27bf0) != '\0') {
        return 0xc;
      }
      uVar6 = 0x18;
      if (*(char *)((long)param_1 + 0x27bf1) == '\0') {
        uVar6 = 10;
      }
      return (ulong)uVar6;
    }
    cVar2 = MergeArchive(this,(ComprDataIO *)0x0,false,L'L');
    if (cVar2 == '\0') {
      return 0xf;
    }
    Archive::Seek(this,*(longlong *)((long)param_1 + 0x27bc8),0);
  }
  else {
    if ((*(int *)((long)param_1 + 0x32428) != 0) || (*(char *)((long)param_1 + 0x211d8) == '\0')) {
      wcsncpy((wchar_t *)(param_2 + 0x400),(wchar_t *)((long)param_1 + 0x169f0),0x400);
      WideToChar((wchar_t *)(param_2 + 0x400),param_2,0x400);
      wcsncpy((wchar_t *)(param_2 + 0x1800),(wchar_t *)((long)param_1 + 0x1f160),0x400);
      WideToChar((wchar_t *)(param_2 + 0x1800),param_2 + 0x1400,0x400);
      cVar2 = *(char *)((long)param_1 + 0x211d8);
      *(undefined4 *)(param_2 + 0x2800) = 0;
      bVar1 = cVar2 == '\0';
      if (bVar1) {
        uVar6 = 2;
      }
      else {
        uVar6 = 3;
        *(undefined4 *)(param_2 + 0x2800) = 1;
      }
      uVar4 = (uint)!bVar1;
      if (*(char *)((long)param_1 + 0x211d9) != '\0') {
        *(uint *)(param_2 + 0x2800) = uVar6;
        uVar4 = uVar6;
      }
      if (*(char *)((long)param_1 + 0x211db) != '\0') {
        uVar4 = uVar4 | 4;
        *(uint *)(param_2 + 0x2800) = uVar4;
      }
      if (*(char *)((long)param_1 + 0x21230) != '\0') {
        uVar4 = uVar4 | 0x10;
        *(uint *)(param_2 + 0x2800) = uVar4;
      }
      if (*(char *)((long)param_1 + 0x21231) != '\0') {
        *(uint *)(param_2 + 0x2800) = uVar4 | 0x20;
      }
      iVar3 = *(int *)((long)param_1 + 0x21244);
      uVar7 = *(undefined8 *)((long)param_1 + 0x211a0);
      *(undefined8 *)(param_2 + 0x2804) = *(undefined8 *)((long)param_1 + 0x21198);
      *(undefined8 *)(param_2 + 0x280c) = uVar7;
      *(uint *)(param_2 + 0x2814) = (iVar3 != 0) + 2;
      if (*(int *)((long)param_1 + 0x27bd8) == 3) {
        uVar5 = 0x32;
        if (*(char *)((long)param_1 + 0x1f159) != '\0') {
          uVar5 = 200;
        }
        *(undefined4 *)(param_2 + 0x2820) = uVar5;
      }
      else {
        *(uint *)(param_2 + 0x2820) = (uint)*(byte *)((long)param_1 + 0x1f159);
      }
      *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)((long)param_1 + 0x211b4);
      uVar5 = RarTime::GetDos();
      uVar8 = *(ulong *)((long)param_1 + 0x21238);
      *(undefined4 *)(param_2 + 0x281c) = uVar5;
      *(uint *)(param_2 + 0x2824) = *(byte *)((long)param_1 + 0x1f15a) + 0x30;
      uVar6 = *(uint *)((long)param_1 + 0x211b0);
      *(undefined4 *)(param_2 + 0x2828) = *(undefined4 *)((long)param_1 + 0x1f15c);
      *(undefined8 *)(param_2 + 0x2838) = 0;
      *(int *)(param_2 + 0x2840) = (int)(uVar8 >> 10);
      if (uVar6 < 3) {
        if (uVar6 != 0) {
          *(undefined4 *)(param_2 + 0x2844) = 1;
          return 0;
        }
      }
      else if (uVar6 == 3) {
        *(undefined4 *)(param_2 + 0x2844) = 2;
        uVar7 = *(undefined8 *)((long)param_1 + 0x211bc);
        *(undefined8 *)(param_2 + 0x2848) = *(undefined8 *)((long)param_1 + 0x211b4);
        *(undefined8 *)(param_2 + 0x2850) = uVar7;
        uVar7 = *(undefined8 *)((long)param_1 + 0x211cc);
        *(undefined8 *)(param_2 + 0x2858) = *(undefined8 *)((long)param_1 + 0x211c4);
        *(undefined8 *)(param_2 + 0x2860) = uVar7;
        return 0;
      }
      *(undefined4 *)(param_2 + 0x2844) = 0;
      return 0;
    }
    uVar8 = ProcessFile(param_1,0,(char *)0x0,(char *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  uVar8 = RARReadHeaderEx(param_1,param_2);
  return uVar8;
}


