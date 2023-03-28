#include <iostream>
#include "tree.h"
using namespace std;
#include "forest.h"

int main() {
    // Create Forest object
    Forest f(30, 30);
    // Create Tree objects on the heap

    Tree* drzewo1 = new Tree(3, '+', "red");
    Tree* drzewo2 = new Tree(5, '*', "green");
    Tree* drzewo3 = new Tree(8, '*', "red");
    Tree* drzewo4 = new Tree(6, '*', "green");
    Tree* drzewo5 = new Tree(8, '*', "red");

    drzewo1->x = 2;
    drzewo1->y = 2;
    drzewo2->x = 3;
    drzewo2->y = 8;
    drzewo3->x = 5;
    drzewo3->y = 10;
    drzewo4->x = 18;
    drzewo4->y = 16;
    drzewo5->x = 23;
    drzewo5->y = 23;

    f.addTree(drzewo1);
    f.addTree(drzewo2);
    f.addTree(drzewo3);
    f.addTree(drzewo4);
    f.addTree(drzewo5);
    // Print the forest
    f.printForest();

    return 0;
}