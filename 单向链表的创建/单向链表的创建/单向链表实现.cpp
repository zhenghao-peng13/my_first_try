#include"��������.h"

//��ʼ������
Linklist* init_linklist()
{
	Linklist* list = new Linklist;
	list->head = new Linknode;
	list->head->data = NULL;
	list->head->next = NULL;

	list->size = 0;

	return list;
}
//����
void inset_linklist(Linklist* list, int pos, void* data)
{
	//�����жϵĺ�ϰ��
	if (list == NULL) {
		return;
	}
	if (data == NULL) {
		return;
	}
	//�Ѻô���
	if (pos<0 || pos>list->size) {
		pos = list->size;
	}

	//�����½��
	Linknode* newnode = new Linknode;
	newnode->data = data;
	//�ҵ�����λ��ǰ�Ľ��
	Linknode* pCurrent = list->head;
	for (int i = 0; i < pos; i++) {
		pCurrent = pCurrent->next;
	}
	//����
	newnode->next = pCurrent->next;
	pCurrent->next = newnode;

	list->size++;
}
//����λ��ɾ��
void delete_linknode(Linklist* list, int pos)
{
	if (list == NULL) {
		return;
	}
	if (pos<0 || pos>list->size){
		return;
	}

	Linknode* pCurrent = list->head;
	for (int i = 0; i < pos; i++) {
		pCurrent = pCurrent->next;
	}

	Linknode* pdel = pCurrent->next;
	pCurrent = pdel->next;
	delete pdel;

	list->size--;
}
//��ӡ����
void print_list(Linklist* list, Print_link print)
{
	Linknode* pCurrent = list->head->next;
	while (pCurrent != NULL) {
		print(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}
//�ͷ�����
void free_linklist(Linklist* list)
{
	delete list;
}