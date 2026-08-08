/*
 * Ghidra decompilation
 *
 * Function : _Z11CalcFileSumP4FilePjPhjxj
 * Address  : 001b9310
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CalcFileSum(File*, unsigned int*, unsigned char*, unsigned int, long long, unsigned int) */

void CalcFileSum(File *param_1,uint *param_2,uchar *param_3,uint param_4,longlong param_5,
                uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  HashValue aHStack_18d0 [4];
  undefined8 local_18cc;
  undefined8 uStack_18c4;
  undefined8 local_18bc;
  undefined8 uStack_18b4;
  DataHash aDStack_18a8 [3152];
  DataHash aDStack_c58 [3152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,0);
  if ((param_6 >> 2 & 1) == 0) {
                    /* try { // try from 001b9388 to 001b938b has its CatchHandler @ 001b9670 */
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0,0);
  }
  __ptr = malloc(0x100000);
  if (__ptr == (void *)0x0) {
                    /* try { // try from 001b9610 to 001b9613 has its CatchHandler @ 001b9670 */
    ErrorHandler::MemoryError();
  }
                    /* try { // try from 001b93a4 to 001b93a7 has its CatchHandler @ 001b965c */
  DataHash::DataHash(aDStack_18a8);
                    /* try { // try from 001b93b0 to 001b93b3 has its CatchHandler @ 001b9668 */
  DataHash::DataHash(aDStack_c58);
                    /* try { // try from 001b93c0 to 001b955b has its CatchHandler @ 001b961c */
  DataHash::Init(aDStack_18a8,2,param_4);
  DataHash::Init(aDStack_c58,3,param_4);
  uVar6 = 0;
  if (param_5 == 0x7fffffff7fffffff) goto LAB_001b945c;
LAB_001b93e8:
  lVar4 = param_5;
  if (0x100000 < param_5) {
    lVar4 = 0x100000;
  }
  if (param_3 == (uchar *)0x0) goto LAB_001b9468;
  do {
    if (param_2 == (uint *)0x0) {
      do {
        iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,__ptr,lVar4);
        if (iVar1 == 0) goto LAB_001b9550;
        uVar6 = uVar6 + 1;
        if ((uVar6 & 0xf) == 0) {
          Wait();
        }
        DataHash::Update(aDStack_c58,__ptr,(long)iVar1);
        lVar4 = 0x100000;
      } while (param_5 == 0x7fffffff7fffffff);
      param_5 = param_5 - iVar1;
    }
    else {
      do {
        iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,__ptr,lVar4);
        uVar5 = (ulong)iVar1;
        if (iVar1 == 0) {
LAB_001b9540:
          uVar2 = DataHash::GetCRC32();
          *param_2 = uVar2;
          if (param_3 != (uchar *)0x0) {
LAB_001b9550:
            DataHash::Result(aDStack_c58,aHStack_18d0);
            *(undefined8 *)param_3 = local_18cc;
            *(undefined8 *)(param_3 + 8) = uStack_18c4;
            *(undefined8 *)(param_3 + 0x10) = local_18bc;
            *(undefined8 *)(param_3 + 0x18) = uStack_18b4;
          }
LAB_001b9574:
          DataHash::~DataHash(aDStack_c58);
          DataHash::~DataHash(aDStack_18a8);
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
          (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar3,0);
          if (local_8 - ___stack_chk_guard == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
        }
        uVar6 = uVar6 + 1;
        if ((uVar6 & 0xf) == 0) {
                    /* try { // try from 001b95e8 to 001b9603 has its CatchHandler @ 001b961c */
          Wait();
        }
        DataHash::Update(aDStack_18a8,__ptr,uVar5);
        DataHash::Update(aDStack_c58,__ptr,uVar5);
        lVar4 = 0x100000;
      } while (param_5 == 0x7fffffff7fffffff);
      param_5 = param_5 - uVar5;
    }
    while( true ) {
      if (param_5 != 0x7fffffff7fffffff) goto LAB_001b93e8;
LAB_001b945c:
      lVar4 = 0x100000;
      if (param_3 != (uchar *)0x0) break;
LAB_001b9468:
      if (param_2 == (uint *)0x0) {
        do {
          iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,__ptr,lVar4);
          if (iVar1 == 0) goto LAB_001b9574;
          uVar6 = uVar6 + 1;
          if ((uVar6 & 0xf) == 0) {
            Wait();
          }
          lVar4 = 0x100000;
        } while (param_5 == 0x7fffffff7fffffff);
        param_5 = param_5 - iVar1;
      }
      else {
        do {
          iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,__ptr,lVar4);
          if (iVar1 == 0) goto LAB_001b9540;
          uVar6 = uVar6 + 1;
          if ((uVar6 & 0xf) == 0) {
            Wait();
          }
          DataHash::Update(aDStack_18a8,__ptr,(long)iVar1);
          lVar4 = 0x100000;
        } while (param_5 == 0x7fffffff7fffffff);
        param_5 = param_5 - iVar1;
      }
    }
  } while( true );
}


