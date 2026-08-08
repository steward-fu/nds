/*
 * Ghidra decompilation
 *
 * Function : mainposition
 * Address  : 00200450
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mainposition(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = *(uint *)(param_2 + 1) & 0x3f;
  if (uVar6 == 4) {
    bVar1 = *(byte *)(param_1 + 0xb);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = *(uint *)(*param_2 + 0xc);
LAB_002005dc:
    uVar6 = (1 << (ulong)(bVar1 & 0x1f)) - 1U & uVar6;
    lVar7 = lVar7 + (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5);
  }
  else {
    if (uVar6 < 5) {
      if (uVar6 != 2) {
        if (uVar6 == 3) {
          fVar8 = frexpf(*(float *)param_2,&local_c);
          local_c = (int)(fVar8 * 2.147483e+09) + local_c;
          iVar5 = local_c;
          if ((local_c < 0) && (iVar5 = -local_c, local_c == iVar5)) {
            iVar5 = 0;
          }
          uVar6 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
          iVar2 = 0;
          if (uVar6 != 0) {
            iVar2 = iVar5 / (int)uVar6;
          }
          uVar6 = iVar5 - iVar2 * uVar6;
          lVar7 = *(long *)(param_1 + 0x18) +
                  (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5);
          goto LAB_002004f8;
        }
        if (uVar6 == 1) {
          uVar6 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & *(uint *)param_2;
          lVar7 = *(long *)(param_1 + 0x18) +
                  (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5);
          goto LAB_002004f8;
        }
      }
    }
    else {
      if (uVar6 == 0x14) {
        lVar7 = *param_2;
        uVar6 = *(uint *)(lVar7 + 0xc);
        if (*(char *)(lVar7 + 10) == '\0') {
          uVar4 = luaS_hash(lVar7 + 0x20,*(undefined8 *)(lVar7 + 0x10),uVar6,0);
          *(undefined *)(lVar7 + 10) = 1;
          *(undefined4 *)(lVar7 + 0xc) = uVar4;
          uVar6 = *(uint *)(*param_2 + 0xc);
        }
        bVar1 = *(byte *)(param_1 + 0xb);
        lVar7 = *(long *)(param_1 + 0x18);
        goto LAB_002005dc;
      }
      if ((uVar6 != 0x16) && (uVar6 == 0x13)) {
        uVar6 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & *(uint *)param_2;
        lVar7 = *(long *)(param_1 + 0x18) +
                (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5);
        goto LAB_002004f8;
      }
    }
    uVar6 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = (uint)*param_2 / uVar6;
    }
    lVar7 = *(long *)(param_1 + 0x18) + (ulong)((uint)*param_2 - uVar3 * uVar6) * 0x20;
  }
LAB_002004f8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7,local_8 - ___stack_chk_guard,0);
  }
  return;
}


