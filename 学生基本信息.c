#include <stdio.h>
typedef struct birthday{
	int year;
	int month;
	int day;
}Date;
typedef struct score{
	int math;
	int C;
	int English;
	int Chinese;
} FC;
 struct student{
	char StuID[15];
	char stuName[10];
	char Sex[4];
	Date bir;
	FC   marks;
}; 
int main()
{
struct student stu ={"202010917230","����ǿ","��",{2001,11,15},{85,80,90,85}};
	printf("ѧ��:%s\n",stu.StuID);
	printf("����:%s �Ա�:%s\n",stu.stuName,stu.Sex);
	printf("��������: %d��%d��%d��\n",stu.bir.year,stu.bir.month,stu.bir.day);
	printf("�����ɼ�: %d��\n",stu.marks.math);
	printf("C���Գɼ�: %d��\n",stu.marks.C);
	printf("Ӣ��ɼ�: %d��\n",stu.marks.English);
	printf("���ĳɼ�: %d��\n",stu.marks.Chinese);
	return 0;
}
