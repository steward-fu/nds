/*
 * Ghidra decompilation
 *
 * Function : FUN_0800599c
 * Address  : 0800599c
 * Program  : drastic16
 */


void FUN_0800599c(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  FUN_0807b85c();
  pcVar1 = getcwd((char *)(param_1 + 0x81c30),0x400);
  if (pcVar1 == (char *)0x0) {
    puts("getcwd for root path failed.");
  }
  strcpy((char *)(param_1 + 0x82030),(char *)(param_1 + 0x81c30));
  FUN_0800586c(param_1,"backup");
  FUN_0800586c(param_1,"savestates");
  FUN_0800586c(param_1,"config");
  FUN_0800586c(param_1,"profiles");
  FUN_0800586c(param_1,"unzip_cache");
  FUN_0800586c(param_1,"system");
  FUN_0800586c(param_1,"input_record");
  FUN_0800586c(param_1,"cheats");
  FUN_0800586c(param_1,"slot2");
  FUN_08066f14(param_1 + 0x81320);
  FUN_08067420(param_1,"drastic.cf2");
  FUN_0806706c(param_1,"drastic.cfg");
  FUN_0801c670(param_1 + 0x159ebf8,param_1,1,param_1 + 0x1da5188);
  FUN_0801c670(param_1 + 0x1da5188,param_1,0,param_1 + 0x159ebf8);
  FUN_080896f8(param_1 + 0x83000);
  FUN_08078280(param_1 + 0x12f0,param_1);
  iVar2 = FUN_08012b04(param_1 + 0x25ab720,param_1);
  if (-1 < iVar2) {
    FUN_08023174(param_1 + 0x26a7f80,param_1 + 0x25ab720);
    FUN_0805949c(param_1 + 0x155e000,param_1);
    FUN_0805c25c(param_1 + 0x1a0,param_1);
    FUN_0805ca00(param_1 + 0xe90,param_1);
    FUN_0805d0fc(param_1 + 0x12d4,param_1);
    FUN_0801544c(param_1 + 0x18,param_1);
    *(undefined *)(param_1 + 0x291646e) = 1;
    *(undefined *)(param_1 + 0x291646f) = 0x20;
    *(undefined4 *)(param_1 + 0x81818) = 0;
    *(undefined *)(param_1 + 0x82430) = 0;
    *(undefined *)(param_1 + 0x82830) = 0;
    *(undefined4 *)(param_1 + 0x81828) = 0;
    return;
  }
  FUN_08066e54(param_1);
  puts("FATAL: Could not load system files.");
                    /* WARNING: Subroutine does not return */
  FUN_08004cd4(param_1);
}


