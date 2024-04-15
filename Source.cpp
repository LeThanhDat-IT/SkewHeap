#include "Header.h"
 
NODE makeNode()
{
    NODE p = new node;
    if (p == NULL) return NULL;
    p->key = 0;
    p->right = NULL;
    p->left = NULL;
    return p;
}

SkewTree merge(SkewTree h1, SkewTree h2)
{

    if (h1 == NULL)
        return h2;
    if (h2 == NULL)
        return h1;


    if (h1->key > h2->key)
        swap(h1, h2);


    swap(h1->left, h1->right);

    h1->left = merge(h2, h1->left);

    return h1;
}


SkewTree construct(SkewTree root,int heap[], int n)
{
    SkewTree temp;
    for (int i = 0; i < n; i++) {
        temp = makeNode();
        temp->key = heap[i];
        root = merge(root, temp);
    }
    return root;
}

void inorder(SkewTree root)
{
    if (root == NULL)
        return;
    else {
        inorder(root->left);
        cout << root->key << "\t";
        inorder(root->right);
    }
    return;
}
int heightTree(SkewTree t) {
    if (!t)
        return 0;
    int trai = heightTree(t->left);
    int phai = heightTree(t->right);
    if (trai > phai)
        return trai + 1;
    else
        return phai + 1;
}
void levelTraverse(SkewTree t, int k) {
    if (!t)
        return;
    if (k == 0) {
        cout << t->key << "\t";
        return;
    }
    levelTraverse(t->left, k - 1);
    levelTraverse(t->right, k - 1);
}