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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

node* reverse(node* &head){                 //Iterative way, refer SS
    node* prevptr=NULL; 
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }return prevptr;        //New Head 
}

// OR       Written & Submitted by me! (Down)

ListNode *reverseList(ListNode *head)
{
    ListNode *temp = NULL;
    ListNode *ptr1 = head;
    ListNode *ptr2 = ptr1->next;
    while (1)
    {
        ptr1->next = temp;
        if (ptr2 == NULL)
        {
            break;
        }
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->next;
    }

    return ptr1;
}

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){     //If Empty List or only 1 element in the list. Different SS
        return head;                    
    }

    node* newhead=reverseRecursive(head->next);

    head->next->next=head;
    head->next=NULL;
    return newhead;
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

    display(head);
    node* newhead=reverse(head);
    //OR
    node* newhead=reverseRecursive(head);
    display(newhead);

    /*
    1 2 3 4 
    4 3 2 1
    */

    return 0;
}