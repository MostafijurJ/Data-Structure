#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};

node* root=NULL;

void Insert(int x){
    if(root==NULL){
        root=new node(x);
        return;
    }

    node* current=root;
    while(current->next!=NULL){
        current=current->next;
    }

    node* newNode=new node(x);
    current->next=newNode;
}

void reverseList(){
    node* current=root;
    node* prev=NULL;
    node* next=NULL;

    if(root==NULL)
        return;

    while(current!=NULL){
        next=current->next; /// store next pointer
        current->next=prev; /// reverse current node pointer
        prev=current;       /// Move pointer ahead
        current=next;
    }
    root=prev;

}

void print(){
    node* current=root;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main()
{
    Insert(2);
    Insert(5);
    Insert(7);
    reverseList();
    print();
    return 0;
}
