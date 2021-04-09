#include"linklist.h"

//初始化链表
LinkList* Init_linklist() {
	LinkList* list = new LinkList;

	list->head.next = new LinkNode;  //记得要分配，而不是NULL，造成空指针
	
	list->size = 0;
	return list;
}
//插入
void Inset_linklist(LinkList* list, int pos, LinkNode* data) {
	if (list == NULL) {
		return;
	}

	if (data == NULL) {
		return;
	}

	if (pos<0 || pos>list->size) {
		pos = list->size;
	}

	LinkNode* pCurrent = list->head.next;
	for (int i = 0; i < pos; i++) {
		pCurrent = pCurrent->next;
	}

	data->next = pCurrent->next;
	pCurrent->next = data;

	list->size++;
}
//打印
void Print_linklist(LinkList* list, PRINTLIST print) {
	//之所以要这样，是因为头节点没有内容，但是也打印出来了，导致乱码
	LinkNode* pCurrent = list->head.next->next;

	while (pCurrent != NULL) {
		print(pCurrent);
		pCurrent = pCurrent->next;
	}
}
//查找
void Check_linklist(LinkList* list, int pos) {

}
//释放
void free_linklist(LinkList* list) {
	delete list;
}