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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if (list1==NULL && list2!=NULL)
        {
            return list2;
        }
        else if (list2==NULL && list1!=NULL)
        {
            return list1;
        }
        else if (list1==NULL && list2==NULL)
        {
            return list1;
        }
        
        ListNode *v, *temp, *head;
        
        if(list1->val < list2->val) 
        {
            head = list1;
            v = list2;
        } 
        else 
        {
            head = list2;
            v = list1;
        }
        
        while(head != NULL && head->next != NULL) 
        {
            if(head->next->val < v->val && head->next != NULL) 
            {
                head = head->next;
            } 
            else
            {
                temp = head->next;
                head->next = v;
                head = v;
                v = temp;
            }
        }
        
        head->next = v;
        
        return (list1->val < list2->val) ? list1 : list2;
    }
};
