#include <stdio.h>
#include <stdlib.h>

int drinkA = 200;
int drinkB = 150;
int taxA;
int taxB;

int main(){
    taxA = drinkA * 0.1;
    taxB = drinkB * 0.1;
    printf("ジュースAの消費税：%d \n",taxA);
    printf("ジュースBの消費税：%d \n",taxB);

    drinkA = drinkA * 1.1;
    drinkB = drinkB * 1.1;
    printf("ジュースAの合計金額：%d \n",drinkA);
    printf("ジュースBの合計金額：%d \n",drinkB);

    return 0;
}