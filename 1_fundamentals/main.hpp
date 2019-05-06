//
//  main.hpp
//  cppND
//
//  Created by Deep Doshi on 5/5/19.
//  Copyright © 2019 Deep Doshi. All rights reserved.
//

#ifndef main_h
#define main_h

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using std::cout;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::string;
using std::cin;

enum class State {kEmpty, kObstacle};

vector<vector<State>> ReadBoardFile(string path);
void PrintBoard(vector<vector<State>> v);
vector<State> ParseLine(string s);
string CellString(State cell);

#endif /* main_h */
