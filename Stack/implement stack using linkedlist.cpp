#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *root=NULL;

void push(int x){
    node* newNode=new node();
    newNode->data=x;
    newNode->next=root;
    root=newNode;
}

void pop(){
    if(root==NULL){
        return;
    }
    node *temp=root;
    root=root->next;
    delete(temp);
}

void top(){
    if(root==NULL){
        cout<<"NULL"<<endl;
        return;
    }
    cout<<root->data<<endl;
}

int main()
{
    int n;
    while(1){
        cin>>n;
        if(n==1){
            int x;
            cin>>x;
            push(x);
        }
        else if(n==2){
            pop();
        }
        else{
            top();
        }
    }
    return 0;
}
