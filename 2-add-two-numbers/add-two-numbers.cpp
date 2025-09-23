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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remainder=0;
        ListNode* summation=l1;
        while(l2!=nullptr||remainder){
            int current=remainder;
            if(l1!=nullptr)
                current+=l1->val;
            if(l2!=nullptr)
                current+=l2->val;

            remainder=current/10;
            l1->val=current%10;

            if(l1->next==nullptr && (remainder ||(l2!=nullptr &&l2->next!=nullptr)))
                l1->next = new ListNode(0);
            l1=l1->next;
            
            if(l2!=nullptr)
                l2=l2->next; 
        }
        return summation;
    }
};