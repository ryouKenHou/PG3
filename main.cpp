#include <iostream>
#include <list>
#include <cstring> 

struct Station {
    char code[10];
    char name[30];
};

void printStations(const std::list<Station>& stationList, int year) {
    printf("=== %d Yamanote Line Stations ===\n", year);
    for (const auto& station : stationList) {
        printf("(%s, %s)\n", station.code, station.name);
    }
    printf("\n");
}

void insertBefore(std::list<Station>& list, const char targetName[], const Station& newStation) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        if (std::strcmp(it->name, targetName) == 0) {
            list.insert(it, newStation);
            return;
        }
    }
}

int main() {
    system("chcp 65001 > nul");

    std::list<Station> stationList = {
        {"JY01", "Tokyo"},       {"JY02", "Kanda"},        {"JY03", "Akihabara"},
        {"JY04", "Okachimachi"}, {"JY05", "Ueno"},         {"JY06", "Uguisudani"},
        {"JY07", "Nippori"},     {"JY09", "Tabata"},       {"JY10", "Komagome"},
        {"JY11", "Sugamo"},      {"JY12", "Otsuka"},       {"JY13", "Ikebukuro"},
        {"JY14", "Mejiro"},      {"JY15", "Takadanobaba"}, {"JY16", "Shin-Okubo"},
        {"JY17", "Shinjuku"},    {"JY18", "Yoyogi"},       {"JY19", "Harajuku"},
        {"JY20", "Shibuya"},     {"JY21", "Ebisu"},        {"JY22", "Meguro"},
        {"JY23", "Gotanda"},     {"JY24", "Osaki"},        {"JY25", "Shinagawa"},
        {"JY26", "Tamachi"},     {"JY27", "Hamamatsucho"}, {"JY28", "Shimbashi"},
        {"JY29", "Yurakucho"}
    };

    // 1970 Output
    printStations(stationList, 1970);

	// 2019 Output
    insertBefore(stationList, "Tabata", { "JY08", "Nishi-Nippori" });
    printStations(stationList, 2019);

	// 2022 Output
    insertBefore(stationList, "Tamachi", { "JY26", "Takanawa-Gateway" });
    printStations(stationList, 2022);

    return 0;
}