#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNum[4];
    int inputNum[4];
    int a;
   
    srand(time(0));

    
    printf("数字を生成しました。\n");

    for (int i = 0; i < 4; i++) {
        randomNum[i] = rand() % 10;
    }

   
    printf("数字を4つ入力してください。\n");
    for (int i = 0; i < 4; i++) {
        printf( "%d個目 ",i + 1);
        scanf_s ("%d",&a);
        inputNum[i] = a;
    }

    
    printf("\n比較結果\n");

    for (int i = 0; i < 4; i++) {
        printf("ランダム%d入力:%d ", randomNum[i]
            , inputNum[i]);

        if (randomNum[i] == inputNum[i]) {
            printf(" → 一致");
        }
        else {
           printf(" → 不一致"); 
        }

        printf("\n");
    }

    return 0;
}