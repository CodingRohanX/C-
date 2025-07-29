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

bool isPalindrome(node *head) {
    stack<int> s;
    int i=0;
    node *p=head;
    while(p!=NULL){
        i++;
        p=p->next;
    }
    p=head;
    int t=i/2;
    while(t>0){
        s.push(p->data);
        p=p->next;
        t--;
    }
    if(i%2!=0) p=p->next;
    while(!s.empty()){
        if(p->data!=s.top()){
            return 0;
        }
        p=p->next;
        s.pop();
    }
    return 1;
}

int main(){
    node* head=NULL;
    int arr[]={-1,5,3,4,0};
    for(int i=0;i<5;i++){
        insertAtTail(head,arr[i]);
    }
    cout<<isPalindrome(head);
    return 0;
}