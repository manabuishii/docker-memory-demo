#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* argument */
int main(int argc, char *argv[]) {
    char *p;
    long size = strtol(argv[1], NULL, 10) * 1024 * 1024 * 1024;
    int gb = 0;
    int seconds = 0;
    int i = 0;
    long j = 0;
    if ( argc == 2 ) {
        printf("Allocate %ld bytes (= %ldMB) (== %ldGB)\n",size,size/(1024 * 1024), size / (1024 * 1024 * 1024));
        p = (char *)malloc(size);
        memset(p,'c', size);
    }else if ( argc == 3 ) {
        gb = atoi(argv[1]);
        seconds = atoi(argv[2]);
        size = 1 * 1024 * 1024 * 1024;
        printf("%dGB, %dsec sleep\n",gb,seconds);
        for( i = 0 ; i < gb ; i++ ){
            if ( p != NULL ){
                free(p);
            }
            printf("Allocate %ld bytes (= %ldMB) (== %ldGB)\n",size,size/(1024 * 1024), size / (1024 * 1024 * 1024));
            p = (char *)malloc(size*(i+1));
            if ( p == NULL ){
                printf("Cannot allocate memory\n");
                return 1;
            }
            //memset(p,'c', size*(i+1));
            for(j=0L;j<size*(i+1);j++){
                *p='c';
                p++;
            }
            sleep(seconds);
        }
    }
    for(;;);
    free(p);
    return 0;
}
