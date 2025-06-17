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

void Deletion(node* &head,int val){

    if(head==NULL){
        return;                     //If linked list is empty
    }

    if(head->next=NULL){
        DeleteAtHead(head);         //If only 1 Element is present in Linked List. .'. we will delete the head only.
    }

    node* temp=head;
    while(temp->next->data!=val){           //We found (n-1)th term, where 'n'th term is what we want to delete
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;            //(n-1)th Node is now Pointing to (n+1)th Term
    delete todelete;
}

void DeleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);        //New Node

    if(head==NULL){
        head=n;                 //If only 1 element
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;               //Attaching last element also
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
    display(head);          //1 2 3 4
    Deletion(head,3);       //1 2 4
    DeleteAtHead(head);     //2 4
    display(head);
}

/*
1 2 3 4         //Original
1 2 4           //Deleted "3"
*/