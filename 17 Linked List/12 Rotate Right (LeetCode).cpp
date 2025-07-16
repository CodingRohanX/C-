#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *rotateRight(ListNode *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==0){
        return head;
    }
    
    ListNode *temp = head;
    ListNode *t = head;
    int n = 1;
    
    while (temp->next != NULL){
        temp = temp->next;
        n++;
    }
    if(n==1){
        return head;
    }
    temp->next=head;
    k=k%n;
    int num = n - k;
    while (num > 0){
        t = t->next;
        num--;
    }
    while(n>1){
        t=t->next;		//t->3
        n--;
    }
    ListNode *tail = t->next;
    t->next=NULL;
    return tail;
}