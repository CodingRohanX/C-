#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool checkPalindrome(string s){
    int p2=s.size()-1;
    int p1=0;
    while(p1<=p2){
        if(s[p1]!=s[p2]){
            return 0;
        }
        else{
            p1++;
            p2--;
        }
    }
    return 1;
}

bool isPalindrome(ListNode* head) {
    string str="";
    ListNode *start=head;
    while(start!=NULL){
        int data = start->val;
        string s = to_string(data);
        str+=s;
    }
    if(checkPalindrome(str)){
        return 1;
    }
    return 0;
}