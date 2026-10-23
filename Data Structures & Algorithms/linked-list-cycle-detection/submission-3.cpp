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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, int> nextVals;
        ListNode* curr = head;
        if(curr == nullptr)
            return false;
        while(nextVals[curr->next] != curr->val && curr->next != nullptr)
        {
            nextVals[curr->next] = curr->val;
            curr = curr->next;
        }
        if(curr->next == nullptr)
            return false;
        else
            return true;
    }
};
