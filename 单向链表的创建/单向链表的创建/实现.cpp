#include<iostream>
#include<stdio.h>
#include"��������.h"
using namespace std;

struct Student {
	char name[64];
	int age;
	int score;
};

void MyPrint(void* data) {
	Student* p = (Student*)data;
	printf("Name:%s Age:%d score:%d\n", p->name, p->age, p->score);
	//cout << p->score << endl;
}

int main()
{
	Linklist* list = init_linklist();
	Student p1 = { "aaa",15 ,12 };
	Student p2 = { "bbb",18 ,99 };
	Student p3 = { "ccc",19 ,100 };
	//��������ͬһ��λ�á�Ȼ��������Ķ����ں���
	inset_linklist(list, 0, &p1);
	inset_linklist(list, 0, &p2);
	inset_linklist(list, 0, &p3);
	
	print_list(list, MyPrint);

	free_linklist(list);
	cout << "hello";
	print_list(list, MyPrint);
}