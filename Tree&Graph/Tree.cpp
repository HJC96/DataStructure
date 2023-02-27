#include <iostream>

using namespace std;

typedef struct tree* TreeNode;
typedef struct tree
{
    TreeNode LeftChild;
    int data;
    TreeNode RightChild;
};

TreeNode Create()
{
    TreeNode BinTree = new tree;
    BinTree->LeftChild = NULL;
    BinTree->RightChild = NULL;
    BinTree->data = '\0';
    return BinTree;
}

bool IsEmpty(TreeNode BT)
{
    if(BT->LeftChild == NULL && BT->RightChild == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

TreeNode MakeBT(TreeNode BT1,int item,TreeNode BT2)
{
    TreeNode NewTree = Create();
    NewTree->data = item;
    NewTree->LeftChild = BT1;
    NewTree->RightChild = BT2;
    return NewTree;
}


void inorder(TreeNode BT)
{
    if(BT)
    {
        inorder(BT->LeftChild);
        cout << BT->data;
        inorder(BT->RightChild);
    }
}

void preorder(TreeNode BT)
{
    if(BT)
    {
        cout << BT->data;
        preorder(BT->LeftChild);
        preorder(BT->RightChild);
    }
}

void postorder(TreeNode BT)
{
    if(BT)
    {
        postorder(BT->LeftChild);
        postorder(BT->RightChild);
        cout << BT->data;

    }
}

TreeNode Lchild(TreeNode BT)
{
    if(IsEmpty(BT))
    {
        exit(-1);
    }
    else
    {
        return BT->LeftChild;
    }
}

TreeNode Rchild(TreeNode BT)
{
    if(IsEmpty(BT))
    {
        exit(-1);
    }
    else
    {
        return BT->RightChild;
    }
}

TreeNode find(TreeNode BT, char data)
{
    TreeNode tmp1, tmp2;
    if(BT)
    {
        if(BT->data == data)
        {
            return BT;
        }
        else
        {
            tmp1 = find(BT->LeftChild, data); 
            tmp2 = find(BT->RightChild, data);
            if(tmp1)
                return tmp1;
            if(tmp2)
                return tmp2;
        }
    }
    return NULL;
}

int main()
{
    int num;
    TreeNode n1, n2, n3, n4, n5, n6;
   
    n6 = MakeBT(NULL, 6, NULL);
    n5 = MakeBT(NULL, 5, NULL);
    n4 = MakeBT(NULL, 4, NULL);
    n3 = MakeBT(n6, 3, NULL);
    n2 = MakeBT(n4, 2, n5);
    n1 = MakeBT(n2, 1, n3);

    cout << "POST ORDER: " ;
    postorder(n1);
    cout << endl;
    cout << "PRE ORDER: " ;
    preorder(n1);
    cout << endl;
    cout << "IN ORDER: " ;
    inorder(n1);
    cout << endl;

}
