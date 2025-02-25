#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }return prevptr;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        insertAtTail(head,arr[i]);
    }
    Node* newhead=reverse(head);
    display(newhead);
}