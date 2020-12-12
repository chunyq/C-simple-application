#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node LNode, *LinkList;

void CreateList(LinkList head);
void PrintList(LinkList head);
void ListDelete(LinkList head, int i,int *e);
void ListInsert(LinkList head, int i,int e);

int main()
{
	LinkList head;
	int i,e,select,n;
	
	head= (LinkList)malloc(sizeof(LNode));  //head指向新生成的头结点//
	head->next= NULL;  //初始化一个空的单链表： head的next域置空//
	
	while(1)
	{
		printf("1:创建列表\n");
		printf("2: 在链表中插入元素\n");
		printf("3:删除元素\n");
		printf("4:输出链表中的元素\n");
		printf("0:退出系统\n");
		scanf("%d",&select);
		
		switch(select)
		{
			case 1:
				CreateList(head);
				break;
			case 2:
				printf("请输入待插入位置和元素：");
				scanf("%d %d",&i,&e);
				ListInsert(head,i,e);
				break;
			case 3:
				printf("请输入待删除元素位置：");
				scanf("%d",&i);
				ListDelete(head,i,&e);
				break;
			case 4:
				PrintList(head);
				printf("\n");
				break;
			case 0:
				exit(0); 
		}
	 } 
	 return 0;
}


void CreateList(LinkList head)
{
	LinkList p,rear=head;  //使rear总是指向链表最后一个结点//
	int num;
	
	printf("输入若干整数，输入-1表示输入结束\n");
	while(scanf("%d",&num),num!=-1)
	{
		p=(LinkList)malloc(sizeof(LNode)); //*p指向新创建的结点//
		p->data=num; //将数据存入新结点的data域//
		rear->next=p; //将结点作为rear的后继//
		rear=p; 
	 } 
	 rear->next=NULL;  //表尾结点的后继置为NULL// 
}

void PrintList(LinkList head)
{
	LinkList p=head->next;  //定义一个指针p，指向表中第一个元素//
	 
	while(p)      //如果没到表尾// 
	{
		printf("%d",p->data); //输出p所指结点的元素值//
		p=p->next; //让p指向下一个结点// 
	}
}

void  ListDelete(LinkList head,int i,int *e)
{
	LinkList p,pre=head;
	int j=0;
	while(pre&&j<j-1)  //pre指向第i-1个结点//
	{
		pre=pre->next;
		++j;
	 } 
	 if(!pre||i<1)  //如果链表结束或i<1//
	 {
	 	printf("i值错误\n");
	 	return;
	  } 
	  p=pre->next; //p指向要被删除的结点//
	  pre->next=p->next; //绕过要删除的结点p//
	  *e=p->data; //把p的数据域存入e所指内存//
	  free(p); //释放被删除的结点占用的内存空间//
}


void ListInsert(LinkList head,int i,int e)
{
	LinkList p,pre=head;  //让pre指向头结点//
	int j=0;
	while(pre&&j<i-1)  //当pre非空且pre不是第i-1个结点//
	{
		pre=pre->next;
		j++;
	 } 
	 if(!pre||i<1)  //如果链表结束或i<1//
	 {
	 	printf("i值错误\n");
	 	return;
	  } 
	  
	p=(LinkList)malloc(100);  //生成新结点s//
	p->data=e;
	p->next=pre->next;  //让原来pre的后继做结点p的后继//
	pre->next=p;  //结点P作为pre的后继// 
}
