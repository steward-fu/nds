/*
 * Ghidra decompilation
 *
 * Function : lua_newstate
 * Address  : 0811da9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_State * lua_newstate(lua_Alloc f,void *ud)

{
  int iVar1;
  void *pvVar2;
  LG *l;
  uint uVar3;
  int iVar4;
  lua_State *L_00;
  lua_State *L;
  uint h;
  char buff [16];
  
  iVar1 = __stack_chk_guard;
  pvVar2 = (*f)(ud,(void *)0x0,8,0x180);
  if (pvVar2 == (void *)0x0) {
    L_00 = (lua_State *)0x0;
  }
  else {
    L_00 = (lua_State *)((int)pvVar2 + 4);
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined *)((int)pvVar2 + 8) = 8;
    *(undefined *)((int)pvVar2 + 9) = 1;
    *(undefined *)((int)pvVar2 + 10) = 0;
    *(int *)((int)pvVar2 + 0x10) = (int)pvVar2 + 0x74;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    *(lua_State **)((int)pvVar2 + 0x2c) = L_00;
    *(undefined4 *)((int)pvVar2 + 0x30) = 0;
    *(undefined4 *)((int)pvVar2 + 0x58) = 0;
    *(undefined2 *)((int)pvVar2 + 0x6c) = 1;
    *(undefined2 *)((int)pvVar2 + 0x6e) = 0;
    *(undefined *)((int)pvVar2 + 0x70) = 0;
    *(undefined *)((int)pvVar2 + 0x71) = 1;
    *(undefined *)((int)pvVar2 + 0xa4) = 1;
    *(undefined8 *)((int)pvVar2 + 0x5c) = 0;
    *(undefined8 *)((int)pvVar2 + 100) = 0;
    *(lua_Alloc *)((int)pvVar2 + 0x74) = f;
    *(void **)((int)pvVar2 + 0x78) = ud;
    *(lua_State **)((int)pvVar2 + 0xf0) = L_00;
    h = time((time_t *)0x0);
    buff._8_4_ = &luaO_nilobject_;
    buff._12_4_ = lua_newstate;
    buff._0_4_ = L_00;
    buff._4_4_ = &h;
    uVar3 = luaS_hash(buff,0x10,h);
    *(undefined4 *)((int)pvVar2 + 0x7c) = 0x180;
    *(undefined4 *)((int)pvVar2 + 0x80) = 0;
    *(undefined4 *)((int)pvVar2 + 0x88) = 0;
    *(undefined4 *)((int)pvVar2 + 0x8c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0x94) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c) = 0;
    *(uint *)((int)pvVar2 + 0xa0) = uVar3;
    *(undefined *)((int)pvVar2 + 0xa5) = 7;
    *(undefined *)((int)pvVar2 + 0xa6) = 0;
    *(undefined *)((int)pvVar2 + 0xa7) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xac) = 0;
    *(undefined4 *)((int)pvVar2 + 0xb0) = 0;
    *(undefined4 *)((int)pvVar2 + 0xb4) = 0;
    *(undefined4 *)((int)pvVar2 + 0xb8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xbc) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc0) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc4) = 0;
    *(undefined4 *)((int)pvVar2 + 200) = 0;
    *(undefined4 *)((int)pvVar2 + 0xcc) = 0;
    *(undefined4 *)((int)pvVar2 + 0xd0) = 0;
    *(undefined4 *)((int)pvVar2 + 0xd4) = 0;
    *(undefined4 *)((int)pvVar2 + 0xdc) = 0;
    *(undefined4 *)((int)pvVar2 + 0xe0) = 0;
    *(undefined4 *)((int)pvVar2 + 0xe4) = 200;
    *(undefined4 *)((int)pvVar2 + 0xe8) = 200;
    *(undefined4 *)((int)pvVar2 + 0xec) = 0;
    *(undefined4 *)((int)pvVar2 + 0xf4) = 0;
    *(undefined8 *)((int)pvVar2 + 0x15c) = 0;
    *(undefined8 *)((int)pvVar2 + 0x164) = 0;
    *(undefined8 *)((int)pvVar2 + 0x16c) = 0;
    *(undefined8 *)((int)pvVar2 + 0x174) = 0;
    *(undefined8 *)((int)pvVar2 + 0x178) = 0;
    iVar4 = luaD_rawrunprotected(L_00,f_luaopen,(void *)0x0);
    if (iVar4 != 0) {
      close_state(L_00);
      L_00 = (lua_State *)0x0;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return L_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


