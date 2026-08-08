/*
 * Ghidra decompilation
 *
 * Function : escape_str
 * Address  : 00172a70
 * Program  : drastic64
 */


void escape_str(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = *param_2;
  do {
    while( true ) {
      if (bVar1 == 0) {
        *(undefined *)param_1 = 0;
        return;
      }
      if (bVar1 != 0x27) break;
      *param_1 = 0x6f706126;
      puVar2 = (undefined4 *)((long)param_1 + 6);
      *(undefined4 *)((long)param_1 + 3) = 0x3b736f;
LAB_00172ac8:
      param_2 = param_2 + 1;
      bVar1 = *param_2;
      param_1 = puVar2;
    }
    if (bVar1 < 0x28) {
      if (bVar1 == 0x22) {
        *param_1 = 0x6f757126;
        puVar2 = (undefined4 *)((long)param_1 + 5);
        *(undefined4 *)((long)param_1 + 3) = 0x3b746f;
      }
      else {
        if (bVar1 != 0x26) goto LAB_00172b24;
        puVar2 = (undefined4 *)((long)param_1 + 5);
        *param_1 = 0x706d6126;
        *(undefined2 *)(param_1 + 1) = 0x3b;
      }
      goto LAB_00172ac8;
    }
    if (bVar1 == 0x3c) {
      *param_1 = 0x3b746c26;
      puVar2 = param_1 + 1;
      *(undefined *)puVar2 = 0;
      goto LAB_00172ac8;
    }
    if (bVar1 != 0x3e) {
LAB_00172b24:
      puVar2 = (undefined4 *)((long)param_1 + 1);
      *(byte *)param_1 = bVar1;
      goto LAB_00172ac8;
    }
    *param_1 = 0x3b746726;
    param_1 = param_1 + 1;
    *(undefined *)param_1 = 0;
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  } while( true );
}


