#include <bits/stdc++.h>
using namespace std;
class Solution {
    
public:
bool isPalindrome(ListNode* head) {
    stack<int> st;

    Node* temp = head;

    while (temp != NULL) {
        st.push(temp->data); 
        temp = temp->next;  
    }
    temp = head;
    while (temp != NULL) {
        if (temp->data != st.top()) {
            return false; 
        }

        st.pop();         
        temp = temp->next; 
    }

    return true;
    }
};