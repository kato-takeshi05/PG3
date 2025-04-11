#include<stdio.h>

/// <summary>
/// “ñ‚Â‚Ì”š‚ğ”äŠr‚µ‚Ä¬‚³‚¢•û‚ğo—Í‚·‚é
/// </summary>
/// <typeparam name="T">ƒeƒ“ƒvƒŒ</typeparam>
/// <param name="number1">”äŠr‚·‚é”š‚P</param>
/// <param name="number2">”äŠr‚·‚é”š2</param>
/// <returns>¬‚³‚¢‚Ù‚¤‚Ì”š</returns>
template<typename T>
T min(T number1, T number2) {
	if(number1>number2){
		return static_cast<T>(number1);
	} else {
		return static_cast<T>(number2);
	}
}
/// <summary>
/// charŒ^‚ª“ü—Í‚³‚ê‚½ê‡‚ÉƒGƒ‰[•¶‚ğ•\¦‚³‚¹‚é
/// </summary>
/// <param name="char1">•¶š—ñ‚P</param>
/// <param name="char2">•¶š—ñ‚Q</param>
/// <returns>ƒGƒ‰[•¶</returns>
template<>
char min<char>(char char1, char char2) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
		return 0;
}



int main() {
	printf("%d\n", min<int>(114, 514));
	printf("%f\n", min<float>(11.4, 51.4));	
	printf("%lf\n", min<double>(11.4514, 19.1919));	
	printf("%c\n", min<char>('a','11'));
	//
	return 0;
}