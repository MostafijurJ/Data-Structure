#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* root=NULL;

node* create_node(){
    node* newNode=new node();
    return newNode;
}

void insertNode(int data){

    if(root==NULL){
        root=create_node();
        root->data=data;
        root->next=NULL;
    }

    else{
        node* currentNode=root;

        while(currentNode->next!=NULL){
            currentNode=currentNode->next;
        }

        node* newNode=create_node();
        newNode->data=data;
        newNode->next=NULL;
        currentNode->next=newNode;
    }
}

void insertNodeAt(int data,int pos){
    node* currentNode=root;
    node* prevNode=NULL;
    if(pos==0){
        node* newNode=create_node();
        newNode->data=data;
        newNode->next=currentNode;
        root=newNode;
    }
    else{
        while(pos!=0){
            prevNode=currentNode;
            currentNode=currentNode->next;
            pos--;
        }

        node* newNode=create_node();
        newNode->data=data;
        newNode->next=currentNode;
        prevNode->next=newNode;
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
    insertNode(3);
    insertNode(5);
    insertNodeAt(7,2);
    print();
    return 0;
}

