#ifndef FOREST_H
#define FOREST_H

#include <vector>
#include "tree.h"

class Forest {
private:
    std::vector<Tree*> trees;
    char** forest;
    int length, width;
public:
    Forest(const int h, const int w);
    ~Forest();
    void addTree(Tree* t);
    void printForest();
};

#endif