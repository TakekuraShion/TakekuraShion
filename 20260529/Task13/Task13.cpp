#include <stdio.h>

int main(){
    int color =  0x2DBE60;

    int R = color & 0xFF0000;
    int G = color & 0x00FF00; 
    int B = color & 0x000060;

    R = R >> 16;
    G = G >> 8;
    
    printf("R:%d \nG:%d \nB:%d",R,G,B);
    return 0;
}