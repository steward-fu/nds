/*
 * Ghidra decompilation
 *
 * Function : initialize_video_3d
 * Address  : 08078bf0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_video_3d(video_struct *video)

{
  u32 uVar1;
  video_3d_render_target_struct *render_target;
  int iVar2;
  pthread_t *__newthread;
  u32 *puVar3;
  u32 *puVar4;
  int iVar5;
  bool bVar6;
  
  puVar3 = reciprocal_table_u;
  puVar4 = reciprocal_table;
  iVar5 = 1;
  do {
    uVar1 = __aeabi_uidiv(iVar5 + 0x3fffffff,iVar5);
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    iVar2 = iVar5 + 1;
    uVar1 = __aeabi_uidiv(iVar5 + 0x7fffffff,iVar5);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
    iVar5 = iVar2;
  } while (iVar2 != 0x201);
  __newthread = &(video->video_3d).render_targets[0].render_thread;
  iVar2 = 1;
  iVar5 = 0;
  __printf_chk(1,"  video_3d render targets:");
  do {
    __printf_chk(1,&DAT_0813c1e4,(video_3d_render_target_struct *)(__newthread + -0x9004));
    bVar6 = iVar5 != 0;
    __newthread[-4] = (pthread_t)video;
    __newthread[-3] = (pthread_t)&video->geometry;
    *(u8 *)((int)__newthread + 0x9a) = (u8)iVar5;
    iVar5 = iVar5 + 1;
    if (bVar6) {
      pthread_create(__newthread,(pthread_attr_t *)0x0,video_3d_render_thread,
                     (video_3d_render_target_struct *)(__newthread + -0x9004));
      pthread_mutex_init((pthread_mutex_t *)(__newthread + 1),(pthread_mutexattr_t *)0x0);
      pthread_mutex_init((pthread_mutex_t *)(__newthread + 7),(pthread_mutexattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)(__newthread + 0xe),(pthread_condattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)(__newthread + 0x1a),(pthread_condattr_t *)0x0);
      *(u8 *)(__newthread + 0x26) = '\0';
      *(u8 *)((int)__newthread + 0x99) = '\0';
      if (iVar2 == 4) {
        putchar(10);
        pthread_mutex_init((pthread_mutex_t *)&(video->video_3d).mutex_wait_for_render_begin,
                           (pthread_mutexattr_t *)0x0);
        pthread_mutex_init((pthread_mutex_t *)&(video->video_3d).mutex_wait_for_render_finish,
                           (pthread_mutexattr_t *)0x0);
        pthread_mutex_init((pthread_mutex_t *)&(video->video_3d).mutex_wakeup_thread,
                           (pthread_mutexattr_t *)0x0);
        pthread_cond_init((pthread_cond_t *)&(video->video_3d).cv_wait_for_render_begin,
                          (pthread_condattr_t *)0x0);
        pthread_cond_init((pthread_cond_t *)&(video->video_3d).cv_wait_for_render_finish,
                          (pthread_condattr_t *)0x0);
        pthread_cond_init((pthread_cond_t *)&(video->video_3d).cv_wakeup_thread,
                          (pthread_condattr_t *)0x0);
        (video->video_3d).ready_to_render = '\0';
        (video->video_3d).currently_rendering = '\0';
        (video->video_3d).threaded_3d_sleeping = '\0';
        pthread_create(&video_3d_thread,(pthread_attr_t *)0x0,video_3d_run_thread,video);
        return;
      }
    }
    iVar2 = iVar2 + 1;
    __newthread = __newthread + 0x9030;
  } while( true );
}


