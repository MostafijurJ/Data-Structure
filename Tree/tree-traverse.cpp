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

void preOrder(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);

    cout<<"Pre-Order traversal: "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"In-Order traversal: "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"Post-Order traversal: "<<endl;
    postOrder(root);
    cout<<endl;
    return 0;
}
