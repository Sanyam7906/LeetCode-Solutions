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
    // mulitple same value can occur !
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
        {
            return head;
        }
        while(head!=NULL && head->val == val) // important part !
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* temp2 = head;
        ListNode* prev = NULL;
        while(temp2!=NULL)
        {
            if(temp2->val == val)
            {
                prev->next = temp2->next;
                delete temp2; // dangling ptr
                temp2 = prev->next;
            }
            else
            {
                prev = temp2;
                temp2 = temp2->next;
            }
        }
        return head;
    }
};