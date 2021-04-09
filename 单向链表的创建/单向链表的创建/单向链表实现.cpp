#include"单向链表.h"

//初始化链表
Linklist* init_linklist()
{
	Linklist* list = new Linklist;
	list->head = new Linknode;
	list->head->data = NULL;
	list->head->next = NULL;

	list->size = 0;

	return list;
}
//插入
void inset_linklist(Linklist* list, int pos, void* data)
{
	//养成判断的好习惯
	if (list == NULL) {
		return;
	}
	if (data == NULL) {
		return;
	}
	//友好处理
	if (pos<0 || pos>list->size) {
		pos = list->size;
	}

	//创建新结点
	Linknode* newnode = new Linknode;
	newnode->data = data;
	//找到插入位置前的结点
	Linknode* pCurrent = list->head;
	for (int i = 0; i < pos; i++) {
		pCurrent = pCurrent->next;
	}
	//插入
	newnode->next = pCurrent->next;
	pCurrent->next = newnode;

	list->size++;
}
//根据位置删除
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
//打印链表
void print_list(Linklist* list, Print_link print)
{
	Linknode* pCurrent = list->head->next;
	while (pCurrent != NULL) {
		print(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}
//释放链表
void free_linklist(Linklist* list)
{
	delete list;
}