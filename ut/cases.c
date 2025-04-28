#include "unity_fixture.h"
TEST_GROUP_RUNNER(detour)
{
RUN_TEST_CASE(detour, init_hook)
RUN_TEST_CASE(detour, quit_hook)
RUN_TEST_CASE(detour, render_polygon_setup_perspective_steps)
}
