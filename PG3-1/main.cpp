#include<stdio.h>

template<typename T>
T min(T a, T b) {
	if(a>b){
		return static_cast<T>(b);
	} else {
		return static_cast<T>(a);
	}
}
template<>
float min<float>(float a, float b) {
	if (a > b) {
		return static_cast<float>(b);
	} else {
		return static_cast<float>(a);
	}
}



int main() {
	printf("%d\n", min<int>(114, 514));
	printf("%f\n", min<float>(11.4, 51.4));	
	//
	return 0;
}