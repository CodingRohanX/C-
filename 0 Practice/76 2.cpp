#include <iostream>
#include <string>
#include <vector>
#include <gmpxx.h>
using namespace std;

struct ListNode{
    long long val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(long long x) : val(x), next(nullptr) {}
    ListNode(long long x, ListNode *next) : val(x), next(next) {}
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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
    long long i = 1;
    long long j = 1;
    ListNode *p1 = l1;
    ListNode *p2 = l2;
    long long s1 = p1->val;
    long long s2 = p2->val;
    p1=p1->next;
    p2=p2->next;
    while (p1 != NULL){
        s1 += (p1->val)*i*10;
        p1=p1->next;
        i=i*10;
    }
    while (p2 != NULL){
        s2 += (p2->val)*j*10;
        p2=p2->next;
        j=j*10;
    }
    long long final = s1+s2;
    long long val = final%10;
    ListNode* node = new ListNode(val);
    ListNode* ptr = node;
    final=final/10;
    while(final>0){
        val = final%10;
        ListNode* n = new ListNode(val);
        ptr->next=n;
        ptr=ptr->next;
        final=final/10;
    }
    return node;
}

int main(){
    ListNode *head = NULL;
    ListNode *head1 = NULL;
    vector<int> v = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    vector<int> v1 = {5,6,4};
    cout<<v.size();
    for (int i = 0; i < v.size(); i++){
        insertAtTail(head, v[i]);
    }
    for (int i = 0; i < v1.size(); i++){
        insertAtTail(head1, v[i]);
    }
    //int n = 2;
    ListNode *head = addTwoNumbers(head,head1);
    display(head);
}