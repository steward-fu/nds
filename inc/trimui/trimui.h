#ifndef __TRIMUI_H__
#define __TRIMUI_H__

enum ion_heap_type {
    ION_HEAP_TYPE_SYSTEM,
    ION_HEAP_TYPE_SYSTEM_CONTIG,
    ION_HEAP_TYPE_CARVEOUT,
    ION_HEAP_TYPE_CHUNK,
    ION_HEAP_TYPE_DMA,
    ION_HEAP_TYPE_CUSTOM,
    ION_NUM_HEAPS = 16,
};

#define FB_CH           0
#define FB_LAYER        0
#define FB_ZORDER       0
#define SCALER_CH       1
#define SCALER_LAYER    0
#define SCALER_ZORDER   10
#define OVERLAY_CH      2
#define OVERLAY_LAYER   0
#define OVERLAY_ZORDER  11
#define DEF_FB_CH       2
#define DEF_FB_LAYER    0

#define DE              0x01000000
#define RT_MIXER0       (DE + 0x00100000)
#define OVL_V           (RT_MIXER0 + 0x2000 + (SCALER_CH * 0x1000))
#define OVL_V_TOP_LADD0 (0x18 + (SCALER_LAYER * 0x30))

#define ION_IOC_SUNXI_PHYS_ADDR     7
#define ION_HEAP_SYSTEM_MASK        (1 << ION_HEAP_TYPE_SYSTEM)
#define ION_HEAP_SYSTEM_CONTIG_MASK (1 << ION_HEAP_TYPE_SYSTEM_CONTIG)
#define ION_HEAP_CARVEOUT_MASK      (1 << ION_HEAP_TYPE_CARVEOUT)
#define ION_HEAP_TYPE_DMA_MASK      (1 << ION_HEAP_TYPE_DMA)

#define ION_IOC_MAGIC   'I'
#define ION_IOC_ALLOC   _IOWR(ION_IOC_MAGIC, 0, struct ion_allocation_data)
#define ION_IOC_FREE    _IOWR(ION_IOC_MAGIC, 1, struct ion_handle_data)
#define ION_IOC_MAP     _IOWR(ION_IOC_MAGIC, 2, struct ion_fd_data)
#define ION_IOC_CUSTOM  _IOWR(ION_IOC_MAGIC, 6, struct ion_custom_data)

struct ion_handle_data {
    struct ion_handle *handle;
};

typedef struct {
    void *handle;
    unsigned int phys_addr;
    unsigned int size;
} sunxi_phys_data;

struct ion_allocation_data {
    size_t len;
    size_t align;
    unsigned int heap_id_mask;
    unsigned int flags;
    struct ion_handle *handle;
};

struct ion_fd_data {
    struct ion_handle *handle;
    int fd;
};

struct ion_custom_data {
    unsigned int cmd;
    unsigned long arg;
};

typedef struct ion_alloc_info {
    uint32_t size;
    struct ion_handle *handle;
    int fd;
    void* padd;
    void* vadd;
} ion_alloc_info_t;

typedef struct {
    int x;
    int y;
    unsigned int width;
    unsigned int height;
} disp_rect;

typedef struct {
    unsigned int width;
    unsigned int height;
} disp_rectsz;

typedef enum tag_DISP_CMD {
    DISP_RESERVE0 = 0x00,
    DISP_RESERVE1 = 0x01,
    DISP_SET_BKCOLOR = 0x03,
    DISP_GET_BKCOLOR = 0x04,
    DISP_SET_COLORKEY = 0x05,
    DISP_GET_COLORKEY = 0x06,
    DISP_GET_SCN_WIDTH = 0x07,
    DISP_GET_SCN_HEIGHT = 0x08,
    DISP_GET_OUTPUT_TYPE = 0x09,
    DISP_SET_EXIT_MODE = 0x0A,
    DISP_VSYNC_EVENT_EN = 0x0B,
    DISP_BLANK = 0x0C,
    DISP_SHADOW_PROTECT = 0x0D,
    DISP_HWC_COMMIT = 0x0E,
    DISP_DEVICE_SWITCH = 0x0F,
    DISP_GET_OUTPUT = 0x10,
    DISP_SET_COLOR_RANGE = 0x11,
    DISP_GET_COLOR_RANGE = 0x12,

    DISP_LAYER_ENABLE = 0x40,
    DISP_LAYER_DISABLE = 0x41,
    DISP_LAYER_SET_INFO = 0x42,
    DISP_LAYER_GET_INFO = 0x43,
    DISP_LAYER_TOP = 0x44,
    DISP_LAYER_BOTTOM = 0x45,
    DISP_LAYER_GET_FRAME_ID = 0x46,
    DISP_LAYER_SET_CONFIG = 0x47,
    DISP_LAYER_GET_CONFIG = 0x48,

    DISP_HDMI_SUPPORT_MODE = 0xc4,
    DISP_SET_TV_HPD = 0xc5,
    DISP_HDMI_GET_EDID = 0xc6,

    DISP_LCD_ENABLE = 0x100,
    DISP_LCD_DISABLE = 0x101,
    DISP_LCD_SET_BRIGHTNESS = 0x102,
    DISP_LCD_GET_BRIGHTNESS = 0x103,
    DISP_LCD_BACKLIGHT_ENABLE  = 0x104,
    DISP_LCD_BACKLIGHT_DISABLE  = 0x105,
    DISP_LCD_SET_SRC = 0x106,
    DISP_LCD_SET_FPS  = 0x107,
    DISP_LCD_GET_FPS  = 0x108,
    DISP_LCD_GET_SIZE = 0x109,
    DISP_LCD_GET_MODEL_NAME = 0x10a,
    DISP_LCD_SET_GAMMA_TABLE = 0x10b,
    DISP_LCD_GAMMA_CORRECTION_ENABLE = 0x10c,
    DISP_LCD_GAMMA_CORRECTION_DISABLE = 0x10d,
    DISP_LCD_USER_DEFINED_FUNC = 0x10e,
    DISP_LCD_CHECK_OPEN_FINISH = 0x10f,
    DISP_LCD_CHECK_CLOSE_FINISH = 0x110,

    DISP_CAPTURE_START = 0x140,
    DISP_CAPTURE_STOP = 0x141,
    DISP_CAPTURE_COMMIT = 0x142,

    DISP_ENHANCE_ENABLE = 0x180,
    DISP_ENHANCE_DISABLE = 0x181,
    DISP_ENHANCE_GET_EN = 0x182,
    DISP_ENHANCE_SET_WINDOW = 0x183,
    DISP_ENHANCE_GET_WINDOW = 0x184,
    DISP_ENHANCE_SET_MODE = 0x185,
    DISP_ENHANCE_GET_MODE = 0x186,
    DISP_ENHANCE_DEMO_ENABLE = 0x187,
    DISP_ENHANCE_DEMO_DISABLE = 0x188,

    DISP_SMBL_ENABLE = 0x200,
    DISP_SMBL_DISABLE = 0x201,
    DISP_SMBL_GET_EN = 0x202,
    DISP_SMBL_SET_WINDOW = 0x203,
    DISP_SMBL_GET_WINDOW = 0x204,

    DISP_FB_REQUEST = 0x280,
    DISP_FB_RELEASE = 0x281,

    DISP_MEM_REQUEST = 0x2c0,
    DISP_MEM_RELEASE = 0x2c1,
    DISP_MEM_GETADR = 0x2c2,
} __DISP_t;

typedef enum {
    DISP_FORMAT_ARGB_8888 = 0x00,
    DISP_FORMAT_ABGR_8888 = 0x01,
    DISP_FORMAT_RGBA_8888 = 0x02,
    DISP_FORMAT_BGRA_8888 = 0x03,
    DISP_FORMAT_XRGB_8888 = 0x04,
    DISP_FORMAT_XBGR_8888 = 0x05,
    DISP_FORMAT_RGBX_8888 = 0x06,
    DISP_FORMAT_BGRX_8888 = 0x07,
    DISP_FORMAT_RGB_888 = 0x08,
    DISP_FORMAT_BGR_888 = 0x09,
    DISP_FORMAT_RGB_565 = 0x0a,
    DISP_FORMAT_BGR_565 = 0x0b,
    DISP_FORMAT_ARGB_4444 = 0x0c,
    DISP_FORMAT_ABGR_4444 = 0x0d,
    DISP_FORMAT_RGBA_4444 = 0x0e,
    DISP_FORMAT_BGRA_4444 = 0x0f,
    DISP_FORMAT_ARGB_1555 = 0x10,
    DISP_FORMAT_ABGR_1555 = 0x11,
    DISP_FORMAT_RGBA_5551 = 0x12,
    DISP_FORMAT_BGRA_5551 = 0x13,
    DISP_FORMAT_YUV444_I_AYUV = 0x40,
    DISP_FORMAT_YUV444_I_VUYA = 0x41,
    DISP_FORMAT_YUV422_I_YVYU = 0x42,
    DISP_FORMAT_YUV422_I_YUYV = 0x43,
    DISP_FORMAT_YUV422_I_UYVY = 0x44,
    DISP_FORMAT_YUV422_I_VYUY = 0x45,
    DISP_FORMAT_YUV444_P = 0x46,
    DISP_FORMAT_YUV422_P = 0x47,
    DISP_FORMAT_YUV420_P = 0x48,
    DISP_FORMAT_YUV411_P = 0x49,
    DISP_FORMAT_YUV422_SP_UVUV = 0x4a,
    DISP_FORMAT_YUV422_SP_VUVU = 0x4b,
    DISP_FORMAT_YUV420_SP_UVUV = 0x4c,
    DISP_FORMAT_YUV420_SP_VUVU = 0x4d,
    DISP_FORMAT_YUV411_SP_UVUV = 0x4e,
    DISP_FORMAT_YUV411_SP_VUVU = 0x4f,
} disp_pixel_format;

typedef enum {
    DISP_BT601 = 0,
    DISP_BT709 = 1,
    DISP_YCC = 2,
} disp_color_space;

typedef enum {
    LAYER_MODE_BUFFER = 0,
    LAYER_MODE_COLOR = 1,
} disp_layer_mode;

typedef enum {
    DISP_3D_OUT_MODE_CI_1 = 0x5,
    DISP_3D_OUT_MODE_CI_2 = 0x6,
    DISP_3D_OUT_MODE_CI_3 = 0x7,
    DISP_3D_OUT_MODE_CI_4 = 0x8,
    DISP_3D_OUT_MODE_LIRGB = 0x9,
    DISP_3D_OUT_MODE_TB = 0x0,
    DISP_3D_OUT_MODE_FP = 0x1,
    DISP_3D_OUT_MODE_SSF = 0x2,
    DISP_3D_OUT_MODE_SSH = 0x3,
    DISP_3D_OUT_MODE_LI = 0x4,
    DISP_3D_OUT_MODE_FA = 0xa,
} disp_3d_out_mode;

typedef enum {
    DISP_BF_NORMAL = 0,
    DISP_BF_STEREO_TB = 1 << 0,
    DISP_BF_STEREO_FP = 1 << 1,
    DISP_BF_STEREO_SSH = 1 << 2,
    DISP_BF_STEREO_SSF = 1 << 3,
    DISP_BF_STEREO_LI = 1 << 4,
} disp_buffer_flags;

typedef enum {
    DISP_SCAN_PROGRESSIVE = 0,
    DISP_SCAN_INTERLACED_ODD_FLD_FIRST = 1 << 0,
    DISP_SCAN_INTERLACED_EVEN_FLD_FIRST = 1 << 1,
} disp_scan_flags;

typedef struct {
    long long x;
    long long y;
    long long width;
    long long height;
} disp_rect64;

typedef struct {
    unsigned long long addr[3];
    disp_rectsz size[3];
    unsigned int align[3];
    disp_pixel_format format;
    disp_color_space color_space;
    unsigned int trd_right_addr[3];
    bool pre_multiply;
    disp_rect64 crop;
    disp_buffer_flags flags;
    disp_scan_flags scan;
} disp_fb_info;

typedef struct {
    disp_layer_mode mode;
    unsigned char zorder;
    unsigned char alpha_mode;
    unsigned char alpha_value;
    disp_rect screen_win;
    bool b_trd_out;
    disp_3d_out_mode out_trd_mode;
    union {
        unsigned int color;
        disp_fb_info fb;
    };
    unsigned int id;
} disp_layer_info;

typedef struct {
    disp_layer_info info;
    bool enable;
    unsigned int channel;
    unsigned int layer_id;
} disp_layer_config;

#endif
