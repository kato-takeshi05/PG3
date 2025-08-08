#include <iostream>
#include <string>
#include <chrono>

int main() {
    //初期化
    std::string original(1'000'000, 'a');

    //コピー
    auto startCopy = std::chrono::high_resolution_clock::now();
    std::string copied = original;  // コピー
    auto endCopy = std::chrono::high_resolution_clock::now();
    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();

    //移動
    auto startMove = std::chrono::high_resolution_clock::now();
    std::string moved = std::move(original);  //右辺値参照
    auto endMove = std::chrono::high_resolution_clock::now();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    //結果
    std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;
    std::cout << "コピー： " << copyDuration << "μs" << std::endl;
    std::cout << "移動： " << moveDuration << "μs" << std::endl;
    std::cin.get();

    return 0;
}
