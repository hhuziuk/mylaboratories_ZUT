#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
using namespace std;

class Forest;

class Tree {
public:
  int height;
  string color;
  char symbol;
  int x, y;
  int **tab;

  Tree(int h, char s, string c);
  ~Tree();

  friend class Forest;
};

#endif