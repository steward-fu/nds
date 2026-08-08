/*
 * Ghidra decompilation
 *
 * Function : luaO_str2num
 * Address  : 001fae50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaO_str2num(byte *param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  byte *local_10;
  long local_8;
  
  bVar2 = *param_1;
  local_8 = ___stack_chk_guard;
  bVar3 = (&luai_ctype_)[(int)(bVar2 + 1)];
  pbVar8 = param_1;
  while ((bVar3 >> 3 & 1) != 0) {
    pbVar8 = pbVar8 + 1;
    bVar2 = *pbVar8;
    bVar3 = (&luai_ctype_)[(int)(bVar2 + 1)];
  }
  uVar11 = (uint)bVar2;
  if (uVar11 == 0x2d) {
    uVar11 = (uint)pbVar8[1];
    bVar6 = true;
    pbVar8 = pbVar8 + 1;
  }
  else {
    bVar6 = false;
    if (uVar11 == 0x2b) {
      uVar11 = (uint)pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
  }
  if ((uVar11 == 0x30) && ((pbVar8[1] & 0xdf) == 0x58)) {
    uVar11 = (uint)pbVar8[2];
    pbVar8 = pbVar8 + 2;
    uVar10 = (uint)(byte)(&luai_ctype_)[(int)(uVar11 + 1)];
    if (((byte)(&luai_ctype_)[(int)(uVar11 + 1)] >> 4 & 1) != 0) {
      fVar12 = 0.0;
      do {
        iVar9 = (int)fVar12 << 4;
        if ((uVar10 >> 1 & 1) != 0) {
          do {
            iVar4 = uVar11 - 0x30;
            pbVar8 = pbVar8 + 1;
            uVar11 = (uint)*pbVar8;
            fVar12 = (float)(iVar4 + iVar9);
            bVar2 = (&luai_ctype_)[(int)(uVar11 + 1)];
            uVar10 = (uint)bVar2;
            if ((bVar2 >> 4 & 1) == 0) goto LAB_001faf00;
            iVar9 = (int)fVar12 * 0x10;
          } while ((bVar2 >> 1 & 1) != 0);
        }
        uVar10 = uVar11 | 0x20;
        pbVar8 = pbVar8 + 1;
        uVar11 = (uint)*pbVar8;
        fVar12 = (float)((uVar10 - 0x57) + iVar9);
        uVar10 = (uint)(byte)(&luai_ctype_)[(int)(uVar11 + 1)];
      } while (((byte)(&luai_ctype_)[(int)(uVar11 + 1)] >> 4 & 1) != 0);
      goto LAB_001faf00;
    }
LAB_001faff8:
    bVar5 = true;
    fVar12 = 0.0;
    if ((uVar10 >> 3 & 1) != 0) goto LAB_001faf10;
LAB_001fb008:
    pcVar7 = strpbrk((char *)param_1,"nN");
    if ((pcVar7 == (char *)0x0) &&
       (fVar12 = strtof((char *)param_1,(char **)&local_10), param_1 != local_10)) {
      bVar2 = *local_10;
      bVar3 = (&luai_ctype_)[(int)(bVar2 + 1)];
      pbVar8 = local_10;
      while ((bVar3 >> 3 & 1) != 0) {
        pbVar8 = pbVar8 + 1;
        bVar2 = *pbVar8;
        bVar3 = (&luai_ctype_)[(int)(bVar2 + 1)];
      }
      local_10 = pbVar8;
      if (bVar2 == 0) {
        *param_2 = fVar12;
        param_2[2] = 4.203895e-45;
        goto LAB_001faf40;
      }
    }
    pbVar8 = (byte *)0x0;
  }
  else {
    fVar12 = 0.0;
    uVar10 = (uint)(byte)(&luai_ctype_)[(int)(uVar11 + 1)];
    if (((byte)(&luai_ctype_)[(int)(uVar11 + 1)] >> 1 & 1) == 0) goto LAB_001faff8;
    do {
      iVar9 = uVar11 + (int)fVar12 * 10;
      pbVar8 = pbVar8 + 1;
      uVar11 = (uint)*pbVar8;
      fVar12 = (float)(iVar9 + -0x30);
      uVar10 = (uint)(byte)(&luai_ctype_)[(int)(uVar11 + 1)];
    } while (((byte)(&luai_ctype_)[(int)(uVar11 + 1)] >> 1 & 1) != 0);
LAB_001faf00:
    bVar5 = false;
    if ((uVar10 >> 3 & 1) != 0) {
LAB_001faf10:
      do {
        pbVar8 = pbVar8 + 1;
        uVar11 = (uint)*pbVar8;
      } while (((byte)(&luai_ctype_)[(int)(uVar11 + 1)] >> 3 & 1) != 0);
    }
    if (uVar11 != 0 || bVar5) goto LAB_001fb008;
    fVar1 = (float)-(int)fVar12;
    if (!bVar6) {
      fVar1 = fVar12;
    }
    *param_2 = fVar1;
    param_2[2] = 2.662467e-44;
LAB_001faf40:
    pbVar8 = pbVar8 + (1 - (long)param_1);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar8,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


