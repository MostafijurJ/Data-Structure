/// Insert a node at a specific position in a linked list

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* currentNode=head;
    SinglyLinkedListNode* prevNode=NULL;
    if(position==0){
        SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
        newNode->next=head;
        head=newNode;
        return head;
    }
    else{
        while(position!=0){
            prevNode=currentNode;
            currentNode=currentNode->next;
            position--;
        }

        SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
        newNode->next=currentNode;
        prevNode->next=newNode;
    }

    return head;
}


/// Linked Lists: Detect a Cycle

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    map<Node*,bool>visit;
    if(head==NULL)
        return false;
    Node* current=head;
    visit[current]=true;
    while(current->next!=NULL){
        current=current->next;
        if(visit[current])
            return true;
        visit[current]=true;

    }
    return false;
}


/// Print the Elements of a Linked List

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }
}


/// Insert a Node at the Tail of a Linked List

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	if(head==NULL){
        head=new SinglyLinkedListNode(data);
        return head;
    }
    SinglyLinkedListNode* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
    current->next=newNode;
    return head;
}


/// Insert a node at the head of a linked list

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	SinglyLinkedListNode* current=llist;
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
    newNode->next=current;
    llist=newNode;
    return llist;
}


///  Delete a Node

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* current=head;
    SinglyLinkedListNode* prev=NULL;
    if(position==0){
        SinglyLinkedListNode* tmp=head;
        head=head->next;
        delete(tmp);
        return head;
    }
    while(position>0){

        prev=current;
        current=current->next;
        position--;

    }
    prev->next=current->next;
    delete(current);
    return head;
}


/// Print in Reverse

void reversePrint(SinglyLinkedListNode* head) {
    if(head==NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->data<<endl;
}


/// Reverse a linked list

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current=head;
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* next=NULL;

    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}


/// Delete duplicate-value nodes from a sorted linked list

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current=head;
    SinglyLinkedListNode* prev=NULL;

    while(current->next!=NULL){
        prev=current;
        current=current->next;

        if(prev->data==current->data){
            prev->next=current->next;
            delete(current);
            current->next=prev;
        }
    }
    return head;
}


/// Cycle Detection


bool has_cycle(SinglyLinkedListNode* head) {
    map<SinglyLinkedListNode*,bool>mp;
    SinglyLinkedListNode* current=head;

    while(current->next!=NULL){
        if(mp[current]){
            return 1;
        }
        else{
            mp[current]=1;
        }
        current=current->next;
    }

    return 0;
}


/// Merge two sorted linked lists

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* head3;
    if(head1->data <= head2->data)
    {
        head3=head1;
        head1=head1->next;
    }
    else{
        head3=head2;
        head2=head2->next;
    }

    SinglyLinkedListNode* prev=head3;

    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            prev->next=head1;
            head1=head1->next;
        }
        else{
            prev->next=head2;
            head2=head2->next;
        }

        prev=prev->next;
    }

    if(head1==NULL){
        prev->next=head2;
    }
    if(head2==NULL){
        prev->next=head1;
    }

    return head3;
}


