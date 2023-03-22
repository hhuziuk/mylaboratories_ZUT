#include <iostream>
#include "tree.h"
using namespace std;
int main() {
    int i, j;
    Tree drzewko(5, '*', "green");
    drzewko.printTree();

    for(j = 0; j < drzewko.height; j++){
        for(i = 0; i < 2 * drzewko.height - 1; i++){
            cout << drzewko.tab[j][i];
        }
        cout << endl;
    }

    return 0;
}
// forest class