#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    int level;

    node(int x){
        data=x;
        left=right=NULL;
        level=0;
    }
};

void levelOrder(node* root , int lev){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->level==lev){
            cout<<temp->data<<endl;
        }


        if(temp->left!=NULL){
            temp->left->level=temp->level+1;
            q.push(temp->left);
        }

        if(temp->right!=NULL){
            temp->right->level=temp->level+1;
            q.push(temp->right);
        }
    }
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

    levelOrder(root,2);

    return 0;
}
