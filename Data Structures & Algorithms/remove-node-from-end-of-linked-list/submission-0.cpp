class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;

        
        int count = 0;
        ListNode* curr = head;

        while (curr) {
            count++;
            curr = curr->next;
        }

        
        if (count - n == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        
        curr = head;
        int steps = count - n - 1;

        for (int i = 0; i < steps; i++) {
            curr = curr->next;
        }

       
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};