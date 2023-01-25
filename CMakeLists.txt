cmake_minimum_required(VERSION 3.24)
project(PROJECT_LEAGUE_AI)

set(CMAKE_CXX_STANDARD 23)

add_executable(PROJECT_LEAGUE_AI src/leagueai.cpp include/leagueai.h src/readpy.cpp)
