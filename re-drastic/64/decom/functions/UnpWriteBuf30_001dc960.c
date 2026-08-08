/*
 * Ghidra decompilation
 *
 * Function : UnpWriteBuf30
 * Address  : 001dc960
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::UnpWriteBuf30() */

void Unpack::UnpWriteBuf30(void)

{
  ComprDataIO **this;
  uint uVar1;
  uint uVar2;
  ComprDataIO **in_x0;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ComprDataIO *pCVar7;
  void *pvVar8;
  ComprDataIO *pCVar9;
  uint uVar10;
  ComprDataIO *pCVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uchar *puVar16;
  uint local_2c;
  
  pCVar7 = in_x0[0x18];
  pCVar9 = in_x0[0x1d27];
  local_2c = (uint)in_x0[0x19];
  uVar4 = (int)pCVar7 - local_2c & (uint)in_x0[0x1d30];
  if (pCVar9 != (ComprDataIO *)0x0) {
    this = in_x0 + 0x1d16;
    pCVar11 = (ComprDataIO *)0x0;
    do {
      lVar13 = (long)pCVar11 * 8;
      puVar12 = *(uint **)(in_x0[0x1d26] + (long)pCVar11 * 8);
      if (puVar12 == (uint *)0x0) {
LAB_001dc9ec:
        pCVar11 = pCVar11 + 1;
      }
      else if (*(char *)(puVar12 + 3) == '\0') {
        uVar1 = *puVar12;
        uVar10 = (uint)in_x0[0x1d30];
        if ((ulong)uVar4 <= ((ulong)(uVar1 - local_2c) & (ulong)in_x0[0x1d30])) goto LAB_001dc9ec;
        uVar2 = puVar12[1];
        pCVar7 = (ComprDataIO *)(ulong)uVar1;
        if (uVar1 != local_2c) {
          UnpWriteArea((Unpack *)in_x0,(ulong)local_2c,(ulong)pCVar7);
          uVar10 = (uint)in_x0[0x1d30];
          uVar4 = (int)in_x0[0x18] - uVar1 & uVar10;
        }
        if (uVar4 < uVar2) {
          pCVar9 = in_x0[0x1d27];
          if (pCVar11 < pCVar9) {
            pCVar11 = in_x0[0x1d26];
            plVar14 = (long *)(pCVar11 + lVar13);
            do {
              lVar13 = *plVar14;
              plVar14 = plVar14 + 1;
              if ((lVar13 != 0) && (*(char *)(lVar13 + 0xc) != '\0')) {
                *(undefined *)(lVar13 + 0xc) = 0;
              }
            } while (plVar14 != (long *)(pCVar11 + (long)pCVar9 * 8));
          }
          in_x0[0x19] = pCVar7;
          return;
        }
        local_2c = uVar1 + uVar2 & uVar10;
        if (local_2c == 0 || uVar1 < local_2c) {
          RarVM::SetMemory((RarVM *)this,0,(uchar *)(in_x0[0x972] + (long)pCVar7),(ulong)uVar2);
        }
        else {
          uVar5 = (ulong)((int)in_x0[0x1d2f] - uVar1);
          RarVM::SetMemory((RarVM *)this,0,(uchar *)(in_x0[0x972] + (long)pCVar7),uVar5);
          RarVM::SetMemory((RarVM *)this,uVar5,(uchar *)in_x0[0x972],(ulong)local_2c);
        }
        lVar15 = *(long *)(in_x0[0x1d22] + (ulong)puVar12[4] * 8);
        uVar5 = *(ulong *)(lVar15 + 0x50);
        if (0x40 < uVar5) {
          uVar3 = *(ulong *)(puVar12 + 0x16);
          if (uVar3 < uVar5) {
            uVar6 = *(ulong *)(puVar12 + 0x18);
            *(ulong *)(puVar12 + 0x14) = uVar5;
            if ((uVar6 != 0 && uVar6 <= uVar5) && (uVar6 == 0 || uVar5 != uVar6)) {
              ErrorHandler::GeneralErrMsg
                        (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
              ErrorHandler::MemoryError();
              uVar5 = *(ulong *)(puVar12 + 0x14);
              uVar3 = *(ulong *)(puVar12 + 0x16);
            }
            uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
            if (uVar3 < uVar5) {
              uVar3 = uVar5;
            }
            pvVar8 = realloc(*(void **)(puVar12 + 0x12),uVar3);
            if (pvVar8 == (void *)0x0) {
              ErrorHandler::MemoryError();
            }
            *(void **)(puVar12 + 0x12) = pvVar8;
            *(ulong *)(puVar12 + 0x16) = uVar3;
          }
          else {
            pvVar8 = *(void **)(puVar12 + 0x12);
            *(ulong *)(puVar12 + 0x14) = uVar5;
          }
          memcpy((void *)((long)pvVar8 + 0x40),(void *)(*(long *)(lVar15 + 0x48) + 0x40),
                 *(long *)(lVar15 + 0x50) - 0x40);
        }
        if (*(long *)(puVar12 + 0x14) == 0) {
LAB_001dcae0:
          if (*(void **)(lVar15 + 0x48) != (void *)0x0) {
            free(*(void **)(lVar15 + 0x48));
            *(undefined8 *)(lVar15 + 0x48) = 0;
          }
          *(undefined8 *)(lVar15 + 0x50) = 0;
          *(undefined8 *)(lVar15 + 0x58) = 0;
        }
        else {
          pCVar7 = in_x0[0x9b6];
          puVar12[0x28] = (uint)pCVar7;
          RarVM::SetLowEndianValue
                    ((RarVM *)this,(uint *)(*(long *)(puVar12 + 0x12) + 0x24),(uint)pCVar7);
          RarVM::SetLowEndianValue
                    ((RarVM *)this,(uint *)(*(long *)(puVar12 + 0x12) + 0x28),
                     (uint)((ulong)in_x0[0x9b6] >> 0x20));
          RarVM::Execute((RarVM *)this,(VM_PreparedProgram *)(puVar12 + 6));
          uVar5 = *(ulong *)(puVar12 + 0x14);
          if (uVar5 < 0x41) goto LAB_001dcae0;
          if (*(ulong *)(lVar15 + 0x50) < uVar5) {
            uVar3 = *(ulong *)(lVar15 + 0x58);
            if (uVar3 < uVar5) {
              uVar6 = *(ulong *)(lVar15 + 0x60);
              *(ulong *)(lVar15 + 0x50) = uVar5;
              if ((uVar6 != 0 && uVar6 <= uVar5) && (uVar6 == 0 || uVar5 != uVar6)) {
                ErrorHandler::GeneralErrMsg
                          (&ErrHandler,L"Maximum allowed array size (%u) is exceeded",uVar6);
                ErrorHandler::MemoryError();
                uVar5 = *(ulong *)(lVar15 + 0x50);
                uVar3 = *(ulong *)(lVar15 + 0x58);
              }
              uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
              if (uVar3 < uVar5) {
                uVar3 = uVar5;
              }
              pvVar8 = realloc(*(void **)(lVar15 + 0x48),uVar3);
              if (pvVar8 == (void *)0x0) {
                ErrorHandler::MemoryError();
              }
              *(void **)(lVar15 + 0x48) = pvVar8;
              *(ulong *)(lVar15 + 0x58) = uVar3;
              uVar5 = *(ulong *)(puVar12 + 0x14);
            }
            else {
              pvVar8 = *(void **)(lVar15 + 0x48);
              *(ulong *)(lVar15 + 0x50) = uVar5;
              uVar5 = *(ulong *)(puVar12 + 0x14);
            }
          }
          else {
            pvVar8 = *(void **)(lVar15 + 0x48);
          }
          memcpy((void *)((long)pvVar8 + 0x40),(void *)(*(long *)(puVar12 + 0x12) + 0x40),
                 uVar5 - 0x40);
        }
        pCVar7 = in_x0[0x1d26];
        puVar16 = *(uchar **)(puVar12 + 0x2a);
        pvVar8 = *(void **)(pCVar7 + lVar13);
        uVar4 = puVar12[0x2c];
        if (pvVar8 != (void *)0x0) {
          if (*(void **)((long)pvVar8 + 0x68) != (void *)0x0) {
            free(*(void **)((long)pvVar8 + 0x68));
          }
          if (*(void **)((long)pvVar8 + 0x48) != (void *)0x0) {
            free(*(void **)((long)pvVar8 + 0x48));
          }
          if (*(void **)((long)pvVar8 + 0x18) != (void *)0x0) {
            free(*(void **)((long)pvVar8 + 0x18));
          }
          operator_delete(pvVar8,0xb8);
          pCVar7 = in_x0[0x1d26];
        }
        pCVar9 = in_x0[0x1d27];
        *(undefined8 *)(pCVar7 + lVar13) = 0;
        pCVar11 = pCVar11 + 1;
        if (pCVar11 < pCVar9) {
          do {
            puVar12 = *(uint **)(pCVar7 + (long)pCVar11 * 8);
            uVar5 = (ulong)uVar4;
            if ((((puVar12 == (uint *)0x0) || (*puVar12 != uVar1)) || (puVar12[1] != uVar4)) ||
               (*(char *)(puVar12 + 3) != '\0')) goto LAB_001dcc74;
            RarVM::SetMemory((RarVM *)this,0,puVar16,uVar5);
            lVar13 = *(long *)(in_x0[0x1d22] + (ulong)puVar12[4] * 8);
            uVar5 = *(ulong *)(lVar13 + 0x50);
            if (0x40 < uVar5) {
              uVar3 = *(ulong *)(puVar12 + 0x16);
              if (uVar3 < uVar5) {
                uVar6 = *(ulong *)(puVar12 + 0x18);
                *(ulong *)(puVar12 + 0x14) = uVar5;
                if ((uVar6 != 0 && uVar6 <= uVar5) && (uVar6 == 0 || uVar5 != uVar6)) {
                  ErrorHandler::GeneralErrMsg
                            (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                  ErrorHandler::MemoryError();
                  uVar5 = *(ulong *)(puVar12 + 0x14);
                  uVar3 = *(ulong *)(puVar12 + 0x16);
                }
                uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
                if (uVar3 < uVar5) {
                  uVar3 = uVar5;
                }
                pvVar8 = realloc(*(void **)(puVar12 + 0x12),uVar3);
                if (pvVar8 == (void *)0x0) {
                  ErrorHandler::MemoryError();
                }
                *(void **)(puVar12 + 0x12) = pvVar8;
                *(ulong *)(puVar12 + 0x16) = uVar3;
              }
              else {
                pvVar8 = *(void **)(puVar12 + 0x12);
                *(ulong *)(puVar12 + 0x14) = uVar5;
              }
              memcpy((void *)((long)pvVar8 + 0x40),(void *)(*(long *)(lVar13 + 0x48) + 0x40),
                     *(long *)(lVar13 + 0x50) - 0x40);
            }
            if (*(long *)(puVar12 + 0x14) == 0) {
LAB_001dcbf8:
              if (*(void **)(lVar13 + 0x48) != (void *)0x0) {
                free(*(void **)(lVar13 + 0x48));
                *(undefined8 *)(lVar13 + 0x48) = 0;
              }
              *(undefined8 *)(lVar13 + 0x50) = 0;
              *(undefined8 *)(lVar13 + 0x58) = 0;
            }
            else {
              pCVar7 = in_x0[0x9b6];
              puVar12[0x28] = (uint)pCVar7;
              RarVM::SetLowEndianValue
                        ((RarVM *)this,(uint *)(*(long *)(puVar12 + 0x12) + 0x24),(uint)pCVar7);
              RarVM::SetLowEndianValue
                        ((RarVM *)this,(uint *)(*(long *)(puVar12 + 0x12) + 0x28),
                         (uint)((ulong)in_x0[0x9b6] >> 0x20));
              RarVM::Execute((RarVM *)this,(VM_PreparedProgram *)(puVar12 + 6));
              uVar5 = *(ulong *)(puVar12 + 0x14);
              if (uVar5 < 0x41) goto LAB_001dcbf8;
              if (*(ulong *)(lVar13 + 0x50) < uVar5) {
                uVar3 = *(ulong *)(lVar13 + 0x58);
                if (uVar3 < uVar5) {
                  uVar6 = *(ulong *)(lVar13 + 0x60);
                  *(ulong *)(lVar13 + 0x50) = uVar5;
                  if ((uVar6 != 0 && uVar6 <= uVar5) && (uVar6 == 0 || uVar5 != uVar6)) {
                    ErrorHandler::GeneralErrMsg
                              (&ErrHandler,L"Maximum allowed array size (%u) is exceeded",uVar6);
                    ErrorHandler::MemoryError();
                    uVar5 = *(ulong *)(lVar13 + 0x50);
                    uVar3 = *(ulong *)(lVar13 + 0x58);
                  }
                  uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
                  if (uVar3 < uVar5) {
                    uVar3 = uVar5;
                  }
                  pvVar8 = realloc(*(void **)(lVar13 + 0x48),uVar3);
                  if (pvVar8 == (void *)0x0) {
                    ErrorHandler::MemoryError();
                  }
                  *(void **)(lVar13 + 0x48) = pvVar8;
                  *(ulong *)(lVar13 + 0x58) = uVar3;
                  uVar5 = *(ulong *)(puVar12 + 0x14);
                }
                else {
                  pvVar8 = *(void **)(lVar13 + 0x48);
                  *(ulong *)(lVar13 + 0x50) = uVar5;
                  uVar5 = *(ulong *)(puVar12 + 0x14);
                }
              }
              else {
                pvVar8 = *(void **)(lVar13 + 0x48);
              }
              memcpy((void *)((long)pvVar8 + 0x40),(void *)(*(long *)(puVar12 + 0x12) + 0x40),
                     uVar5 - 0x40);
            }
            pCVar7 = in_x0[0x1d26];
            puVar16 = *(uchar **)(puVar12 + 0x2a);
            pvVar8 = *(void **)(pCVar7 + (long)pCVar11 * 8);
            uVar4 = puVar12[0x2c];
            if (pvVar8 != (void *)0x0) {
              if (*(void **)((long)pvVar8 + 0x68) != (void *)0x0) {
                free(*(void **)((long)pvVar8 + 0x68));
              }
              if (*(void **)((long)pvVar8 + 0x48) != (void *)0x0) {
                free(*(void **)((long)pvVar8 + 0x48));
              }
              if (*(void **)((long)pvVar8 + 0x18) != (void *)0x0) {
                free(*(void **)((long)pvVar8 + 0x18));
              }
              operator_delete(pvVar8,0xb8);
              pCVar7 = in_x0[0x1d26];
            }
            pCVar9 = in_x0[0x1d27];
            *(undefined8 *)(pCVar7 + (long)pCVar11 * 8) = 0;
            pCVar11 = pCVar11 + 1;
          } while (pCVar11 < pCVar9);
        }
        uVar5 = (ulong)uVar4;
LAB_001dcc74:
        ComprDataIO::UnpWrite(*in_x0,puVar16,uVar5);
        pCVar7 = in_x0[0x18];
        *(Unpack *)((long)in_x0 + 0x4daa) = (Unpack)0x1;
        uVar4 = (int)pCVar7 - local_2c & (uint)in_x0[0x1d30];
        in_x0[0x9b6] = in_x0[0x9b6] + uVar5;
        pCVar9 = in_x0[0x1d27];
      }
      else {
        pCVar11 = pCVar11 + 1;
        *(undefined *)(puVar12 + 3) = 0;
      }
    } while (pCVar11 < pCVar9);
  }
  UnpWriteArea((Unpack *)in_x0,(ulong)local_2c,(ulong)pCVar7);
  in_x0[0x19] = in_x0[0x18];
  return;
}


