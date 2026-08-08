/*
 * Ghidra decompilation
 *
 * Function : Update
 * Address  : 001efc30
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Blake2ThreadData::Update() */

void Blake2ThreadData::Update(void)

{
  blake2s_state *pbVar1;
  blake2s_state **in_x0;
  blake2s_state *pbVar2;
  blake2s_state *pbVar3;
  blake2s_state *pbVar4;
  
  pbVar3 = in_x0[1];
  pbVar2 = in_x0[2];
  if ((blake2s_state *)0x1ff < pbVar2) {
    pbVar4 = pbVar3;
    do {
      pbVar1 = pbVar4 + 0x200;
      blake2s_update(*in_x0,(uchar *)pbVar4,0x40);
      pbVar4 = pbVar1;
    } while (pbVar1 != pbVar3 + ((ulong)(pbVar2 + -0x200) & 0xfffffffffffffe00) + 0x200);
  }
  return;
}


