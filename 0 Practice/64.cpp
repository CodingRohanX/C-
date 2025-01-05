#include<iostream>
using namespace std;

bool has_cycle(SinglyLinkedListNode *&head){
    SinglyLinkedListNode *fast = head;
    SinglyLinkedListNode *slow = head;

    while (fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){
            return 1;
        }
    }
    return 0;
}