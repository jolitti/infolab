#ifndef MAZE_H
#define MAZE_H

#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Maze
{
private:
    vector<string> map;

public:
    Maze(string path);
    string repr() const;
};

#endif