/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
 * 寻找环的起点位置
 * 快慢指针相遇后，快指针从头开始走，慢指针从相遇点开始走，两指针相遇的点就是环的起点
 *
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        ListNode *p = head, *q = head;
        if (q->next == nullptr)
            return nullptr; // 没有环
        do
        {
            p = p->next;
            q = q->next->next;
        } while (q != p && q && q->next);
        if (q == nullptr || q->next == nullptr)
            return nullptr;
        // 有环了
        p = head;
        while (p != q)
            p = p->next, q = q->next;
        return q;
    }
};