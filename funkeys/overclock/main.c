#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <time.h>

static uint32_t get_clk(int target)
{
    int c0 = 0;
    int v0 = 0;

    for (c0 = 1; c0<=32; c0++) {
        v0 = (24 * c0 * 4) / 2;
        if (v0 > target) {
            printf("new clock %dMHz\n", v0);
            return c0 - 1;
        }
    }
    printf("new clock 1008MHz\n");
    return 20;
}

int main(int argc, char* argv[])
{
    uint32_t clk = 0;

    if (argc != 2) {
        printf("usage: %s [500-2000]\n", argv[0]);
        return -1;
    }
    clk = get_clk(atoi(argv[1]));

    int fd = open("/dev/mem", O_RDWR);
    if(fd < 0){
        printf("failed to open /dev/mem\n");
        return -1;
    }
    uint32_t *mem = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0x01c20000);

    // 0x90001431
    // M = 1
    // K = 3
    // N = 20
    // CPU = (24MHz * 21 * 4) / 2 = 1008MHz
    printf("Old: CPU Register 0x%x\n", *mem);
    *mem = (1 << 31) | (clk << 8) | (3 << 4) | 1;
    printf("New: CPU Register 0x%x\n", *mem);

    munmap(mem, 4096);
    close(fd);
    return 0;
}
