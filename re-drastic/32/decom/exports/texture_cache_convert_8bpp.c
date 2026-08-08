/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_8bpp
 * Address  : 08089514
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_8bpp(u8 *texture_dest,u8 *texture_source,u32 texture_size)

{
  int iVar1;
  undefined8 *puVar2;
  u8 *puVar3;
  u8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  u8 *puVar9;
  u32 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (texture_size == 0) {
    return;
  }
  if (0x15 < texture_size &&
      (texture_source + 0x10 <= texture_dest || texture_dest + 0x10 <= texture_source)) {
    uVar5 = -((uint)texture_source & 7) & 0xf;
    if (texture_size <= uVar5) {
      uVar5 = texture_size;
    }
    puVar9 = texture_dest;
    uVar10 = uVar5;
    if (uVar5 != 0) {
      *texture_dest = *texture_source;
      puVar9 = texture_dest + 1;
      if (uVar5 != 1) {
        texture_dest[1] = texture_source[1];
        puVar9 = texture_dest + 2;
        if (uVar5 != 2) {
          texture_dest[2] = texture_source[2];
          puVar9 = texture_dest + 3;
          if (uVar5 != 3) {
            texture_dest[3] = texture_source[3];
            puVar9 = texture_dest + 4;
            if (uVar5 != 4) {
              texture_dest[4] = texture_source[4];
              puVar9 = texture_dest + 5;
              if (uVar5 != 5) {
                texture_dest[5] = texture_source[5];
                puVar9 = texture_dest + 6;
                if (uVar5 != 6) {
                  texture_dest[6] = texture_source[6];
                  if (uVar5 == 7) {
                    puVar9 = texture_dest + 7;
                    uVar10 = 7;
                  }
                  else {
                    texture_dest[7] = texture_source[7];
                    puVar9 = texture_dest + 8;
                    if (uVar5 != 8) {
                      texture_dest[8] = texture_source[8];
                      puVar9 = texture_dest + 9;
                      if (uVar5 != 9) {
                        texture_dest[9] = texture_source[9];
                        puVar9 = texture_dest + 10;
                        if (uVar5 != 10) {
                          texture_dest[10] = texture_source[10];
                          puVar9 = texture_dest + 0xb;
                          if (uVar5 != 0xb) {
                            texture_dest[0xb] = texture_source[0xb];
                            puVar9 = texture_dest + 0xc;
                            if (uVar5 != 0xc) {
                              texture_dest[0xc] = texture_source[0xc];
                              puVar9 = texture_dest + 0xd;
                              if (uVar5 != 0xd) {
                                texture_dest[0xd] = texture_source[0xd];
                                if (uVar5 == 0xf) {
                                  texture_dest[0xe] = texture_source[0xe];
                                  puVar9 = texture_dest + 0xf;
                                }
                                else {
                                  puVar9 = texture_dest + 0xe;
                                  uVar10 = 0xe;
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
    uVar7 = ((texture_size - uVar5) - 0x10 >> 4) + 1;
    iVar1 = uVar7 * 0x10;
    if (0xe < (texture_size - 1) - uVar5) {
      puVar2 = (undefined8 *)(texture_dest + uVar5);
      uVar8 = 0;
      puVar6 = (undefined8 *)(texture_source + uVar5);
      do {
        uVar11 = *puVar6;
        uVar12 = puVar6[1];
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 2;
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2 = puVar2 + 2;
      } while (uVar8 < uVar7);
      puVar9 = puVar9 + iVar1;
      uVar10 = uVar10 + iVar1;
      if (texture_size - uVar5 == iVar1) {
        return;
      }
    }
    *puVar9 = texture_source[uVar10];
    if (uVar10 + 1 < texture_size) {
      puVar9[1] = texture_source[uVar10 + 1];
      if (uVar10 + 2 < texture_size) {
        puVar9[2] = texture_source[uVar10 + 2];
        if (uVar10 + 3 < texture_size) {
          puVar9[3] = texture_source[uVar10 + 3];
          if (uVar10 + 4 < texture_size) {
            puVar9[4] = texture_source[uVar10 + 4];
            if (uVar10 + 5 < texture_size) {
              puVar9[5] = texture_source[uVar10 + 5];
              if (uVar10 + 6 < texture_size) {
                puVar9[6] = texture_source[uVar10 + 6];
                if (uVar10 + 7 < texture_size) {
                  puVar9[7] = texture_source[uVar10 + 7];
                  if (uVar10 + 8 < texture_size) {
                    puVar9[8] = texture_source[uVar10 + 8];
                    if (uVar10 + 9 < texture_size) {
                      puVar9[9] = texture_source[uVar10 + 9];
                      if (uVar10 + 10 < texture_size) {
                        puVar9[10] = texture_source[uVar10 + 10];
                        if (uVar10 + 0xb < texture_size) {
                          puVar9[0xb] = texture_source[uVar10 + 0xb];
                          if (uVar10 + 0xc < texture_size) {
                            puVar9[0xc] = texture_source[uVar10 + 0xc];
                            if (uVar10 + 0xd < texture_size) {
                              puVar9[0xd] = texture_source[uVar10 + 0xd];
                              if (uVar10 + 0xe < texture_size) {
                                puVar9[0xe] = texture_source[uVar10 + 0xe];
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
  puVar4 = texture_source + -1;
  puVar9 = texture_dest;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar9 + 1;
    *puVar9 = *puVar4;
    puVar9 = puVar3;
  } while (puVar3 != texture_dest + texture_size);
  return;
}


