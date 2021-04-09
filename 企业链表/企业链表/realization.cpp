#include"linklist.h"

struct Person {
	LinkNode* node;
	char name[60];
	int age;
	int score;
};

void MyPrint(void* data) {
	Person* p = (Person*)data;
	printf("Name:%s Age:%d Score:%d\n", p->name, p->age, p->score);
}
int main() 
{
	//初始化链表
	LinkList* list = Init_linklist();
	
	//赋值结构体
	Person p1, p2, p3;
	strcpy_s(p1.name, "aaa");
	strcpy_s(p2.name, "abb");
	strcpy_s(p3.name, "ccc");
	p1.age = 18;
	p2.age = 82;
	p3.age = 100;
	p1.score = 88;
	p2.score = 95;
	p3.score = 99;

	//插入
	Inset_linklist(list, 0, (LinkNode*)&p1);
	Inset_linklist(list, 0, (LinkNode*)&p2);
	Inset_linklist(list, 0, (LinkNode*)&p3);
	system("pause");


	//打印
	Print_linklist(list, MyPrint);
}