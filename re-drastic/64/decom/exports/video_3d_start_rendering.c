/*
 * Ghidra decompilation
 *
 * Function : video_3d_start_rendering
 * Address  : 001595a0
 * Program  : drastic64
 */


int video_3d_start_rendering(long param_1,undefined param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (polygon_sort_list_15121[param_1 + 0xe5652] != '\0') {
    pthread_cond_signal((pthread_cond_t *)(polygon_sort_list_15121 + param_1 + 0xe5620));
  }
  pthread_mutex_lock((pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5530));
  polygon_sort_list_15121[param_1 + 0xe5650] = 1;
  polygon_sort_list_15121[param_1 + 0xe5653] = param_2;
  uVar1 = *(uint *)(polygon_sort_list_15121 + param_1 + 0xf7138);
  *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) = uVar1;
  uVar3 = uVar1 & 4;
  if ((uVar1 >> 2 & 1) != 0) {
    uVar3 = (uint)(byte)polygon_sort_list_15121[param_1 + 0xf716f];
  }
  *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5504) = uVar3;
  pthread_cond_signal((pthread_cond_t *)(polygon_sort_list_15121 + param_1 + 0xe55c0));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5530));
  return iVar2;
}


