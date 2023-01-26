//
// Created by 91213 on 2023/1/25.
//

#ifndef PROJECT_LEAGUE_AI_LEAGUEAI_H
#define PROJECT_LEAGUE_AI_LEAGUEAI_H

#include <string>

#include "ActivePlayer.h"
#include "Champion.h"
#include "ChampionStats.h"
#include "Runes.h"
#include "Rune.h"
#include "Ability.h"

using namespace std;

class LeagueAi {
private:
    ActivePlayer activePlayer;
    Champion *champions;
    ChampionStats *championStats;
    Runes *runes;
    Rune *rune;
    Ability *abilities;
public:
    LeagueAi(){
        this->activePlayer = NULL;

    };
    void readFromJson(string path);
};

int main();

#endif //PROJECT_LEAGUE_AI_LEAGUEAI_H
