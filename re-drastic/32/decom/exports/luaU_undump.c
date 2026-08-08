/*
 * Ghidra decompilation
 *
 * Function : luaU_undump
 * Address  : 08120b1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

LClosure * luaU_undump(lua_State *L,ZIO *Z,Mbuffer *buff,char *name)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  LClosure *pLVar5;
  LClosure *cl;
  Proto *f;
  void *extraout_r1;
  void *extraout_r1_00;
  void *extraout_r1_01;
  void *extraout_r1_02;
  void *extraout_r1_03;
  void *extraout_r1_04;
  void *extraout_r1_05;
  void *extraout_r1_06;
  void *extraout_r1_07;
  void *extraout_r1_08;
  void *extraout_r1_09;
  void *extraout_r1_10;
  StkId pTVar6;
  TValue *io;
  void *b;
  char *tname;
  StkId pTVar7;
  StkId pTVar8;
  lu_byte x_9;
  lu_byte x_1;
  lu_byte x;
  lu_byte x_6;
  lu_byte x_5;
  lu_byte x_4;
  lu_byte x_3;
  lu_byte x_2;
  lua_Number x_8;
  lua_Integer x_7;
  LoadState S;
  char buff_1 [12];
  char buff_2 [12];
  
  iVar2 = __stack_chk_guard;
  cVar1 = *name;
  if (cVar1 == '=' || cVar1 == '@') {
    S.name = name + 1;
  }
  else {
    S.name = name;
    if (cVar1 == '\x1b') {
      S.name = "binary string";
    }
  }
  tname = (char *)0x3;
  S.L = L;
  S.Z = Z;
  S.b = buff;
  sVar3 = luaZ_read(Z,buff_1,3);
  b = extraout_r1;
  if (sVar3 == 0) {
    iVar4 = memcmp(&DAT_08145b9d,buff_1,3);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      error(&S,S.name,(LoadState *)"not a");
    }
    tname = (char *)0x1;
    sVar3 = luaZ_read(S.Z,&x,1);
    b = extraout_r1_00;
    if (sVar3 == 0) {
      if (x != 'S') {
                    /* WARNING: Subroutine does not return */
        error(&S,S.name,(LoadState *)"version mismatch in");
      }
      tname = (char *)0x1;
      sVar3 = luaZ_read(S.Z,&x_1,1);
      b = extraout_r1_01;
      if (sVar3 == 0) {
        if (x_1 != '\0') {
                    /* WARNING: Subroutine does not return */
          error(&S,S.name,(LoadState *)"format mismatch in");
        }
        tname = (char *)0x6;
        sVar3 = luaZ_read(S.Z,buff_2,6);
        b = extraout_r1_02;
        if (sVar3 == 0) {
          iVar4 = memcmp(&DAT_08145ba4,buff_2,6);
          if (iVar4 != 0) goto LAB_08120e54;
          tname = (char *)0x1;
          sVar3 = luaZ_read(S.Z,&x_2,1);
          b = extraout_r1_03;
          if (sVar3 == 0) {
            if (x_2 != '\x04') {
LAB_08120e44:
              fchecksize(&S,0x8146548,tname);
LAB_08120e54:
                    /* WARNING: Subroutine does not return */
              error(&S,S.name,(LoadState *)"corrupted");
            }
            tname = (char *)0x1;
            sVar3 = luaZ_read(S.Z,&x_3,1);
            b = extraout_r1_04;
            if (sVar3 == 0) {
              if (x_3 != '\x04') {
LAB_08120e34:
                fchecksize(&S,0x814654c,tname);
                goto LAB_08120e44;
              }
              tname = (char *)0x1;
              sVar3 = luaZ_read(S.Z,&x_4,1);
              b = extraout_r1_05;
              if (sVar3 == 0) {
                if (x_4 != '\x04') {
LAB_08120e24:
                  fchecksize(&S,0x8146554,tname);
                  goto LAB_08120e34;
                }
                tname = (char *)0x1;
                sVar3 = luaZ_read(S.Z,&x_5,1);
                b = extraout_r1_06;
                if (sVar3 == 0) {
                  if (x_5 != '\x04') {
LAB_08120e14:
                    fchecksize(&S,0x8146560,tname);
                    goto LAB_08120e24;
                  }
                  tname = (char *)0x1;
                  sVar3 = luaZ_read(S.Z,&x_6,1);
                  b = extraout_r1_07;
                  if (sVar3 == 0) {
                    tname = (char *)(uint)x_6;
                    if (tname != (char *)0x4) {
                      fchecksize(&S,0x814656c,tname);
                      goto LAB_08120e14;
                    }
                    sVar3 = luaZ_read(S.Z,&x_7,4);
                    b = extraout_r1_08;
                    if (sVar3 == 0) {
                      if (x_7 != 0x5678) {
                    /* WARNING: Subroutine does not return */
                        error(&S,S.name,(LoadState *)"endianness mismatch in");
                      }
                      tname = (char *)0x4;
                      sVar3 = luaZ_read(S.Z,&x_8,4);
                      b = extraout_r1_09;
                      if (sVar3 == 0) {
                        if (x_8 != 370.5) goto LAB_08120ddc;
                        tname = (char *)0x1;
                        sVar3 = luaZ_read(S.Z,&x_9,1);
                        b = extraout_r1_10;
                        if (sVar3 == 0) {
                          pLVar5 = luaF_newLclosure(L,(uint)x_9);
                          pTVar6 = L->top;
                          (pTVar6->value_).gc = (GCObject *)pLVar5;
                          pTVar8 = L->top;
                          pTVar7 = L->stack_last;
                          pTVar6->tt_ = 0x46;
                          L->top = pTVar8 + 1;
                          if ((int)pTVar7 - (int)(pTVar8 + 1) < 8) {
                            luaD_growstack(L,0);
                          }
                          f = luaF_newproto(L);
                          pLVar5->p = f;
                          LoadFunction(&S,f,(TString *)0x0);
                          if (iVar2 == __stack_chk_guard) {
                            return pLVar5;
                          }
                    /* WARNING: Subroutine does not return */
                          __stack_chk_fail();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LoadBlock(&S,b,(size_t)tname);
LAB_08120ddc:
                    /* WARNING: Subroutine does not return */
  error(&S,S.name,(LoadState *)"float format mismatch in");
}


