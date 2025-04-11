#include<stdio.h>

int Recursive(int time,int fast) {
	if (time <= 1) {
		return(100);
	}
	
	int result(fast * 2 - 50);

	return(result+(Recursive(time-1,result)));
}

int main() {
	int workTime = 3;
	int fast = 100;
	int commonResult;
	int recursiveResult;

	commonResult = 1072*workTime;
	recursiveResult = Recursive(workTime,fast);
	printf("%d\n",commonResult);
	printf("%d\n",recursiveResult);
	return 0;
}