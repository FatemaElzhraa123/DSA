/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool cycle=0; 
        while(head != nullptr){
            if(head->val==1e6){
                cycle= 1;
                break;
            }
            head->val=1e6;
            head=head->next;
        }

        return cycle;
    }
};