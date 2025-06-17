#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head){
    int k = 1;
    ListNode *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
        k++;
    }
    temp = head;
    int i = k / 2;
    while (i > 0){
        temp = temp->next;
        i--;
    }
    return temp;
}