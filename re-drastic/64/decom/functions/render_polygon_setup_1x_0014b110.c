/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_1x
 * Address  : 0014b110
 * Program  : drastic64
 */


void render_polygon_setup_1x
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
               int param_6,undefined4 param_7,long param_8)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  
  uVar3 = *(ushort *)(param_2 + 0x630);
  puVar1 = (ushort *)(param_2 + 0x630);
  lVar2 = param_8 + 8;
  do {
    while (uVar6 = (uint)uVar3, uVar6 == 0) {
      param_2 = param_2 + 4;
      param_5 = param_5 + 1;
      param_6 = param_6 + -1;
      if (param_6 == 0) {
        return;
      }
      puVar7 = puVar1 + 2;
      puVar1 = puVar1 + 2;
      uVar3 = *puVar7;
    }
    iVar8 = 0;
    uVar4 = 0;
    do {
      puVar7 = puVar1;
      uVar5 = uVar4 + uVar6;
      param_6 = param_6 + -1;
      puVar1 = puVar7 + 2;
      if (uVar5 < 0x101) {
        iVar8 = iVar8 + 1;
        if (param_6 == 0) {
LAB_0014b1b0:
          render_polygon_flush_1x_isra_0
                    (param_1,param_2,param_3,param_5,iVar8,param_4,uVar5,param_7,param_8,lVar2);
          return;
        }
      }
      else {
        render_polygon_flush_1x_isra_0
                  (param_1,param_2,param_3,param_5,iVar8,param_4,uVar4,param_7,param_8,lVar2);
        param_5 = param_5 + iVar8;
        param_2 = param_2 + (ulong)(uint)(iVar8 << 2);
        uVar5 = uVar6;
        if (param_6 == 0) {
          iVar8 = 1;
          goto LAB_0014b1b0;
        }
        iVar8 = 1;
      }
      uVar6 = (uint)*puVar1;
      uVar4 = uVar5;
    } while (uVar6 != 0);
    render_polygon_flush_1x_isra_0
              (param_1,param_2,param_3,param_5,iVar8,param_4,uVar5,param_7,param_8,lVar2);
    uVar3 = puVar7[2];
    param_5 = param_5 + iVar8;
    param_2 = param_2 + (ulong)(uint)(iVar8 << 2);
  } while( true );
}


