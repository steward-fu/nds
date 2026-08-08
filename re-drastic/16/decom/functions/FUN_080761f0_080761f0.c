/*
 * Ghidra decompilation
 *
 * Function : FUN_080761f0
 * Address  : 080761f0
 * Program  : drastic16
 */


void FUN_080761f0(uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined auStack_110 [256];
  
  switch((param_1 << 0x10) >> 0x1d) {
  case 1:
    sprintf((char *)param_2,"%s %s, #%d",
            *(undefined4 *)(&DAT_080faa18 + ((param_1 << 0x13) >> 0x1e) * 4),
            (&DAT_080fa8a0)[(param_1 << 0x15) >> 0x1d],param_1 & 0xff);
    break;
  case 2:
    switch(param_1 >> 10 & 7) {
    case 1:
      uVar3 = (param_1 << 0x16) >> 0x1e;
      if (uVar3 == 3) {
        if ((param_1 & 0x80) == 0) {
          pcVar2 = "bx %s";
        }
        else {
          pcVar2 = "blx %s";
        }
        sprintf((char *)param_2,pcVar2,(&DAT_080fa8a0)[(param_1 << 0x19) >> 0x1c]);
      }
      else {
        sprintf((char *)param_2,"%s %s, %s",(&PTR_DAT_080faa68)[uVar3],
                (&DAT_080fa8a0)[param_1 & 7 | ((param_1 << 0x18) >> 0x1f) << 3],
                (&DAT_080fa8a0)[(param_1 << 0x19) >> 0x1c]);
      }
      break;
    case 2:
    case 3:
      sprintf((char *)param_2,"ldr %s, [pc, #%d]",(&DAT_080fa8a0)[(param_1 << 0x15) >> 0x1d],
              (param_1 & 0xff) << 2);
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      uVar3 = param_1 >> 10 & 3;
      if ((param_1 & 0x200) == 0) {
        puVar4 = (&PTR_DAT_080faa88)[uVar3];
      }
      else {
        puVar4 = (&PTR_DAT_080faa78)[uVar3];
      }
      sprintf((char *)param_2,"%s %s, [%s, %s]",puVar4,(&DAT_080fa8a0)[param_1 & 7],
              (&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],(&DAT_080fa8a0)[(param_1 << 0x17) >> 0x1d])
      ;
      break;
    default:
      sprintf((char *)param_2,"%s %s, %s",(&PTR_DAT_080faa28)[(param_1 << 0x16) >> 0x1c],
              (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d]);
    }
    break;
  case 3:
    uVar3 = (param_1 << 0x15) >> 0x1b;
    if ((param_1 & 0x1000) == 0) {
      uVar3 = uVar3 << 2;
    }
    sprintf((char *)param_2,"%s %s, [%s, #%d]",
            *(undefined4 *)(&DAT_080faa98 + ((param_1 << 0x13) >> 0x1e) * 4),
            (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],uVar3);
    return;
  case 4:
    iVar1 = (int)(param_1 << 0x14) >> 0x1f;
    if ((param_1 & 0x1000) == 0) {
      sprintf((char *)param_2,"%s %s, [%s, #%d]",*(undefined4 *)(&DAT_080faab0 + iVar1 * -4),
              (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],
              ((param_1 << 0x15) >> 0x1b) << 1);
    }
    else {
      sprintf((char *)param_2,"%s %s, [sp, #%d]",*(undefined4 *)(&DAT_080faaa8 + iVar1 * -4),
              (&DAT_080fa8a0)[(param_1 << 0x15) >> 0x1d],(param_1 & 0xff) << 2);
    }
    break;
  case 5:
    if ((param_1 & 0x1000) == 0) {
      puVar4 = &DAT_080eb4bc;
      if ((param_1 & 0x800) != 0) {
        puVar4 = &DAT_080eb4c0;
      }
      sprintf((char *)param_2,"add %s, %s, #%d",(&DAT_080fa8a0)[(param_1 << 0x15) >> 0x1d],puVar4,
              (param_1 & 0xff) << 2);
    }
    else if ((param_1 & 0xf00) == 0) {
      if ((param_1 & 0x80) == 0) {
        pcVar2 = "add sp, #%d";
      }
      else {
        pcVar2 = "add sp, #-%d";
      }
      sprintf((char *)param_2,pcVar2,(param_1 & 0x7f) << 2);
    }
    else {
      uVar3 = param_1 & 0xff;
      if ((param_1 & 0x800) == 0) {
        if ((param_1 & 0x100) != 0) {
          uVar3 = uVar3 | 0x4000;
        }
        puVar4 = &UNK_080eb4b4;
      }
      else if ((param_1 & 0x100) == 0) {
        puVar4 = &UNK_080eb4b0;
      }
      else {
        uVar3 = uVar3 | 0x8000;
        puVar4 = &UNK_080eb4b0;
      }
      FUN_0807565c(uVar3,auStack_110);
      sprintf((char *)param_2,"%s %s",puVar4,auStack_110);
    }
    break;
  case 6:
    if ((param_1 & 0x1000) == 0) {
      FUN_0807565c(param_1 & 0xff,auStack_110);
      sprintf((char *)param_2,"%sia %s!, %s",
              *(undefined4 *)(&DAT_080faab8 + ((int)(param_1 << 0x14) >> 0x1f) * -4),
              (&DAT_080fa8a0)[(param_1 << 0x15) >> 0x1d],auStack_110);
    }
    else {
      uVar3 = (param_1 << 0x14) >> 0x1c;
      if (uVar3 == 0xf) {
        sprintf((char *)param_2,"swi %d",param_1 & 0xff);
      }
      else {
        sprintf((char *)param_2,"b%s %x",(&PTR_DAT_080fa8f0)[uVar3],param_3 + 4 + (char)param_1 * 2)
        ;
      }
    }
    break;
  case 7:
    uVar3 = (param_1 << 0x13) >> 0x1e;
    if (uVar3 == 2) {
      sprintf((char *)param_2,"bll %x",param_1 & 0x7ff);
    }
    else if (uVar3 == 3) {
      sprintf((char *)param_2,"blh %x",param_1 & 0x7ff);
    }
    else if (uVar3 == 1) {
      if ((param_1 & 1) == 0) {
        sprintf((char *)param_2,"blhx %x",param_1 & 0x7ff);
      }
      else {
        *param_2 = 0x65646e75;
        param_2[1] = 0x656e6966;
        *(undefined2 *)(param_2 + 2) = 100;
      }
    }
    else {
      sprintf((char *)param_2,"b %x",param_3 + 4 + ((int)(param_1 << 0x16) >> 0x16) * 2);
    }
    break;
  default:
    uVar3 = (param_1 << 0x13) >> 0x1e;
    if (uVar3 == 3) {
      iVar1 = (int)(param_1 << 0x16) >> 0x1f;
      if ((param_1 & 0x400) == 0) {
        sprintf((char *)param_2,"%s %s, %s, %s",*(undefined4 *)(&DAT_080faa10 + iVar1 * -4),
                (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],
                (&DAT_080fa8a0)[(param_1 << 0x17) >> 0x1d]);
      }
      else {
        uVar3 = (param_1 << 0x17) >> 0x1d;
        if (uVar3 == 0) {
          sprintf((char *)param_2,"mov %s, %s",(&DAT_080fa8a0)[param_1 & 7],
                  (&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d]);
        }
        else {
          sprintf((char *)param_2,"%s %s, %s, #%d",*(undefined4 *)(&DAT_080faa10 + iVar1 * -4),
                  (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],uVar3);
        }
      }
    }
    else {
      sprintf((char *)param_2,"%s %s, %s, #%d",*(undefined4 *)(&DAT_080fa8e0 + uVar3 * 4),
              (&DAT_080fa8a0)[param_1 & 7],(&DAT_080fa8a0)[(param_1 << 0x1a) >> 0x1d],
              (param_1 << 0x15) >> 0x1b);
    }
  }
  return;
}


