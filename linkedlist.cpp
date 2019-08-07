#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *root=NULL;

void append(int data){

    if(root==NULL){    ///Empty LinkedList
        root=new node();
        root->data=data;
        root->next=NULL;
    }
    else{
        node *current_node=root; /// Make a copy of root node

        while(current_node->next!=NULL){
            current_node=current_node->next;
        }

        node *newNode=new node();
        newNode->data=data;
        newNode->next=NULL;

        current_node->next=newNode; /// Link the last node with new node
    }
}

void insertData(int pos,int data){
    node *current_node=root;
    node *prevNode=NULL;

    int ck=0;
    while(ck!=pos){
        prevNode=current_node;
        current_node=current_node->next;
        ck++;
    }

    if(current_node==root){
        node *temp=root;
        node *newNode=new node();
        newNode->data=data;
        newNode->next=current_node;
        root=newNode;
    }
    else{
        node *newNode=new node();
        newNode->data=data;
        newNode->next=current_node;
        prevNode->next=newNode;
    }
}

void deleteNode(int data){
    node *current_node=root;
    node *prevNode=NULL;
    int ck=0;

    while(current_node->data!=data){
        prevNode=current_node;
        current_node=current_node->next;
        ck++;
    }

    if(current_node==root){
        node *temp=root;
        root=root->next;
        delete(temp);
    }
    else{
        prevNode->next=current_node->next;
        delete(current_node);
    }

    cout<<"Loc : "<<ck<<endl;
}

void print()
{
    node *current_node=root;

    while(current_node!=NULL){
        cout<<current_node->data<<endl;
        current_node=current_node->next;
    }
}

int main()
{
    append(1);
    append(2);
    append(5);
    //print();
    //deleteNode(2);
    insertData(0,7);
    print();
    return 0;
}
