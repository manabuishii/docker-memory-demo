#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* argument */
int main(int argc, char *argv[]) {
    char *p;
    long size = strtol(argv[1], NULL, 10) * 1024 * 1024 * 1024;

    printf("Allocate %ld bytes (= %ldMB) (== %ldGB)\n",size,size/(1024 * 1024), size / (1024 * 1024 * 1024));
    p = (char *)malloc(size);
    memset(p,'c', size);
    for(;;);
    free(p);
    return 0;
}