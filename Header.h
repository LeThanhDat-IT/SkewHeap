#include <iostream>
using namespace std;
struct node {
    int key;
    node* right;
    node* left;
};
typedef node* NODE;
typedef  NODE SkewTree;
NODE makeNode();
SkewTree merge(SkewTree h1, SkewTree h2);
SkewTree construct(SkewTree root,int heap[], int n);
void inorder(SkewTree root);
int heightTree(SkewTree t);
void levelTraverse(SkewTree t, int k);