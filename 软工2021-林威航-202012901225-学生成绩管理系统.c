#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
struct mark 
{
	char num[12];  	//ѧ�� 
	char name[10];  //���� 
	int cc;//C����
	int gs;//����
	int yy;//Ӣ�� 
	int sum;   //���Ƴɼ��ܷ� 
}stu[100];

int number=0;  //��������Ϊȫ�ֱ���������ֵΪ0

void Welcome(),Password(),Menu(),Input(),Query(),Query_num(),Query_name(),Edit(),Edit_edit(),Edit_del(),Statistic(),Sta_max(),Sta_min(),Sta_avg(),Sta_max1(),Sta_max2(),Sta_max3(),Sta_min1(),Sta_min2(),Sta_min3(),Sta_avg1(),Sta_avg2(),Sta_avg3(),Sta_sort(),Output();//�õ������к���������

void Welcome()// ��ӭ���溯�� 
{
 system("title ������ƿγ����"); //���ûỰ�Ĵ��ڱ���Ϊ��������ƿγ���ơ�
 system("color F0");  //���ñ���ɫΪ����ɫ��������ɫΪ��ɫ 
 system("cls");	//����
 printf("\n\n\t\t|----------------------------------------|\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\t\t|     ��������ơ��γ����             |\n");
 printf("\t\t|       ѧ���ɼ�����ϵͳ               |\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\t\t|----------------------------------------|\n");
 printf("\n\t\t		������ƣ��¹��Ʋ�ҵѧԺ");
 printf("\n\t\t         רҵ���������\n");
 printf("\n\t\t         �༶��12��\n");
 printf("\n\t\t         ѧ�ţ�202012901225\n");
 printf("\n\t\t         ������������\n"); 
 printf("\n\t\t\t       2020��3��11�� 	\n");
 }
void Password()
{   char word[20],right[20]="25";
    printf("\n�������¼���룺"); 
 	gets(word);
	if(strcmp(word,right)==0)  //�ж������ַ����Ƿ���ȣ�����ֱ���á�==����ֻ�����ַ����ȽϺ�����
		{
		Menu();}
	else
	{	printf("\n���������������������\n");
		Password();
	}	 
} 
void Menu()  //�˵����溯�� 
{    
	system("cls");
	printf("\t1.ѧ���ɼ���Ϣ¼��\n");
 	printf("\t2.ѧ���ɼ���Ϣ��ѯ\n");         
 	printf("\t3.ѧ���ɼ���Ϣ�༭\n");
 	printf("\t4.ѧ���ɼ���Ϣͳ��\n");
 	printf("\t5.ѧ���ɼ���Ϣ��ʾ\n");
	printf("\t6.�˳�ϵͳ\n");
 	printf("\t��ѡ��˵�ѡ��1-6��");  
	switch(getche())
	{
		case '1':system("cls");Input();break;  
		case '2':system("cls");Query();break;
		case '3':system("cls");Edit();break;
		case '4':system("cls");Statistic();break;
		case '5':system("cls");Output();break;
		case '6':system("cls");printf("\n\t\t��л��ʹ�ñ�ϵͳ��ף��������죬�ټ�\n");break;
		default:printf("\n�����������������\n");system("pause");Menu();
	} 

} 
void Input()  //¼��ѧ���ɼ���Ϣ���� 
{   
    system("cls");
    int i=0; 
    printf("��Ҫ¼���ѧ������:\n");
	scanf("%d",&number);
	while(i<number){
	printf("�������%dѧ����ѧ��:\n",i+1); 
	scanf("%s",stu[i].num);
	printf("�������%dѧ��������:\n",i+1);
	scanf("%s",stu[i].name);
	printf("�������%dѧ����c���Գɼ�:\n",i+1);
	scanf("%d",&stu[i].cc);
	printf("�������%dѧ���ĸ����ɼ�:\n",i+1);
	scanf("%d",&stu[i].gs);
	printf("�������%dѧ����Ӣ��ɼ�:\n",i+1);
	scanf("%d",&stu[i].yy); 
	stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
	i=i+1;
	}
	 Output();//��ʾ¼��ѧ���ɼ��ܱ� 
	 Menu(); 	 
}
 void Output()//���ѧ���ɼ���Ϣ���� 
{
	int i;
	printf("\n��������%d",number);
	printf("\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
	for(i=0;i<number;i++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	printf("\n");

	}
	system("pause");
	Menu();
}
void Query()//��ѧ�Ų���ѧ���ɼ���Ϣ���� 
{
	system("cls");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t|\t1.��ѧ�Ų�ѯ\t|\n"); 
	printf("\n\t|\t2.��������ѯ\t|\n");
	printf("\n\t|\t3.�������˵�\t|\n");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n��ѡ��˵�ѡ��1-3��"); 
    switch(getche()){
    	case'1':Query_num();break;
    	case'2':Query_name();break;
		case'3': Menu();break;
		default:system("cls");printf("����������");Query(); }
		
}
void Query_num()//��ѧ�Ų���ѧ���ɼ���Ϣ���� 
{
	char a[12];
	int i;
	printf("\n\n������Ҫ��ѯ��ѧ��: \n");
	fflush(stdin);
	scanf("%s",a);
	for(i=0;i<number;i++){
		if(strcmp(a,stu[i].num)==0){
		printf("��ѯ�����\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n"); 
		printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);	
		}
	}
	system("pause");
			Menu();	
			
	
	
}
void Query_name()//����������ѧ���ɼ���Ϣ���� 
{
		char a[12];
	int i;
	printf("\n\n������Ҫ��ѯ������: ");
	fflush(stdin);
	scanf("%s",a);
	for(i=0;i<number;i++){
		if(strcmp(a,stu[i].name)==0){
		printf("��ѯ�����\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n"); 
		printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);	
		}
	}
	system("pause");
			Menu();	
	
}
void Edit() //�༭ѧ���ɼ���Ϣ�˵� 
{
	system("cls");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t|\t1.ѧ����Ϣ�޸�\t|\n"); 
	printf("\n\t|\t2.ѧ����Ϣɾ��\t|\n");
	printf("\n\t|\t3.�������˵�\t  |\n");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n��ѡ��˵�ѡ��1-3��"); 
	switch(getche()){
		case'1':Edit_edit();break;
		case'2':Edit_del();break;
		case'3': Menu();break;
		default:system("cls");printf("����������");Edit();	
	}
	
}
void Edit_edit()//  ѧ����Ϣ�޸ĺ��� 
{
	char b;
do{	system("cls");
	printf("������Ҫ�޸�ѧ����ѧ��: ");
	fflush(stdin);
	char a[12];
	
	int i;
	gets(a);
	
		for(i=0;i<number;i++){
		if(strcmp(a,stu[i].num)==0){
			printf("\n��ѧ����Ϣ����:\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		    printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
				printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.�޸�ѧ��\t    |\n"); 
	            printf("\n\t|\t2.�޸�����\t    |\n");
	            printf("\n\t|\t3.�޸�c�ɼ�\t    |\n");
	            printf("\n\t|\t4.�޸ĸ����ɼ�\t   |\n");
	            printf("\n\t|\t5.�޸�Ӣ��ɼ�\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n��ѡ��˵�ѡ��1-5��");
              	fflush(stdin);  
	 switch(getche()){
		case'1':printf("\n��������ѧ�ţ�"); scanf("%s",stu[i].num);printf("�޸Ľ�����£�\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		      printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	          printf("\n�Ƿ�����޸�(Y/N)\n"); 
	          fflush(stdin);
		      scanf("%c",&b);	 
		  
		break;
		case'2':printf("\n��������������"); scanf("%s",stu[i].name);printf("�޸Ľ�����£�\n");
		       printf("\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
			  printf("\n�Ƿ�����޸�(Y/N)\n");
			  fflush(stdin);
			  scanf("%c",&b); 
			  break;
		case'3':printf("\n��������c�ɼ���"); scanf("%d",&stu[i].cc);
		       stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		       printf("�޸Ľ�����£�\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
		     printf("\n�Ƿ�����޸�(Y/N)\n");
			   fflush(stdin);
		scanf("%c",&b);	break;
		case'4':printf("\n�������¸����ɼ���"); scanf("%d",&stu[i].gs);stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		        printf("�޸Ľ�����£�\n");
		        printf("\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		       printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
		       printf("\n�Ƿ�����޸�(Y/N)\n");
		       fflush(stdin);
		scanf("%c",&b);	 break;
		case'5':printf("\n��������Ӣ��ɼ���"); scanf("%d",&stu[i].yy);
		stu[i].sum=stu[i].cc+stu[i].gs+stu[i].yy ;
		       printf("�޸Ľ�����£�\n\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
		    printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].cc,stu[i].gs,stu[i].yy,stu[i].sum);
	printf("\n�Ƿ�����޸�(Y/N)\n");
	fflush(stdin);
	scanf("%c",&b);	 break;
	    default:printf("\n�����������������\n");system("pause");Edit_edit();
			
	}
		}
	} 
}while(b=='Y');
}
void Edit_del()//  ѧ����Ϣɾ������ 
{
	system("cls");
	int i,j;
	char a[12];
	
	printf("������Ҫɾ��ѧ����ѧ�ţ�");
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
	printf("\n��������%d",number);
	printf("\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
	for(k=0;k<number;k++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[k].num,stu[k].name,stu[k].cc,stu[k].gs,stu[k].yy,stu[k].sum);
	printf("\n");

	}
	system("pause");
	Menu();	
}
void Statistic()//ͳ��ѧ���ɼ���Ϣ�˵�����
{
	system("cls");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.��ɼ���߷�\t    |\n"); 
	            printf("\n\t|\t2.��ɼ���ͷ�\t    |\n");
	            printf("\n\t|\t3.��ƽ����\t    |\n");
	            printf("\n\t|\t4.���ܷ�����\t   |\n");
	            printf("\n\t|\t5.�������˵�\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n��ѡ��˵�ѡ��1-5��");
    switch(getche()){
    	case'1':Sta_max();break;
    	case'2':Sta_min();break;
		case'3':Sta_avg(); break;
	    case'4':Sta_sort();break;
		case'5':Menu();break; 
		default:printf("\n�����������������\n");system("pause");Statistic();
		}		
}
 	
void Sta_max() // ͳ�Ƴɼ���߷ֺ��� 
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c�ɼ���߷�\t    |\n"); 
	            printf("\n\t|\t2.������߷�\t    |\n");
	            printf("\n\t|\t3.Ӣ����߷�\t    |\n");
	            printf("\n\t|\t4.������һ��\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n��ѡ��˵�ѡ��1-4��");
     switch(getche()){
    	case'1':Sta_max1();break;
    	case'2':Sta_max2();break;
		case'3':Sta_max3();break;
		case'4':Statistic();break;
		default:printf("\n�����������������\n");system("pause");Sta_max();
		
				
}           
}
void Sta_max1() // ͳ��c���Գɼ���߷ֺ��� 
{
	int i,max;
	char a;
for(i=1;i<number+1;i++){
	max=stu[0].cc;
	if(max<stu[i].cc){
		max=stu[i].cc;
	}
}
   printf("\nc������߷�Ϊ:%d",max);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
   else{Menu();
   }
}
void Sta_max2() // ͳ�Ƹ����ɼ���߷ֺ��� 
{
	int i,max;
	char a;
for(i=1;i<number+1;i++){
	max=stu[0].gs;
	if(max<stu[i].gs){
		max=stu[i].gs;
	}
}
   printf("\n������߷�Ϊ:%d",max);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
    else{Menu();
   }
}
void Sta_max3() // ͳ��Ӣ��ɼ���߷ֺ��� 
{
		int i,max;
		char a;
for(i=1;i<number+1;i++){
	max=stu[0].yy;
	if(max<stu[i].yy){
		max=stu[i].yy;
	}
}
   printf("\nӢ����߷�Ϊ:%d",max);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_max();
   }
    else{Menu();
   }
}
void Sta_min()// ͳ�Ƴɼ���ͷֺ��� 
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c�ɼ���ͷ�\t    |\n"); 
	            printf("\n\t|\t2.������ͷ�\t    |\n");
	            printf("\n\t|\t3.Ӣ����ͷ�\t    |\n");
	            printf("\n\t|\t4.������һ��\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n��ѡ��˵�ѡ��1-4��");
     switch(getche()){
    	case'1':Sta_min1();break;
    	case'2':Sta_min2();break;
		case'3':Sta_min3();break;
		case'4':Statistic();break;
		default:printf("\n�����������������\n");system("pause");	Sta_min();					
}           	
}
void Sta_min1()// ͳ��c���Գɼ���ͷֺ��� 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].cc;
	if(min>stu[i].cc){
		min=stu[i].cc;
	}
}
   printf("\nc�ɼ���ͷ�Ϊ:%d",min);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_min2()// ͳ�Ƹ����ɼ���ͷֺ��� 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].gs;
	if(min>stu[i].gs){
		min=stu[i].gs;
	}
}
   printf("\n�����ɼ���ͷ�Ϊ:%d",min);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_min3()// ͳ��Ӣ��ɼ���ͷֺ��� 
{
	int i,min;
	char a;
for(i=1;i<number+1;i++){
	min=stu[0].yy;
	if(min>stu[i].yy){
		min=stu[i].yy;
	}
}
   printf("\nӢ��ɼ���ͷ�Ϊ:%d",min);
   printf("\n�Ƿ������������Ŀ(Y/N)\n");
   fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_min();
   }
    else{Menu();
   }
	
}
void Sta_avg()// ͳ�Ƴɼ�ƽ���ֺ���
{
	system("cls");
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	            printf("\n\t|\t1.c�ɼ�ƽ����\t    |\n"); 
	            printf("\n\t|\t2.�����ɼ�ƽ����\t    |\n");
	            printf("\n\t|\t3.Ӣ��ɼ�ƽ����\t    |\n");
	            printf("\n\t|\t4.������һ��\t   |\n");
	            printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n��ѡ��˵�ѡ��1-4��");
     switch(getche()){
    	case'1':Sta_avg1();break;
    	case'2':Sta_avg2();break;
		case'3':Sta_avg3();break;
		case'4':Statistic();break;
		default:printf("\n�����������������\n");system("pause");	Sta_avg();						
}           	
}
void Sta_avg1()// ͳ��c���Գɼ�ƽ���ֺ��� 
{
	int i;
	float avg,zong=0;
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].cc;
}
avg=zong/number;
printf("\nc�ɼ�ƽ����Ϊ:%f",avg);
printf("\n�Ƿ������������Ŀ(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_avg2()// ͳ�Ƹ����ɼ�ƽ���ֺ��� 
{
	int i;
	float avg,zong=0;
	
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].gs;
}
avg=zong/number;
printf("\n�����ɼ�ƽ����Ϊ:%f",avg);
printf("\n�Ƿ������������Ŀ(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_avg3()// ͳ��Ӣ��ɼ�ƽ���ֺ��� 
{
	int i;
	float avg,zong=0;
	
	char a;
for(i=0;i<number;i++){
	zong=zong+stu[i].yy;
}
avg=zong/number;
printf("\nӢ��ɼ�ƽ����Ϊ:%f",avg);
printf("\n�Ƿ������������Ŀ(Y/N)\n");
fflush(stdin);
   scanf("%c",&a);
   if(a=='Y'){
   	Sta_avg();
   }
    else{Menu();
   }
}
void Sta_sort()//���ܷ����� 
{
	system("cls");
	struct mark temp1;
	int i,j;
	printf("\n�����Ľ��Ϊ��\n");
	printf("��������%d",number);
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
	printf("\n��������%d",number);
	printf("\nѧ��\t����\tc�ɼ�\t�����ɼ�\tӢ��ɼ�\t�ܷ�\n");
	for(k=0;k<number;k++){
	printf("%s\t%s\t%d\t%d\t\t%d\t\t%d",stu[k].num,stu[k].name,stu[k].cc,stu[k].gs,stu[k].yy,stu[k].sum);
	printf("\n");

	}
	system("pause");
	Menu();
   
    
}
int main(){
	Welcome();//���û�ӭ���溯�� 
	Password();//���ò˵����溯�� 
	return 0;
}

