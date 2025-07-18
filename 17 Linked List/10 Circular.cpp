#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){                     //if Linked List was empty
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);        //New Node

    if(head==NULL){
        head = n;
        return;
    }

    node* temp=head;
    while(temp->next!=head){    //Traversing till last element
        temp=temp->next;
    }
    temp->next=n;               //Attaching last element also
    n->next=head;
}

void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count=1;

    while(count!=pos-1){
        temp=temp->next;
        count++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next; 

    delete todelete;
}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    node* head=NULL;
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,5);
    display(head);

    return 0;
}

/*
1 2 3 4 
5 1 2 3 4
5 1 2 3
*/