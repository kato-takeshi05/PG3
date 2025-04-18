#include<stdio.h>

int main(int argc,const char *argv[]) {

	auto fx = [](int i) { return i + 1; };

	printf("%d", fx(2));

	return 0;
}