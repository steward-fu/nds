/*
 * Ghidra decompilation
 *
 * Function : luaO_pushvfstring
 * Address  : 081190dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable x_:TString *[r0:4] conflicts with parameter, skipped.
   Local variable x__5:TString *[r0:4] conflicts with parameter, skipped.
   Local variable l:int[r2:4] conflicts with parameter, skipped.
   Local variable x__6:TString *[r0:4] conflicts with parameter, skipped. */

char * luaO_pushvfstring(lua_State *L,char *fmt,va_list argp)

{
  byte bVar1;
  char *pcVar2;
  char *e;
  TString *pTVar3;
  TString *x__3;
  size_t sVar4;
  TString *x__2;
  TString *x__1;
  size_t l;
  TString *x__4;
  uint mfb;
  size_t sVar5;
  TString *x__7;
  int iVar6;
  size_t len;
  TValue *io_2;
  int n;
  StkId pTVar7;
  TValue *io_1;
  double *pdVar8;
  double *pdVar9;
  StkId pTVar10;
  TValue *io;
  char *pcVar11;
  char *s;
  int iVar12;
  TValue *io_3;
  byte *pbVar13;
  double dVar14;
  char *local_74;
  char buff_3;
  char buff [24];
  int local_2c;
  
  local_74 = "%";
  iVar12 = 0;
  local_2c = __stack_chk_guard;
  do {
    pcVar2 = strchr(fmt,0x25);
    if (pcVar2 == (char *)0x0) {
      pTVar10 = L->top;
      if ((int)L->stack_last - (int)pTVar10 < 0x10) {
        luaD_growstack(L,1);
        pTVar10 = L->top;
      }
      sVar5 = strlen(fmt);
      L->top = pTVar10 + 1;
      pTVar3 = luaS_newlstr(L,fmt,sVar5);
      (pTVar10->value_).gc = (GCObject *)pTVar3;
      pTVar10->tt_ = pTVar3->tt | 0x40;
      if (iVar12 != 0) {
        luaV_concat(L,iVar12 + 1);
      }
      if (local_2c == __stack_chk_guard) {
        return (char *)(L->top[-1].value_.f + 0x18);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pTVar10 = L->top;
    if ((int)L->stack_last - (int)pTVar10 < 0x18) {
      luaD_growstack(L,2);
      pTVar10 = L->top;
    }
    L->top = pTVar10 + 1;
    pTVar3 = luaS_newlstr(L,fmt,(int)pcVar2 - (int)fmt);
    (pTVar10->value_).gc = (GCObject *)pTVar3;
    pTVar10->tt_ = pTVar3->tt | 0x40;
    switch(pcVar2[1]) {
    case '%':
      pTVar10 = L->top;
      n = 1;
      pcVar11 = local_74;
      goto LAB_081193c0;
    default:
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"invalid option \'%%%c\' to \'lua_pushfstring\'");
    case 'I':
    case 'd':
      pTVar7 = L->top;
      pdVar9 = (double *)((int)argp.__ap + 4);
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *argp.__ap;
      L->top = pTVar7 + 1;
      (pTVar7->value_).b = (int)pcVar11;
      pTVar10 = L->top;
      pTVar7->tt_ = 0x13;
      if (pTVar10[-1].tt_ != 0x13) goto LAB_08119314;
LAB_08119450:
      l = __sprintf_chk(buff,1,0x32,"%d",pTVar10[-1].value_.gc);
      argp.__ap = pdVar9;
      goto LAB_0811938c;
    case 'U':
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *argp.__ap;
      argp.__ap = argp.__ap + 4;
      if (pcVar11 < (char *)0x80) {
        iVar6 = 7;
        n = 1;
        buff[7] = (char)pcVar11;
      }
      else {
        pbVar13 = (byte *)(buff + 8);
        mfb = 0x3f;
        n = 1;
        do {
          bVar1 = (byte)pcVar11;
          mfb = mfb >> 1;
          pcVar11 = (char *)((uint)pcVar11 >> 6);
          n = n + 1;
          pbVar13 = pbVar13 + -1;
          *pbVar13 = bVar1 & 0x3f | 0x80;
        } while (mfb < pcVar11);
        iVar6 = -n + 8;
        buff[-n + 8] = (byte)pcVar11 | (byte)(~mfb << 1);
      }
      pTVar10 = L->top;
      pcVar11 = buff + iVar6;
      goto LAB_081193c0;
    case 'c':
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *argp.__ap;
      argp.__ap = argp.__ap + 4;
      buff_3 = (char)pcVar11;
      if ((""[((uint)pcVar11 & 0xff) + 1] & 4) != 0) {
        n = 1;
        pTVar10 = L->top;
        pcVar11 = &buff_3;
        goto LAB_081193c0;
      }
      luaO_pushfstring(L,"<\\%d>");
      break;
    case 'f':
      pTVar10 = L->top;
      pdVar8 = (double *)((int)argp.__ap + 7U & 0xfffffff8);
      pdVar9 = pdVar8 + 1;
      dVar14 = *pdVar8;
      L->top = pTVar10 + 1;
      pTVar10->tt_ = 3;
      (pTVar10->value_).n = (float)dVar14;
      pTVar10 = L->top;
      if (pTVar10[-1].tt_ == 0x13) goto LAB_08119450;
LAB_08119314:
      sVar4 = __sprintf_chk(buff,1,0x32,&DAT_08145d28,(double)pTVar10[-1].value_.n);
      sVar5 = strspn(buff,"-0123456789");
      l = sVar4;
      argp.__ap = pdVar9;
      if (buff[sVar5] == '\0') {
        l = sVar4 + 2;
        buff[sVar4] = '.';
        buff[sVar4 + 1] = '0';
      }
LAB_0811938c:
      pTVar3 = luaS_newlstr(L,buff,l);
      pTVar10[-1].value_.gc = (GCObject *)pTVar3;
      pTVar10[-1].tt_ = pTVar3->tt | 0x40;
      break;
    case 'p':
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *argp.__ap;
      argp.__ap = argp.__ap + 4;
      n = __sprintf_chk(buff,1,0x18,"%p",pcVar11);
      pTVar10 = L->top;
      pcVar11 = buff;
LAB_081193c0:
      L->top = pTVar10 + 1;
      pTVar3 = luaS_newlstr(L,pcVar11,n);
      (pTVar10->value_).gc = (GCObject *)pTVar3;
      pTVar10->tt_ = pTVar3->tt | 0x40;
      break;
    case 's':
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *argp.__ap;
      argp.__ap = argp.__ap + 4;
      if (pcVar11 == (char *)0x0) {
        sVar5 = 6;
        pcVar11 = "(null)";
      }
      else {
        sVar5 = strlen(pcVar11);
      }
      pTVar10 = L->top;
      L->top = pTVar10 + 1;
      pTVar3 = luaS_newlstr(L,pcVar11,sVar5);
      (pTVar10->value_).gc = (GCObject *)pTVar3;
      pTVar10->tt_ = pTVar3->tt | 0x40;
    }
    iVar12 = iVar12 + 2;
    fmt = pcVar2 + 2;
  } while( true );
}


