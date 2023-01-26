//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_ACTIVEPLAYER_H
#define PROJECT_LEAGUE_AI_ACTIVEPLAYER_H

#include <string>

#include "Champion.h"
#include "Ability.h"

using namespace std;

class ActivePlayer {
private:
    Champion champion;
    Ability *abilities;
public:
    ActivePlayer(Champion champion, Ability *abilities){
        this->champion = champion;
        this->abilities = abilities;
    };

    Champion getChampion(){
        return this->champion;
    };

    Ability *getAbilities(){
        return this->abilities;
    };
};


#endif //PROJECT_LEAGUE_AI_ACTIVEPLAYER_H
