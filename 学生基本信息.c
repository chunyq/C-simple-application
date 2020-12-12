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
struct student stu ={"202010917230","杨祖强","男",{2001,11,15},{85,80,90,85}};
	printf("学号:%s\n",stu.StuID);
	printf("姓名:%s 性别:%s\n",stu.stuName,stu.Sex);
	printf("出生日期: %d年%d月%d日\n",stu.bir.year,stu.bir.month,stu.bir.day);
	printf("高数成绩: %d分\n",stu.marks.math);
	printf("C语言成绩: %d分\n",stu.marks.C);
	printf("英语成绩: %d分\n",stu.marks.English);
	printf("语文成绩: %d分\n",stu.marks.Chinese);
	return 0;
}
