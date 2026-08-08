/*
 * Ghidra decompilation
 *
 * Function : reset_spu
 * Address  : 0016d910
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_spu(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined auStack_828 [2080];
  long local_8;
  
  lVar3 = *(long *)(param_1 + 0x40cf0);
  *(undefined8 *)(param_1 + 0x400a8) = 0;
  *(undefined4 *)(param_1 + 0x400b8) = 0;
  *(undefined8 *)(param_1 + 0x400c8) = 0;
  *(undefined4 *)(param_1 + 0x400d0) = 0;
  *(undefined4 *)(param_1 + 0x400dc) = 0;
  *(undefined2 *)(param_1 + 0x400e0) = 0;
  *(undefined2 *)(param_1 + 0x400e5) = 3;
  *(undefined *)(param_1 + 0x400e8) = 0;
  *(undefined8 *)(param_1 + 0x40170) = 0;
  *(undefined4 *)(param_1 + 0x40180) = 0;
  *(undefined8 *)(param_1 + 0x40190) = 0;
  *(undefined4 *)(param_1 + 0x40198) = 0;
  *(undefined4 *)(param_1 + 0x401a4) = 0;
  *(undefined2 *)(param_1 + 0x401a8) = 0;
  *(undefined *)(param_1 + 0x401b0) = 0;
  *(undefined2 *)(param_1 + 0x401ad) = 3;
  *(undefined8 *)(param_1 + 0x40238) = 0;
  *(undefined4 *)(param_1 + 0x40248) = 0;
  *(undefined8 *)(param_1 + 0x40258) = 0;
  *(undefined4 *)(param_1 + 0x40260) = 0;
  *(undefined4 *)(param_1 + 0x4026c) = 0;
  *(undefined2 *)(param_1 + 0x40270) = 0;
  *(undefined *)(param_1 + 0x40278) = 0;
  *(undefined2 *)(param_1 + 0x40275) = 3;
  *(undefined8 *)(param_1 + 0x40300) = 0;
  *(undefined4 *)(param_1 + 0x40310) = 0;
  *(undefined8 *)(param_1 + 0x40320) = 0;
  *(undefined4 *)(param_1 + 0x40328) = 0;
  *(undefined4 *)(param_1 + 0x40334) = 0;
  *(undefined2 *)(param_1 + 0x40338) = 0;
  *(undefined *)(param_1 + 0x40340) = 0;
  *(undefined2 *)(param_1 + 0x4033d) = 3;
  *(undefined8 *)(param_1 + 0x403c8) = 0;
  *(undefined4 *)(param_1 + 0x403d8) = 0;
  *(undefined8 *)(param_1 + 0x403e8) = 0;
  *(undefined4 *)(param_1 + 0x403f0) = 0;
  *(undefined4 *)(param_1 + 0x403fc) = 0;
  *(undefined2 *)(param_1 + 0x40400) = 0;
  *(undefined *)(param_1 + 0x40408) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined2 *)(param_1 + 0x40405) = 3;
  *(undefined8 *)(param_1 + 0x40490) = 0;
  *(undefined4 *)(param_1 + 0x404a0) = 0;
  *(undefined8 *)(param_1 + 0x404b0) = 0;
  *(undefined4 *)(param_1 + 0x404b8) = 0;
  *(undefined4 *)(param_1 + 0x404c4) = 0;
  *(undefined2 *)(param_1 + 0x404c8) = 0;
  *(undefined *)(param_1 + 0x404d0) = 0;
  *(undefined2 *)(param_1 + 0x404cd) = 3;
  *(undefined8 *)(param_1 + 0x40558) = 0;
  *(undefined4 *)(param_1 + 0x40568) = 0;
  *(undefined8 *)(param_1 + 0x40578) = 0;
  *(undefined4 *)(param_1 + 0x40580) = 0;
  *(undefined4 *)(param_1 + 0x4058c) = 0;
  *(undefined2 *)(param_1 + 0x40590) = 0;
  *(undefined *)(param_1 + 0x40598) = 0;
  *(undefined2 *)(param_1 + 0x40595) = 3;
  *(undefined8 *)(param_1 + 0x40620) = 0;
  *(undefined4 *)(param_1 + 0x40630) = 0;
  *(undefined8 *)(param_1 + 0x40640) = 0;
  *(undefined4 *)(param_1 + 0x40648) = 0;
  *(undefined4 *)(param_1 + 0x40654) = 0;
  *(undefined2 *)(param_1 + 0x40658) = 0;
  *(undefined *)(param_1 + 0x40660) = 0;
  *(undefined2 *)(param_1 + 0x4065d) = 3;
  *(undefined8 *)(param_1 + 0x406e8) = 0;
  *(undefined4 *)(param_1 + 0x406f8) = 0;
  *(undefined8 *)(param_1 + 0x40708) = 0;
  *(undefined4 *)(param_1 + 0x40710) = 0;
  *(undefined4 *)(param_1 + 0x4071c) = 0;
  *(undefined2 *)(param_1 + 0x40720) = 0;
  *(undefined *)(param_1 + 0x40728) = 0;
  *(undefined2 *)(param_1 + 0x40725) = 3;
  *(undefined8 *)(param_1 + 0x407b0) = 0;
  *(undefined4 *)(param_1 + 0x407c0) = 0;
  *(undefined8 *)(param_1 + 0x407d0) = 0;
  *(undefined4 *)(param_1 + 0x407d8) = 0;
  *(undefined4 *)(param_1 + 0x407e4) = 0;
  *(undefined2 *)(param_1 + 0x407e8) = 0;
  *(undefined *)(param_1 + 0x407f0) = 0;
  *(undefined2 *)(param_1 + 0x407ed) = 3;
  *(undefined8 *)(param_1 + 0x40878) = 0;
  *(undefined4 *)(param_1 + 0x40888) = 0;
  *(undefined8 *)(param_1 + 0x40898) = 0;
  *(undefined4 *)(param_1 + 0x408a0) = 0;
  *(undefined4 *)(param_1 + 0x408ac) = 0;
  *(undefined2 *)(param_1 + 0x408b0) = 0;
  *(undefined *)(param_1 + 0x408b8) = 0;
  *(undefined2 *)(param_1 + 0x408b5) = 3;
  *(undefined8 *)(param_1 + 0x40940) = 0;
  *(undefined4 *)(param_1 + 0x40950) = 0;
  *(undefined8 *)(param_1 + 0x40960) = 0;
  *(undefined4 *)(param_1 + 0x40968) = 0;
  *(undefined4 *)(param_1 + 0x40974) = 0;
  *(undefined2 *)(param_1 + 0x40978) = 0;
  *(undefined *)(param_1 + 0x40980) = 0;
  *(undefined2 *)(param_1 + 0x4097d) = 3;
  *(undefined8 *)(param_1 + 0x40a08) = 0;
  *(undefined4 *)(param_1 + 0x40a18) = 0;
  *(undefined8 *)(param_1 + 0x40a28) = 0;
  *(undefined4 *)(param_1 + 0x40a30) = 0;
  *(undefined4 *)(param_1 + 0x40a3c) = 0;
  *(undefined2 *)(param_1 + 0x40a40) = 0;
  *(undefined *)(param_1 + 0x40a48) = 0;
  *(undefined2 *)(param_1 + 0x40a45) = 3;
  *(undefined8 *)(param_1 + 0x40ad0) = 0;
  *(undefined4 *)(param_1 + 0x40ae0) = 0;
  *(undefined8 *)(param_1 + 0x40af0) = 0;
  *(undefined4 *)(param_1 + 0x40af8) = 0;
  *(undefined4 *)(param_1 + 0x40b04) = 0;
  *(undefined2 *)(param_1 + 0x40b08) = 0;
  *(undefined *)(param_1 + 0x40b10) = 0;
  *(undefined2 *)(param_1 + 0x40b0d) = 3;
  *(undefined8 *)(param_1 + 0x40b98) = 0;
  *(undefined4 *)(param_1 + 0x40ba8) = 0;
  *(undefined8 *)(param_1 + 0x40bb8) = 0;
  *(undefined4 *)(param_1 + 0x40bc0) = 0;
  *(undefined4 *)(param_1 + 0x40bcc) = 0;
  *(undefined2 *)(param_1 + 0x40bd0) = 0;
  *(undefined *)(param_1 + 0x40bd8) = 0;
  *(undefined2 *)(param_1 + 0x40bd5) = 3;
  *(undefined8 *)(param_1 + 0x40c60) = 0;
  *(undefined4 *)(param_1 + 0x40c70) = 0;
  *(undefined8 *)(param_1 + 0x40c80) = 0;
  *(undefined4 *)(param_1 + 0x40c88) = 0;
  *(undefined4 *)(param_1 + 0x40c94) = 0;
  *(undefined2 *)(param_1 + 0x40c98) = 0;
  *(undefined *)(param_1 + 0x40ca0) = 0;
  *(undefined2 *)(param_1 + 0x40c9d) = 3;
  audio_reset_buffer();
  *(undefined *)(param_1 + 0x40cc4) = 0;
  *(undefined *)(param_1 + 0x40ce4) = 0;
  *(undefined8 *)(param_1 + 0x40d00) = 0;
  *(undefined4 *)(param_1 + 0x40d1c) = 0;
  *(undefined4 *)(param_1 + 0x40d24) = 0;
  *(undefined *)(param_1 + 0x40d40) = 0;
  if (*(void **)(param_1 + 0x40d30) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40d30));
    *(undefined8 *)(param_1 + 0x40d30) = 0;
  }
  lVar1 = lVar3 + 0x8a780;
  __sprintf_chk(auStack_828,1,0x820,"%s%cmicrophone%c%s.wav",lVar1,0x2f,0x2f,lVar3 + 0x8b380);
  iVar2 = spu_load_fake_microphone_data(param_1,auStack_828);
  if (iVar2 == -1) {
    __sprintf_chk(auStack_828,1,0x820,"%s%cmicrophone%cmicrophone.wav",lVar1,0x2f);
    iVar2 = spu_load_fake_microphone_data(param_1,auStack_828);
    if (iVar2 == 0) {
      puts(" Loaded default fake microphone audio file.");
    }
  }
  else {
    puts(" Loaded game specific fake microphone audio file.");
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


