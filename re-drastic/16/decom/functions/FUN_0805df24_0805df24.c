/*
 * Ghidra decompilation
 *
 * Function : FUN_0805df24
 * Address  : 0805df24
 * Program  : drastic16
 */


void FUN_0805df24(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    switch(cVar1) {
    case '\"':
      puVar2 = (undefined4 *)((int)param_1 + 5);
      *param_1 = 0x6f757126;
      *(undefined2 *)(param_1 + 1) = 0x3b74;
      *(undefined *)((int)param_1 + 6) = 0;
      break;
    default:
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(char *)param_1 = cVar1;
      break;
    case '&':
      puVar2 = (undefined4 *)((int)param_1 + 5);
      *param_1 = 0x706d6126;
      *(undefined2 *)(param_1 + 1) = 0x3b;
      break;
    case '\'':
      *param_1 = 0x6f706126;
      *(undefined2 *)(param_1 + 1) = 0x3b73;
      puVar2 = (undefined4 *)((int)param_1 + 6);
      *(undefined *)puVar2 = 0;
      break;
    case '<':
      *param_1 = 0x3b746c26;
      puVar2 = param_1 + 1;
      *(undefined *)puVar2 = 0;
      break;
    case '>':
      *param_1 = 0x3b746726;
      puVar2 = param_1 + 1;
      *(undefined *)puVar2 = 0;
    }
    param_2 = param_2 + 1;
    param_1 = puVar2;
    cVar1 = *param_2;
  }
  *(undefined *)param_1 = 0;
  return;
}


