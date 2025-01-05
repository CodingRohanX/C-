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

ListNode *deleteDuplicates(ListNode *&head){
    ListNode *temp = head;
    ListNode *p1 = temp->next;
    ListNode *p2 = p1->next;
    //check head
    while(temp->next!=NULL && p2!=NULL){
        if(head->val==p1->val){
            ListNode *p3 = p2->next;
            while (p3->val == p2->val){
                p2 = p2->next;
                p3 = p3->next;
            }
            head=p3;
            temp=head;
            p1 = temp->next;
            p2 = p1->next;
        }
        if(p1->val==p2->val){
            ListNode *p3 = p2->next;
            while(p3->val==p2->val){
                p2=p2->next;
                p3=p3->next;
            }
            temp->next=p3;
            p1 = p3;
            p2 = p1->next;
            /*temp=p3;
            p1 = p3;
            p2 = p1->next;*/
        }
        else if(p1->val!=p2->val){
            temp=p1;
            p1 = temp->next;
            p2 = p1->next;
        }
    }
    return head;
}

int main()
{
    ListNode *head = NULL;
    int arr[] = {1, 1, 3};
    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head, arr[i]);
    }
    deleteDuplicates(head);
    display(head);
}