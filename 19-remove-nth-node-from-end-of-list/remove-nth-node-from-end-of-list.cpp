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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int list_size=0;
        ListNode* current = head ,*prev=nullptr;
        while(current!=nullptr){
            list_size++;
            current = current->next;
        }

        if(list_size==1)
            return nullptr;
        if(n==list_size)
            return head->next;

        current = head;
        int counter=0;
        while(1){
            prev = current;
            current = current->next; 
            counter++;
            if(counter==list_size-n){
                prev->next = current->next;
                break;
            }
        }

        return head;
    }
};