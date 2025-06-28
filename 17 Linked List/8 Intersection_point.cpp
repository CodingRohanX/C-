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

int length(node* head){
    int l=0;
    node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;                     //trying to point 'ptr1' to longer Linked List.
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;                     //trying to point 'ptr1' to longer Linked List.
        ptr2=head1;
    }

    while(d){                           //This loop will run until (d=0) OR till we bring 'ptr1' to 3 (Refer SS 8.png)
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1!=ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

void intersect(node* &head1,node* &head2, int pos){         //No need to do this, this would already be done in Q.

    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }

    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
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
    node* head1=NULL;
    node* head2=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head1,arr[i]);
    }
    int arr1[]={9,10};
    for(int i=0;i<2;i++){
        insertAtTail(head2,arr1[i]);
    }
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;

    return 0;
}

/*

*/