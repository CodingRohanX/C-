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

bool detectCycle(node* &head){
    node* slow=head;        //initialing pointer slow & fast to begin at head.
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void makeCycle(node* &head, int pos){           //Refer SS
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

void removeCycle(node* &head){                  //Different SS
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;                        //Just detecting if loop is present or not
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;                                  //Fast now staring from head & slow is strarting from where it left.(i.e. slow will start from 7)
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;                        //Where they meet will be point indicating the beginning of the cycle
    }

    slow->next=NULL;
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
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}

/*
1 2 3 4 5 6 3 4 5 6         //3 4 5 6 is in a circular/(in a cycle).
0                           //output of detectCycle(head)
*/