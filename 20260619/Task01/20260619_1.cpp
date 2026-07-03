#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Define.cpp"

int main() {
    srand((unsigned int)time(NULL));

    int number[Define::SIZE]; //numのインデックス数＝100

    for (int i = 0; i < Define::SIZE; i++) {
        bool isDuplicate; //重複判定の変数
        int newNum; //ランダム生成した新しい数(比較用)

        do{
            isDuplicate = false; //フラグリセット
            
            int randMax = Define::MAX_NUM - Define::MIN_NUM;
            newNum = rand() % randMax + Define::MIN_NUM; //乱数を1000から10000までに制限

            for(int j = 0; j < i; j++) {
                
                if(newNum == number[j]) //numインデックスのJ番目を参照して、newNumと同じだった場合
                {
                    isDuplicate = true; //Dupをtrueにし、for文を抜ける
                    break;
                }
            }
        }
        while(isDuplicate);

        number[i] = newNum; //チェックをすべて終えたnumをnumのi番目に代入
    }

    for(int i = 0; i < Define::SIZE; i++){
        printf("num[%d]=%d\n", i, number[i]);
    }



    return 0;
}