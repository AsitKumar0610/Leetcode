/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
bool isPalindrome(ListNode* head) {
ListNode* temp=head;

    stack<int> s;
    while(temp!=NULL && temp->next!=NULL) {
        s.push(head->val);
        head=head->next;
        temp=temp->next->next;
    }
    if(temp!=NULL && temp->next==NULL)
        head=head->next;
    while(!(s.empty()) && head!=NULL) {
        if(s.top()!=head->val)
            return false;
        head=head->next;
        s.pop();
    }
    if(!(s.empty()) || head!=NULL)
        return false;
    
    return true;            
}
};
