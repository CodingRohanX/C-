#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void deleteNode(ListNode* node) {
    ListNode* temp = node;
    int t = temp->next->val;
    temp->next->val=temp->val;
    temp->val=t;
    temp->next=temp->next->next;

    //temp=temp->next;

}