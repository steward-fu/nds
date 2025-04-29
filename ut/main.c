#include <stdio.h>
#include <stdlib.h>

#include "unity_fixture.h"

static void runAllTests(void)
{
    RUN_TEST_GROUP(util);
    RUN_TEST_GROUP(alsa);
    RUN_TEST_GROUP(detour);
    //RUN_TEST_GROUP(sdl2_event);
    RUN_TEST_GROUP(sdl2_video);
    //RUN_TEST_GROUP(sdl2_render);
    //RUN_TEST_GROUP(sdl2_joystick);
}

int main(int argc, const char **argv)
{
    printf("\n");
    return UnityMain(argc, argv, runAllTests);
}

