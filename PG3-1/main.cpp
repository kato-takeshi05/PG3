#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
    printf("\n\nパカッ\n\n");
}
void setTimeout(PFunc p, int second) {
    Sleep(second * 1000);

    p(&second);
}


int rollDice() {
    return rand() % 6 + 1;
}
int even(int number) {
    if (number % 2 == 0) {
        printf("正解");
    } else {
        printf("不正解");
    }
        return 0;
}

int odd(int number) {
    if (number % 2 != 0) {
        printf("正解");
    } else {
        printf("不正解");
    }
    return 0;
}

int main() {
    srand(time(NULL));

    int dice = rollDice();
    int insert = 0;
    
   



  
    printf("サイコロを振りました\n");
    printf("出た目が半(奇数)か丁(偶数)か当ててください\n");
    printf("[1]:奇数 [2]:偶数\n");

    scanf_s("%d",&insert);

    PFunc p;
    p = DispResult;
    setTimeout(p, 5);

    printf("出た目:%d\n", dice);
    if (insert == 2) {
        even(dice);
    } else if (insert == 1) {
        odd(dice);
    }

    return 0;
}
