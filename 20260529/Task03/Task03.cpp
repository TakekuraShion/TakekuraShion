#include <stdio.h>
#include <stdlib.h>

int num =1;

int main(){
    for(int i = 0; i < 10; i++){
        if(num >= 6){
        printf("%d \n",num);
        }
        num++;
    }
    return 0;
}