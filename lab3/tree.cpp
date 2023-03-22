#include <iostream>
using namespace std;
#include "tree.h"

void Tree::printTree() {
    int i, j;
    for(j = 0; j < height; j++){
        for(i = height - j - 1; i > 0; i--){
            cout << ' ';
        }
        for(i = 0; i < 2 * j + 1; i++){
            cout << "\u001b[35m*";
        }
        cout << endl;
    }
}