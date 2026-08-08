/*
 * Ghidra decompilation
 *
 * Function : FUN_0805949c
 * Address  : 0805949c
 * Program  : drastic16
 */


void FUN_0805949c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 extraout_s15;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(int *)(param_1 + 0x40bd8) = param_2 + 0x25ceb60;
  *(int *)(param_1 + 0x400ac) = param_2 + 0x25ceb60;
  *(undefined *)(param_1 + 0x400ce) = 0xff;
  *(int *)(param_1 + 0x40164) = param_2 + 0x25ceb70;
  *(int *)(param_1 + 0x4021c) = param_2 + 0x25ceb80;
  *(undefined *)(param_1 + 0x4023e) = 0xff;
  *(int *)(param_1 + 0x402d4) = param_2 + 0x25ceb90;
  *(int *)(param_1 + 0x4038c) = param_2 + 0x25ceba0;
  *(undefined *)(param_1 + 0x403ae) = 0xff;
  *(int *)(param_1 + 0x40444) = param_2 + 0x25cebb0;
  *(undefined *)(param_1 + 0x40466) = 0xff;
  *(int *)(param_1 + 0x404fc) = param_2 + 0x25cebc0;
  *(undefined *)(param_1 + 0x4051e) = 0xff;
  *(int *)(param_1 + 0x405b4) = param_2 + 0x25cebd0;
  *(undefined *)(param_1 + 0x405d6) = 0xff;
  *(int *)(param_1 + 0x4066c) = param_2 + 0x25cebe0;
  *(undefined *)(param_1 + 0x4068e) = 0xff;
  *(int *)(param_1 + 0x40724) = param_2 + 0x25cebf0;
  *(undefined *)(param_1 + 0x40746) = 0xff;
  *(int *)(param_1 + 0x407dc) = param_2 + 0x25cec00;
  *(undefined *)(param_1 + 0x407fe) = 0xff;
  *(int *)(param_1 + 0x40894) = param_2 + 0x25cec10;
  *(undefined *)(param_1 + 0x408b6) = 0xff;
  *(int *)(param_1 + 0x4094c) = param_2 + 0x25cec20;
  *(undefined *)(param_1 + 0x4096e) = 0xff;
  *(int *)(param_1 + 0x40a04) = param_2 + 0x25cec30;
  *(undefined *)(param_1 + 0x40a26) = 0xff;
  *(int *)(param_1 + 0x40abc) = param_2 + 0x25cec40;
  *(undefined *)(param_1 + 0x40ade) = 0xff;
  *(int *)(param_1 + 0x40b74) = param_2 + 0x25cec50;
  *(undefined *)(param_1 + 0x40b96) = 0xff;
  *(undefined *)(param_1 + 0x40186) = 0;
  *(undefined *)(param_1 + 0x402f6) = 1;
  *(undefined *)(param_1 + 0x40016) = 1;
  *(undefined *)(param_1 + 0x40014) = 1;
  *(undefined4 *)(param_1 + 0x40008) = 0xac44;
  *(undefined4 *)(param_1 + 0x4000c) = 0xac44;
  *(int *)(param_1 + 0x40bdc) = param_2 + 0x25ab720;
  *(undefined *)(param_1 + 0x40015) = 1;
  FUN_08078e48();
  uVar7 = *(uint *)(param_1 + 0x40008);
  uVar2 = __aeabi_uldivmod(0x6f43800,0x10,uVar7,0);
  *(undefined4 *)(param_1 + 0x40bf0) = uVar2;
  uVar10 = __aeabi_uldivmod(uVar7 << 0x16,uVar7 >> 10,0x401bd0e,0);
  uVar3 = (undefined4)uVar10;
  uVar8 = FixedToFP(CONCAT44(extraout_s15,uVar2),0x20,0x40,10,1,0);
  uVar9 = FixedToFP(CONCAT44(uVar3,uVar3),0x20,0x40,0x16,0,0);
  *(undefined4 *)(param_1 + 0x40bf4) = uVar3;
  printf("%lf cycles per output sample (%lf samples per cycle)\n",(int)((ulonglong)uVar10 >> 0x20),
         (int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar9);
  puVar6 = (undefined *)0xaaed10f;
  uVar7 = 0x7fff;
  do {
    uVar5 = uVar7 & 1;
    uVar1 = uVar7 >> 1;
    uVar7 = uVar1 ^ 0x6000;
    if (uVar5 == 0) {
      uVar4 = 0x80;
      uVar7 = uVar1;
    }
    else {
      uVar4 = 0x7f;
    }
    puVar6 = puVar6 + 1;
    *puVar6 = uVar4;
  } while (puVar6 != (undefined *)0xaaf510e);
  return;
}


