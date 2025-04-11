#include<stdio.h>
/// <summary>
/// ‡Œv‹‹—¿
/// </summary>
int result = 0;
/// <summary>
/// ‚PŠÔ“­‚­“x‚É‹‹‚ªŒ»İ‚Ì‹‹‚Ì‚Q”{-50‰~‚É‚È‚éÄ‹A“IŠÖ”
/// </summary>
/// <param name="time">˜J“­ŠÔ</param>
/// <param name="payment">‹‹</param>
/// <returns>ÅI“I‚È‹‹‚Ì‡Œv‹àŠz</returns>
int Recursive(int time,int payment) {
	result = result + payment;
	if (time <= 1) {
		return(result);
	}
	return(Recursive(time-1,payment*2-50));
}



int main() {
	//˜J“­ŠÔ
	int workTime = 2;
	//‰Šú‹‹
	int fastPayment = 100;
	int commonResult;
	int recursiveResult;

	commonResult = 1072*workTime;
	recursiveResult = Recursive(workTime,fastPayment);
	printf("ˆê”Ê“I‚È‹‹—¿:%d‰~\n",commonResult);
	printf("Ä‹A“I‚È‹‹—¿:%d‰~\n",recursiveResult);
	return 0;
}