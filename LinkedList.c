#include<stdio.h>
#include<stdlib.h>

struct linkedList{
    int number;
    struct linkedList *next;
};

typedef struct linkedList node;

void addNode(node *myList){
    int x;
    printf("Enter a number. (Enter -1 for exit!)\n");
    //scanf("%d",&myList->number);
    scanf("%d",&x);

    if(x==-1){
        myList->next=NULL;
    }
    else{
        myList->number=x;
        myList->next=(node *)malloc(sizeof(node));
        addNode(myList->next);
    }
}

void printList(node *myList){
    if(myList->next==NULL)
        return;
    printf("%d\n",myList->number);
    printList(myList->next);
}

int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    addNode(head);
    printList(head);

    return 0;
}
