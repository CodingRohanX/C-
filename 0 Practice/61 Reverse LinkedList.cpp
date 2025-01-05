#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head){
    ListNode* temp = NULL;
    ListNode* ptr1 = head;
    ListNode* ptr2 = ptr1->next;
    while(1){
        ptr1->next=temp;
        if(ptr2==NULL){
            break;
        }
        temp=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->next;
    }

    return ptr1;
}