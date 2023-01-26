//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_ABILITY_H
#define PROJECT_LEAGUE_AI_ABILITY_H

#include <string>

using namespace std;

class Ability {
private:
    string name;
    string displayName;
    string description;
    string id;
    string tooltip;
    string maxRank;

public:
    Ability(string name, string displayName, string description, string id, string tooltip, string maxRank){
        this->name = name;
        this->displayName = displayName;
        this->description = description;
        this->id = id;
        this->tooltip = tooltip;
        this->maxRank = maxRank;
    };

    string getName(){
        return this->name;
    };

    string getDisplayName(){
        return this->displayName;
    };

    string getDescription(){
        return this->description;
    };

    string getId(){
        return this->id;
    };

    string getTooltip(){
        return this->tooltip;
    };

    string getMaxRank(){
        return this->maxRank;
    };
};

#endif //PROJECT_LEAGUE_AI_ABILITY_H
