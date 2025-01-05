#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertAtTail(ListNode *&head, int val){
    ListNode *n = new ListNode(val); // New Node
    if (head == NULL){
        head = n; // If no elements in Linked List
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n; // Attaching 'n'
}

void display(ListNode *head){
    ListNode *temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *swapPairs(ListNode *head){
    if (head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return head;
    }
    else if(head->next->next==NULL){
        head->next->next=head;
        head=head->next;
        head->next->next=NULL;
        return head;
    }
    //handle sirf 2 elements ka case

    ListNode *ptr1 = head;
    ListNode *ptr2 = ptr1->next;
    ListNode *ptr3 = ptr2->next;
    ptr1->next=ptr3;
    ptr2->next=ptr1;
    head=ptr2;
    if(ptr3->next==NULL){
        return head;
    }
    //ptr1=ptr2;
    ptr2=ptr3;
    ptr3=ptr3->next;
    do{
        ptr1->next=ptr3;
        ptr2->next=ptr3->next;
        ptr3->next=ptr2;
        if(ptr3->next->next==NULL || ptr3->next==NULL){
            break;
        }
        ptr3=ptr3->next->next->next;
        ptr2=ptr2->next;
        ptr1=ptr1->next->next;
    }while(ptr3!=NULL);
    return head;
}

int main(){
    ListNode *head = NULL;
    int arr[] = {1, 2};
    for (int i = 0; i < 2; i++){
        insertAtTail(head, arr[i]);
    }
    ListNode *newhead = swapPairs(head);
    display(newhead);
}

//2 1 4 3 6 5