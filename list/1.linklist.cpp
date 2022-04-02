#include <iostream>
using namespace std;

struct Node
{
    Node(int data) : data(data), next(NULL) {} // 构造函数
    int data;                                  // 数据域
    Node *next;                                // 指针域
};

// 传统思维
int main()
{
    Node *head = NULL; // 定义头
    // 创建链表
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // 遍历
    Node *p = head;
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next; // 修改当前指针指向，向下遍历
    }
    return 0;
}