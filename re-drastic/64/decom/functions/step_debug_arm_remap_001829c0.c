/*
 * Ghidra decompilation
 *
 * Function : step_debug_arm_remap
 * Address  : 001829c0
 * Program  : drastic64
 */


void step_debug_arm_remap(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  _saved_reg = *(undefined8 *)(param_2 + 0x2370);
  DAT_004ec288 = *(undefined8 *)(param_2 + 0x2378);
  DAT_004ec290 = *(undefined8 *)(param_2 + 0x2380);
  DAT_004ec298 = *(undefined8 *)(param_2 + 0x2388);
  DAT_004ec2a0 = *(undefined8 *)(param_2 + 0x2390);
  DAT_004ec2a8 = *(undefined8 *)(param_2 + 0x2398);
  DAT_004ec2b0 = *(undefined8 *)(param_2 + 0x23a0);
  DAT_004ec2b8 = *(undefined8 *)(param_2 + 0x23a8);
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar3 = (uint)uVar1;
  if ((uVar3 & 0xf) != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)(uVar3 & 0xf) + 0x8dc) * 4) =
         *(undefined4 *)(param_2 + 0x22f0);
  }
  uVar2 = uVar3 >> 4 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x22f4);
  }
  uVar2 = uVar3 >> 8 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x22f8);
  }
  uVar2 = uVar3 >> 0xc & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x22fc);
  }
  uVar2 = uVar3 >> 0x10 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2300);
  }
  uVar2 = uVar3 >> 0x14 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2304);
  }
  uVar2 = uVar3 >> 0x18 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2308);
  }
  if (uVar3 >> 0x1c != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)(uVar3 >> 0x1c) + 0x8dc) * 4) =
         *(undefined4 *)(param_2 + 0x230c);
  }
  uVar3 = (uint)((ulong)uVar1 >> 0x20);
  if ((uVar3 & 0xf) != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)(uVar3 & 0xf) + 0x8dc) * 4) =
         *(undefined4 *)(param_2 + 0x2310);
  }
  uVar2 = uVar3 >> 4 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2314);
  }
  uVar2 = uVar3 >> 8 & 0xf;
  if (uVar2 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar2 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2320);
  }
  uVar3 = uVar3 >> 0xc & 0xf;
  if (uVar3 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar3 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 0x2324);
  }
  uVar3 = (ushort)((ulong)uVar1 >> 0x30) & 0xf;
  if (uVar3 != 0xf) {
    *(undefined4 *)(param_2 + ((ulong)uVar3 + 0x8dc) * 4) = *(undefined4 *)(param_2 + 9000);
  }
  return;
}


