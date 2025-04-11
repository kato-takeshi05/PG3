#include<stdio.h>
/// <summary>
/// １時間働く度に時給が現在の時給の２倍-50円になる再帰的関数
/// </summary>
/// <param name="time">労働時間</param>
/// <param name="payment">初期時給</param>
/// <returns>最終的な時給</returns>
int Recursive(int time,int payment) {
	if (time <= 1) {
		return(payment);
	}
	return(Recursive(time-1,payment*2-50));
}
//再帰関数で時給が1時間ごとに現在の時給の二倍の-50円が時給になる関数を作成したい。


int main() {
	//労働時間
	int workTime = 8;
	//初期時給
	int fastPayment = 100;
	int commonResult;
	int recursiveResult;

	commonResult = 1072*workTime;
	recursiveResult = Recursive(workTime,fastPayment);
	printf("%d\n",commonResult);
	printf("%d\n",recursiveResult);
	return 0;
}