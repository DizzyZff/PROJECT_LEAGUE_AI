//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_CHAMPION_H
#define PROJECT_LEAGUE_AI_CHAMPION_H

#include <string>
#include "ChampionStats.h"
#include "Runes.h"

using namespace std;

class Champion {
private:
    string name;
    ChampionStats stats;ead;
    string *items;
    int level;
    string position;
    int respawnTimer;
    Runes runes;
public:
    Champion()
};


#endif //PROJECT_LEAGUE_AI_CHAMPION_H
