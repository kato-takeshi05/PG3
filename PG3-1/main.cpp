#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//コールバック関数
typedef void (*PFunc)(int*);

///
void DispResult(int* s) {
    printf("\n\nパカッ\n\n");
}

/// <summary>
/// コールバック関数を用いて時間を止める
/// </summary>
/// <param name="p">コールバック関数</param>
/// <param name="second">止める秒数</param>
void setTimeout(PFunc p, int second) {
    Sleep(second * 1000);

    p(&second);
}

/// <summary>
/// ６面サイコロを振る
/// </summary>
/// <returns>出た目</returns>
int rollDice() {
    return rand() % 6 + 1;
}
/// <summary>
/// 数字が偶数かどうか判断する
/// </summary>
/// <param name="number">判断する数字</param>
/// <returns>答え</returns>
int even(int number) {
    if (number % 2 == 0) {
        printf("正解");
    } else {
        printf("不正解");
    }
        return 0;
}
/// <summary>
/// 数字が奇数かどうか判断する
/// </summary>
/// <param name="number">判断する数字</param>
/// <returns>答え</returns>
int odd(int number) {
    if (number % 2 != 0) {
        printf("正解");
    } else {
        printf("不正解");
    }
    return 0;
}


int main() {
    srand((unsigned)time(NULL));

    int dice = rollDice();
    int insert = 0;
    
    


  
    printf("サイコロを振りました\n");
    printf("出た目が半(奇数)か丁(偶数)か当ててください\n");
    printf("[1]:奇数 [2]:偶数\n");

    scanf_s("%d",&insert);

    int (*checkNum)(int);
    if (insert == 2) {
        checkNum = even;
    } else if (insert == 1) {
        checkNum = odd;

    } else {
        return 1;
    }

    PFunc p;
    p = DispResult;
    setTimeout(p, 5);

    printf("出た目:%d\n",dice);
   
   
    checkNum(dice);

    return 0;
}
