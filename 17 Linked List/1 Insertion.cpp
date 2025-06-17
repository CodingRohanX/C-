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

void insertAtTail(node* &head,int val){
    node* n = new node(val);        //New Node

    if(head==NULL){
        head=n;                 //If no elements in Linked List
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;               //Attaching 'n'
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);          //New Node
    n->next=head;                   //New node pointer next to Previous Head
    head=n;                         //Set head to 'n'.
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;        //To move the Temp pointer
    }
    return false;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);               //1 2 3
    insertAtHead(head,4);               //4 1 2 3
    display(head);
    cout<<search(head,2)<<endl;         //1
    cout<<search(head,5)<<endl;         //0 ('.' "5" is not present in Linked List)

    return 0;
}

/*
1 2 3
4 1 2 3
*/