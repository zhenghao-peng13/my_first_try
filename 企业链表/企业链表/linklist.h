#ifndef LINKLIST

#include<iostream>
using namespace std;

struct LinkNode {
	LinkNode* next;
};

struct LinkList {
	LinkNode head;
	int size;
};

typedef void(*PRINTLIST)(void*);

//初始化链表
LinkList* Init_linklist();
//插入
void Inset_linklist(LinkList* list, int pos, LinkNode* data);
//打印
void Print_linklist(LinkList* list, PRINTLIST print);
//查找
void Check_linklist(LinkList* list, int pos);
//释放
void free_linklist(LinkList* list);


#endif // !LINKLIST

