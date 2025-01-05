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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = head;
    ListNode *t = head;
    int k = 1;

    while (temp->next != NULL)
    {
        temp = temp->next;
        k++;
    }
    if (k == 1)
    {
        ListNode *todelete = t;
        delete todelete;
        return NULL;
    }
    int num = k - n - 1;
    if (num == -1)
    {
        ListNode *todelete = t;
        head = t->next;
        delete todelete;
        return head;
    }
    while (num > 0)
    {
        t = t->next;
        num--;
    }
    ListNode *todelete = t->next;
    t->next = t->next->next;
    delete todelete;
    return head;
}

int main()
{
    ListNode *head = NULL;
    int arr[] = {1, 2};
    for (int i = 0; i < 2; i++)
    {
        insertAtTail(head, arr[i]);
    }
    int n = 2;
    ListNode *newhead = removeNthFromEnd(head, n);
    display(newhead);
}