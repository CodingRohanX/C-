#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* merge(node* &head1,node* &head2){
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *sorted = NULL;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data>ptr2->data){
            insert(sorted, ptr2->data);
            ptr2=ptr2->next;
        }
        else if(ptr1->data <= ptr2->data){
            insert(sorted, ptr1->data);
            ptr1 = ptr1->next;
        }
    }
    while(ptr1!=NULL){
        insert(sorted, ptr1->data);
        ptr1=ptr1->next;
    }
    while (ptr2 != NULL){
        insert(sorted, ptr2->data);
        ptr2 = ptr2->next;
    }
    return sorted;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,r;
        node *head1 = NULL;
        node *head2 = NULL;
        cin>>n;
        while(n--){
            cin>>r;
            insert(head1,r);
        }
        cin>>m;
        while(m--){
            cin >> r;
            insert(head2, r);
        }
        node* sorted = merge(head1,head2);
        display(sorted);
    }    
}