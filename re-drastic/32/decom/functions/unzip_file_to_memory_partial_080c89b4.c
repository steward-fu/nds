/*
 * Ghidra decompilation
 *
 * Function : unzip_file_to_memory_partial
 * Address  : 080c89b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 unzip_file_to_memory_partial
              (char *zip_file_name,char *match_extension,u32 *_file_size,u8 *dest,
              u32 file_size_limit,u32 file_offset)

{
  int iVar1;
  int zip_file;
  alloc_func p_Var2;
  ssize_t sVar3;
  int iVar4;
  s32 error_code;
  void *__ptr;
  u8 *window;
  u8 *block_ptr;
  u32 compressed_bytes_remaining;
  u32 uVar5;
  size_t __nbytes;
  u32 bytes_remaining;
  u8 *dest_ptr;
  u8 *__dest;
  u8 *__buf;
  u32 bytes_left_in_block;
  u32 bytes_to_read;
  uint uVar6;
  u32 bytes_to_read_1;
  s32 sVar7;
  uint in_stack_fffff964;
  u8 *local_694;
  zip_entry_struct zip_entry;
  UnzipUserdata userdata;
  z_stream zip_stream;
  u32 _read_buffer [384];
  
  iVar1 = __stack_chk_guard;
  zip_file = open64(zip_file_name,0);
  if (zip_file == -1) {
    __printf_chk(1,"ERROR: could not open zip file %s.\n",zip_file_name);
  }
  else {
    p_Var2 = (alloc_func)unzip_find_file_entry(zip_file,match_extension,&zip_entry,6);
    if (p_Var2 == (alloc_func)0x0) {
      sVar7 = 0;
      if (file_size_limit == 0 || dest == (u8 *)0x0) {
        close(zip_file);
        *_file_size = zip_entry.uncompressed_size;
        goto LAB_080c8b74;
      }
      __buf = (u8 *)((int)_read_buffer + 0x1ffU & 0xfffffe00);
      lseek64(zip_file,(ulonglong)in_stack_fffff964 << 0x20,zip_entry.file_offset);
      local_694 = __buf + (zip_entry.file_offset & 0x1ff);
      bytes_to_read = 0x200 - (zip_entry.file_offset & 0x1ff);
      sVar3 = read(zip_file,__buf,0x200);
      uVar5 = zip_entry.compressed_size;
      if (0 < sVar3) {
        if (zip_entry.compression_method == 0) {
          if (file_offset != 0) {
            if (bytes_to_read <= file_offset) {
              lseek64(zip_file,CONCAT44(in_stack_fffff964,1),1);
              goto LAB_080c8c6c;
            }
            bytes_to_read = bytes_to_read - file_offset;
            local_694 = local_694 + file_offset;
          }
          __dest = dest;
          if (bytes_to_read <= file_size_limit) {
            do {
              dest = __dest + bytes_to_read;
              memcpy(__dest,local_694,bytes_to_read);
              file_size_limit = file_size_limit - bytes_to_read;
              if (file_size_limit == 0) goto LAB_080c8bb8;
LAB_080c8c6c:
              bytes_to_read = file_size_limit;
              if (0x1ff < file_size_limit) {
                bytes_to_read = 0x200;
              }
              sVar3 = read(zip_file,__buf,bytes_to_read);
              local_694 = __buf;
              __dest = dest;
            } while (0 < sVar3);
            __printf_chk(1,"ERROR: %s has incomplete size (uncompressed).\n",zip_file_name);
            goto unzip_failure;
          }
          memcpy(dest,local_694,file_size_limit);
        }
        else if (zip_entry.compression_method == 8) {
          zip_stream.next_in = local_694;
          zip_stream.next_out = dest;
          zip_stream.zalloc = p_Var2;
          zip_stream.zfree = (free_func)p_Var2;
          if (file_offset == 0) {
            zip_stream.avail_out = file_size_limit;
            if (zip_entry.compressed_size <= bytes_to_read) {
              bytes_to_read = zip_entry.compressed_size;
            }
            iVar4 = inflateInit2_(&zip_stream,0xfffffff1,"1.2.8",0x38);
            zip_stream.avail_in = bytes_to_read;
            if (iVar4 == 0) {
              iVar4 = inflate(&zip_stream,2);
              if (zip_stream.avail_out == 0) {
                *_file_size = file_size_limit;
                inflateEnd(&zip_stream);
                close(zip_file);
                goto LAB_080c8b74;
              }
              uVar6 = uVar5 - bytes_to_read;
              if (iVar4 != -5) {
                __printf_chk(1,"ERROR: %s could not be decompressed: %08X.\n",zip_file_name,iVar4);
                goto unzip_failure;
              }
              zip_stream.avail_in = 0x200;
              zip_stream.next_in = __buf;
              if (uVar6 != 0) {
                __nbytes = uVar6;
                if (0x1ff < uVar6) {
                  __nbytes = 0x200;
                }
                sVar3 = read(zip_file,__buf,__nbytes);
                if (sVar3 < 1) {
                  __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",
                               zip_file_name,uVar6,zip_entry.compressed_size,__nbytes);
                  goto unzip_failure;
                }
              }
              inflateEnd(&zip_stream);
            }
          }
          else {
            zip_stream.avail_out = zip_entry.compressed_size;
            if (bytes_to_read < zip_entry.compressed_size) {
              uVar5 = bytes_to_read;
            }
            __ptr = malloc(0x8000);
            if (__ptr == (void *)0x0) goto unzip_failure;
            iVar4 = inflateBackInit_(&zip_stream,0xf,__ptr,"1.2.8",0x38);
            zip_stream.avail_in = uVar5;
            if (iVar4 == 0) {
              userdata.bytes_remaining = file_size_limit;
              userdata.start_offset = file_offset;
              userdata.buffer_pos = dest;
              userdata.read_buffer = __buf;
              userdata.zip_file = zip_file;
              userdata.bytes_processed = (u32)p_Var2;
              inflateBack(&zip_stream,unzip_in_func,&userdata,unzip_out_func,&userdata);
              inflateBackEnd(&zip_stream);
              close(zip_file);
              if (userdata.bytes_remaining == 0) {
                free(__ptr);
                goto LAB_080c8b74;
              }
            }
            free(__ptr);
          }
        }
        else {
          __printf_chk(1,"ERROR: Unhandled zip compression method %x.\n");
        }
LAB_080c8bb8:
        *_file_size = zip_entry.uncompressed_size;
        close(zip_file);
        goto LAB_080c8b74;
      }
      __printf_chk(1,"ERROR: %s could not be read.\n",zip_file_name);
    }
  }
unzip_failure:
  sVar7 = -1;
  close(zip_file);
LAB_080c8b74:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar7;
}


