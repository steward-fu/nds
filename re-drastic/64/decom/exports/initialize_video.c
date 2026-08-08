/*
 * Ghidra decompilation
 *
 * Function : initialize_video
 * Address  : 00131180
 * Program  : drastic64
 */


void initialize_video(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = *(long *)(param_2 + 0xfba68);
  lVar2 = *(long *)(param_2 + 0x15020);
  lVar10 = *(long *)(param_2 + 0x15028);
  lVar9 = *(long *)(param_2 + 0x15030);
  lVar8 = *(long *)(param_2 + 0x15038);
  lVar7 = *(long *)(param_2 + 0x15040);
  lVar6 = *(long *)(param_2 + 0x15048);
  lVar5 = *(long *)(param_2 + 0x15050);
  lVar4 = *(long *)(param_2 + 0x15058);
  lVar3 = *(long *)(param_2 + 0x15060);
  *param_1 = param_2;
  param_1[1] = lVar1 + 0x855a8;
  param_1[0x414] = lVar2;
  param_1[0x415] = lVar10;
  param_1[0x416] = lVar9;
  param_1[0x417] = lVar8;
  param_1[0x418] = lVar7;
  param_1[0x419] = lVar6;
  param_1[0x41a] = lVar5;
  param_1[0x41b] = lVar4;
  param_1[0x41c] = lVar3;
  param_1[0x41d] = param_2 + 0x1b2b0;
  param_1[0x41e] = param_2 + 0x1b2b1;
  param_1[0x41f] = param_2 + 0x1b2b2;
  param_1[0x420] = param_2 + 0x1b2b3;
  param_1[0x421] = param_2 + 0x1b2b4;
  param_1[0x422] = param_2 + 0x1b2b5;
  param_1[0x423] = param_2 + 0x1b2b6;
  param_1[0x424] = param_2 + 0x1b2b8;
  param_1[0x425] = param_2 + 0x1b2b9;
  param_1[0x5ca] = param_2 + 0x16070;
  param_1[0x5cb] = param_2 + 0x16470;
  param_1[0x5cc] = param_2 + 0x15070;
  param_1[0x5cd] = param_2 + 0x15470;
  param_1[0x8b10f] = 0;
  pthread_create((pthread_t *)(param_1 + 0x8b113),(pthread_attr_t *)0x0,video_render_thread,param_1)
  ;
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x8b114),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x8b11a),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(param_1 + 0x8b120),(pthread_condattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(param_1 + 0x8b126),(pthread_condattr_t *)0x0);
  *(undefined2 *)(param_1 + 0x8b12c) = 0;
  initialize_video_2d(param_1 + 0x5cf,0,param_1);
  initialize_video_2d(param_1 + 0x10853,1,param_1);
  initialize_geometry(param_1 + 0x6ad9e,*(undefined8 *)(*param_1 + 0xfba68),param_1 + 0x69d98);
  initialize_texture_cache(param_1 + 0x69d98,param_1);
  initialize_video_3d(param_1);
  param_1[0x8b105] = 0;
  param_1[0x8b104] = 0;
  param_1[0x8b107] = 0;
  param_1[0x8b106] = 0;
  return;
}


