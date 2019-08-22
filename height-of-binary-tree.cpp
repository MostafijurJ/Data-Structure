#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

int Height(node* root){
    if(root==NULL)
        return -1;
    return max(Height(root->left)+1,Height(root->right)+1);
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<Height(root);
    return 0;
}
