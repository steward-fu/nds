/*
  Customized version for Miyoo-Mini handheld.
  Only tested under Miyoo-Mini stock OS (original firmware) with Parasyte compatible layer.

  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
  Copyright (C) 2022-2022 Steward Fu <steward.fu@gmail.com>


  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../SDL_internal.h"

#if defined(SDL_JOYSTICK_MMIYOO)

#include "SDL_joystick.h"
#include "../SDL_sysjoystick.h"
#include "../SDL_joystick_c.h"

static int MMIYOO_JoystickInit(void)
{
    return 1;
}

static int MMIYOO_JoystickGetCount(void)
{
    return 1;
}

static void MMIYOO_JoystickDetect(void)
{
}

static const char* MMIYOO_JoystickGetDeviceName(int device_index)
{
    return "MMiyoo Joystick";
}

static int MMIYOO_JoystickGetDevicePlayerIndex(int device_index)
{
    return -1;
}

static void MMIYOO_JoystickSetDevicePlayerIndex(int device_index, int player_index)
{
}

static SDL_JoystickGUID MMIYOO_JoystickGetDeviceGUID(int device_index)
{
    SDL_JoystickGUID guid;
    const char *name = MMIYOO_JoystickGetDeviceName(device_index);
    SDL_zero(guid);
    SDL_memcpy(&guid, name, SDL_min(sizeof(guid), SDL_strlen(name)));
    return guid;
}

static SDL_JoystickID MMIYOO_JoystickGetDeviceInstanceID(int device_index)
{
    return device_index;
}

static int MMIYOO_JoystickOpen(SDL_Joystick *joystick, int device_index)
{
    joystick->nbuttons = 14;
    joystick->naxes = 2;
    joystick->nhats = 0;
    return 0;
}

static int MMIYOO_JoystickRumble(SDL_Joystick *joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble)
{
    return SDL_Unsupported();
}

static int MMIYOO_JoystickRumbleTriggers(SDL_Joystick *joystick, Uint16 left_rumble, Uint16 right_rumble)
{
    return SDL_Unsupported();
}

static Uint32 MMIYOO_JoystickGetCapabilities(SDL_Joystick *joystick)
{
    return 0;
}

static int MMIYOO_JoystickSetLED(SDL_Joystick *joystick, Uint8 red, Uint8 green, Uint8 blue)
{
    return SDL_Unsupported();
}

static int MMIYOO_JoystickSendEffect(SDL_Joystick *joystick, const void *data, int size)
{
    return SDL_Unsupported();
}

static int MMIYOO_JoystickSetSensorsEnabled(SDL_Joystick *joystick, SDL_bool enabled)
{
    return SDL_Unsupported();
}

static void MMIYOO_JoystickUpdate(SDL_Joystick *joystick)
{
}

static void MMIYOO_JoystickClose(SDL_Joystick *joystick)
{
}

static void MMIYOO_JoystickQuit(void)
{
}

static SDL_bool MMIYOO_JoystickGetGamepadMapping(int device_index, SDL_GamepadMapping *out)
{
    return SDL_FALSE;
}

SDL_JoystickDriver SDL_MMIYOO_JoystickDriver = {
    MMIYOO_JoystickInit,
    MMIYOO_JoystickGetCount,
    MMIYOO_JoystickDetect,
    MMIYOO_JoystickGetDeviceName,
    MMIYOO_JoystickGetDevicePlayerIndex,
    MMIYOO_JoystickSetDevicePlayerIndex,
    MMIYOO_JoystickGetDeviceGUID,
    MMIYOO_JoystickGetDeviceInstanceID,
    MMIYOO_JoystickOpen,
    MMIYOO_JoystickRumble,
    MMIYOO_JoystickRumbleTriggers,
    MMIYOO_JoystickGetCapabilities,
    MMIYOO_JoystickSetLED,
    MMIYOO_JoystickSendEffect,
    MMIYOO_JoystickSetSensorsEnabled,
    MMIYOO_JoystickUpdate,
    MMIYOO_JoystickClose,
    MMIYOO_JoystickQuit,
    MMIYOO_JoystickGetGamepadMapping
};

#endif

