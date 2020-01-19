#include "server.h"
#include <stdio.h>


int main(int argc, char **argv) {
    printf("New main called ................\n");
    original_main(argc, argv);
    return 0;
}

