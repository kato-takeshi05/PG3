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
char min<char>(char a, char b) {
	printf("•¶š—ñ‚Í‘}“ü‚Å‚«‚Ü‚¹‚ñB");
		return 0;
}



int main() {
	printf("%d\n", min<int>(114, 514));
	printf("%f\n", min<float>(11.4, 51.4));	
	//printf("%lf\n", min<double>(11.4514, 19,1919));	
	printf("%c\n", min<char>('a','b'));
	//
	return 0;
}