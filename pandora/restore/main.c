#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/fb.h>
#include <linux/omapfb.h>

int main(int argc, char **argv)
{
    struct omapfb_plane_info pi;
    int fb_dev0 = open("/dev/fb0", O_RDWR);
    int fb_dev1 = open("/dev/fb1", O_RDWR);

    ioctl(fb_dev1, OMAPFB_QUERY_PLANE, &pi);
    pi.enabled = 0;
    ioctl(fb_dev1, OMAPFB_SETUP_PLANE, &pi);
    close(fb_dev0);
    close(fb_dev1);
    return 0;
}

