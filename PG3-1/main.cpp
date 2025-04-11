#include<stdio.h>
int Recursive(int n) {
	if (n <= 1) {
		return(1);
	}

	return(n * Recursive(n - 1));
}
int main() {
	int workTime = 50;
	int n = 3;
	int result;

	result = Recursive(n);
	printf("%d‚ÌŠKæ=%d", n, result);
	return 0;
}