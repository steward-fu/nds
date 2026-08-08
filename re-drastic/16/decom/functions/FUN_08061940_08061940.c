/*
 * Ghidra decompilation
 *
 * Function : FUN_08061940
 * Address  : 08061940
 * Program  : drastic16
 */


void FUN_08061940(int param_1,char **param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  char *__s;
  int iVar7;
  int iVar8;
  char *__dest;
  char *pcVar9;
  int local_48 [2];
  char acStack_40 [4];
  char *local_3c;
  int *local_38;
  char *local_34;
  char local_2c;
  undefined local_2b;
  
  __s = param_2[6];
  sVar3 = strlen(__s);
  iVar7 = *(int *)(*(int *)(param_1 + 8) + 8);
  iVar1 = (int)param_2[1] << 3;
  sVar3 = (int)param_2[7] - sVar3;
  local_48[0] = iVar1;
  if (param_3 != 0) {
    FUN_08076bb8(*param_2,0xffff,0x10,iVar7);
    pcVar9 = param_2[8];
    uVar6 = (uint)(param_2[7] + 8) & 0xfffffff8;
    iVar2 = uVar6 * -3;
    __dest = acStack_40 + -uVar6;
    local_34 = acStack_40 + uVar6 * -2;
    local_3c = acStack_40 + iVar2;
    local_38 = local_48;
    strcpy(__dest,__s);
    strcpy(local_34,__s + (int)(pcVar9 + 1));
    __dest[(int)pcVar9] = '\0';
    sVar4 = strlen(*param_2);
    iVar7 = iVar7 + sVar4 * 8;
    pvVar5 = memset(local_3c,0x20,sVar3);
    iVar8 = iVar7 + sVar3 * 8;
    *(undefined *)((int)pvVar5 + sVar3) = 0;
    *(int *)((int)local_48 + iVar2) = iVar1;
    FUN_08076bb8(pvVar5,0x7bef,0x10,iVar7);
    local_2c = __s[(int)pcVar9];
    local_2b = 0;
    *(int *)((int)local_48 + iVar2) = iVar1;
    FUN_08076bb8(__dest,0x7bef,0x10,iVar8);
    sVar3 = strlen(__dest);
    *(int *)((int)local_48 + iVar2) = iVar1;
    iVar8 = iVar8 + sVar3 * 8;
    FUN_08076bb8(&local_2c,0xffe0,0x1f,iVar8);
    *(int *)((int)local_48 + iVar2) = iVar1;
    FUN_08076bb8(local_34,0x7bef,0x10,iVar8 + 8);
    return;
  }
  FUN_08076bb8(*param_2,0xffff,0,iVar7);
  sVar4 = strlen(*param_2);
  local_48[0] = iVar1;
  FUN_08076bb8(__s,0x7bef,0,iVar7 + (sVar4 + sVar3) * 8);
  return;
}


