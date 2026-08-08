/*
 * Ghidra decompilation
 *
 * Function : initialize_video_3d
 * Address  : 001596e0
 * Program  : drastic64
 */


int initialize_video_3d(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void **ppvVar6;
  
  lVar5 = 1;
  do {
    uVar4 = (uint)lVar5;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (uVar4 + 0x3fffffff) / uVar4;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uVar4 + 0x7fffffff) / uVar4;
    }
    *(uint *)(reciprocal_table + lVar5 * 4) = uVar1;
    *(uint *)(reciprocal_table_u + lVar5 * 4) = uVar2;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x201);
  ppvVar6 = (void **)((long)param_1 + 0x2c1740);
  lVar5 = 0;
  __printf_chk(1,"  video_3d render targets:");
  do {
    __printf_chk(1,&DAT_0021df58,ppvVar6 + -0x4800);
    *ppvVar6 = param_1;
    ppvVar6[1] = (void *)((long)param_1 + 0x356cf0);
    *(char *)((long)ppvVar6 + 0xe2) = (char)lVar5;
    if (lVar5 != 0) {
      pthread_create((pthread_t *)(ppvVar6 + 3),(pthread_attr_t *)0x0,video_3d_render_thread,
                     ppvVar6 + -0x4800);
      pthread_mutex_init((pthread_mutex_t *)(ppvVar6 + 4),(pthread_mutexattr_t *)0x0);
      pthread_mutex_init((pthread_mutex_t *)(ppvVar6 + 10),(pthread_mutexattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)(ppvVar6 + 0x10),(pthread_condattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)(ppvVar6 + 0x16),(pthread_condattr_t *)0x0);
      *(undefined *)(ppvVar6 + 0x1c) = 0;
      *(undefined *)((long)ppvVar6 + 0xe1) = 0;
      if ((int)lVar5 == 3) {
        putchar(10);
        pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x34eb70),(pthread_mutexattr_t *)0x0)
        ;
        pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x34eba0),(pthread_mutexattr_t *)0x0)
        ;
        pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x34ebd0),(pthread_mutexattr_t *)0x0)
        ;
        pthread_cond_init((pthread_cond_t *)((long)param_1 + 0x34ec00),(pthread_condattr_t *)0x0);
        pthread_cond_init((pthread_cond_t *)((long)param_1 + 0x34ec30),(pthread_condattr_t *)0x0);
        pthread_cond_init((pthread_cond_t *)((long)param_1 + 0x34ec60),(pthread_condattr_t *)0x0);
        *(undefined2 *)((long)param_1 + 0x34ec90) = 0;
        *(undefined *)((long)param_1 + 0x34ec92) = 0;
        iVar3 = pthread_create(&video_3d_thread,(pthread_attr_t *)0x0,video_3d_run_thread,param_1);
        return iVar3;
      }
    }
    lVar5 = lVar5 + 1;
    ppvVar6 = ppvVar6 + 0x4820;
  } while( true );
}


