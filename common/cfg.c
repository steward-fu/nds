//
//    NDS Emulator (DraStic) for Miyoo Handheld
//
//    This software is provided 'as-is', without any express or implied
//    warranty.  In no event will the authors be held liable for any damages
//    arising from the use of this software.
//
//    Permission is granted to anyone to use this software for any purpose,
//    including commercial applications, and to alter it and redistribute it
//    freely, subject to the following restrictions:
//
//    1. The origin of this software must not be misrepresented; you must not
//       claim that you wrote the original software. If you use this software
//       in a product, an acknowledgment in the product documentation would be
//       appreciated but is not required.
//    2. Altered source versions must be plainly marked as such, and must not be
//       misrepresented as being the original software.
//    3. This notice may not be removed or altered from any source distribution.
//

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <json-c/json.h>

#if defined(UT)
#include "unity_fixture.h"
#endif

#include "log.h"
#include "cfg.h"
#include "snd.h"

static char home[MAX_PATH] = { 0 };
static struct json_config cfg = { 0 };
static struct json_config sys = { 0 };

int set_home_path(const char *path)
{
    if (!path) {
        err(COM"Invalid parameter in %s\n", __func__);
        return -1;
    }

    if (strlen(path) > sizeof(home)) {
        err(COM"Input parameter is too large in %s\n", __func__);
        return -1;
    }

    strncpy(home, path, sizeof(home));
    return 0;
}

int get_sys_volume(void)
{
    return sys.volume;
}

int set_sys_volume(int vol)
{
    if ((vol < 0) || (vol > MAX_VOLUME)) {
        warn(COM"Invalid system volume in %s(%d)\n", __func__, vol);
    }
    else {
        sys.volume = vol;
    }
    return sys.volume;
}

int get_cfg_pen(char *ret, int ret_size)
{
    if (!ret) {
        err(COM"Invalid parameter in %s\n", __func__);
        return -1;
    }

    if (ret_size < strlen(cfg.pen.image_path)) {
        err(COM"Not enough memory size in %s\n", __func__);
        return -1;
    }

    strncpy(ret, cfg.pen.image_path, ret_size);
    return 0;
}

int set_cfg_pen(const char *path)
{
    if (!path) {
        err(COM"Invalid parameter in %s\n", __func__);
        return -1;
    }

    if (strlen(path) > sizeof(cfg.pen.image_path)) {
        err(COM"Too large pen image path\n");
        return -1;
    }

    strncpy(cfg.pen.image_path, path, sizeof(cfg.pen.image_path));
    return 0;
}

int get_cfg_half_volume(void)
{
    return cfg.half_volume;
}

int set_cfg_half_volume(int enable)
{
    cfg.half_volume = (enable > 0) ? 1 : 0;
    return cfg.half_volume;
}

int get_cfg_auto_save_load(void)
{
    return cfg.auto_save_load.enable;
}

int set_cfg_auto_save_load(int enable)
{
    cfg.auto_save_load.enable = (enable > 0) ? 1 : 0;
    return cfg.auto_save_load.enable;
}

int get_cfg_auto_save_load_slot(void)
{
    return cfg.auto_save_load.slot;
}

int set_cfg_auto_save_load_slot(int slot)
{
    if ((slot < 0) || (slot > MAX_SLOT)) {
        warn(COM"Invalid auto slot in %s(%d)\n", __func__, slot);
    }
    else {
        cfg.auto_save_load.slot = slot;
    }
    return cfg.auto_save_load.slot;
}

static int read_json_obj_int(struct json_object *jfile, const char *item, int *ret)
{
    struct json_object *jval = NULL;

    if (!jfile || !item || !ret) {
        err(COM"Invalid input parameters in %s(jfile:0x%x, item:0x%x, ret:0x%x)\n", __func__, jfile, item, ret);
        return -1;
    }

    if (json_object_object_get_ex(jfile, item, &jval)) {
        *ret = json_object_get_int(jval);
        info(COM"Read json object(%s:%d)\n", item, *ret);
    }
    else {
        warn(COM"Failed to read json object(%s)\n", item);
    }
}

static int read_json_obj_str(struct json_object *jfile, const char *item, char *ret, int ret_size)
{
    struct json_object *jval = NULL;

    if (!jfile || !item || !ret) {
        err(COM"Invalid input parameters in %s(jfile:0x%x, item:0x%x, ret:0x%x)\n", __func__, jfile, item, ret);
        return -1;
    }

    if (json_object_object_get_ex(jfile, item, &jval)) {
        strncpy(ret, json_object_get_string(jval), ret_size);
        info(COM"Read json object(%s:\"%s\")\n", item, ret);
    }
    else {
        warn(COM"Failed to read json object(%s)\n", item);
    }
}

int read_cfg_json_file(void)
{
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(cfg.json_path);
    if (jfile ==  NULL) {
        err(COM"Failed to open config json file(path:\"%s\")\n", cfg.json_path);
        return -1;
    }
    read_json_obj_int(jfile, JSON_CFG_HALF_VOLUME, &cfg.half_volume);
    read_json_obj_int(jfile, JSON_CFG_AUTO_SAVE_LOAD, &cfg.auto_save_load.enable);
    read_json_obj_int(jfile, JSON_CFG_AUTO_SAVE_LOAD_SLOT, &cfg.auto_save_load.slot);
    read_json_obj_str(jfile, JSON_CFG_PEN, cfg.pen.image_path, sizeof(cfg.pen.image_path));
    json_object_put(jfile);
    return 0;
}

int read_sys_json_file(void)
{
    struct json_object *jfile = NULL;

    jfile = json_object_from_file(sys.json_path);
    if (jfile ==  NULL) {
        err(COM"Failed to open system json file(path:\"%s\")\n", sys.json_path);
        return -1;
    }
    read_json_obj_int(jfile, JSON_SYS_VOLUME, &sys.volume);
    json_object_put(jfile);
    return 0;
}

int init_cfg(void)
{
    getcwd(home, sizeof(home));
    read_cfg_json_file();
    read_sys_json_file();
    return 0;
}

#if defined(UT)
TEST_GROUP(common_cfg);

TEST_SETUP(common_cfg)
{
    FILE *f = NULL;

    f = fopen(JSON_SYS_FILE, "w+");
    if (f) {
        fprintf(f, "{\n");
        fprintf(f, "\"vol\": 100\n");
        fprintf(f, "}");
        fclose(f);
    }
    init_cfg();
}

TEST_TEAR_DOWN(common_cfg)
{
    unlink(JSON_SYS_FILE);
}

TEST(common_cfg, read_cfg_json_file)
{
    memset(&cfg, 0, sizeof(cfg));
    TEST_ASSERT_EQUAL_INT(-1, read_cfg_json_file());

    strncpy(cfg.json_path, "/NOT_EXIST_FILE", sizeof(cfg.json_path));
    TEST_ASSERT_EQUAL_INT(-1, read_cfg_json_file());

    strncpy(cfg.json_path, JSON_CFG_PATH, sizeof(cfg.json_path));
    TEST_ASSERT_EQUAL_INT(0, read_cfg_json_file());
}

TEST(common_cfg, read_sys_json_file)
{
    memset(&sys, 0, sizeof(sys));
    TEST_ASSERT_EQUAL_INT(-1, read_sys_json_file());

    strncpy(sys.json_path, "/NOT_EXIST_FILE", sizeof(sys.json_path));
    TEST_ASSERT_EQUAL_INT(-1, read_sys_json_file());

    strncpy(sys.json_path, JSON_SYS_PATH, sizeof(sys.json_path));
    TEST_ASSERT_EQUAL_INT(0, read_sys_json_file());
}

TEST(common_cfg, get_sys_volume)
{
    set_sys_volume(1);
    TEST_ASSERT_EQUAL_INT(1, get_sys_volume());

    set_sys_volume(0);
    TEST_ASSERT_EQUAL_INT(0, get_sys_volume());
}

TEST(common_cfg, set_sys_volume)
{
    set_sys_volume(1);
    set_sys_volume(100);
    TEST_ASSERT_EQUAL_INT(1, get_sys_volume());

    set_sys_volume(0);
    set_sys_volume(-100);
    TEST_ASSERT_EQUAL_INT(0, get_sys_volume());
}

TEST(common_cfg, get_cfg_half_volume)
{
    set_cfg_half_volume(1);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_half_volume());

    set_cfg_half_volume(0);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_half_volume());
}

TEST(common_cfg, set_cfg_half_volume)
{
    set_cfg_half_volume(100);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_half_volume());

    set_cfg_half_volume(-100);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_half_volume());
}

TEST(common_cfg, get_cfg_auto_save_load)
{
    set_cfg_auto_save_load(1);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_auto_save_load());

    set_cfg_auto_save_load(0);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_auto_save_load());
}

TEST(common_cfg, set_cfg_auto_save_load)
{
    set_cfg_auto_save_load(100);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_auto_save_load());

    set_cfg_auto_save_load(-100);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_auto_save_load());
}

TEST(common_cfg, get_cfg_auto_save_load_slot)
{
    set_cfg_auto_save_load_slot(1);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_auto_save_load_slot());

    set_cfg_auto_save_load_slot(0);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_auto_save_load_slot());
}

TEST(common_cfg, set_cfg_auto_save_load_slot)
{
    set_cfg_auto_save_load_slot(1);
    set_cfg_auto_save_load_slot(100);
    TEST_ASSERT_EQUAL_INT(1, get_cfg_auto_save_load_slot());

    set_cfg_auto_save_load_slot(0);
    set_cfg_auto_save_load_slot(-100);
    TEST_ASSERT_EQUAL_INT(0, get_cfg_auto_save_load_slot());
}

TEST(common_cfg, get_cfg_pen)
{
    char buf[MAX_PATH] = { 0 };

    TEST_ASSERT_EQUAL_INT(-1, get_cfg_pen(NULL, 0));
    TEST_ASSERT_EQUAL_INT(-1, get_cfg_pen(buf, 1));
    TEST_ASSERT_EQUAL_INT(0, get_cfg_pen(buf, sizeof(buf)));
}

TEST(common_cfg, set_cfg_pen)
{
    TEST_ASSERT_EQUAL_INT(-1, set_cfg_pen(NULL));
    TEST_ASSERT_EQUAL_INT(0, set_cfg_pen("pen/NOT_EXIST_PEN.png"));
}

TEST_GROUP_RUNNER(common_cfg)
{
    RUN_TEST_CASE(common_cfg, read_cfg_json_file);
    RUN_TEST_CASE(common_cfg, read_sys_json_file);
    RUN_TEST_CASE(common_cfg, get_sys_volume);
    RUN_TEST_CASE(common_cfg, set_sys_volume);
    RUN_TEST_CASE(common_cfg, get_cfg_pen);
    RUN_TEST_CASE(common_cfg, set_cfg_pen);
    RUN_TEST_CASE(common_cfg, get_cfg_half_volume);
    RUN_TEST_CASE(common_cfg, set_cfg_half_volume);
    RUN_TEST_CASE(common_cfg, get_cfg_auto_save_load);
    RUN_TEST_CASE(common_cfg, set_cfg_auto_save_load);
    RUN_TEST_CASE(common_cfg, get_cfg_auto_save_load_slot);
    RUN_TEST_CASE(common_cfg, set_cfg_auto_save_load_slot);
}
#endif

