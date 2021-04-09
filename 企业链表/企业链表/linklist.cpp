#include"linklist.h"

//��ʼ������
LinkList* Init_linklist() {
	LinkList* list = new LinkList;

	list->head.next = new LinkNode;  //�ǵ�Ҫ���䣬������NULL����ɿ�ָ��
	
	list->size = 0;
	return list;
}
//����
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
//��ӡ
void Print_linklist(LinkList* list, PRINTLIST print) {
	//֮����Ҫ����������Ϊͷ�ڵ�û�����ݣ�����Ҳ��ӡ�����ˣ���������
	LinkNode* pCurrent = list->head.next->next;

	while (pCurrent != NULL) {
		print(pCurrent);
		pCurrent = pCurrent->next;
	}
}
//����
void Check_linklist(LinkList* list, int pos) {

}
//�ͷ�
void free_linklist(LinkList* list) {
	delete list;
}