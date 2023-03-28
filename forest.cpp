#include <iostream>
#include "tree.h"
using namespace std;
#include "forest.h"

Forest::Forest(const int h, const int w) {
    length = h;
    width = w;
    forest = new char*[h];
    for (int i = 0; i < h; i++) {
        forest[i] = new char[w];
        for (int j = 0; j < w; ++j)
            forest[i][j] = ' ';
    }
}

Forest::~Forest() {
    for (Tree* t : trees) {
        delete t;
    }
    trees.clear();

    for (int i = 0; i < length; i++)
        delete[] forest[i];

    delete[] forest;
}

void Forest::addTree(Tree* t) {
    trees.push_back(t);
}

void Forest::printForest() {
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            bool treePrinted = false;
            for (auto tree : trees) {
                if (i >= tree->x && i < tree->x + tree->height && j >= tree->y && j < tree->y + 2 * tree->height - 1 && tree->tab[i - tree->x][j - tree->y] == 1) {
                    if(tree->color == "green") std::cout << "\u001b[32m";
                    if(tree->color == "red") std::cout << "\u001b[31m";
                    cout << tree->symbol;
                    treePrinted = true;
                    break;
                }
            }
            if (!treePrinted) {
                cout << "\u001b[0m" << forest[i][j];
            }
        }
        cout << '\n';
    }
}
