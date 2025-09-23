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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;

        ListNode *new_head ,*current;
        if(list1->val < list2->val){
            new_head = list1;
            list1 = list1->next;
        }
        else{
            new_head = list2;
            list2 = list2->next;
        }

        current = new_head;
        while(list1!=nullptr || list2!=nullptr){
            if((list2!=nullptr && list1!=nullptr && list1->val < list2->val) || list2==nullptr ){
                current->next = list1;
                current = list1;
                list1= list1->next;
            }
            else{
                current->next = list2;
                current = list2;
                list2= list2->next;
            }
        }
        return new_head;
    }
};