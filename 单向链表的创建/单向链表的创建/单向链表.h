#pragma once
#include<iostream>
using namespace std;

struct Linknode {
	void* data;
	Linknode* next;
};

struct Linklist {
	//头结点没有数据
	Linknode* head;
	int size;
};

typedef void(*Print_link)(void*);

//初始化链表
Linklist* init_linklist();
//插入
void inset_linklist(Linklist* list, int pos,void* data);
//根据位置删除
void delete_linknode(Linklist* list,int pos);
//打印链表
void print_list(Linklist* list, Print_link print);
//释放链表
void free_linklist(Linklist* list);