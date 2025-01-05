#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertAtTail(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val); // New Node

    if (head == NULL)
    {
        head = n; // If no elements in Linked List
        return;
    }

    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // Attaching 'n'
}

void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    ListNode *p1=NULL;
    ListNode *p2=head;
    while(p2->next!=NULL){
        if(p2->val==p2->next->val){
            while(p2->next!=NULL && p2->val==p2->next->val){
                p2=p2->next;
            }
            if(p1==NULL){
                head=p2->next;
                p1=NULL;
                p2=head;
                if(p2==NULL){
                    return head;
                }
            }
            else{
                p1->next=p2->next;
                if(p2->next==NULL){
                    return head;
                }
                else{
                    p2=p2->next;
                }
            }
            
        }
        else{
            p1=p2;
            p2=p2->next;
        }
    }
    return head;
}

int main(){
    ListNode *head = NULL;
    int arr[] = {1,2,3,3,4,4,5};
    for (int i = 0; i < 7; i++){
        insertAtTail(head, arr[i]);
    }
    //int n = 2;
    ListNode *newhead = deleteDuplicates(head);
    display(newhead);
}