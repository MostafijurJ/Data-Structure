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

void Insert(node* root,int val){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp->left==NULL){
            temp->left=new node(val);
            break;
        }
        else{
            q.push(temp->left);
        }

        if(temp->right==NULL){
            temp->right=new node(val);
            break;
        }
        else{
            q.push(temp->right);
        }
    }
}

void print(node* root){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<temp->data<<endl;

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root=new node(1);
    root->right=new node(2);
    Insert(root,3);
    Insert(root,7);
    Insert(root,9);
    print(root);
    return 0;
}
