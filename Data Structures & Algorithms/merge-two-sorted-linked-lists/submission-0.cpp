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
        ListNode* listHead;
        ListNode* curr;
        ListNode* other;
        ListNode* temp;


        if(list1 == nullptr && list2 == nullptr)
            return nullptr;
        if(list1 == nullptr)
            return list2;
        else if(list2 == nullptr)
            return list1;
        

        if(list1->val > list2->val)
        {
            listHead = list2;
            other = list1;
        }
        else
        {
            listHead = list1;
            other = list2;
        }

        curr = listHead;

        while(curr->next != nullptr && other != nullptr)
        {
            if(curr->next->val > other->val)
            {
                temp = curr->next;
                curr->next = other;
                other = temp;
            }
            else
            {
                curr = curr->next;
            }
        }
        curr->next = other;
        
        return listHead;
    }
};
