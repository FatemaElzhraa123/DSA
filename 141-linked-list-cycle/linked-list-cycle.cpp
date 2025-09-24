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
        bool b=0; 
        map<ListNode*,int>mp;
        while(head != nullptr){
            mp[head]++;
            if(mp[head]>1){
                b=1;
                break;
            }
            head = head->next;
        }

        return b;
    }
};