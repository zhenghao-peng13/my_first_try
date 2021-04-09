#pragma once
#include<iostream>
using namespace std;

struct Linknode {
	void* data;
	Linknode* next;
};

struct Linklist {
	//ͷ���û������
	Linknode* head;
	int size;
};

typedef void(*Print_link)(void*);

//��ʼ������
Linklist* init_linklist();
//����
void inset_linklist(Linklist* list, int pos,void* data);
//����λ��ɾ��
void delete_linknode(Linklist* list,int pos);
//��ӡ����
void print_list(Linklist* list, Print_link print);
//�ͷ�����
void free_linklist(Linklist* list);