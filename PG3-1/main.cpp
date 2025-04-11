#include<stdio.h>
/// <summary>
/// ‚PŠÔ“­‚­“x‚É‹‹‚ªŒ»İ‚Ì‹‹‚Ì‚Q”{-50‰~‚É‚È‚éÄ‹A“IŠÖ”
/// </summary>
/// <param name="time">˜J“­ŠÔ</param>
/// <param name="payment">‰Šú‹‹</param>
/// <returns>ÅI“I‚È‹‹</returns>
int Recursive(int time,int payment) {
	if (time <= 1) {
		return(payment);
	}
	return(Recursive(time-1,payment*2-50));
}



int main() {
	//˜J“­ŠÔ
	int workTime = 8;
	//‰Šú‹‹
	int fastPayment = 100;
	int commonResult;
	int recursiveResult;

	commonResult = 1072*workTime;
	recursiveResult = Recursive(workTime,fastPayment);
	printf("%d\n",commonResult);
	printf("%d\n",recursiveResult);
	return 0;
}