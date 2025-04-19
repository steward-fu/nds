#include <stdio.h>
#include <stdlib.h>

#include "unity_fixture.h"

static void runAllTests(void)
{
    RUN_TEST_GROUP(alsa_snd);

    RUN_TEST_GROUP(common_log);
    RUN_TEST_GROUP(common_cfg);
    RUN_TEST_GROUP(common_file);
    RUN_TEST_GROUP(common_lang);

    RUN_TEST_GROUP(detour_hook);

    RUN_TEST_GROUP(sdl2_joy);
    RUN_TEST_GROUP(sdl2_menu);
    RUN_TEST_GROUP(sdl2_video);
    RUN_TEST_GROUP(sdl2_event);
    RUN_TEST_GROUP(sdl2_render);
}

int main(int argc, const char **argv)
{
    printf("\n");
    return UnityMain(argc, argv, runAllTests);
}

