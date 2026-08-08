/*
 * Ghidra decompilation
 *
 * Function : FUN_08006540
 * Address  : 08006540
 * Program  : drastic16
 */


undefined4 FUN_08006540(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  printf("Starting DraStic (version %s)\n\n","r2.3.0.0p");
  DAT_0a87cf2c = 0;
  FUN_0800599c(&DAT_081d5000);
  FUN_08005414(&DAT_081d5000,param_1,param_2);
  FUN_0807b734(DAT_0aaeb46f);
  if (param_1 < 2) {
    FUN_08066730(&DAT_081d5000,1);
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + (param_1 + 0x3fffffff) * 4);
    printf("Loading gamecard file %s.\n",uVar2);
    iVar1 = FUN_0805b738(&DAT_081d51a0,uVar2);
    if (iVar1 != 0) {
      puts("Gamecard load failed.");
      return 0xffffffff;
    }
    FUN_0807a374();
    FUN_08005dd4(&DAT_081d5000);
  }
  _setjmp((__jmp_buf_tag *)&DAT_0aaeb2c0);
  if (DAT_0aaeb46e == '\0') {
    FUN_08004c44(&DAT_081d5000);
    return 0;
  }
  printf("Calling recompiler event update handler (@ %p).\n",DAT_09775f68);
  FUN_0807fbec(&DAT_081d5000);
  return 0;
}


