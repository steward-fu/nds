#include "unity_fixture.h"
TEST_GROUP_RUNNER(sdl2_video)
{
RUN_TEST_CASE(sdl2_video, sigterm_handler)
}
TEST_GROUP_RUNNER(detour)
{
RUN_TEST_CASE(detour, unlock_protected_area)
RUN_TEST_CASE(detour, fast_forward)
RUN_TEST_CASE(detour, prehook_cb_load_state_index)
RUN_TEST_CASE(detour, prehook_cb_save_state_index)
RUN_TEST_CASE(detour, prehook_cb_initialize_backup)
RUN_TEST_CASE(detour, save_state)
RUN_TEST_CASE(detour, load_state)
RUN_TEST_CASE(detour, quit_drastic)
RUN_TEST_CASE(detour, add_prehook_cb)
RUN_TEST_CASE(detour, write_file)
RUN_TEST_CASE(detour, drop_bios_files)
RUN_TEST_CASE(detour, init_hook)
RUN_TEST_CASE(detour, quit_hook)
RUN_TEST_CASE(detour, render_polygon_setup_perspective_steps)
}
