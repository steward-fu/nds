/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed
 * Address  : 08082d50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void queue_geometry_command_packed(geometry_struct *geometry,u32 command)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  u32 packed_command_d;
  u8 *command_store_ptr_advance;
  byte *pbVar6;
  byte *pbVar7;
  u8 *command_store_ptr;
  u32 *puVar8;
  u32 incoming_parameters_remaining;
  int iVar9;
  u32 parameter_count;
  uint uVar10;
  u32 packed_command_b;
  uint uVar11;
  u32 packed_command_a;
  uint uVar12;
  u32 packed_command_c;
  
  if (geometry->incoming_parameters_remaining == 0) {
    pbVar6 = geometry->command_store_ptr;
    uVar10 = (command << 0x11) >> 0x19;
    uVar12 = (command << 9) >> 0x19;
    uVar11 = command & 0x7f;
    bVar1 = ""[uVar12];
    uVar5 = (command << 1) >> 0x19;
    bVar2 = ""[uVar10];
    pbVar7 = pbVar6;
    if (uVar11 != 0) {
      pbVar7 = pbVar6 + 1;
      *pbVar6 = (byte)uVar11;
    }
    bVar3 = ""[uVar11];
    bVar4 = ""[uVar5];
    pbVar6 = pbVar7;
    if (uVar10 != 0) {
      pbVar6 = pbVar7 + 1;
      *pbVar7 = (byte)((command << 0x11) >> 0x19);
    }
    pbVar7 = pbVar6;
    if (uVar12 != 0) {
      pbVar7 = pbVar6 + 1;
      *pbVar6 = (byte)((command << 9) >> 0x19);
    }
    iVar9 = (uint)bVar4 + (uint)bVar2 + (uint)bVar1 + (uint)bVar3;
    command_store_ptr = pbVar7;
    if (uVar5 != 0) {
      command_store_ptr = pbVar7 + 1;
      *pbVar7 = (byte)((command << 1) >> 0x19);
    }
    geometry->command_store_ptr_advance = command_store_ptr;
    if (iVar9 == 0) {
      geometry->command_store_ptr = command_store_ptr;
      if (0x400 < (int)command_store_ptr - (int)geometry->commands) {
        process_geometry(geometry);
        return;
      }
    }
    else {
      geometry->incoming_parameters_remaining = (u8)iVar9;
    }
  }
  else {
    iVar9 = geometry->incoming_parameters_remaining - 1;
    puVar8 = (u32 *)(geometry->parameter_store_ptr_advance + 1);
    *geometry->parameter_store_ptr_advance = command;
    geometry->parameter_store_ptr_advance = (s32 *)puVar8;
    if (iVar9 == 0) {
      geometry->command_store_ptr = geometry->command_store_ptr_advance;
      geometry->parameter_store_ptr = (s32 *)puVar8;
      if (0x400 < (int)geometry->command_store_ptr_advance - (int)geometry->commands) {
        process_geometry(geometry);
      }
    }
    geometry->incoming_parameters_remaining = (u8)iVar9;
  }
  return;
}


