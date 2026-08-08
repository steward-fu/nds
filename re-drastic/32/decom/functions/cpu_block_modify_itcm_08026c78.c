/*
 * Ghidra decompilation
 *
 * Function : cpu_block_modify_itcm
 * Address  : 08026c78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_block_modify_itcm(cpu_struct *cpu,u32 address)

{
  byte bVar1;
  u8 *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  u32 hot_modification_count;
  uint uVar6;
  u32 itcm_index;
  translation_cache_struct *ptVar7;
  translation_cache_struct *translation_cache;
  u32 uVar8;
  u32 uVar9;
  
  ptVar7 = cpu->translation_cache;
  uVar6 = (address << 0x11) >> 0x13;
  bVar1 = ptVar7->itcm_hot_modifications[uVar6];
  bVar5 = bVar1 & 0x7f;
  if (bVar5 < 0xf) {
    bVar5 = bVar5 + 1;
  }
  if ((bVar1 & 0x80) == 0) {
LAB_08026e24:
    ptVar7->itcm_hot_modifications[uVar6] = bVar1 & 0x80 | bVar5;
    return 1;
  }
  uVar3 = ptVar7->itcm_hot_block_count;
  uVar9 = *(u32 *)(((cpu->memory_interface).memory)->itcm + uVar6 * 4);
  if (uVar3 == 0) {
    uVar8 = 1;
LAB_08026e5c:
    ptVar7->itcm_hot_blocks[uVar3].opcode = uVar9;
    ptVar7->itcm_hot_blocks[uVar3].pc = address;
    ptVar7->block_lookup_itcm_arm[uVar6] = (u8 *)0x0;
    cpu->block_lookup_mini_hash[(address << 0x14) >> 0x16] = 0;
    puVar2 = (u8 *)cpu_block_lookup_base(cpu,address);
    ptVar7->itcm_hot_blocks[uVar3].translation_ptr = puVar2;
    ptVar7->itcm_hot_block_count = uVar8;
  }
  else {
    if ((uVar9 == ptVar7->itcm_hot_blocks[0].opcode) && (address == ptVar7->itcm_hot_blocks[0].pc))
    {
      iVar4 = 0;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 1;
LAB_08026e58:
        uVar8 = uVar3 + 1;
        goto LAB_08026e5c;
      }
      if ((uVar9 == ptVar7->itcm_hot_blocks[1].opcode) && (address == ptVar7->itcm_hot_blocks[1].pc)
         ) {
        iVar4 = 1;
      }
      else {
        if (uVar3 == 2) goto LAB_08026e58;
        if ((uVar9 == ptVar7->itcm_hot_blocks[2].opcode) &&
           (address == ptVar7->itcm_hot_blocks[2].pc)) {
          iVar4 = 2;
        }
        else {
          if (uVar3 == 3) goto LAB_08026e58;
          if ((uVar9 == ptVar7->itcm_hot_blocks[3].opcode) &&
             (address == ptVar7->itcm_hot_blocks[3].pc)) {
            iVar4 = 3;
          }
          else {
            if (uVar3 == 4) goto LAB_08026e58;
            if ((uVar9 == ptVar7->itcm_hot_blocks[4].opcode) &&
               (address == ptVar7->itcm_hot_blocks[4].pc)) {
              iVar4 = 4;
            }
            else {
              if (uVar3 == 5) goto LAB_08026e58;
              if ((uVar9 == ptVar7->itcm_hot_blocks[5].opcode) &&
                 (address == ptVar7->itcm_hot_blocks[5].pc)) {
                iVar4 = 5;
              }
              else {
                if (uVar3 == 6) goto LAB_08026e58;
                if ((uVar9 == ptVar7->itcm_hot_blocks[6].opcode) &&
                   (address == ptVar7->itcm_hot_blocks[6].pc)) {
                  iVar4 = 6;
                }
                else {
                  if (uVar3 == 7) goto LAB_08026e58;
                  if ((uVar9 == ptVar7->itcm_hot_blocks[7].opcode) &&
                     (address == ptVar7->itcm_hot_blocks[7].pc)) {
                    iVar4 = 7;
                  }
                  else {
                    if (uVar3 == 8) goto LAB_08026e58;
                    if ((uVar9 == ptVar7->itcm_hot_blocks[8].opcode) &&
                       (address == ptVar7->itcm_hot_blocks[8].pc)) {
                      iVar4 = 8;
                    }
                    else {
                      if (uVar3 == 9) goto LAB_08026e58;
                      if ((uVar9 == ptVar7->itcm_hot_blocks[9].opcode) &&
                         (address == ptVar7->itcm_hot_blocks[9].pc)) {
                        iVar4 = 9;
                      }
                      else {
                        if (uVar3 == 10) goto LAB_08026e58;
                        if ((uVar9 == ptVar7->itcm_hot_blocks[10].opcode) &&
                           (address == ptVar7->itcm_hot_blocks[10].pc)) {
                          iVar4 = 10;
                        }
                        else {
                          if (uVar3 == 0xb) goto LAB_08026e58;
                          if ((uVar9 == ptVar7->itcm_hot_blocks[0xb].opcode) &&
                             (address == ptVar7->itcm_hot_blocks[0xb].pc)) {
                            iVar4 = 0xb;
                          }
                          else {
                            if (uVar3 == 0xc) goto LAB_08026e58;
                            if ((uVar9 == ptVar7->itcm_hot_blocks[0xc].opcode) &&
                               (address == ptVar7->itcm_hot_blocks[0xc].pc)) {
                              iVar4 = 0xc;
                            }
                            else {
                              if (uVar3 == 0xd) goto LAB_08026e58;
                              if ((uVar9 == ptVar7->itcm_hot_blocks[0xd].opcode) &&
                                 (address == ptVar7->itcm_hot_blocks[0xd].pc)) {
                                iVar4 = 0xd;
                              }
                              else {
                                if (uVar3 == 0xe) goto LAB_08026e58;
                                if ((uVar9 == ptVar7->itcm_hot_blocks[0xe].opcode) &&
                                   (address == ptVar7->itcm_hot_blocks[0xe].pc)) {
                                  iVar4 = 0xe;
                                }
                                else {
                                  if (uVar3 == 0xf) goto LAB_08026e58;
                                  if ((uVar9 != ptVar7->itcm_hot_blocks[0xf].opcode) ||
                                     (address != ptVar7->itcm_hot_blocks[0xf].pc))
                                  goto LAB_08026e24;
                                  iVar4 = 0xf;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ptVar7->block_lookup_itcm_arm[uVar6] = ptVar7->itcm_hot_blocks[iVar4].translation_ptr;
    cpu->block_lookup_mini_hash[(address << 0x14) >> 0x16] = 0;
  }
  return 0;
}


