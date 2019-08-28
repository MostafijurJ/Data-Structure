#include<bits/stdc++.h>
using namespace std;
int visit[100];
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
    node* newNode=new node(x);

    if(root==NULL){
        root=newNode;
        return;
    }

    node* current=root;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newNode;
}

bool hasCycle(){
    node* current=root;

    while(current->next!=NULL){
        if(visit[current->data]==1){
            return true;
        }
        visit[current->data]=1;
        current=current->next;
    }
    return false;
}

bool isCycle()
{
    node* slow,*fast;
    slow = root;
    fast = root->next;
    while(
          fast->next!=NULL)
    {
        if(fast==slow)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

void Print(){
    node* current=root;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main()
{
    //Insert(2);
    Insert(1);
    Insert(7);
    Insert(3);
    Insert(5);
    Insert(1);
    Insert(4);
    Insert(8);

//    if(hasCycle())
//        cout<<"Yes"<<endl;
//    else
//        cout<<"NO"<<endl;
    if(isCycle())
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

    Print();
    return 0;
}
