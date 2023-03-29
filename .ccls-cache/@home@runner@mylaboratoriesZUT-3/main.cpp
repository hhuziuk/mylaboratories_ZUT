#include "tree.h"
#include <iostream>
using namespace std;
#include "forest.h"

int main() {
  Forest f(30, 30);

  Tree *drzewo1 = new Tree(3, '+', "red", 2, 2);
  Tree *drzewo2 = new Tree(5, '*', "green", 3, 8);
  Tree *drzewo3 = new Tree(8, '*', "yellow", 10, 18);
  Tree *drzewo4 = new Tree(6, '*', "blue", 3, 5);
  Tree *drzewo5 = new Tree(8, '*', "magenta", 24, 24);

  f.addTree(drzewo1);
  f.addTree(drzewo2);
  f.addTree(drzewo3);
  f.addTree(drzewo4);
  f.addTree(drzewo5);
  f.printForest();

  return 0;
}