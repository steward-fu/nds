/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_load
 * Address  : 080c29c8
 * Program  : drastic
 */


undefined8
render_polygon_toon_load(undefined8 *param_1,undefined (*param_2) [16],int param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined8 uVar5;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  
  uVar5 = *param_1;
  puVar2 = (undefined8 *)(*param_2 + param_3);
  puVar3 = (undefined8 *)(*param_2 + param_3 * 2);
  do {
    VectorShiftRight(*param_2,1);
    VectorTableLookup(unaff_r4,puVar2,4);
    VectorTableLookup(unaff_r5,puVar2,4);
    VectorTableLookup(unaff_r4,unaff_r4,4);
    VectorTableLookup(unaff_r5,unaff_r4,4);
    VectorTableLookup(unaff_r4,puVar2,4);
    VectorTableLookup(unaff_r5,puVar2,4);
    *(undefined8 *)*param_2 = in_d22;
    *(undefined8 *)(*param_2 + 8) = in_d23;
    param_2 = param_2 + 1;
    *puVar2 = in_d24;
    puVar2[1] = in_d25;
    puVar2 = puVar2 + 2;
    *puVar3 = in_d26;
    puVar3[1] = in_d27;
    puVar3 = puVar3 + 2;
    iVar4 = param_4 + -0x10;
    bVar1 = 0xf < param_4;
    param_4 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return uVar5;
}


