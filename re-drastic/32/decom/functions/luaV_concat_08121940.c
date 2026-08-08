/*
 * Ghidra decompilation
 *
 * Function : luaV_concat
 * Address  : 08121940
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaV_concat(lua_State *L,int total)

{
  char *str;
  char *buffer;
  char *__dest;
  TString *pTVar1;
  TString *x_;
  int iVar2;
  uint uVar3;
  size_t l;
  size_t __n;
  size_t l_1;
  uint uVar4;
  StkId pTVar5;
  int iVar6;
  TValue *io;
  size_t sVar7;
  size_t tl;
  int iVar8;
  int iVar9;
  StkId obj;
  int iVar10;
  int iVar11;
  int local_2c;
  
  pTVar5 = L->top;
  do {
    uVar4 = pTVar5[-2].tt_ & 0xf;
    if (uVar4 - 3 < 2) {
      uVar3 = pTVar5[-1].tt_ & 0xf;
      if (uVar3 != 4) {
        if (uVar3 != 3) goto LAB_08121970;
        luaO_tostring(L,pTVar5 + -1);
        uVar4 = pTVar5[-2].tt_ & 0xf;
      }
      sVar7 = *(size_t *)(pTVar5[-1].value_.f + 0xc);
      if (sVar7 == 0) {
        if (uVar4 == 3) {
          luaO_tostring(L,pTVar5 + -2);
          iVar9 = -8;
          iVar10 = 1;
        }
        else {
          iVar9 = -8;
          iVar10 = 1;
        }
      }
      else if ((uVar4 == 4) && (*(int *)(pTVar5[-2].value_.f + 0xc) == 0)) {
        iVar6 = pTVar5[-1].tt_;
        iVar9 = -8;
        iVar10 = 1;
        pTVar5[-2].value_ = pTVar5[-1].value_;
        pTVar5[-2].tt_ = iVar6;
      }
      else {
        if (total < 2) {
          iVar9 = 0;
          iVar6 = 1;
          iVar11 = 8;
          local_2c = -8;
          iVar10 = iVar9;
        }
        else {
          obj = pTVar5 + -2;
          iVar6 = 1;
          do {
            uVar4 = obj->tt_ & 0xf;
            if (uVar4 != 4) {
              if (uVar4 != 3) {
                iVar11 = iVar6 * 8;
                local_2c = iVar6 * -8;
                iVar9 = local_2c + 8;
                iVar10 = iVar6 + -1;
                goto LAB_08121a8c;
              }
              luaO_tostring(L,obj);
            }
            if (0x7fffffff - sVar7 <= *(uint *)((obj->value_).f + 0xc)) {
                    /* WARNING: Subroutine does not return */
              luaG_runerror(L,"string length overflow");
            }
            iVar6 = iVar6 + 1;
            sVar7 = sVar7 + *(uint *)((obj->value_).f + 0xc);
            obj = obj + -1;
          } while (total != iVar6);
          iVar11 = total * 8;
          local_2c = total * -8;
          iVar9 = local_2c + 8;
          iVar6 = total;
          iVar10 = total + -1;
        }
LAB_08121a8c:
        iVar8 = 0;
        str = luaZ_openspace(L,&L->l_G->buff,sVar7);
        sVar7 = 0;
        do {
          iVar2 = *(int *)((int)pTVar5 + (iVar8 * 8 - iVar11));
          __dest = str + sVar7;
          iVar8 = iVar8 + 1;
          __n = *(size_t *)(iVar2 + 0xc);
          sVar7 = sVar7 + __n;
          memcpy(__dest,(void *)(iVar2 + 0x18),__n);
        } while (iVar8 != iVar6);
        pTVar1 = luaS_newlstr(L,str,sVar7);
        *(TString **)((int)&pTVar5->value_ + local_2c) = pTVar1;
        *(uint *)((int)&pTVar5->tt_ + local_2c) = pTVar1->tt | 0x40;
      }
    }
    else {
LAB_08121970:
      iVar9 = -8;
      iVar10 = 1;
      luaT_trybinTM(L,pTVar5 + -2,pTVar5 + -1,pTVar5 + -2,TM_CONCAT);
    }
    total = total - iVar10;
    pTVar5 = (StkId)((int)&L->top->value_ + iVar9);
    L->top = pTVar5;
    if (total < 2) {
      return;
    }
  } while( true );
}


