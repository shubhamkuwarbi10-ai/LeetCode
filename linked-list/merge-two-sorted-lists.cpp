class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* temp1 = list1, *temp2 = list2;
        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val <= temp2->val) {
                if (head == NULL) {
                    head = temp1;
                    tail = temp1;
                } else {
                    tail->next = temp1;
                    tail = temp1;
                }
                temp1 = temp1->next;
            } else {
                if (head == NULL) {
                    head = temp2;
                    tail = temp2;
                } else {
                    tail->next = temp2;
                    tail = temp2;
                }
                temp2 = temp2->next;
            }
        }

        if (temp1 != NULL) tail->next = temp1;
        if (temp2 != NULL) tail->next = temp2;

        return head;
    }
};