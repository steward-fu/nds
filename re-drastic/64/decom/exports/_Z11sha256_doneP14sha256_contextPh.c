/*
 * Ghidra decompilation
 *
 * Function : _Z11sha256_doneP14sha256_contextPh
 * Address  : 001c8750
 * Program  : drastic64
 */


/* sha256_done(sha256_context*, unsigned char*) */

void sha256_done(sha256_context *param_1,uchar *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  *(sha256_context **)(param_1 + 0x28) = param_1 + 0x30;
  uVar1 = (uint)lVar2 & 0x3f;
  param_1[(ulong)uVar1 + 0x30] = (sha256_context)0x80;
  uVar3 = uVar1 + 1;
  uVar4 = lVar2 << 3;
  if (uVar1 != 0x37) {
    do {
      while( true ) {
        uVar1 = uVar3 & 0x3f;
        uVar3 = uVar1 + 1;
        if (uVar1 != 0) break;
        sha256_transform(param_1);
        param_1[0x30] = (sha256_context)0x0;
      }
      param_1[(ulong)uVar1 + 0x30] = (sha256_context)0x0;
    } while (uVar3 != 0x38);
  }
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 0x68) = uVar4 >> 0x20 | uVar4 << 0x20;
  sha256_transform(param_1);
  uVar4 = 0;
  do {
    param_2[uVar4] =
         (uchar)(*(uint *)(param_1 + (uVar4 >> 2 & 0x3fffffff) * 4) >>
                (ulong)((~(uint)uVar4 & 3) << 3));
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0xa54ff53a3c6ef372;
  *(undefined8 *)param_1 = 0xbb67ae856a09e667;
  *(undefined8 *)(param_1 + 0x18) = 0x5be0cd191f83d9ab;
  *(undefined8 *)(param_1 + 0x10) = 0x9b05688c510e527f;
  sha256_transform((sha256_context *)&DAT_00228000);
  cleandata(param_1 + 0x30,0x40);
  return;
}


