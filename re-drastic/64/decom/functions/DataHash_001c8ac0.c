/*
 * Ghidra decompilation
 *
 * Function : DataHash
 * Address  : 001c8ac0
 * Program  : drastic64
 */


/* DataHash::DataHash() */

void __thiscall DataHash::DataHash(DataHash *this)

{
  DataHash *pDVar1;
  DataHash *pDVar2;
  DataHash *pDVar3;
  DataHash *pDVar4;
  DataHash *pDVar5;
  
  pDVar1 = this + 8 + (-(long)(this + 8) & 0x3f);
  pDVar2 = this + 0x128 + (-(long)(this + 0x128) & 0x3f);
  pDVar3 = this + 0x248 + (-(long)(this + 0x248) & 0x3f);
  *(DataHash **)(this + 0xf8) = pDVar1;
  *(DataHash **)(this + 0x100) = pDVar1 + 0x80;
  *(DataHash **)(this + 0x108) = pDVar1 + 0xa0;
  *(DataHash **)(this + 0x110) = pDVar1 + 0xa8;
  pDVar1 = this + 0x368 + (-(long)(this + 0x368) & 0x3f);
  *(DataHash **)(this + 0x218) = pDVar2;
  *(DataHash **)(this + 0x220) = pDVar2 + 0x80;
  *(DataHash **)(this + 0x228) = pDVar2 + 0xa0;
  *(DataHash **)(this + 0x230) = pDVar2 + 0xa8;
  *(DataHash **)(this + 0x338) = pDVar3;
  pDVar2 = this + 0x488 + (-(long)(this + 0x488) & 0x3f);
  *(DataHash **)(this + 0x340) = pDVar3 + 0x80;
  *(DataHash **)(this + 0x348) = pDVar3 + 0xa0;
  *(DataHash **)(this + 0x350) = pDVar3 + 0xa8;
  *(DataHash **)(this + 0x458) = pDVar1;
  pDVar3 = this + 0x5a8 + (-(long)(this + 0x5a8) & 0x3f);
  pDVar4 = this + 0x6c8 + (-(long)(this + 0x6c8) & 0x3f);
  *(DataHash **)(this + 0x460) = pDVar1 + 0x80;
  *(DataHash **)(this + 0x468) = pDVar1 + 0xa0;
  *(DataHash **)(this + 0x470) = pDVar1 + 0xa8;
  *(DataHash **)(this + 0x578) = pDVar2;
  pDVar1 = this + 0x7e8 + (-(long)(this + 0x7e8) & 0x3f);
  *(DataHash **)(this + 0x588) = pDVar2 + 0xa0;
  *(DataHash **)(this + 0x590) = pDVar2 + 0xa8;
  *(DataHash **)(this + 0x698) = pDVar3;
  pDVar5 = this + 0x908 + (-(long)(this + 0x908) & 0x3f);
  *(DataHash **)(this + 0x580) = pDVar2 + 0x80;
  *(DataHash **)(this + 0x6a0) = pDVar3 + 0x80;
  *(DataHash **)(this + 0x6a8) = pDVar3 + 0xa0;
  *(DataHash **)(this + 0x6b0) = pDVar3 + 0xa8;
  *(DataHash **)(this + 0x7b8) = pDVar4;
  *(DataHash **)(this + 0x7c0) = pDVar4 + 0x80;
  *(DataHash **)(this + 0x7c8) = pDVar4 + 0xa0;
  *(DataHash **)(this + 2000) = pDVar4 + 0xa8;
  *(DataHash **)(this + 0x8d8) = pDVar1;
  *(DataHash **)(this + 0x8e0) = pDVar1 + 0x80;
  *(DataHash **)(this + 0x8e8) = pDVar1 + 0xa0;
  *(DataHash **)(this + 0x8f0) = pDVar1 + 0xa8;
  *(DataHash **)(this + 0x9f8) = pDVar5;
  *(undefined4 *)this = 0;
  *(DataHash **)(this + 0xa00) = pDVar5 + 0x80;
  *(DataHash **)(this + 0xa08) = pDVar5 + 0xa0;
  *(DataHash **)(this + 0xa10) = pDVar5 + 0xa8;
  *(undefined8 *)(this + 0xc40) = 0;
  *(undefined4 *)(this + 0xc48) = 0;
  return;
}


