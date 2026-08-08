/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM16IsStandardFilterEPhj
 * Address  : 001ee4e0
 * Program  : drastic64
 */


/* RarVM::IsStandardFilter(unsigned char*, unsigned int) */

undefined4 __thiscall RarVM::IsStandardFilter(RarVM *this,uchar *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = CRC32(0xffffffff,param_1,(ulong)param_2);
  if (iVar1 == 0x52a89778) {
    if (param_2 == 0x35) {
      lVar2 = 0;
      goto LAB_001ee5b4;
    }
LAB_001ee570:
    if (iVar1 != -0x37698940) goto LAB_001ee528;
    if (param_2 == 0x78) {
      lVar2 = 2;
      goto LAB_001ee5b4;
    }
LAB_001ee588:
    if (iVar1 == -0x1c2c5dc9) {
      if (param_2 != 0x95) {
        return 0;
      }
      lVar2 = 4;
      goto LAB_001ee5b4;
    }
  }
  else {
    if (iVar1 != -0x3cd7e57f) goto LAB_001ee570;
    if (param_2 == 0x39) {
      lVar2 = 1;
      goto LAB_001ee5b4;
    }
LAB_001ee528:
    if (iVar1 != -0xe06077e) goto LAB_001ee588;
    if (param_2 == 0x1d) {
      lVar2 = 3;
      goto LAB_001ee5b4;
    }
  }
  if ((iVar1 != 0x437a18fe) || (param_2 != 0xd8)) {
    return 0;
  }
  lVar2 = 5;
LAB_001ee5b4:
  return (&DAT_00229568)[lVar2 * 3];
}


