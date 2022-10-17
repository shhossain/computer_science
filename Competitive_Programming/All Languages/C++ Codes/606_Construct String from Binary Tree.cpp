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
    ListNode* merge(ListNode* first,ListNode* second)
    {
      if(first->next==NULL)
      {
          first->next=second;
          return first;
      }
        ListNode* curr1=first;
        ListNode* curr2=second;
        ListNode* next=first->next;
        ListNode* temp=NULL;
        while(next!=NULL&&curr2!=NULL)
        {
            if(curr2->val>=curr1->val&&curr2->val<=next->val)
            {
                temp=curr2->next;
                curr1->next=curr2;
                curr2->next=next;
                curr2=temp;
                curr1=curr1->next;
            }
            else
            {
                curr1=curr1->next;
                next=next->next;
            }
        }
          if(next==NULL&&curr2!=NULL)
            {
                curr1->next=curr2;
            }
       return first; 
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL)
       {
           return list2;
       }
       if(list2==NULL)
       {
            return list1;
       }
       if(list1->val<=list2->val)
       {
          return  merge(list1,list2);
       }
        else
        {
           return merge(list2,list1);
        }
    }
};
