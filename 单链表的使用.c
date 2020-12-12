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
	
	head= (LinkList)malloc(sizeof(LNode));  //headָ�������ɵ�ͷ���//
	head->next= NULL;  //��ʼ��һ���յĵ����� head��next���ÿ�//
	
	while(1)
	{
		printf("1:�����б�\n");
		printf("2: �������в���Ԫ��\n");
		printf("3:ɾ��Ԫ��\n");
		printf("4:��������е�Ԫ��\n");
		printf("0:�˳�ϵͳ\n");
		scanf("%d",&select);
		
		switch(select)
		{
			case 1:
				CreateList(head);
				break;
			case 2:
				printf("�����������λ�ú�Ԫ�أ�");
				scanf("%d %d",&i,&e);
				ListInsert(head,i,e);
				break;
			case 3:
				printf("�������ɾ��Ԫ��λ�ã�");
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
	LinkList p,rear=head;  //ʹrear����ָ���������һ�����//
	int num;
	
	printf("������������������-1��ʾ�������\n");
	while(scanf("%d",&num),num!=-1)
	{
		p=(LinkList)malloc(sizeof(LNode)); //*pָ���´����Ľ��//
		p->data=num; //�����ݴ����½���data��//
		rear->next=p; //�������Ϊrear�ĺ��//
		rear=p; 
	 } 
	 rear->next=NULL;  //��β���ĺ����ΪNULL// 
}

void PrintList(LinkList head)
{
	LinkList p=head->next;  //����һ��ָ��p��ָ����е�һ��Ԫ��//
	 
	while(p)      //���û����β// 
	{
		printf("%d",p->data); //���p��ָ����Ԫ��ֵ//
		p=p->next; //��pָ����һ�����// 
	}
}

void  ListDelete(LinkList head,int i,int *e)
{
	LinkList p,pre=head;
	int j=0;
	while(pre&&j<j-1)  //preָ���i-1�����//
	{
		pre=pre->next;
		++j;
	 } 
	 if(!pre||i<1)  //������������i<1//
	 {
	 	printf("iֵ����\n");
	 	return;
	  } 
	  p=pre->next; //pָ��Ҫ��ɾ���Ľ��//
	  pre->next=p->next; //�ƹ�Ҫɾ���Ľ��p//
	  *e=p->data; //��p�����������e��ָ�ڴ�//
	  free(p); //�ͷű�ɾ���Ľ��ռ�õ��ڴ�ռ�//
}


void ListInsert(LinkList head,int i,int e)
{
	LinkList p,pre=head;  //��preָ��ͷ���//
	int j=0;
	while(pre&&j<i-1)  //��pre�ǿ���pre���ǵ�i-1�����//
	{
		pre=pre->next;
		j++;
	 } 
	 if(!pre||i<1)  //������������i<1//
	 {
	 	printf("iֵ����\n");
	 	return;
	  } 
	  
	p=(LinkList)malloc(100);  //�����½��s//
	p->data=e;
	p->next=pre->next;  //��ԭ��pre�ĺ�������p�ĺ��//
	pre->next=p;  //���P��Ϊpre�ĺ��// 
}
