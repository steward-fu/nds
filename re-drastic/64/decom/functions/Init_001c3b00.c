/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001c3b00
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RAROptions::Init() */

void RAROptions::Init(void)

{
  undefined4 uVar1;
  undefined8 *in_x0;
  
  *in_x0 = 0;
  in_x0[2] = 0;
  memset(in_x0 + 3,0,0x2000);
  memset(in_x0 + 0x403,0,0x2000);
  *(undefined4 *)(in_x0 + 0x803) = 0;
  *(undefined *)((long)in_x0 + 0x401c) = 0;
  memset(in_x0 + 0x804,0,0x2000);
  memset(in_x0 + 0xc04,0,0x2000);
  in_x0[0x1004] = 0;
  *(undefined4 *)(in_x0 + 0x1005) = 0;
  memset((void *)((long)in_x0 + 0x802c),0,0x2000);
  SecPassword::Clean();
  *(undefined *)(in_x0 + 0x1446) = 0;
  memset((void *)((long)in_x0 + 0xa234),0,0x2000);
  *(undefined4 *)((long)in_x0 + 0xc234) = 0;
  *(undefined *)(in_x0 + 0x1847) = 0;
  *(undefined4 *)((long)in_x0 + 0xc23c) = 0;
  in_x0[0x1848] = 0;
  in_x0[0x1849] = 0;
  *(undefined2 *)(in_x0 + 0x184a) = 0;
  *(undefined *)((long)in_x0 + 0xc252) = 0;
  *(undefined4 *)((long)in_x0 + 0xc254) = 0;
  in_x0[0x184b] = 0;
  *(undefined *)(in_x0 + 0x184c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc264) = 0;
  in_x0[0x184e] = 0;
  in_x0[0x184f] = 0;
  in_x0[0x1851] = 0;
  in_x0[0x1850] = 0;
  in_x0[0x1852] = 0;
  *(undefined4 *)(in_x0 + 0x1853) = 0;
  *(undefined2 *)((long)in_x0 + 0xc29c) = 0;
  in_x0[0x1854] = 0;
  *(undefined2 *)(in_x0 + 0x1855) = 0;
  *(undefined *)((long)in_x0 + 0xc2aa) = 0;
  *(undefined4 *)((long)in_x0 + 0xc2ac) = 0;
  in_x0[0x1856] = 0;
  memset(in_x0 + 0x1857,0,0x200);
  *(undefined4 *)(in_x0 + 0x1897) = 0;
  *(undefined *)((long)in_x0 + 0xc4bc) = 0;
  RarTime::operator=((RarTime *)(in_x0 + 0x1898),0);
  RarTime::operator=((RarTime *)(in_x0 + 0x1899),0);
  *(undefined8 *)((long)in_x0 + 0xc4e4) = 0;
  *(undefined8 *)((long)in_x0 + 0xc4ec) = 0;
  *(undefined8 *)((long)in_x0 + 0xc4f4) = 0;
  *(undefined8 *)((long)in_x0 + 0xc4fc) = 0;
  *(undefined8 *)((long)in_x0 + 0xc504) = 0;
  *(undefined8 *)((long)in_x0 + 0xc50c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc514) = 0;
  *(undefined8 *)((long)in_x0 + 0xc51c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc524) = 0;
  *(undefined8 *)((long)in_x0 + 0xc52c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc534) = 0;
  *(undefined8 *)((long)in_x0 + 0xc53c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc544) = 0;
  *(undefined8 *)((long)in_x0 + 0xc54c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc554) = 0;
  *(undefined8 *)((long)in_x0 + 0xc55c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc564) = 0;
  *(undefined8 *)((long)in_x0 + 0xc56c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc574) = 0;
  *(undefined8 *)((long)in_x0 + 0xc57c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc584) = 0;
  *(undefined8 *)((long)in_x0 + 0xc58c) = 0;
  *(undefined8 *)((long)in_x0 + 0xc594) = 0;
  *(undefined8 *)((long)in_x0 + 0xc59c) = 0;
  memset((void *)((long)in_x0 + 0xc5a4),0,0x2000);
  *(undefined4 *)((long)in_x0 + 0xe5a4) = 0;
  *(undefined2 *)(in_x0 + 0x1cb5) = 0;
  in_x0[0x1cb6] = 0;
  memset(in_x0 + 0x1cb7,0,0x2000);
  *(undefined4 *)(in_x0 + 0x20b7) = 0;
  memset((void *)((long)in_x0 + 0x105bc),0,0x2000);
  *(undefined8 *)((long)in_x0 + 0x125bc) = 0;
  in_x0[0x24b9] = 0;
  in_x0[0x24bb] = 0;
  in_x0[0x24ba] = 0;
  in_x0[0x24bc] = 0;
  in_x0[2] = 0x2000000;
  *(undefined4 *)((long)in_x0 + 0xc234) = 0;
  *(undefined4 *)((long)in_x0 + 0xc2a4) = 0;
  *(undefined *)((long)in_x0 + 0xc4b9) = 1;
  *(undefined4 *)((long)in_x0 + 0xe5ac) = 4;
  in_x0[0x189b] = 0x7fffffff7fffffff;
  in_x0[0x189a] = 0x7fffffff7fffffff;
  *(undefined4 *)((long)in_x0 + 0xc23c) = 0;
  *(undefined2 *)(in_x0 + 0x189c) = 0;
  *(undefined *)((long)in_x0 + 0xc4e2) = 0;
  in_x0[0x1848] = 0x200000003;
  uVar1 = GetNumberOfThreads();
  *(undefined4 *)(in_x0 + 0x20b7) = uVar1;
  *(undefined4 *)(in_x0 + 0x803) = 1;
  return;
}


