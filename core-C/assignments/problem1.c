// A program that prints out the arguments passed to it on the command line.
#include <stdio.h>

int main(int argc, char ** argv){
    // for (int i = 1; i < argc; i++) {
    //     printf("%s\n", argv[i]);
    // }
    int i = 1;
    start:
    if(i<argc){
        printf("%s\n", argv[i]);
        i = i + 1;
        goto start;
    }
    return 0;
}