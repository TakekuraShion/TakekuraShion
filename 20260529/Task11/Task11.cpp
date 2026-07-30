#include <stdio.h>
#include <stdlib.h>

int price = 1500;
int tax;

int main(){
    tax = price * 0.1;
    price = price * 1.1;
    printf("消費税：%d \n",tax);
    printf("合計金額：%d",price);

    return 0;
}