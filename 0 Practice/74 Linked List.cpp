#include <bits/stdc++.h>
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

ListNode* m(ListNode* head,int &max1){
    ListNode *p1=head;
    ListNode *m=head;
    while(p1!=NULL){
        if(p1->val>m->val){
            m=p1;
        }
        p1=p1->next;
    }
    max1=m->val;
    return m;
}

ListNode* removeNodes(ListNode* head) {
    ListNode *p1=head;
    ListNode* dummyNode=new ListNode(-1);
    ListNode* p3=dummyNode;
    int max1 = INT_MIN;
    while(p1!=NULL){
        p3->next=m(p1,max1);
        p3=p3->next;
        p1=m(p1,max1)->next;
    }
    return dummyNode->next;
}

int main(){
    ListNode *head = NULL;
    vector<int> v = {3,2};
    for (int i = 0; i < v.size(); i++){
        insertAtTail(head, v[i]);
    }
    //int n = 2;
    ListNode *head = removeNodes(head);
    display(head);
}