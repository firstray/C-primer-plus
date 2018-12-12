//4、C语言模拟多态的实现
//思路：函数指针 + 结构体，父结构体，子结构体，基类的成员包含函数指针，派生类的成员包含？才能形成继承
#include<stdio.h>

typedef struct Node* linkList;

struct Node                                         // 链表节点
{
	void *data;                                 // 存储的数据指针
	linkList next;                              // 指向下一个链表节点

	void(*insertFirst)(linkList, void *);      // 在已有链表的表头进行插入节点操作的函数指针
};

linkList initialLinklist();                          // 初始化链表
void insertFirst(linkList h, void *data);            // 在已有链表的表头进行插入节点操作

//初始化链表
linkList initialLinklist()
{
	linkList link = (linkList*)malloc(sizeof(*link));
	link->data = NULL;
	link->next = NULL;

	link->insertFirst = insertFirst;
	return link;
}
//在链表中插入头结点
void insertFirst(linkList h, void *data)
{
	linkList link = initialLinklist();
	link->data = data;
	link->next = h->next;
	h->next = link;
}

struct A
{
	linkList fun;
};
struct B
{
	linkList fun;
};
void Afun()
{
	printf("this A class");
}
void Bfun()
{
	printf("this B class");
}
int main(void)
{
	initialLinklist();
	struct A a;
	struct B b;
	a.fun = Afun;
	b.fun = Bfun;

	struct A *p = &Bfun;
	p->fun;

	system("pause");
	return 0;
}