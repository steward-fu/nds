/*
 * Ghidra decompilation
 *
 * Function : luaO_str2num
 * Address  : 08118c94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t luaO_str2num(char *s,TValue *o)

{
  bool bVar1;
  char *e;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  lua_Integer i;
  byte *pbVar5;
  uint uVar6;
  TValue *io;
  uint uVar7;
  float fVar8;
  lua_Number n;
  char *endptr;
  int local_1c;
  
  uVar7 = (uint)(byte)*s;
  local_1c = __stack_chk_guard;
  bVar3 = ""[uVar7 + 1];
  uVar6 = uVar7;
  e = s;
  while ((bVar3 & 8) != 0) {
    e = (char *)((byte *)e + 1);
    uVar6 = (uint)(byte)*e;
    bVar3 = ""[uVar6 + 1];
  }
  if (uVar6 != 0x2d) {
    if (uVar6 == 0x2b) {
      uVar6 = (uint)((byte *)e)[1];
      e = (char *)((byte *)e + 1);
    }
    bVar1 = false;
    if (uVar6 == 0x30) goto LAB_08118dcc;
LAB_08118d14:
    bVar3 = ""[uVar6 + 1];
    if ((bVar3 & 2) == 0) goto LAB_08118e24;
    i = 0;
    do {
      iVar4 = uVar6 + i * 10;
      e = (char *)((byte *)e + 1);
      uVar6 = (uint)(byte)*e;
      i = iVar4 + -0x30;
      bVar3 = ""[uVar6 + 1];
    } while ((bVar3 & 2) != 0);
LAB_08118d48:
    bVar3 = bVar3 & 8;
    if (bVar3 != 0) {
      bVar3 = 0;
      goto LAB_08118d54;
    }
LAB_08118d68:
    if (uVar6 != 0) {
      bVar3 = bVar3 | 1;
    }
    if (bVar3 != 0) goto LAB_08118e34;
    if (bVar1) {
      i = -i;
    }
    (o->value_).i = i;
    o->tt_ = 0x13;
LAB_08118d88:
    pcVar2 = e + (1 - (int)s);
    goto LAB_08118d90;
  }
  uVar6 = (uint)((byte *)e)[1];
  bVar1 = true;
  e = (char *)((byte *)e + 1);
  if (uVar6 != 0x30) goto LAB_08118d14;
LAB_08118dcc:
  if ((((byte *)e)[1] & 0xdf) != 0x58) goto LAB_08118d14;
  uVar6 = (uint)((byte *)e)[2];
  e = (char *)((byte *)e + 2);
  bVar3 = ""[uVar6 + 1];
  if ((bVar3 & 0x10) != 0) {
    i = 0;
    do {
      iVar4 = (uVar6 | 0x20) - 0x57;
      if ((bVar3 & 2) != 0) {
        iVar4 = uVar6 - 0x30;
      }
      e = (char *)((byte *)e + 1);
      uVar6 = (uint)(byte)*e;
      i = iVar4 + i * 0x10;
      bVar3 = ""[uVar6 + 1];
    } while ((bVar3 & 0x10) != 0);
    goto LAB_08118d48;
  }
LAB_08118e24:
  if ((bVar3 & 8) != 0) {
    bVar3 = 1;
    i = 0;
LAB_08118d54:
    do {
      e = (char *)((byte *)e + 1);
      uVar6 = (uint)(byte)*e;
    } while ((""[uVar6 + 1] & 8) != 0);
    goto LAB_08118d68;
  }
LAB_08118e34:
  if (uVar7 == 0) goto LAB_08118e90;
  pbVar5 = (byte *)s;
  if ((uVar7 & 0xffffffdf) != 0x4e) {
    do {
      bVar3 = pbVar5[1];
      if (bVar3 == 0) {
        pbVar5 = (byte *)s;
        if ((uVar7 & 0xffffffdf) == 0x58) goto LAB_08118e90;
        goto LAB_08118e84;
      }
      pbVar5 = pbVar5 + 1;
    } while ((bVar3 & 0xdf) != 0x4e);
  }
  goto LAB_08118edc;
  while (pbVar5 = pbVar5 + 1, (bVar3 & 0xdf) != 0x58) {
LAB_08118e84:
    bVar3 = pbVar5[1];
    if (bVar3 == 0) break;
  }
LAB_08118e90:
  fVar8 = strtof(s,&endptr);
  if (s != endptr) {
    while ((""[(byte)*endptr + 1] & 8) != 0) {
      endptr = endptr + 1;
    }
    if ((byte)*endptr == 0) {
      (o->value_).n = fVar8;
      o->tt_ = 3;
      e = endptr;
      goto LAB_08118d88;
    }
  }
LAB_08118edc:
  pcVar2 = (char *)0x0;
LAB_08118d90:
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (size_t)pcVar2;
}


