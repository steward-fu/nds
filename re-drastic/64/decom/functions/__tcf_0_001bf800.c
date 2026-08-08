/*
 * Ghidra decompilation
 *
 * Function : __tcf_0
 * Address  : 001bf800
 * Program  : drastic64
 */


void __tcf_0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)&CachePos;
  do {
    puVar2 = puVar1 + -0x46;
    cleandata(puVar2,0x10);
    cleandata(puVar1 + -0x44,0x10);
    cleandata(puVar1 + -0x42,0x204);
    SecPassword::~SecPassword((SecPassword *)(puVar1 + -0x42));
    puVar1 = puVar2;
  } while (puVar2 != &Cache);
  return;
}


