#include <stdio.h>
#include <stdlib.h>

#include "unity_fixture.h"

static void runAllTests(void)
{
    RUN_TEST_GROUP(alsa);
    RUN_TEST_GROUP(detour);
    RUN_TEST_GROUP(sdl2_audio_mmiyoo);
    RUN_TEST_GROUP(sdl2_video_mmiyoo);
    RUN_TEST_GROUP(sdl2_event_mmiyoo);
    RUN_TEST_GROUP(sdl2_render_mmiyoo);
}

int main(int argc, const char **argv)
{
    printf("\n");
    return UnityMain(argc, argv, runAllTests);
}

