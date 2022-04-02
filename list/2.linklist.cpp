#include <iostream>

// 数组实现
int data[10]; // 数据域
int next[10]; // 指针域

// 添加节点
// ind 要添加的节点
// p 地址
// val 值

void add(int ind, int p, int val)
{
    // 暂存之前的指向，记忆中间插入后面的节点地址
    next[p] = next[ind];
    // 在index节点后面添加节点p（地址）
    // 所以是next数组存储p的地址
    next[ind] = p;
    data[p] = val;
    return;
}
int main()
{
    // 头节点下标
    int head = 3;
    data[3] = 0; //头节点赋初值
    // 在3节点后面添加5节点，值是1
    add(3, 5, 1);
    add(5, 2, 2);
    add(2, 7, 3);
    add(7, 9, 4);
    add(5, 6, 100); // 向中间插入节点

    // 遍历链表
    int p = head;
    while (p != 0)
    {
        printf("%d->", data[p]);
        p = next[p];
    }

    return 0;
}