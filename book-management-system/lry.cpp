// lry.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>

#define N 300


void Homepage();//������
void Signin_page();//ѧ�������Ա���õ�¼�������
void Std_in();//ѧ����¼����
void Logout_page();//�ǳ�����
void Sign_std();//ʵ��ѧ����¼�Ĺ���
void Register();//ʵ��ѧ��ע��Ĺ���
void Admin_in();//����Ա��¼����


void Logout_page()
{
printf("\n\n\n");
printf("\t\t\t���������������������������������\n");
printf("\t\t\t���                                                        ���\n");
printf("\t\t\t���                                                        ���\n");
printf("\t\t\t���                       __�˳��ɹ�___                    ���\n");
printf("\t\t\t���                                                        ���\n");
printf("\t\t\t���                                                        ���\n");
printf("\t\t\t���������������������������������\n");
}

void Std_in()
{
int num;
printf("\n\n\n");
printf("\t\t\t���������������������������������\n");
printf("\t\t\t���     ѧ����¼                                           ���\n");
printf("\t\t\t���   --------------------------                           ���\n");
printf("\t\t\t���                     1.��¼                             ���\n");
printf("\t\t\t���                     2.ע��                             ���\n");
printf("\t\t\t���                     0.������һ��                       ���\n");
printf("\t\t\t���������������������������������\n");
printf("                                                \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
if(num==1)
	Sign_std();
else if(num==2)
	Register();
else if(num==0)
	Signin_page();
else
	{
		printf("\t\t\t�������������ѡ��\n");
		Std_in();
	}	 
}

void Signin_page()
{
int num;
printf("\n\n\n");
printf("\t\t\t���������������������������������\n");
printf("\t\t\t���                        ��¼                            ���\n");
printf("\t\t\t���                   ����������������                     ���\n");
printf("\t\t\t���                   1.����ѧ����½����                   ���\n");
printf("\t\t\t���                   2.�������Ա��½����                 ���\n");
printf("\t\t\t���                   0.�˳�ϵͳ                           ���\n");
printf("\t\t\t���������������������������������\n");
printf("                                                \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
if(num==1)
	Std_in();
else if(num==2)
	Admin_in();
else if(num==0)
	Logout_page();
else
	{
		printf("\t\t\t�������������ѡ��\n");
		Signin_page();
	}
}
void Homepage()
{
int num;
printf("\n\n\n");
printf("\t\t\t���������������������������������\n");
printf("\t\t\t���                   ��ӭʹ�ñ���������ѧ                 ���\n");
printf("\t\t\t���                       ͼ�����ϵͳ                     ���\n");
printf("\t\t\t���                       ____________                     ���\n");
printf("\t\t\t���                     1.�����½����                     ���\n");
printf("\t\t\t���                     0.�˳�ϵͳ                         ���\n");
printf("\t\t\t���������������������������������\n");
printf("                                               \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
printf("\n");
if(num==0)
	Logout_page();
else if(num==1)
	Signin_page();
else
	{
		printf("\t\t\t�������������ѡ��\n");
		Homepage();
	}
}

void Sign_std()
{
	int i,j,inputw,password;
	int std[N],pass[5];
	printf("\t\t\t�������˺�");
	scanf("%d",&inputw);
	FILE*fp_1;
	FILE*fp_2;
	fp_1=fopen("id.txt","r+");
	if(fp_1==NULL){
		printf("��id�ļ�ʧ��\n");
	}
	fp_2=fopen("password.txt","r+");
	if(fp_2==NULL){
		printf("��password�ļ�ʧ��\n");
	}
	printf("%d\n",std[i]);
	for(i=0;std[i]==NULL;i++){
		fscanf(fp_1,"%d",&std[i]);
		printf("%d\n",std[i]);
	}
	for(j=0;j<i;j++)
		fscanf(fp_2,"%d",&pass[j]);
	printf("%d",i);
	for(j=0;j<=i;j++)
	{
		if(inputw==std[j])
		{
			printf("\t\t\t����������");
			scanf("%d",&password);
			if(password==pass[j])
			{
				printf("��¼�ɹ�");
				break;
			}else{
				printf("\t\t\t�������\n");
				Sign_std();
			}
			break;
		}
	}
		if(j==i+1)
		{
			printf("\t\t\tδ�ҵ��û�\n");
			printf("\t\t\t����ע��\n");
			Register();
		}
	fclose(fp_1);
	fclose(fp_2);
}


void Register()
{
	int id,password,num;
	printf("\t\t\t���������ѧ��");
	scanf("%d",&id);
	printf("\t\t\t���������5λ������");
	scanf("%d",&password);
	FILE*fp_1;
	FILE*fp_2;
	fp_1=fopen("id.txt","a+");
	if(fp_1==NULL){
		printf("��id�ļ�ʧ��\n");
	}
	fp_2=fopen("password.txt","a+");
	if(fp_2==NULL){
		printf("��password�ļ�ʧ��\n");
	}
	fprintf(fp_1,"%d\n",id);
	fprintf(fp_2,"%d\n",password);
	fclose(fp_1);
	fclose(fp_2);
	printf("\t\t\t�������ע��");
	printf("\t\t\t\t0.�˳�");
	scanf("%d",&num);
	if(num==0)
		Std_in();
}
int login_admin(){
	int admin_password;
	int input_password;
	FILE *fp;
	if((fp=fopen("admin.txt","r"))==NULL){
		printf("���ļ�ʧ��\n");
	}
	fscanf(fp,"%d",&admin_password);
	fclose(fp);
	printf("\t\t\t����������\n");
	scanf("%d",&input_password);
	if(input_password==admin_password){
		return 1;
	}else{
		return 0;
	}
}
int check(int n){
	if(n==0){
		printf("\t\t\t������󣬵�¼ʧ��"); 
		Signin_page();
		return 0;
	}else{
		printf("\t\t\t��¼�ɹ�"); 
		return 1;
	}
}
int admin_checkin(){
	int a=0;
	a=login_admin();
	a=check(a);
	return a;
}
void Admin_in()
{
	int num;
printf("\n\n\n");
printf("\t\t\t���������������������������������\n");
printf("\t\t\t���     ����Ա��¼                                         ���\n");
printf("\t\t\t���   --------------------------                           ���\n");
printf("\t\t\t���                     1.��¼                             ���\n");
printf("\t\t\t���                     0.������һ��                       ���\n");
printf("\t\t\t���                                                        ���\n");
printf("\t\t\t���������������������������������\n");
printf("                                                \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
if(num==1)
	admin_checkin();//
else if(num==0)
	Signin_page();
else
	{
		printf("\t\t\t�������������ѡ��\n");
		Admin_in();
	}	 
}


int main()
{
	
	Homepage();
	getchar();
	return 0;
}

