#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* root=NULL;

node* createNode(){
    node* newNode=new node();
    return newNode;
}

void append(int x){
    if(root==NULL){
        root=createNode();
        root->data=x;
        root->next=NULL;
    }
    else{
        node* currentNode=root;
        while(currentNode->next!=NULL){
            currentNode=currentNode->next;
        }
        node* newNode=createNode();
        newNode->data=x;
        newNode->next=NULL;
        currentNode->next=newNode;
    }
}

void deleteNode(int x){
    node* currentNode=root;
    node* prevNode=NULL;

    while(currentNode->data!=x){
        prevNode=currentNode;
        currentNode=currentNode->next;
    }

    if(currentNode==root){
        node* temp=root;
        root=root->next;
        delete(temp);
    }
    else{
        prevNode->next=currentNode->next;
        delete(currentNode);
    }
}

void print(){
    node* currentNode=root;
    while(currentNode!=NULL){
        cout<<currentNode->data<<endl;
        currentNode=currentNode->next;
    }
}

int main()
{
    append(2);
    append(9);
    append(6);
    deleteNode(9);
    deleteNode(2);
    print();

    return 0;
}
