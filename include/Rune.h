//
// Created by dizzy on 1/25/23.
//

#ifndef PROJECT_LEAGUE_AI_RUNE_H
#define PROJECT_LEAGUE_AI_RUNE_H

#include <string>

using namespace std;

class Rune {
private:
    string name;
    string description;
    string type;
    int value;
    int id;

public:
    Rune(string name, string description, string type, int value, int id){
        this->name = name;
        this->description = description;
        this->type = type;
        this->value = value;
        this->id = id;
    };

    string getName(){
        return this->name;
    };

    string getDescription(){
        return this->description;
    };

    string getType(){
        return this->type;
    };

    int getValue(){
        return this->value;
    };

    int getId(){
        return this->id;
    };
};


#endif //PROJECT_LEAGUE_AI_RUNE_H
