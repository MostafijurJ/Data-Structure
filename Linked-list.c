#include<stdio.h>
#include<stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList node;
node *head=NULL,*last=NULL;

void createLinkedList(){
    int val;
    while(1){
        printf("Enter a number(-1 for exit).\n");
        scanf("%d",&val);
        if(val==-1)
            break;
        insertAtLast(val);
    }
}

void insertAtLast(int val){
    node *temp_node;
    temp_node=(node *)malloc(sizeof(node));
    temp_node->data=val;
    temp_node->next=NULL;

    ///For the first element in linked list
    if(head==NULL){
        head=temp_node;
        last=temp_node;
    }
    else{
        last->next=temp_node;
        last=temp_node;
    }
}

void printLinkedList(){
    printf("Your linled list is:\n");
    node *myList;
    myList=head;

    while(myList!=NULL){
        printf("%d ",myList->data);
        myList=myList->next;
    }
}

int main()
{
    createLinkedList();
    printLinkedList();
    return 0;
}
