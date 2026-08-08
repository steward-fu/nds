/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_8bpp
 * Address  : 001684c0
 * Program  : drastic64
 */


void texture_cache_convert_8bpp(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    bVar1 = (ulong)((param_1 + 0xf) - param_2) < 0x1f;
    if ((bVar1 || param_3 - 1 < 0xe) || !bVar1 && param_3 - 1 == 0xe) {
      lVar3 = 0;
      do {
        *(undefined *)(param_1 + lVar3) = *(undefined *)(param_2 + lVar3);
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < param_3);
      return;
    }
    lVar3 = 0;
    do {
      uVar4 = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = uVar4;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != ((ulong)((param_3 >> 4) - 1) + 1) * 0x10);
    lVar3 = param_1 + ((ulong)param_3 & 0xfffffff0);
    uVar2 = param_3 & 0xfffffff0;
    if ((param_3 & 0xf) != 0) {
      *(undefined *)(param_1 + (ulong)uVar2) = *(undefined *)(param_2 + (ulong)uVar2);
      if (uVar2 + 1 < param_3) {
        *(undefined *)(lVar3 + 1) = *(undefined *)(param_2 + (ulong)(uVar2 + 1));
        if (uVar2 + 2 < param_3) {
          *(undefined *)(lVar3 + 2) = *(undefined *)(param_2 + (ulong)(uVar2 + 2));
          if (uVar2 + 3 < param_3) {
            *(undefined *)(lVar3 + 3) = *(undefined *)(param_2 + (ulong)(uVar2 + 3));
            if (uVar2 + 4 < param_3) {
              *(undefined *)(lVar3 + 4) = *(undefined *)(param_2 + (ulong)(uVar2 + 4));
              if (uVar2 + 5 < param_3) {
                *(undefined *)(lVar3 + 5) = *(undefined *)(param_2 + (ulong)(uVar2 + 5));
                if (uVar2 + 6 < param_3) {
                  *(undefined *)(lVar3 + 6) = *(undefined *)(param_2 + (ulong)(uVar2 + 6));
                  if (uVar2 + 7 < param_3) {
                    *(undefined *)(lVar3 + 7) = *(undefined *)(param_2 + (ulong)(uVar2 + 7));
                    if (uVar2 + 8 < param_3) {
                      *(undefined *)(lVar3 + 8) = *(undefined *)(param_2 + (ulong)(uVar2 + 8));
                      if (uVar2 + 9 < param_3) {
                        *(undefined *)(lVar3 + 9) = *(undefined *)(param_2 + (ulong)(uVar2 + 9));
                        if (uVar2 + 10 < param_3) {
                          *(undefined *)(lVar3 + 10) = *(undefined *)(param_2 + (ulong)(uVar2 + 10))
                          ;
                          if (uVar2 + 0xb < param_3) {
                            *(undefined *)(lVar3 + 0xb) =
                                 *(undefined *)(param_2 + (ulong)(uVar2 + 0xb));
                            if (uVar2 + 0xc < param_3) {
                              *(undefined *)(lVar3 + 0xc) =
                                   *(undefined *)(param_2 + (ulong)(uVar2 + 0xc));
                              if (uVar2 + 0xd < param_3) {
                                *(undefined *)(lVar3 + 0xd) =
                                     *(undefined *)(param_2 + (ulong)(uVar2 + 0xd));
                                if (uVar2 + 0xe < param_3) {
                                  *(undefined *)(lVar3 + 0xe) =
                                       *(undefined *)(param_2 + (ulong)(uVar2 + 0xe));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


