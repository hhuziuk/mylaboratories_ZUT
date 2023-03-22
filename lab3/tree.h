using namespace std;

class Tree{
public:
    int height;
    string color;
    char symbol;
    int x, y;
    int** tab;

    void printTree();

    Tree(int h, char s, string c);
    ~Tree();
};