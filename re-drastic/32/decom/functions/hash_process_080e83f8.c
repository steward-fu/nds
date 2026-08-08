/*
 * Ghidra decompilation
 *
 * Function : hash_process
 * Address  : 080e83f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void hash_process(hash_context *context,uchar *data,size_t len,bool handsoff)

{
  int iVar1;
  uint i;
  uint blen;
  uint uVar2;
  uint32 uVar3;
  uint uVar4;
  uint j;
  undefined4 *puVar5;
  uchar buffer [64];
  
  iVar1 = __stack_chk_guard;
  uVar2 = len * 8 + context->count[0];
  uVar4 = (context->count[0] << 0x17) >> 0x1a;
  context->count[0] = uVar2;
  uVar3 = context->count[1];
  if (uVar2 < len * 8) {
    uVar3 = uVar3 + 1;
  }
  i = (uint)data;
  if (len + uVar4 < 0x40) {
    i = 0;
  }
  context->count[1] = uVar3 + (len >> 0x1d);
  if (0x3f < len + uVar4) {
    i = 0x40 - uVar4;
    memcpy(context->buffer + uVar4,data,i);
    SHA1Transform(context->state,context->workspace,context->buffer,handsoff);
    uVar2 = i;
    if (0x7f - uVar4 < len) {
      do {
        puVar5 = (undefined4 *)(data + uVar2);
        buffer._0_4_ = *puVar5;
        buffer._4_4_ = puVar5[1];
        buffer._8_4_ = puVar5[2];
        buffer._12_4_ = puVar5[3];
        buffer._16_4_ = puVar5[4];
        buffer._20_4_ = puVar5[5];
        buffer._24_4_ = puVar5[6];
        buffer._28_4_ = puVar5[7];
        buffer._32_4_ = puVar5[8];
        buffer._36_4_ = puVar5[9];
        buffer._40_4_ = puVar5[10];
        buffer._44_4_ = puVar5[0xb];
        buffer._48_4_ = puVar5[0xc];
        buffer._52_4_ = puVar5[0xd];
        buffer._56_4_ = puVar5[0xe];
        buffer._60_4_ = puVar5[0xf];
        SHA1Transform(context->state,context->workspace,buffer,handsoff);
        uVar4 = uVar2 + 0x7f;
        i = uVar2 + 0x40;
        *(undefined4 *)(data + uVar2) = buffer._0_4_;
        puVar5[1] = buffer._4_4_;
        puVar5[2] = buffer._8_4_;
        puVar5[3] = buffer._12_4_;
        puVar5[4] = buffer._16_4_;
        puVar5[5] = buffer._20_4_;
        puVar5[6] = buffer._24_4_;
        puVar5[7] = buffer._28_4_;
        puVar5[8] = buffer._32_4_;
        puVar5[9] = buffer._36_4_;
        puVar5[10] = buffer._40_4_;
        puVar5[0xb] = buffer._44_4_;
        puVar5[0xc] = buffer._48_4_;
        puVar5[0xd] = buffer._52_4_;
        puVar5[0xe] = buffer._56_4_;
        puVar5[0xf] = buffer._60_4_;
        uVar2 = i;
      } while (uVar4 < len);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  if (i < len) {
    if (iVar1 == __stack_chk_guard) {
      memcpy(context->buffer + uVar4,data + i,len - i);
      return;
    }
  }
  else if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


