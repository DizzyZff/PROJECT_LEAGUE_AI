//
// Created by 91213 on 2023/1/25.
// Read python file and execute it.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void readpy(std::string path) {
    string cmd = "python " + path;
    system(cmd.c_str());
}


