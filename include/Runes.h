//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_RUNES_H
#define PROJECT_LEAGUE_AI_RUNES_H

#include <string>

#include "Rune.h"

using namespace std;

class Runes {
    private:
    Rune *runes;

    public:
    Runes getRunes(){
        return *this;
    };
};


#endif //PROJECT_LEAGUE_AI_RUNES_H
