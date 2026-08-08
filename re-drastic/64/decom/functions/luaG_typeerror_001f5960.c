/*
 * Ghidra decompilation
 *
 * Function : luaG_typeerror
 * Address  : 001f5960
 * Program  : drastic64
 */


void luaG_typeerror(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(luaT_typenames_ + (((ulong)*(uint *)(param_2 + 8) & 0xf) + 1) * 8);
  uVar1 = varinfo();
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"attempt to %s a %s value%s",param_3,uVar2,uVar1);
}


