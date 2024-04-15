#include "Header.h"

int main()
{
    SkewTree heap, temp1 = NULL, temp2 = NULL;

    int heap1[] = { 12, 5, 10 };

    int heap2[] = { 3, 7, 8, 14 };
    int n1 = sizeof(heap1) / sizeof(heap1[0]);
    int n2 = sizeof(heap2) / sizeof(heap2[0]);
    //cout << n1 << "\t" << n2;
    temp1 = construct(temp1, heap1, n1);
    temp2 = construct(temp2, heap2, n2);


    temp1 = merge(temp1, temp2);

    cout << "\nMerged Heap is: " << endl;
    inorder(temp1);
    cout << endl;
    for (int i = 0; i < heightTree(temp1); i++)
    {
        levelTraverse(temp1, i);
        cout << endl;
    }
    
}
