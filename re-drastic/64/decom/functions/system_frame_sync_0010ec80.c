/*
 * Ghidra decompilation
 *
 * Function : system_frame_sync
 * Address  : 0010ec80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void system_frame_sync(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char *__s;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = *(uint *)(param_1 + 0x85a34);
  iVar6 = audio_buffer_state(param_1 + 0x1587000,&__stack_chk_guard,0);
  iVar9 = *(int *)(param_1 + 0x859e8);
  iVar12 = *(int *)(param_1 + 0x859ec);
  get_ticks_us(&local_10);
  uVar8 = (ulong)uVar11;
  local_10 = local_10 * 3 - *(long *)(nds_system + param_1 + 0x362e978);
  if (uVar11 == 0) {
    uVar8 = 50000;
    uVar11 = 50000;
  }
  *(ulong *)(nds_system + param_1 + 0x362e980) = uVar8 + *(long *)(nds_system + param_1 + 0x362e980)
  ;
  __printf_chk(1,"vf ticks: %lu real ticks: %lu\n");
  if (nds_system[param_1 + 0x362e9a3] != '\0') {
    *(long *)(nds_system + param_1 + 0x362e980) = local_10;
    nds_system[param_1 + 0x362e9a3] = 0;
  }
  if (*(int *)(param_1 + 0x85a04) != 0) {
    if (*(int *)(param_1 + 0x8a378) == 0) {
      iVar9 = 1;
      iVar12 = 6;
    }
    *(long *)(nds_system + param_1 + 0x362e980) = local_10;
  }
  if (nds_system[param_1 + 0x362e9a1] == '\0') {
    if (iVar6 == 2) {
      __s = "BBBB";
      *(undefined2 *)(nds_system + param_1 + 0x362e9a1) = 1;
LAB_0010f004:
      puts(__s);
      bVar5 = true;
      uVar10 = (int)*(undefined8 *)(nds_system + param_1 + 0x362e980) - (int)local_10;
      if ((int)uVar10 < 1) goto LAB_0010ee04;
      delay_us(0);
      bVar5 = true;
      goto LAB_0010eee8;
    }
    uVar10 = (int)*(undefined8 *)(nds_system + param_1 + 0x362e980) - (int)local_10;
    if ((int)uVar10 < 1) goto LAB_0010ee00;
LAB_0010eed0:
    delay_us((ulong)uVar10 / 3);
    bVar5 = false;
LAB_0010eee8:
    if (iVar9 != 1) goto LAB_0010eef0;
LAB_0010ee60:
    bVar1 = nds_system[param_1 + 0x362e9a7] + 1;
    *(bool *)(param_1 + 0x3b2a9a4) = nds_system[param_1 + 0x362e9a7] != '\0';
    nds_system[param_1 + 0x362e9a7] = bVar1;
    if ((uint)bVar1 != iVar12 + 1U) goto LAB_0010eefc;
  }
  else {
    if (nds_system[param_1 + 0x362e9a2] == '\x14') {
      audio_buffer_force_feed(param_1 + 0x1587000);
    }
    else if (iVar6 != 0) {
      nds_system[param_1 + 0x362e9a2] = nds_system[param_1 + 0x362e9a2] + '\x01';
      __s = "AAAAA";
      goto LAB_0010f004;
    }
    nds_system[param_1 + 0x362e9a1] = 0;
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = (~(uint)local_10 + (int)*(long *)(nds_system + param_1 + 0x362e980) + uVar11) /
               uVar11;
    }
    lVar7 = *(long *)(nds_system + param_1 + 0x362e980) - (ulong)(uVar10 * uVar11);
    *(long *)(nds_system + param_1 + 0x362e980) = lVar7;
    uVar10 = (int)lVar7 - (uint)local_10;
    if (0 < (int)uVar10) goto LAB_0010eed0;
LAB_0010ee00:
    bVar5 = false;
LAB_0010ee04:
    if (-0x2329 < (int)uVar10) goto LAB_0010eee8;
    __printf_chk(1,"ticks_delta: %d BEHIND_THRESH: %d RESYNC_THRESH: %d\n",uVar10,0xffffdcd8,
                 0xfffcf2c0);
    delay_us(0);
    if (-0x30d41 < (int)uVar10) {
      bVar5 = true;
      goto LAB_0010eee8;
    }
    *(long *)(nds_system + param_1 + 0x362e980) = local_10;
    bVar5 = true;
    if (iVar9 == 1) goto LAB_0010ee60;
LAB_0010eef0:
    if (iVar9 != 2) {
      if (iVar9 == 0) {
        nds_system[param_1 + 0x362e9a4] = 0;
      }
      goto LAB_0010eefc;
    }
    bVar1 = nds_system[param_1 + 0x362e9a5];
    nds_system[param_1 + 0x362e9a5] = bVar1 ^ 1;
    bVar2 = nds_system[param_1 + 0x362e9a6];
    if (*(int *)(nds_system + param_1 + 0x30f3a04) < 0) {
      if (bVar1 != 1) goto LAB_0010eefc;
      nds_system[param_1 + 0x362e9a6] = 0;
      if (0x78 < bVar2) {
        nds_system[param_1 + 0x362e9a4] = 0;
        goto LAB_0010eefc;
      }
    }
    else if (bVar2 != 0xff) {
      nds_system[param_1 + 0x362e9a6] = bVar2 + 1;
    }
    nds_system[param_1 + 0x362e9a4] = 0;
    if (bVar5) {
      cVar3 = nds_system[param_1 + 0x362e9a7];
      nds_system[param_1 + 0x362e9a7] = cVar3 + 1U;
      if ((uint)(byte)(cVar3 + 1U) == iVar12 + 1U) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = ((uVar11 - 1) + uVar10) / uVar11;
        }
        nds_system[param_1 + 0x362e9a1] = 0;
        nds_system[param_1 + 0x362e9a7] = 0;
        *(ulong *)(nds_system + param_1 + 0x362e980) =
             *(long *)(nds_system + param_1 + 0x362e980) - (ulong)(uVar4 * uVar11);
      }
      else {
        nds_system[param_1 + 0x362e9a4] = 1;
      }
      goto LAB_0010eefc;
    }
  }
  nds_system[param_1 + 0x362e9a7] = 0;
LAB_0010eefc:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


