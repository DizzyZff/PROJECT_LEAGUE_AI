cmake_minimum_required(VERSION 3.24)
project(PROJECT_LEAGUE_AI)

set(CMAKE_CXX_STANDARD 23)

add_executable(PROJECT_LEAGUE_AI src/LeagueAi.cpp include/LeagueAi.h src/readpy.cpp src/ActivePlayer.cpp include/ActivePlayer.h include/ChampionStats.h src/Champion.cpp include/Champion.h src/Runes.cpp include/Runes.h src/Rune.cpp include/Rune.h include/Ability.h)
