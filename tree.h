#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>

class Forest;

class Tree {
public:
    int height;
    std::string color;
    char symbol;
    int x, y;
    int** tab;

    Tree(int h, char s, std::string c);
    ~Tree();

    friend class Forest;
};

#endif