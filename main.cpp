#include <cstdio>
#include <string>
#include <chrono>

using namespace std::chrono;

int main() {
    // 100,000文字の 'a' で初期化
    std::string a(100000, 'a');

    // コピー処理の時間計測
    auto startCopy = high_resolution_clock::now();
    std::string b = a;  // コピー
    auto endCopy = high_resolution_clock::now();
    auto copyTime = duration_cast<microseconds>(endCopy - startCopy).count();

    // ムーブ処理の時間計測
    auto startMove = high_resolution_clock::now();
    std::string c = std::move(a);  // ムーブ
    auto endMove = high_resolution_clock::now();
    auto moveTime = duration_cast<microseconds>(endMove - startMove).count();

    // 結果の出力
    printf("100,000文字を移動とコピーで比較しました。\n");
    printf("コピー: %lldμs\n", copyTime);
    printf("移動: %lldμs\n", moveTime);

    return 0;
}
