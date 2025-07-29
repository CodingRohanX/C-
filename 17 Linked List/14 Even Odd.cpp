#include<iostream>
#include<stack>
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
    node* n = new node(val);        //New node

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

node* divide(node* head) {
    node* p=head;
    node* p1=head;
    node* p2=head;
    int h=0;
    while(p1!=NULL){
        if(p1->next->data%2==0){
            if(h==0){
                p2=p1->next;
                p1->next=p1->next->next;
                p2->next=p;
                head=p2;
                p=head;
                h=1;
            }
            else{
                p2=p1->next;
                p1->next=p1->next->next;
                p2->next=p->next;
                p->next=p2;
                p=p2;
            }
            display(head);
        }
        else p1=p1->next;
    }
    return head;
}

int main(){
    node* head=NULL;
    int arr[]={17,15,9,8,2,4,6};
    for(int i=0;i<7;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<"After sorting"<<endl;
    divide(head);
    cout<<"final"<<endl;
    //display(head);

    return 0;
}

/*
17 15 8 9 2 4 6 
After sorting
8 17 15 9 2 4 6 
8 2 17 15 9 4 6 
8 2 4 17 15 9 6 
8 2 4 6 17 15 9    <---Final Ans
*/