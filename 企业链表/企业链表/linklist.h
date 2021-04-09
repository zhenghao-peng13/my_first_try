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

//��ʼ������
LinkList* Init_linklist();
//����
void Inset_linklist(LinkList* list, int pos, LinkNode* data);
//��ӡ
void Print_linklist(LinkList* list, PRINTLIST print);
//����
void Check_linklist(LinkList* list, int pos);
//�ͷ�
void free_linklist(LinkList* list);


#endif // !LINKLIST

