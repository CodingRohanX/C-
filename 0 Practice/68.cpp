#include <iostream>
using namespace std;

struct ListNode
{
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

ListNode *reverseBetween(ListNode *head, int left, int right){
    int k=1;
    ListNode *count = head;
    while(count->next!=NULL){
        count=count->next;
        k++;
    }
    ListNode *temp;
    ListNode *temp1;
    ListNode *ptr1;
    ListNode *ptr2;
    ListNode *r = head;
    while(right>0){
        r=r->next;
        right--;
    }
    if(left==1){
        temp = NULL;
    }
    else{
        temp = head;
        while(left>1){
            temp=temp->next;
            left--;
        }
        temp1=temp;
    }
    ptr1 = temp->next;
    ptr2 = ptr1->next;
    
    /*ListNode *temp = NULL;
    ListNode *ptr1 = head;
    ListNode *ptr2 = ptr1->next;*/
    while (1)
    {
        ptr1->next = temp;
        if (ptr2 == r)
        {
            //ptr1->next=ptr2;
            temp1->next->next=r;
            temp1->next=ptr1;
            break;
        }
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->next;
    }
    if(left==1){
        return ptr1;
    }
    else{
        return head;
    }
}

int main()
{
    ListNode *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head, arr[i]);
    }
    int left=2,right=4;
    reverseBetween(head,left,right);
    display(head);
}