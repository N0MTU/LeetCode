class Solution {
public:
    bool hasCycle(ListNode *head) {
       //oh it's a Floyd thing?
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;    
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false; 
    }
 };
