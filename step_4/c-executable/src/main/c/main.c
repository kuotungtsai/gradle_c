#include <stdio.h>  

extern void hello(void);

int main(int argc, char** argv) {
    printf( "\r\n this is main!");
    hello();
    return 0;
}