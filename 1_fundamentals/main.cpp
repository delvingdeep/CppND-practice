//
//  main.cpp
//  cppND
//
//  Created by Deep Doshi on 5/5/19.
//  Copyright © 2019 Deep Doshi. All rights reserved.
//

#include "main.hpp"



int main() {
    
    auto board = ReadBoardFile("1.board");
    PrintBoard(board);
}

vector<vector<State>> ReadBoardFile(string path) {
    ifstream myfile(path);
    string line;
    vector<State> row;
    vector<vector<State>> board;
    
    if (myfile) {
        while (getline(myfile, line)) {
            row = ParseLine(line);
            board.push_back(row);
        }
    }
    
    return board;
}

void PrintBoard(vector<vector<State>> v) {
    for(int i=0; i < v.size(); i++) {
        for(int j=0; j < v[i].size(); j++) {
            cout << CellString(v[i][j]);
        }
        cout << "\n";
    }
}

vector<State> ParseLine(string s) {
    istringstream str(s);
    int i;
    char c;
    vector<State> v;
    
    while (str >> i >> c && c == ',') {
        if (i == 0) {
            v.push_back(State::kEmpty);
        }
        else {
            v.push_back(State::kObstacle);
        }
    }
    
    return v;
}

string CellString(State cell) {
    switch(cell) {
        case State::kObstacle : return "⛰   ";
        default : return "0   ";
    }
}
