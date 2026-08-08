/*
 * Ghidra decompilation
 *
 * Function : hash_final
 * Address  : 080e8670
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void hash_final(hash_context *context,uint32 *digest,bool handsoff)

{
  undefined auVar1 [16];
  int iVar2;
  uint32 uVar3;
  uint uVar4;
  uint j_1;
  uint32 uVar5;
  uint32 uVar6;
  uint j_2;
  uint uVar7;
  uint i;
  uint j;
  uchar finalcount [8];
  
  iVar2 = __stack_chk_guard;
  uVar3 = context->count[0];
  uVar5 = context->count[1];
  i = 8;
  finalcount[7] = (uchar)uVar3;
  finalcount[0] = (uchar)(uVar5 >> 0x18);
  uVar7 = uVar3 + 8;
  finalcount[3] = (uchar)uVar5;
  finalcount[4] = (uchar)(uVar3 >> 0x18);
  uVar6 = uVar5;
  if (uVar7 < 8) {
    uVar6 = uVar5 + 1;
  }
  context->count[0] = uVar7;
  finalcount[5] = (uchar)(uVar3 >> 0x10);
  uVar4 = (uVar3 << 0x17) >> 0x1a;
  if (uVar7 < 8) {
    context->count[1] = uVar6;
  }
  finalcount[1] = (uchar)(uVar5 >> 0x10);
  finalcount[2] = (uchar)(uVar5 >> 8);
  finalcount[6] = (uchar)(uVar3 >> 8);
  if (uVar4 == 0x3f) {
    context->buffer[0x3f] = 0x80;
    SHA1Transform(context->state,context->workspace,context->buffer,handsoff);
    uVar7 = context->count[0];
  }
  else {
    context->buffer[uVar4] = 0x80;
  }
  while ((uVar7 & 0x1f8) != 0x1c0) {
    while( true ) {
      uVar4 = (uVar7 << 0x17) >> 0x1a;
      uVar7 = uVar7 + 8;
      context->count[0] = uVar7;
      if (uVar7 < 8) {
        context->count[1] = context->count[1] + 1;
      }
      if (uVar4 != 0x3f) break;
      context->buffer[0x3f] = '\0';
      SHA1Transform(context->state,context->workspace,context->buffer,handsoff);
      uVar7 = context->count[0];
      if ((uVar7 & 0x1f8) == 0x1c0) goto LAB_080e8788;
    }
    context->buffer[uVar4] = '\0';
  }
LAB_080e8788:
  hash_process(context,finalcount,8,handsoff);
  if (context < (hash_context *)(digest + 4) && digest < context->state + 4) {
    *digest = context->state[0];
    digest[1] = context->state[1];
    digest[2] = context->state[2];
    digest[3] = context->state[3];
    digest[4] = context->state[4];
  }
  else {
    auVar1 = *(undefined (*) [16])context->state;
    *(longlong *)digest = auVar1._0_8_;
    *(longlong *)(digest + 2) = auVar1._8_8_;
    digest[4] = context->state[4];
  }
  i = 5;
  cleandata(&i,4);
  cleandata(&j,4);
  cleandata(context->buffer,0x40);
  cleandata(context,0x14);
  cleandata(context->count,8);
  cleandata(finalcount,8);
  if (handsoff) {
    *(undefined8 *)context->workspace = 0;
    *(undefined8 *)(context->workspace + 8) = 0;
    *(undefined8 *)(context->workspace + 0x10) = 0;
    *(undefined8 *)(context->workspace + 0x18) = 0;
    *(undefined8 *)(context->workspace + 0x20) = 0;
    *(undefined8 *)(context->workspace + 0x28) = 0;
    *(undefined8 *)(context->workspace + 0x30) = 0;
    *(undefined8 *)(context->workspace + 0x38) = 0;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


