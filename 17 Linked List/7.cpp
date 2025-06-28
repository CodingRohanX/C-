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

void breakloop(node* &head,int k){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;

    node* temp1=head;
    int i=1;
    while(i<k){
        temp1=temp1->next;
        i++;
    }
    head=temp1->next;
    temp1->next=NULL;
    return;
}

int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    breakloop(head,3);
    display(head);

    return 0;
}

/*
1 2 3 4 5 6 
4 5 6 1 2 3
*/