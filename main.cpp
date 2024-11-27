#include <iostream>
#include <list>
#include <cstring> // strcmpを使うためのヘッダー

void PrintStationList(const std::list<const char*>& stationList, const char* year) {
    std::cout << year << " Station List:" << std::endl;
    for (const char* station : stationList) {
        std::cout << "- " << station << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    // 駅名リスト（1970年時点, 英語表記）
    std::list<const char*> stationList1970 = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro",
        "Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi",
        "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki",
        "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 1970年のリストを基に2019年のリストを作成（Nishi-Nipporiを追加）
    std::list<const char*> stationList2019 = stationList1970;
    auto it = stationList2019.begin();
    while (it != stationList2019.end()) {
        if (strcmp(*it, "Nippori") == 0) {
            stationList2019.insert(++it, "Nishi-Nippori");
            break;
        }
        ++it;
    }

    // 2019年のリストを基に2022年のリストを作成（Takanawa Gatewayを追加）
    std::list<const char*> stationList2022 = stationList2019;
    it = stationList2022.begin();
    while (it != stationList2022.end()) {
        if (strcmp(*it, "Shinagawa") == 0) {
            stationList2022.insert(++it, "Takanawa Gateway");
            break;
        }
        ++it;
    }

    // 結果を表示
    PrintStationList(stationList1970, "1970");
    PrintStationList(stationList2019, "2019");
    PrintStationList(stationList2022, "2022");

    return 0;
}
