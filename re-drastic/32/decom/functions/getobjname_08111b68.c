/*
 * Ghidra decompilation
 *
 * Function : getobjname
 * Address  : 08111b68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * getobjname(Proto *p,int lastpc,int reg,char **name)

{
  uint uVar1;
  char *pcVar2;
  char *what_1;
  char *what;
  int iVar3;
  int t;
  OpCode op_1;
  int k_1;
  TValue *kvalue_1;
  uint uVar4;
  Instruction i;
  Instruction i_1;
  int iVar5;
  int dest;
  TValue *kvalue;
  TString *s_1;
  lu_byte *plVar6;
  int b_1;
  TString *pTVar7;
  TString *s;
  char *vn;
  int k;
  int b;
  int lastpc_00;
  Instruction *pIVar8;
  OpCode op;
  int iVar9;
  uint uVar10;
  int a;
  
LAB_08111ba0:
  pcVar2 = luaF_getlocalname(p,reg + 1,lastpc);
  *name = pcVar2;
  if (pcVar2 != (char *)0x0) {
    return "local";
  }
  if (lastpc < 1) {
    return (char *)0x0;
  }
  pIVar8 = p->code;
  lastpc_00 = -1;
  iVar3 = 0;
  iVar9 = 0;
LAB_08111bd8:
  do {
    uVar4 = pIVar8[iVar3];
    uVar10 = (uVar4 << 0x12) >> 0x18;
    switch(uVar4 & 0x3f) {
    case 4:
      if (((int)uVar10 <= reg) && (reg <= (int)(uVar10 + (uVar4 >> 0x17)))) {
joined_r0x08111d0c:
        lastpc_00 = iVar3;
        if (iVar3 < iVar9) {
          iVar3 = iVar3 + 1;
          if (lastpc <= iVar3) {
            return (char *)0x0;
          }
          lastpc_00 = -1;
          goto LAB_08111bd8;
        }
      }
      break;
    default:
      if ((reg == uVar10 & luaP_opmodes[uVar4 & 0x3f] >> 6) != 0) goto joined_r0x08111d0c;
      break;
    case 0x1e:
      iVar5 = (uVar4 >> 0xe) + iVar3 + -0x1fffe;
      if (iVar9 < iVar5 && (iVar5 <= lastpc && iVar3 < iVar5)) {
        iVar9 = iVar5;
      }
      break;
    case 0x24:
    case 0x25:
      if ((int)uVar10 <= reg) goto joined_r0x08111d0c;
      break;
    case 0x29:
      if ((int)(uVar10 + 1) < reg) goto joined_r0x08111d0c;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < lastpc);
  if (lastpc_00 == -1) {
    return (char *)0x0;
  }
  uVar4 = pIVar8[lastpc_00];
  uVar10 = uVar4 & 0x3f;
  switch(uVar10) {
  case 0:
    break;
  case 1:
  case 2:
    if (uVar10 == 1) {
      b_1 = uVar4 >> 0xe;
    }
    else {
      b_1 = pIVar8[lastpc_00 + 1] >> 6;
    }
    if ((p->k[b_1].tt_ & 0xfU) != 4) {
      return (char *)0x0;
    }
    *name = (char *)(p->k[b_1].value_.f + 0x18);
    return "constant";
  default:
    goto switchD_08111cc4_caseD_3;
  case 5:
    pTVar7 = p->upvalues[uVar4 >> 0x17].name;
    if (pTVar7 == (TString *)0x0) {
      plVar6 = "?";
    }
    else {
      plVar6 = &pTVar7[1].tt;
    }
    *name = (char *)plVar6;
    return "upvalue";
  case 6:
  case 7:
    uVar1 = uVar4 >> 0xe;
    if (uVar10 == 7) {
      vn = luaF_getlocalname(p,(uVar4 >> 0x17) + 1,lastpc_00);
    }
    else {
      pTVar7 = p->upvalues[uVar4 >> 0x17].name;
      if (pTVar7 == (TString *)0x0) {
        vn = "?";
      }
      else {
        vn = (char *)&pTVar7[1].tt;
      }
    }
    if ((uVar1 & 0x100) == 0) {
      pcVar2 = getobjname(p,lastpc_00,uVar1 & 0x1ff,name);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'c')) goto LAB_08111df4;
    }
    else {
      kvalue = (TValue *)p->k[uVar1 & 0xff].tt_;
      if (((uint)kvalue & 0xf) == 4) {
        *name = (char *)(p->k[uVar1 & 0xff].value_.f + 0x18);
        goto LAB_08111df4;
      }
    }
    *name = "?";
LAB_08111df4:
    if (vn == (char *)0x0) {
      return "field";
    }
    iVar3 = strcmp(vn,"_ENV");
    if (iVar3 != 0) {
      return "field";
    }
    return "global";
  case 0xc:
    uVar4 = uVar4 >> 0xe;
    if ((uVar4 & 0x100) == 0) {
      pcVar2 = getobjname(p,lastpc_00,uVar4 & 0x1ff,name);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'c')) {
        return "method";
      }
    }
    else {
      kvalue_1 = (TValue *)p->k[uVar4 & 0xff].tt_;
      if (((uint)kvalue_1 & 0xf) == 4) {
        *name = (char *)(p->k[uVar4 & 0xff].value_.f + 0x18);
        return "method";
      }
    }
    *name = "?";
    return "method";
  }
  reg = uVar4 >> 0x17;
  lastpc = lastpc_00;
  if ((uVar4 << 0x12) >> 0x18 <= (uint)reg) {
switchD_08111cc4_caseD_3:
    return (char *)0x0;
  }
  goto LAB_08111ba0;
}


