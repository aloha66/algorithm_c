/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;
        // p慢指针 q快指针
        ListNode *p = head, *q = head->next;
        // q还没结束遍历
        while (p != q && q && q->next)
        {
            p = p->next;       // 慢指针每次走一步
            q = q->next->next; // 快指针每次走两步
        }
        // q为空 没有环
        // return q && q->next;
        return q == p;
    }
};