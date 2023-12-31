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
class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* curr = head;  //curr points to current node
        ListNode* prev = head;  //prev points to previous node
        //jst make this two nodes curr and prev .
        while(curr!=NULL)
        {
            ListNode* next = curr->next;
            if(curr==head)
            {
                curr->next = NULL;
            }
            else
            {
                curr->next = prev;
            }
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
