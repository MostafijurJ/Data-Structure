#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* root=NULL;

void Insert(int x){
    if(root==NULL){
        root=new node();
        root->data=x;
        root->next=NULL;
    }
    else{
        node* currentNode=root;
        while(currentNode->next!=NULL){
            currentNode=currentNode->next;
        }
        node* newNode=new node();
        newNode->data=x;
        newNode->next=NULL;

        currentNode->next=newNode;
    }
}

void RemoveDuplicate(){
    node* prev=NULL;
    node* current=root;
    int temp=0;
    while(current->next!=NULL){
        prev=current;
        temp=prev->data;
        current=current->next;
        if(temp==current->data){
            prev->next=current->next;
            node* temp=current;
            delete(temp);
        }
    }
}

void Print(){
    node* currentNode=root;
    while(currentNode!=NULL){
        cout<<currentNode->data<<" ";
        currentNode=currentNode->next;
    }
    cout<<endl;
}

int main()
{
    Insert(3);
    Insert(3);
    Insert(5);
    Insert(7);
    Insert(7);
    RemoveDuplicate();
    Print();
    return 0;
}
