#include <stdio.h>
#include <stdlib.h>

int num =1;

int main(){
    for(int i = 0; i < 100; i++){
        if(num >= 50 && num % 2 == 0){
        printf("%d \n",num);
        }
        num++;
    }
}