#ifndef FOREST_H
#define FOREST_H

#include "tree.h"
#include <vector>

class Forest {
private:
  vector<Tree *> trees;
  char **forest;
  int length, width;

public:
  Forest(const int h, const int w);
  ~Forest();
  void addTree(Tree *t);
  void printForest();
};

#endif