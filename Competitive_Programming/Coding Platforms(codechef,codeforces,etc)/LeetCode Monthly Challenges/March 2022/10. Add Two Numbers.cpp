
class Solution
{
public:
    int carry = 0;
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (!l1 and !l2)
        {
            if (carry)
            {
                auto temp = new ListNode(carry);
                return temp;
            }
            return nullptr;
        }
        else if (l1 and l2)
        {
            l1->val += l2->val + carry;
            carry = l1->val / 10;
            l1->val = l1->val % 10;
            l1->next = addTwoNumbers(l1->next, l2->next);
        }
        else if (l1)
        {
            l1->val += carry;
            carry = l1->val / 10;
            l1->val = l1->val % 10;
            l1->next = addTwoNumbers(l1->next, nullptr);
            return l1;
        }
        else if (l2)
        {
            l2->val += carry;
            carry = l2->val / 10;
            l2->val = l2->val % 10;
            l2->next = addTwoNumbers(nullptr, l2->next);
            return l2;
        }
        return l1;
    }
};
