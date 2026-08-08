/*
 * Ghidra decompilation
 *
 * Function : unzip_file
 * Address  : 080c8de8
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

u8 * unzip_file(char *zip_file_name,char *match_extension,u32 *_file_size,char *dest_file_name)

{
  u32 uVar1;
  int iVar2;
  int zip_file;
  s32 sVar3;
  u8 *__ptr;
  int iVar4;
  s32 error_code;
  int iVar5;
  size_t sVar6;
  ssize_t sVar7;
  u32 bytes_to_read;
  u32 uncompressed_bytes_remaining;
  u32 uVar8;
  u8 *__buf;
  u32 bytes_transferred;
  uint __size;
  u32 compressed_bytes_remaining;
  u32 bytes_in_zip_buffer;
  uint uVar9;
  uint in_stack_ffffff6c;
  Bytef *local_8c;
  uint local_84;
  zip_entry_struct zip_entry;
  z_stream zip_stream;
  
  iVar2 = __stack_chk_guard;
  zip_file = open64(zip_file_name,0);
  if ((dest_file_name != (char *)0x0) &&
     (dest_file_name = (char *)fopen64(dest_file_name,"wb"), (FILE *)dest_file_name == (FILE *)0x0))
  {
    __buf = (u8 *)0x0;
LAB_080c911c:
    close(zip_file);
    goto LAB_080c8eb4;
  }
  if (zip_file != -1) {
    sVar3 = unzip_find_file_entry(zip_file,match_extension,&zip_entry,0);
    if (sVar3 != 0) {
      __printf_chk(1,"ERROR: could not find entry in file %s.\n",zip_file_name);
      goto LAB_080c8e84;
    }
    g_current_unpack_done = 0;
    g_current_unpack_size._0_4_ = zip_entry.uncompressed_size;
    g_current_unpack_size._4_4_ = sVar3;
    lseek64(zip_file,(ulonglong)in_stack_ffffff6c << 0x20,zip_entry.uncompressed_size);
    uVar9 = zip_entry.uncompressed_size;
    uVar1 = zip_entry.compressed_size;
    if (zip_entry.compression_method == 0) {
      if ((FILE *)dest_file_name == (FILE *)0x0) {
        __buf = (u8 *)malloc(zip_entry.uncompressed_size);
        if (__buf == (u8 *)0x0) {
          puts("ERROR: Could not allocate memory for unzipped gamecard.");
        }
        else {
          sVar7 = read(zip_file,__buf,uVar9);
          if (0 < sVar7) {
            *_file_size = zip_entry.uncompressed_size;
            close(zip_file);
            goto LAB_080c8ec8;
          }
          __printf_chk(1,"ERROR: %s has incomplete size (uncompressed).\n",zip_file_name);
        }
        goto LAB_080c911c;
      }
      __ptr = (u8 *)malloc(0x20000);
      uVar1 = uVar9;
      if (__ptr == (u8 *)0x0) {
        puts("ERROR: Could not allocate zip buffer.");
LAB_080c9108:
        __buf = (u8 *)0x0;
        close(zip_file);
        goto LAB_080c8e9c;
      }
      for (; uVar9 != 0; uVar9 = uVar9 - __size) {
        __size = uVar9;
        if (0x1ffff < uVar9) {
          __size = 0x20000;
        }
        iVar4 = __read_chk(zip_file,__ptr,__size);
        if (iVar4 < 1) goto LAB_080c9108;
        fwrite(__ptr,__size,1,(FILE *)dest_file_name);
        g_current_unpack_done =
             CONCAT44(g_current_unpack_done._4_4_ + (uint)CARRY4((uint)g_current_unpack_done,__size)
                      ,(uint)g_current_unpack_done + __size);
        uVar1 = zip_entry.uncompressed_size;
      }
      *_file_size = uVar1;
      close(zip_file);
LAB_080c9164:
      fclose((FILE *)dest_file_name);
      __buf = (u8 *)0x1;
      goto LAB_080c8ec8;
    }
    if (zip_entry.compression_method != 8) {
      __printf_chk(1,"ERROR: Unhandled zip compression method %x.\n");
      goto LAB_080c8e84;
    }
    __printf_chk(1,"%d compressed bytes, %d uncompressed bytes\n",zip_entry.compressed_size,
                 zip_entry.uncompressed_size);
    if ((FILE *)dest_file_name != (FILE *)0x0) {
      local_8c = (Bytef *)malloc(0x20000);
      if (local_8c == (Bytef *)0x0) {
        puts("ERROR: Could not allocate memory for decompression buffer.");
        close(zip_file);
        __buf = (u8 *)0x0;
        __ptr = (u8 *)0x0;
      }
      else {
        __ptr = (u8 *)malloc(0x20000);
        if (__ptr != (u8 *)0x0) {
          zip_stream.avail_out = 0x20000;
          __buf = (u8 *)0x0;
          zip_stream.next_out = local_8c;
          goto LAB_080c8f9c;
        }
        puts("ERROR: Could not allocate zip buffer.");
        close(zip_file);
        __buf = (u8 *)0x0;
      }
      goto LAB_080c8e9c;
    }
    uVar8 = zip_entry.uncompressed_size;
    __buf = (u8 *)malloc(zip_entry.uncompressed_size);
    if (__buf == (u8 *)0x0) {
      puts("ERROR: Could not allocate memory for unzipped gamecard.");
      close(zip_file);
      goto LAB_080c8ec4;
    }
    __ptr = (u8 *)malloc(0x20000);
    if (__ptr != (u8 *)0x0) {
      local_8c = (Bytef *)0x0;
      zip_stream.next_out = __buf;
      zip_stream.avail_out = uVar8;
LAB_080c8f9c:
      zip_stream.zfree = (free_func)0x0;
      zip_stream.next_in = __ptr;
      zip_stream.zalloc = (alloc_func)zip_stream.zfree;
      iVar4 = inflateInit2_(&zip_stream,0xfffffff1,"1.2.8",0x38);
      uVar8 = uVar1;
      if (0x1ffff < uVar1) {
        uVar8 = 0x20000;
      }
      zip_stream.avail_in = uVar8;
      iVar5 = __read_chk(zip_file,__ptr,uVar8);
      if (iVar5 < 1) {
        __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d).\n",zip_file_name,uVar1,
                     zip_entry.compressed_size);
        goto unzip_failure;
      }
      if (iVar4 == 0) {
        local_84 = uVar1 - uVar8;
        if (local_8c == (Bytef *)0x0) {
          do {
            while (iVar4 = inflate(&zip_stream,2), iVar4 == -5) {
              zip_stream.next_in = __ptr;
              if (local_84 != 0) {
                uVar9 = local_84;
                if (0x1ffff < local_84) {
                  uVar9 = 0x20000;
                }
                iVar4 = __read_chk(zip_file,__ptr,uVar9);
                if (iVar4 < 1) goto LAB_080c93a8;
                local_84 = local_84 - uVar9;
                zip_stream.avail_in = uVar9;
              }
            }
          } while (iVar4 != 1);
        }
        else {
          do {
            while( true ) {
              iVar4 = inflate(&zip_stream,2);
              uVar9 = 0x20000 - zip_stream.avail_out;
              if (uVar9 != 0) {
                g_current_unpack_done =
                     CONCAT44(g_current_unpack_done._4_4_ +
                              (uint)CARRY4((uint)g_current_unpack_done,uVar9),
                              (uint)g_current_unpack_done + uVar9);
                sVar6 = fwrite(local_8c,uVar9,1,(FILE *)dest_file_name);
                if (sVar6 == 0) {
                  puts("ERROR: Failed writing unzipped file.");
                  free(local_8c);
                  close(zip_file);
                  goto LAB_080c8e9c;
                }
              }
              zip_stream.next_out = local_8c;
              zip_stream.avail_out = 0x20000;
              if (iVar4 != -5) break;
              zip_stream.next_in = __ptr;
              if (local_84 != 0) {
                uVar9 = local_84;
                if (0x1ffff < local_84) {
                  uVar9 = 0x20000;
                }
                iVar4 = __read_chk(zip_file,__ptr,uVar9);
                if (iVar4 < 1) goto LAB_080c93a8;
                local_84 = local_84 - uVar9;
                zip_stream.avail_in = uVar9;
              }
            }
          } while (iVar4 != 1);
LAB_080c9130:
          free(local_8c);
        }
      }
      else if (local_8c != (Bytef *)0x0) goto LAB_080c9130;
      inflateEnd(&zip_stream);
      free(__ptr);
      *_file_size = zip_entry.uncompressed_size;
      close(zip_file);
      if ((FILE *)dest_file_name == (FILE *)0x0) goto LAB_080c8ec8;
      goto LAB_080c9164;
    }
    puts("ERROR: Could not allocate zip buffer.");
    close(zip_file);
    goto LAB_080c8ebc;
  }
  __printf_chk(1,"ERROR: could not open zip file %s.\n",zip_file_name);
LAB_080c8e84:
  close(zip_file);
  if ((FILE *)dest_file_name != (FILE *)0x0) {
    __buf = (u8 *)0x0;
    __ptr = __buf;
    goto LAB_080c8e9c;
  }
LAB_080c8ec4:
  __buf = (u8 *)0x0;
LAB_080c8ec8:
  if (iVar2 == __stack_chk_guard) {
    return __buf;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_080c93a8:
  __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",zip_file_name,local_84,
               zip_entry.compressed_size,uVar9);
unzip_failure:
  close(zip_file);
  if ((FILE *)dest_file_name != (FILE *)0x0) {
LAB_080c8e9c:
    fclose((FILE *)dest_file_name);
    if (__ptr == (u8 *)0x0) goto LAB_080c8eb4;
  }
  free(__ptr);
LAB_080c8eb4:
  if (__buf != (u8 *)0x0) {
LAB_080c8ebc:
    free(__buf);
  }
  goto LAB_080c8ec4;
}


