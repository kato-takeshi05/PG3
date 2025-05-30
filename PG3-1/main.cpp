#include <stdio.h>
#include <list>
#include <cstring> 
using namespace std;

int main() {
    // 山手線駅名配列（1970）
    const char* stations[] = {
        "Tokyo", "Kanda", "Akihabara", "Okachikmachi", "Ueno", "Uguisudani", "Nippori", "Tabata",
        "Komagome", "Sugamo", "Otuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku",
        "Yoyogi", "Hrajuku", "Shibuya", "Ebisu", "Meguro", "gotanda", "Osaki",
        "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    //listを作成
    list<const char*> yamanoteLine;

    //作成したリストに作成した配列をぶち込む
    for (size_t i = 0; i < sizeof(stations) / sizeof(stations[0]); i++) {
        yamanoteLine.push_back(stations[i]);
    }

    //山手線の表示（1970）
    printf("【1970年の山手線駅一覧】\n");
    for (const char* station : yamanoteLine) {
        printf("\x1b[1;31m");
        printf("%s,", station);
        printf("\x1b[0m");
    }

    //西日暮里を挿入
    for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); ++it) {
        if (strcmp(*it, "Tabata") == 0) {
            yamanoteLine.insert(++it, "Nishi-Nippori");
            break;
        }
    }

    //山手線の表示（2019）
    printf("\n【2019年の山手線駅一覧】\n");
    for (const char* station : yamanoteLine) {
        printf("\x1b[1;32m");
        printf("%s,", station);
        printf("\x1b[0m");
    }

   //高輪ゲートウェイを挿入
    for (auto it = yamanoteLine.begin(); it != yamanoteLine.end(); ++it) {
        if (strcmp(*it, "Tamachi") == 0) {
            yamanoteLine.insert(++it, "Takanawa Gateway");
            break;
        }
    }

 //山手線の表示（2022）
    printf("\n【2022年の山手線駅一覧】\n");
    for (const char* station : yamanoteLine) {
        printf("\x1b[1;33m");
        printf("%s,", station);
        printf("\x1b[0m");
    }

    return 0;
}