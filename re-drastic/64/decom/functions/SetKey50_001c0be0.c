/*
 * Ghidra decompilation
 *
 * Function : SetKey50
 * Address  : 001c0be0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptData::SetKey50(bool, SecPassword*, wchar_t const*, unsigned char const*, unsigned char
   const*, unsigned int, unsigned char*, unsigned char*) [clone .part.0] */

void __thiscall
CryptData::SetKey50(CryptData *this,bool param_1,SecPassword *param_2,wchar_t *param_3,
                   uchar *param_4,uchar *param_5,uint param_6,uchar *param_7,uchar *param_8)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  SecPassword *this_00;
  long lVar10;
  int iVar11;
  undefined8 *local_368;
  int aiStack_33c [2];
  undefined local_334 [12];
  undefined8 *local_328;
  undefined8 *local_320;
  undefined *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined local_2b0 [8];
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  uchar auStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((((param_6 == *(uint *)(this + 0x214)) &&
          (cVar4 = SecPassword::operator==((SecPassword *)this,param_2), cVar4 != '\0')) &&
         (*(long *)(this + 0x204) == *(long *)param_4)) &&
        (this_00 = (SecPassword *)this, *(long *)(this + 0x20c) == *(long *)(param_4 + 8))) ||
       (((this_00 = (SecPassword *)(this + 0x278), param_6 == *(uint *)(this + 0x48c) &&
         (cVar4 = SecPassword::operator==(this_00,param_2), cVar4 != '\0')) &&
        ((*(long *)(this + 0x47c) == *(long *)param_4 &&
         (*(long *)(this + 0x484) == *(long *)(param_4 + 8))))))) ||
      (((this_00 = (SecPassword *)(this + 0x4f0), param_6 == *(uint *)(this + 0x704) &&
        (cVar4 = SecPassword::operator==(this_00,param_2), cVar4 != '\0')) &&
       ((*(long *)(this + 0x6f4) == *(long *)param_4 &&
        (*(long *)(this + 0x6fc) == *(long *)(param_4 + 8))))))) ||
     ((((*(uint *)(this + 0x97c) == param_6 &&
        (cVar4 = SecPassword::operator==((SecPassword *)(this + 0x768),param_2), cVar4 != '\0')) &&
       (*(long *)(this + 0x96c) == *(long *)param_4)) &&
      (this_00 = (SecPassword *)(this + 0x768), *(long *)(this + 0x974) == *(long *)(param_4 + 8))))
     ) {
    puVar8 = (undefined8 *)(this_00 + 0x218);
    SecHideData(puVar8,0x20,false);
    local_2d0 = *puVar8;
    uStack_2c8 = *(undefined8 *)(this_00 + 0x220);
    local_2c0 = *(undefined8 *)(this_00 + 0x228);
    uStack_2b8 = *(undefined8 *)(this_00 + 0x230);
    SecHideData(puVar8,0x20,true);
    local_2b0 = (undefined  [8])*(undefined8 *)(this_00 + 0x238);
    uStack_2a8 = *(undefined8 *)(this_00 + 0x240);
    local_2a0 = *(undefined8 *)(this_00 + 0x248);
    uStack_298 = *(undefined8 *)(this_00 + 0x250);
    local_290 = *(undefined8 *)(this_00 + 600);
    uStack_288 = *(undefined8 *)(this_00 + 0x260);
    local_280 = *(undefined8 *)(this_00 + 0x268);
    uStack_278 = *(undefined8 *)(this_00 + 0x270);
  }
  else {
    WideToUtf(param_3,(char *)auStack_208,0x200);
    sVar5 = strlen((char *)auStack_208);
    local_240 = 0x1000000;
    local_250 = *(undefined8 *)param_4;
    uStack_248 = *(undefined8 *)(param_4 + 8);
    puVar8 = &local_310;
    hmac_sha256(auStack_208,sVar5,(uchar *)&local_250,0x14,(uchar *)&local_310);
    aiStack_33c[1] = (1 << (ulong)(param_6 & 0x1f)) + -1;
    local_334._0_8_ = 0x1000000010;
    local_328 = &local_2d0;
    lVar10 = 1;
    local_318 = local_2b0;
    local_2f0 = local_310;
    uStack_2e8 = uStack_308;
    local_2e0 = local_300;
    uStack_2d8 = uStack_2f8;
    local_320 = &local_290;
    do {
      iVar11 = 0;
      iVar3 = aiStack_33c[lVar10];
      if (iVar3 != 0) {
        do {
          hmac_sha256(auStack_208,sVar5,(uchar *)&local_310,(ulong)&local_270,(uchar *)puVar8);
          uStack_308 = uStack_268;
          local_310 = local_270;
          iVar11 = iVar11 + 1;
          uStack_2f8 = uStack_258;
          local_300 = local_260;
          local_2f0 = CONCAT17((byte)((ulong)local_2f0 >> 0x38) ^ (byte)((ulong)local_270 >> 0x38),
                               CONCAT16((byte)((ulong)local_2f0 >> 0x30) ^
                                        (byte)((ulong)local_270 >> 0x30),
                                        CONCAT15((byte)((ulong)local_2f0 >> 0x28) ^
                                                 (byte)((ulong)local_270 >> 0x28),
                                                 CONCAT14((byte)((ulong)local_2f0 >> 0x20) ^
                                                          (byte)((ulong)local_270 >> 0x20),
                                                          CONCAT13((byte)((ulong)local_2f0 >> 0x18)
                                                                   ^ (byte)((ulong)local_270 >> 0x18
                                                                           ),
                                                                   CONCAT12((byte)((ulong)local_2f0
                                                                                  >> 0x10) ^
                                                                            (byte)((ulong)local_270
                                                                                  >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  local_2f0 >> 8) ^ (byte)((ulong)local_270 >> 8),
                                                  (byte)local_2f0 ^ (byte)local_270)))))));
          uStack_2e8 = CONCAT17((byte)((ulong)uStack_2e8 >> 0x38) ^
                                (byte)((ulong)uStack_268 >> 0x38),
                                CONCAT16((byte)((ulong)uStack_2e8 >> 0x30) ^
                                         (byte)((ulong)uStack_268 >> 0x30),
                                         CONCAT15((byte)((ulong)uStack_2e8 >> 0x28) ^
                                                  (byte)((ulong)uStack_268 >> 0x28),
                                                  CONCAT14((byte)((ulong)uStack_2e8 >> 0x20) ^
                                                           (byte)((ulong)uStack_268 >> 0x20),
                                                           CONCAT13((byte)((ulong)uStack_2e8 >> 0x18
                                                                          ) ^ (byte)((ulong)
                                                  uStack_268 >> 0x18),
                                                  CONCAT12((byte)((ulong)uStack_2e8 >> 0x10) ^
                                                           (byte)((ulong)uStack_268 >> 0x10),
                                                           CONCAT11((byte)((ulong)uStack_2e8 >> 8) ^
                                                                    (byte)((ulong)uStack_268 >> 8),
                                                                    (byte)uStack_2e8 ^
                                                                    (byte)uStack_268)))))));
          local_2e0 = CONCAT17((byte)((ulong)local_2e0 >> 0x38) ^ (byte)((ulong)local_260 >> 0x38),
                               CONCAT16((byte)((ulong)local_2e0 >> 0x30) ^
                                        (byte)((ulong)local_260 >> 0x30),
                                        CONCAT15((byte)((ulong)local_2e0 >> 0x28) ^
                                                 (byte)((ulong)local_260 >> 0x28),
                                                 CONCAT14((byte)((ulong)local_2e0 >> 0x20) ^
                                                          (byte)((ulong)local_260 >> 0x20),
                                                          CONCAT13((byte)((ulong)local_2e0 >> 0x18)
                                                                   ^ (byte)((ulong)local_260 >> 0x18
                                                                           ),
                                                                   CONCAT12((byte)((ulong)local_2e0
                                                                                  >> 0x10) ^
                                                                            (byte)((ulong)local_260
                                                                                  >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  local_2e0 >> 8) ^ (byte)((ulong)local_260 >> 8),
                                                  (byte)local_2e0 ^ (byte)local_260)))))));
          uStack_2d8 = CONCAT17((byte)((ulong)uStack_2d8 >> 0x38) ^
                                (byte)((ulong)uStack_258 >> 0x38),
                                CONCAT16((byte)((ulong)uStack_2d8 >> 0x30) ^
                                         (byte)((ulong)uStack_258 >> 0x30),
                                         CONCAT15((byte)((ulong)uStack_2d8 >> 0x28) ^
                                                  (byte)((ulong)uStack_258 >> 0x28),
                                                  CONCAT14((byte)((ulong)uStack_2d8 >> 0x20) ^
                                                           (byte)((ulong)uStack_258 >> 0x20),
                                                           CONCAT13((byte)((ulong)uStack_2d8 >> 0x18
                                                                          ) ^ (byte)((ulong)
                                                  uStack_258 >> 0x18),
                                                  CONCAT12((byte)((ulong)uStack_2d8 >> 0x10) ^
                                                           (byte)((ulong)uStack_258 >> 0x10),
                                                           CONCAT11((byte)((ulong)uStack_2d8 >> 8) ^
                                                                    (byte)((ulong)uStack_258 >> 8),
                                                                    (byte)uStack_2d8 ^
                                                                    (byte)uStack_258)))))));
        } while (iVar3 != iVar11);
      }
      lVar1 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      puVar6 = *(undefined8 **)(local_334 + lVar1 + 4);
      *puVar6 = local_2f0;
      puVar6[1] = uStack_2e8;
      puVar6[2] = local_2e0;
      puVar6[3] = uStack_2d8;
    } while (lVar10 != 4);
    cleandata(&local_250,0x44);
    cleandata(&local_2f0,0x20);
    cleandata(&local_310,0x20);
    cleandata(&local_270,0x20);
    cleandata(auStack_208,0x200);
    uVar2 = *(uint *)(this + 0x9e0);
    *(uint *)(this + 0x9e0) = uVar2 + 1;
    *(uint *)(this + (ulong)(uVar2 & 3) * 0x278 + 0x214) = param_6;
    pvVar7 = memcpy(this + (ulong)(uVar2 & 3) * 0x278,param_2,0x201);
    uVar9 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)((long)pvVar7 + 0x204) = *(undefined8 *)param_4;
    *(undefined8 *)((long)pvVar7 + 0x20c) = uVar9;
    *(undefined8 *)((long)pvVar7 + 0x218) = local_2d0;
    *(undefined8 *)((long)pvVar7 + 0x220) = uStack_2c8;
    *(undefined8 *)((long)pvVar7 + 0x228) = local_2c0;
    *(undefined8 *)((long)pvVar7 + 0x230) = uStack_2b8;
    *(undefined (*) [8])((long)pvVar7 + 0x238) = local_2b0;
    *(undefined8 *)((long)pvVar7 + 0x240) = uStack_2a8;
    *(undefined8 *)((long)pvVar7 + 0x248) = local_2a0;
    *(undefined8 *)((long)pvVar7 + 0x250) = uStack_298;
    *(undefined8 *)((long)pvVar7 + 600) = local_290;
    *(undefined8 *)((long)pvVar7 + 0x260) = uStack_288;
    *(undefined8 *)((long)pvVar7 + 0x268) = local_280;
    *(undefined8 *)((long)pvVar7 + 0x270) = uStack_278;
    SecHideData((undefined8 *)((long)pvVar7 + 0x218),0x20,true);
  }
  local_368 = &local_2d0;
  if (param_7 != (uchar *)0x0) {
    *(undefined8 *)param_7 = local_290;
    *(undefined8 *)(param_7 + 8) = uStack_288;
    *(undefined8 *)(param_7 + 0x10) = local_280;
    *(undefined8 *)(param_7 + 0x18) = uStack_278;
  }
  if (param_8 != (uchar *)0x0) {
    *(undefined4 *)(param_8 + 1) = 0;
    *(undefined2 *)(param_8 + 5) = 0;
    param_8[7] = '\0';
    *param_8 = local_2b0[0];
    puVar8 = (undefined8 *)(local_2b0 + 1);
    do {
      uVar2 = (uint)puVar8 & 7;
      puVar6 = (undefined8 *)((long)puVar8 + 1);
      param_8[uVar2] = *(byte *)puVar8 ^ param_8[uVar2];
      puVar8 = puVar6;
    } while (&local_290 != puVar6);
    cleandata(local_2b0,0x20);
  }
  if (param_5 != (uchar *)0x0) {
    Rijndael::Init((Rijndael *)(this + 0x9e8),param_1,(uchar *)local_368,0x100,param_5);
  }
  cleandata(local_368,0x20);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


