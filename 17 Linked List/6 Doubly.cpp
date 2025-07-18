#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtTail(node* &head,int val){             //Refer SS
    node* n=new node(val);

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;        //Reached at last
    }
    
    temp->next=n;
    n->prev=temp;
}

void insertAtHead(node* &head,int val){             //Refer SS
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head,int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count=1;

    while(temp!=NULL && count!=pos){        //Traversing till the 'nth' node i.e the node we want to delete.
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;
    if(temp->next!=NULL){                   //if deleting last node we do not need to do this (this refers to whole 'if' block of 3 lines i.e. Line 68,69 & 70)
        temp->next->prev=temp->prev;
    }

    delete temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,5);       //Trying to delete the element from 5th position.
    display(head);

    return 0;
}

/*
1 2 3 4 
5 1 2 3 4
5 1 2 3
*/