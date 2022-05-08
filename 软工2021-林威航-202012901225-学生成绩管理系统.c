#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
struct mark 
{
	char num[12];  	//学号 
	char name[10];  //姓名 
	int cc;//C语言
	int gs;//高数
	int yy;//英语 
	int sum;   //三科成绩总分 
}stu[100];

int number=0;  //总人数设为全局变量并赋初值为0

void Welcome(),Password(),Menu(),Input(),Query(),Query_num(),Query_name(),Edit(),Edit_edit(),Edit_del(),Statistic(),Sta_max(),Sta_min(),Sta_avg(),Sta_max1(),Sta_max2(),Sta_max3(),Sta_min1(),Sta_min2(),Sta_min3(),Sta_avg1(),Sta_avg2(),Sta_avg3(),Sta_sort(),Output();//用到的所有函数的声明

void Welcome()// 欢迎界面函数 
{
 system("title 程序设计课程设计"); //设置会话的窗口标题为“程序设计课程设计”
 system("color F0");  //设置背景色为亮白色，字体颜色为黑色 
 system("cls");	//清屏
 printf("\n\n\t\t|----------------------------------------|\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\t\t|     《程序设计》课程设计             |\n");
 printf("\t\t|       学生成绩管理系统               |\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\n\t\t		程序设计：新工科产业学院");
 printf("\n\t\t         专业：软件工程\n");
 printf("\n\t\t         班级：12班\n");
 printf("\n\t\t         学号：202012901225\n");
 printf("\n\t\t         姓名：林威航\n"); 
 printf("\n\t\t\t       2020年3月11日 	\n");
 }
void Password()
{   char word[20],right[20]="25";
    printf("\n请输入登录密码："); 
 	gets(word);
	if(strcmp(word,right)==0)  //判断两个字符串是否相等（不能直接用“==”，只能用字符串比较函数）
		{
		Menu();}
	else
	{	printf("\n密码输入错误，请重新输入\n");
		Password();
	}	 
} 
void Menu()  //菜单界面函数 
{    
	system("cls");
	printf("\t1.学生成绩信息录入\n");
 	printf("\t2.学生成绩信息查询\n");         
 	printf("\t3.学生成绩信息编辑\n");
 	printf("\t4.学生成绩信息统计\n");
 	printf("\t5.学生成绩信息显示\n");
	printf("\t6.退出系统\n");
 	printf("\t请选择菜单选项1-6：");  
	switch(getche())
	{
		case '1':system("cls");Input();break;  
		case '2':system("cls");Query();break;
		case '3':system("cls");Edit();break;
		case '4':system("cls");Statistic();break;
		case '5':system("cls");Output();break;
		case '6':system("cls");printf("\n\t\t感谢您使用本系统，祝您生活愉快，再见\n");break;
		default:printf("\n输入错误，请重新输入\n");system("pause");Menu();
	} 

} 
void Input()  //录入学生成绩信息函数 
{   
    system("cls");
    int i=0; 
    printf("需要录入的学生人数:\n");
	scanf("%d",&number);
	while(i<number){
	printf("请输入第%d学生的学号:\n",i+1); 
	scanf("%s",stu[i].num);
	printf("请输入第%d学生的姓名:\n",i+1);
	scanf("%s",stu[i].name);
	printf("请输入第%d学生的c语言成绩:\n",i+1);
	scanf("%d",&stu[i].cc);
	printf("请输入第%d学生的高数成绩:\n",i+1);
	scanf("%d",&stu[i].gs);
	printf("请输入第%d学生的英语成绩:\n",i+1);
	scanf("%d",&stu[i].yy); 
	stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
	i=i+1;
	}
	 Output();//显示录入学生成绩总表 
	 Menu(); 	 
}
 void Output()//输出学生成绩信息函数 
{
	int i;
	printf("\n总人数：%d",number);
	printf("\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
	for(i=0;i<number;i++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	printf("\n");

	}
	system("pause");
	Menu();
}
void Query()//按学号查找学生成绩信息函数 
{
	system("cls");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t|\t1.按学号查询\t|\n"); 
	printf("\n\t|\t2.按姓名查询\t|\n");
	printf("\n\t|\t3.返回主菜单\t|\n");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n请选择菜单选项1-3："); 
    switch(getche()){
    	case'1':Query_num();break;
    	case'2':Query_name();break;
		case'3': Menu();break;
		default:system("cls");printf("请重新输入");Query(); }
		
}
void Query_num()//按学号查找学生成绩信息函数 
{
	char a[12];
	int i;
	printf("\n\n请输入要查询的学号: \n");
	fflush(stdin);
	scanf("%s",a);
	for(i=0;i<number;i++){
		if(strcmp(a,stu[i].num)==0){
		printf("查询结果：\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n"); 
		printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);	
		}
	}
	system("pause");
			Menu();	
			
	
	
}
void Query_name()//按姓名查找学生成绩信息函数 
{
		char a[12];
	int i;
	printf("\n\n请输入要查询的姓名: ");
	fflush(stdin);
	scanf("%s",a);
	for(i=0;i<number;i++){
		if(strcmp(a,stu[i].name)==0){
		printf("查询结果：\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n"); 
		printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);	
		}
	}
	system("pause");
			Menu();	
	
}
void Edit() //编辑学生成绩信息菜单 
{
	system("cls");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t|\t1.学生信息修改\t|\n"); 
	printf("\n\t|\t2.学生信息删除\t|\n");
	printf("\n\t|\t3.返回主菜单\t  |\n");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n请选择菜单选项1-3："); 
	switch(getche()){
		case'1':Edit_edit();break;
		case'2':Edit_del();break;
		case'3': Menu();break;
		default:system("cls");printf("请重新输入");Edit();	
	}
	
}
void Edit_edit()//  学生信息修改函数 
{
	char b;
do{	system("cls");
	printf("请输入要修改学生的学号: ");
	fflush(stdin);
	char a[12];
	
	int i;
	gets(a);
	
		for(i=0;i<number;i++){
		if(strcmp(a,stu[i].num)==0){
			printf("\n此学生信息如下:\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		    printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
				printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.修改学号\t    |\n"); 
	            printf("\n\t|\t2.修改姓名\t    |\n");
	            printf("\n\t|\t3.修改c成绩\t    |\n");
	            printf("\n\t|\t4.修改高数成绩\t   |\n");
	            printf("\n\t|\t5.修改英语成绩\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n请选择菜单选项1-5：");
              	fflush(stdin);  
	 switch(getche()){
		case'1':printf("\n请输入新学号："); scanf("%s",stu[i].num);printf("修改结果如下：\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		      printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	          printf("\n是否继续修改(Y/N)\n"); 
	          fflush(stdin);
		      scanf("%c",&b);	 
		  
		break;
		case'2':printf("\n请输入新姓名："); scanf("%s",stu[i].name);printf("修改结果如下：\n");
		       printf("\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
			  printf("\n是否继续修改(Y/N)\n");
			  fflush(stdin);
			  scanf("%c",&b); 
			  break;
		case'3':printf("\n请输入新c成绩："); scanf("%d",&stu[i].cc);
		       stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		       printf("修改结果如下：\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
		     printf("\n是否继续修改(Y/N)\n");
			   fflush(stdin);
		scanf("%c",&b);	break;
		case'4':printf("\n请输入新高数成绩："); scanf("%d",&stu[i].gs);stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		        printf("修改结果如下：\n");
		        printf("\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
		       printf("\n是否继续修改(Y/N)\n");
		       fflush(stdin);
		scanf("%c",&b);	 break;
		case'5':printf("\n请输入新英语成绩："); scanf("%d",&stu[i].yy);
		stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		       printf("修改结果如下：\n\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
		    printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	printf("\n是否继续修改(Y/N)\n");
	fflush(stdin);
	scanf("%c",&b);	 break;
	    default:printf("\n输入错误，请重新输入\n");system("pause");Edit_edit();
			
	}
		}
	} 
}while(b=='Y');
}
void Edit_del()//  学生信息删除函数 
{
	system("cls");
	int i,j;
	char a[12];
	
	printf("请输入要删除学生的学号：");
	scanf("%s",a);
	for(i=0;i<number;i++){
		if(strcmp(a,stu[i].num)==0){
		if(i<(number-1)){
			for(j=i;j<(number-1);j++){
				stu[j]=stu[j+1];
			}
			number--;
		}
		else{
				number--;
		}
	}
		
	}
int k;
	printf("\n总人数：%d",number);
	printf("\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
	for(k=0;k<number;k++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[k].num,stu[k].name,stu[k].cc,stu[k].gs,stu[k].yy,stu[k].sum);
	printf("\n");

	}
	system("pause");
	Menu();	
}
void Statistic()//统计学生成绩信息菜单界面
{
	system("cls");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.求成绩最高分\t    |\n"); 
	            printf("\n\t|\t2.求成绩最低分\t    |\n");
	            printf("\n\t|\t3.求平均分\t    |\n");
	            printf("\n\t|\t4.按总分排序\t   |\n");
	            printf("\n\t|\t5.返回主菜单\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n请选择菜单选项1-5：");
    switch(getche()){
    	case'1':Sta_max();break;
    	case'2':Sta_min();break;
		case'3':Sta_avg(); break;
	    case'4':Sta_sort();break;
		case'5':Menu();break; 
		default:printf("\n输入错误，请重新输入\n");system("pause");Statistic();
		}		
}
 	
void Sta_max() // 统计成绩最高分函数 
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c成绩最高分\t    |\n"); 
	            printf("\n\t|\t2.高数最高分\t    |\n");
	            printf("\n\t|\t3.英语最高分\t    |\n");
	            printf("\n\t|\t4.返回上一级\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n请选择菜单选项1-4：");
     switch(getche()){
    	case'1':Sta_max1();break;
    	case'2':Sta_max2();break;
		case'3':Sta_max3();break;
		case'4':Statistic();break;
		default:printf("\n输入错误，请重新输入\n");system("pause");Sta_max();
		
				
}           
}
void Sta_max1() // 统计c语言成绩最高分函数 
{
	int i,max;
	char a;
for(i=1;i<number+1;i++){
	max=stu[0].cc;
	if(max<stu[i].cc){
		max=stu[i].cc;
	}
}
   printf("\nc语言最高分为:%d",max);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
   else{Menu();
   }
}
void Sta_max2() // 统计高数成绩最高分函数 
{
	int i,max;
	char a;
for(i=1;i<number+1;i++){
	max=stu[0].gs;
	if(max<stu[i].gs){
		max=stu[i].gs;
	}
}
   printf("\n高数最高分为:%d",max);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
    else{Menu();
   }
}
void Sta_max3() // 统计英语成绩最高分函数 
{
		int i,max;
		char a;
for(i=1;i<number+1;i++){
	max=stu[0].yy;
	if(max<stu[i].yy){
		max=stu[i].yy;
	}
}
   printf("\n英语最高分为:%d",max);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
    else{Menu();
   }
}
void Sta_min()// 统计成绩最低分函数 
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c成绩最低分\t    |\n"); 
	            printf("\n\t|\t2.高数最低分\t    |\n");
	            printf("\n\t|\t3.英语最低分\t    |\n");
	            printf("\n\t|\t4.返回上一级\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n请选择菜单选项1-4：");
     switch(getche()){
    	case'1':Sta_min1();break;
    	case'2':Sta_min2();break;
		case'3':Sta_min3();break;
		case'4':Statistic();break;
		default:printf("\n输入错误，请重新输入\n");system("pause");	Sta_min();					
}           	
}
void Sta_min1()// 统计c语言成绩最低分函数 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].cc;
	if(min>stu[i].cc){
		min=stu[i].cc;
	}
}
   printf("\nc成绩最低分为:%d",min);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_min2()// 统计高数成绩最低分函数 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].gs;
	if(min>stu[i].gs){
		min=stu[i].gs;
	}
}
   printf("\n高数成绩最低分为:%d",min);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_min3()// 统计英语成绩最低分函数 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].yy;
	if(min>stu[i].yy){
		min=stu[i].yy;
	}
}
   printf("\n英语成绩最低分为:%d",min);
   printf("\n是否继续求其他科目(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_avg()// 统计成绩平均分函数
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c成绩平均分\t    |\n"); 
	            printf("\n\t|\t2.高数成绩平均分\t    |\n");
	            printf("\n\t|\t3.英语成绩平均分\t    |\n");
	            printf("\n\t|\t4.返回上一级\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n请选择菜单选项1-4：");
     switch(getche()){
    	case'1':Sta_avg1();break;
    	case'2':Sta_avg2();break;
		case'3':Sta_avg3();break;
		case'4':Statistic();break;
		default:printf("\n输入错误，请重新输入\n");system("pause");	Sta_avg();						
}           	
}
void Sta_avg1()// 统计c语言成绩平均分函数 
{
	int i;
	float avg,zong=0;
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].cc;
}
avg=zong/number;
printf("\nc成绩平均分为:%f",avg);
printf("\n是否继续求其他科目(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_avg2()// 统计高数成绩平均分函数 
{
	int i;
	float avg,zong=0;
	
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].gs;
}
avg=zong/number;
printf("\n高数成绩平均分为:%f",avg);
printf("\n是否继续求其他科目(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_avg3()// 统计英语成绩平均分函数 
{
	int i;
	float avg,zong=0;
	
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].yy;
}
avg=zong/number;
printf("\n英语成绩平均分为:%f",avg);
printf("\n是否继续求其他科目(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_sort()//按总分排序 
{
	system("cls");
	struct mark temp1;
	int i,j;
	printf("\n排序后的结果为：\n");
	printf("总人数：%d",number);
	for(j=1;j<number;j++){
		for(i=0;i<number-1;i++){
    	if(stu[i].sum<stu[i+1].sum){
    	temp1=stu[i];
		stu[i]=stu[i+1];
		stu[i+1]=temp1;
    		
		}
	}
		
	}
	int k;
	printf("\n总人数：%d",number);
	printf("\n学号\t姓名\tc成绩\t高数成绩\t英语成绩\t总分\n");
	for(k=0;k<number;k++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[k].num,stu[k].name,stu[k].cc,stu[k].gs,stu[k].yy,stu[k].sum);
	printf("\n");

	}
	system("pause");
	Menu();
   
    
}
int main(){
	Welcome();//调用欢迎界面函数 
	Password();//调用菜单界面函数 
	return 0;
}

