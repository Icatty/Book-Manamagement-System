	
#include<stdio.h>
#include<string.h>
#include<windows.h> 
#include <stdlib.h>
#include <conio.h>
#define N 300
#define NB 4
int end,end2,R;
char stu_num[30];
FILE *tp; 
FILE *fp;

struct B {
	char book[30];
	char writer[30];
	char b_num[30];
	char place[30];
};struct B t[300];
 struct xinxi{
 	char book[30];
	char writer[30];
	char num[30];
 };struct xinxi s[300];
struct student{
	char std_id[15];
	char std_pd[10];
	int id_n;
	int pd_n;
}stdn[100];


int Signin_page();
int Homepage();
int Admin_in();
int judge_and_do();
int login_admin();
void Logout_page();
int edit_password(int std_n,int u_total);
int Register(int std_t);
int Sign_std(int i);
int Std_in(int std_t);


 int check_data_out()//���ļ�¼д������    ���� 
 {	
	int r=-1;
	fp=fopen("���Ŀ�.txt","r+");
	if(fp==NULL)
	{	
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                   �򿪽��Ŀ��ʧ��                   ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	for(int i=0;i<300;i++)
	{	
		if(i%3==0)
		{
			r=r+1;
		}
		if(feof(fp)!=0)
		{	
			end=i;
			break;
		}
		if(i%3==0)
		{	
			fscanf(fp,"%s",s[r].book);
		}
		if((i-1)%3==0)
		{	 
			fscanf(fp,"%s",s[r].writer);
		}
		if((i-2)%3==0)
		{	
			fscanf(fp,"%s",s[r].num);
		}
	}
	fclose(fp);
 } 
 
 
 int check_data_in()//s[]����д����ļ�¼   ���� 
 {
	rewind(fp);
	fp=fopen("���Ŀ�.txt","w+");
	if(fp==NULL)
	{
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                   �򿪽��Ŀ��ʧ��                   ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	for(int a=0;a<300;a++)
	{	
		if(a==(end-1)/3)
		{	
			break;
		}
		fprintf(fp,"%s %s %s\n",s[a].book,s[a].writer,s[a].num);
	}
	fclose(fp);
 }
 
 int std_ip(){//�˺���Ϣ�������� 
	int i=0,j=0;
	FILE*fp_1;
	FILE*fp_2;
	fp_1=fopen("id.txt","r+");
	if(fp_1==NULL){
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                    ��id�ļ�ʧ��                    ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	fp_2=fopen("password.txt","r+");
	if(fp_2==NULL){
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                 ��password�ļ�ʧ��                 ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	fseek(fp_1,0L,SEEK_SET); 
	fseek(fp_2,0L,SEEK_SET);
	for(i=0;!feof(fp_1);i++){
		fscanf(fp_1,"%s",&stdn[i].std_id);
		stdn[i].id_n=atoi(stdn[i].std_id);
//		printf("%s\n",stdn[i].std_id);
	}
//	printf("\t%d",i);
	for(j=0;j<i;j++){
	
		fscanf(fp_2,"%s",&stdn[j].std_pd);
		stdn[j].pd_n=atoi(stdn[j].std_pd);
//		printf("%d\n",stdn[j].pd_n);
	}
	//printf("\t%d",i);
//	Sleep(4500);
	fclose(fp_1);
	fclose(fp_2);
//	u_total=i;
	return i;
}



 int storage_data_out()//���д�����麯�� 
 {	
	int r=-1;
	tp=fopen("���.txt","r+");
	if(tp==NULL)
	{
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                    �����ʧ��                      ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	for(int i=0;i<300;i++)
	{	
		if(i%4==0)
		{
			r=r+1;
		}
		if(feof(tp)!=0)
		{	
			end2=i;
			break;
		}
		if(i%4==0)
		{	
			fscanf(tp,"%s",t[r].book);
		}
		if((i-1)%4==0)
		{	 
			fscanf(tp,"%s",t[r].writer);
		}
		if((i-2)%4==0)
		{	
			fscanf(tp,"%s",t[r].b_num);
		}
		if((i-3)%4==0)
		{	
			fscanf(tp,"%s",t[r].place);
		}
	}
	fclose(tp);
 } 
 
 
 
 int storage_data_in()//t[]����д�����  ���� 
 {
	rewind(tp);
	tp=fopen("���.txt","w+");
	if(tp==NULL)
	{
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                    �����ʧ��                      ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	for(int a=0;a<300;a++)
	{	
		if(a==(end2-1)/4)
		{	
			break;
		}
		fprintf(tp,"%s %s %s %s\n",t[a].book,t[a].writer,t[a].b_num,t[a].place);
	}
	fclose(tp);
 }
 
 
 
 
 int b_check()//�����������ػء���>s[]�����е�λ��
{	
	system("cls");
	char bname1[30];
	printf("\n\n\t\t\t�������              ��������                 �������\n\n");
	printf("\t\t\there:");
	scanf("%s",&bname1); 
	printf("\n\n");
	for(int k=0;k<300;k++)
	{	
		if(strstr(s[k].book,bname1)!=NULL)
		{			
			return k;
			break;
		}
		if(k==299)
		{
			return 299;
			break;
		}
	}

	
}


int w_check()//�������߷��ء���>s[]�����е�λ��
{
	system("cls");
	char writer1[30];
	printf("\n\n\t\t\t�������              ��������                 �������\n\n");
	printf("\t\t\there:");
	scanf("%s",&writer1);
	printf("\n\n");
	for(int h=0;h<300;h++)
	{	
		if(strcmp(writer1,s[h].writer)==0)
		{				
			return h;	
			break;
		}
		if(h==299)
		{	
			return 299;
			break;
		}
	}		
}



int n_storage()//�����ŷ��ء���>t[]�����е�λ�� 
{
	system("cls");
	char bnumber[30];
	printf("\n\n\t\t\t�������              ������                 �������\n\n");
	printf("\t\t\there:");
	scanf("%s",&bnumber);
	printf("\n\n");
	for(int u=0;u<=300;u++)
	{
		if(strcmp(bnumber,t[u].b_num)==0)
		{	
        	return u;
			break;			
		}
		if(u==299)
		{
			return 299;
			break;
		}

	}
} 




int b_storage()//�����������ء���>t[]�����е�λ��
{	system("cls");
	char bname2[30];
	printf("\n\n\t\t\t�������              ��������                 �������\n\n");
	printf("\t\t\there:");	
	scanf("%s",&bname2);
	printf("\n\n");
	for(int k=0;k<300;k++)
	{	
		if(strstr(t[k].book,bname2)!=NULL)
		{	

			return k;

			break;
		}
		if(k==299)
		{
			return 299;
			break;
		}
	}


	

	
}


int w_storage()//�������߷��ء���>�����е�λ�� 
{
	system("cls");
	char writer2[30];
	printf("\n\n\t\t\t�������              ��������                 �������\n\n");
	printf("\t\t\there:");
	scanf("%s",&writer2);
	printf("\n\n");
	for(int h=0;h<300;h++)
	{
		if(strcmp(writer2,t[h].writer)==0)
		{		

			return h;
			break;
		}
		if(h==299)
		{
			return 299;
			break;
		}
	}		
}




int look()//������� 
{	system("cls");
	int random=0;
	while(random==0)
	{
		printf("\n\n\t\t\t������������    ͼ����Ϣ    ��������������\n\n");
		printf("\t��      %-14s������      %-14s������      %-6s��  %-8s���   \n","����","����","���","λ��");
		for(int i=0;i<(end2-1)/4;i++)
		{			
			printf("\t��     %-30s%-30s %-10s%-10s��   \n",t[i].book,t[i].writer,t[i].b_num,t[i].place);
		}
		printf("\t����������������������������������������������\n\n");
		printf("\t\t\t���                       1���˳�                     ���\n\t\t\t");
		
		scanf("%d",&random);
	}

}


 int b_add()//ͼ�����Ӻ��� 
 {
 	int booknumber=(end2-1)/4-1;
	while(true)
	{
		system("cls");
		int choose;
		printf("\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                       1������                        ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                       2���˳�                        ���\n");				
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
		scanf("%d",&choose);
		printf("\n\n");
		if(choose!=1)
		{
			break;
		} 
		if(choose==1)
		{
			system("cls");
			booknumber=booknumber+1;
			printf("\n\n\t\t\t��������               ������Ϣ            ��������\n");
			printf("\t\t\t��1������          2������          3�����          4��λ�� ��\n");	
			printf("\t\t\there:");
			scanf("%s%s%s%s",&t[booknumber].book,&t[booknumber].writer,&t[booknumber].b_num,&t[booknumber].place);
			printf("\n\n\t\t\t�����                  ���ӳɹ�                  ������\n");
			Sleep(1250);
			strcpy(s[booknumber].book,t[booknumber].book);
			strcpy(s[booknumber].writer,t[booknumber].writer);
			strcpy(s[booknumber].num,"1");
			end2=end2+4;
			end=end+3;
		}
	}
 }
 

 
 int n_b_del()//�鱾ɾ����������������� 
{		

   	int site=n_storage();
	if(site!=299)
	{
		system("cls");	
		printf("\n\n\t\t\t�����������8�����������8�����������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                    ɾ�����鱾��                      ���\n");					
		printf("\t\t\t���                     %-10s                       ���%s\n",t[site].book);	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t�����������8�����������8�����������\n\n");
		printf("\t\t\t���    ɾ�����鱾��%-10s    ���%s\n",t[site].book);
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������              ɾ���ɹ�                 �������\n\n");
		Sleep(1250);
		
	}
	if(site==299)
	{
		system("cls");	
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
		Sleep(1250);
	}	
}



int b_b_del()//�鱾ɾ������������������ 
{		
  	int site=b_storage();
	if(site!=299)
	{	system("cls");
		printf("\n\n\t\t\t�����������8�����������8�����������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                    ɾ�����鱾��                      ���\n");					
		printf("\t\t\t���                     %-10s                       ���%s\n",t[site].book);	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t�����������8�����������8�����������\n\n");
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������              ɾ���ɹ�                 �������\n\n");
		Sleep(1250);	
	}
	if(site==299)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
		Sleep(1250);
	}
}



int w_b_del()//�鱾ɾ������������������ 
{		
	int site=w_storage();
	if(site!=299)
	{	system("cls");
		printf("\n\n\t\t\t�����������8�����������8�����������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                    ɾ�����鱾��                      ���\n");					
		printf("\t\t\t���                     %-10s                       ���%s\n",t[site].book);	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t�����������8�����������8�����������\n\n");
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������              ɾ���ɹ�                 �������\n\n");	
		Sleep(1250);		
	}
	if(site==299)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
		Sleep(1250);
		
	}	
}



int b_del()//ɾ�麯������ 
{	
	int choose;
	while(true)
	{	system("cls");	
		printf("\n\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1����������                        ���\n");	
		printf("\t\t\t���                   2����������                        ���\n");
		printf("\t\t\t���                   3���������                        ���\n");
		printf("\t\t\t���                   4���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:"); 
		scanf("%d",&choose);
		printf("\n\n");
		if(choose!=1&&choose!=2&&choose!=3)
		{
			break;
		} 
		if(choose==1)
		{
			b_b_del();
		}
		if(choose==2)
		{
			w_b_del();
		}
		if(choose==3)
		{
			n_b_del();
		}
	}
}




int b_b_change()//ͼ���޸ĺ��������������� 
{	
	int b=b_storage();
	if(b!=299)
	{	system("cls");
		printf("\n\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                      �����޸�ֵ                      ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
		scanf("%s",t[b].place);
		system("cls");
		printf("\n\n");
		printf("\n\n\n\n\n\t\t\t�������              �޸ĳɹ�                 �������\n\n\n");
		printf("\t\t\t�������              �޸Ľ��                 �������\n");
		int random=0;
		while(random==0)
		{
			printf("\n\n\t1��������%-20s2�����ߣ�%-20s3����ţ�%-10s4��λ�ã�%-10s\n",t[b].book,t[b].writer,t[b].b_num,t[b].place);
			printf("\n\n\t\t\t���                     1���˳�                          ���\n");
			scanf("%d",&random);
		} 		
			
	}
	if(b==299)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
		Sleep(1250);
	}
}



int w_b_change()// ͼ���޸ĺ��������������� 
{	
	int w=w_storage();
	if(w!=299)
	{
		system("cls");
		printf("\n\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                      �����޸�ֵ                      ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
		scanf("%s",t[w].place);
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������              �޸ĳɹ�                 �������\n\n\n");
		printf("\t\t\t�������              �޸Ľ��                 �������\n");	
		int random=0;
		while(random==0)
		{
			printf("\n\n\t1��������%-20s2�����ߣ�%-20s3����ţ�%-10s4��λ�ã�%-10s\n",t[w].book,t[w].writer,t[w].b_num,t[w].place);
			printf("\n\n\t\t\t���                     1���˳�                          ���\n");
			scanf("%d",&random);
		} 
	}
	if(w==299)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n"); 
		Sleep(1250);
	}
}



int n_b_change()//ͼ���޸ĺ�������������� 
{	
	int n=n_storage();
	if(n!=299)
	{
		system("cls");
		printf("\n\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                      �����޸�ֵ                      ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
		scanf("%s",t[n].place);
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������              �޸ĳɹ�                 �������\n\n\n");
		int random=0;
		while(random==0)
		{
			printf("\n\n\t1��������%-20s2�����ߣ�%-20s3����ţ�%-10s4��λ�ã�%-10s\n",t[n].book,t[n].writer,t[n].b_num,t[n].place);
			printf("\n\n\t\t\t���                     1���˳�                          ���\n");
			scanf("%d",&random);
		} 
	}
	if(n==299)
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n"); 
		Sleep(1250);
	}
}



int b_change()//�޸��麯������ 
{	
	int choose;
	while(true)
	{	
		system("cls");	
		printf("\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1����������                        ���\n");	
		printf("\t\t\t���                   2����������                        ���\n");
		printf("\t\t\t���                   3���������                        ���\n");
		printf("\t\t\t���                   4���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:"); 
		scanf("%d",&choose);
		printf("\n\n");
		if(choose!=1&&choose!=2&&choose!=3)
		{
			break;
		} 
		if(choose==1)
		{
			b_b_change();
		}
		if(choose==2)
		{
			w_b_change();
		}
		if(choose==3)
		{
			n_b_change();
		}
	}
}


int record_check()//���ļ�¼ ��ѯ 
{	
	int choose;
	while(true)
	{
		system("cls");
		printf("\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1������                            ���\n");	
		printf("\t\t\t���                   2�����Ĳ�ѯ                        ���\n");
		printf("\t\t\t���                   3���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:"); 
		scanf("%d",&choose);
		if(choose==1)
		{
			int random=0;
			while(random==0)
			{
				system("cls");
				int number=0;
				printf("\n\n\t\t\t�������             �ڽ��鱾��                �������\n\n"); 
				for(int i=0;i<100;i++)//���� 
				{			
					if(i==(end-1)/3)
					{
						break;
					}
					if(strcmp(s[i].num,"1")!=0)
					{
						number++;
						printf("\t\t\t�豾��%-20s2�����ߣ�%-20s�����û���%-10s\n",number,s[i].book,s[i].writer,s[i].num);
					} 
				}
				printf("\t\t\t���                   1���˳�                            ���\n");
				scanf("%d",&random);
			}
		}
		if(choose==2)
		{
			int choose2,number;
			while(true)
			{
				system("cls");
				printf("\n\n\t\t\t��������������������������������\n");
				printf("\t\t\t���                                                      ���\n");
				printf("\t\t\t���                   1����������                        ���\n");	
				printf("\t\t\t���                   2����������                        ���\n");
				printf("\t\t\t���                   3���˳�                            ���\n");			
				printf("\t\t\t���                                                      ���\n");	
				printf("\t\t\t��������������������������������\n\n");
				printf("\t\t\there:"); 
				scanf("%d",&choose2);
				if(choose2==1)
				{
					int b=b_check();
					if(b!=299)
					{
						system("cls");
						printf("\n\n\t\t\t�豾��%-20s2�����ߣ�%-20s�����û���%-10s\n",s[b].book,s[b].writer,s[b].num);
					}
					if(b==299)
					{
						system("cls");
						printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n"); 
						Sleep(1250);
					} 
				}
				if(choose2==2)
				{
					int w=w_check();
					if(w!=299)
					{
						system("cls");
						printf("\n\n\n\n\n\t\t\t�豾��%-20s2�����ߣ�%-20s�����û���%-10s\n",s[w].book,s[w].writer,s[w].num);
					}
					if(w==299)
					{
						system("cls");
						printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");  
						Sleep(1250);
					} 
				}					
				if(choose2!=1&&choose2!=2) 
				{
					break;
				}
			}
		}		
		if(choose!=1&&choose!=2)
		{
			break;
		}								
	
	}
} 


int b_borrow() //���麯�� 
{
	int choose;
	char ONE[10];
	strcpy(ONE,"1");
	while(true)
	{
		system("cls");
		printf("\n\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1����������                        ���\n");	
		printf("\t\t\t���                   2�����߲���                        ���\n");
		printf("\t\t\t���                   3���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:"); 
		scanf("%d",&choose);
		printf("\n\n");	
		if(choose==1)
		{	int b=b_check();
			if(b!=299)
			{
				system("cls");
				printf("\n\n\t\t\t�������              �������                 �������\n");
				printf("\t\t\t                   �� %-20s  ��         \n",s[b].book);
				Sleep(1250);
			}
			
			if(strcmp(s[b].num,stu_num)==0)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������           ���ѽ������                �������\n\n\n");
				Sleep(1250);
			}
			if(strcmp((s[b].num),"1")==0)
			{
				system("cls");
				strcpy(s[b].num,stu_num);
				printf("\n\n\n\n\n\t\t\t�������              ���ĳɹ�                 �������\n"); 	
				Sleep(1250);			
			}
			if(b==299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
				Sleep(1250);
			}
			if(b!=299&&strcmp(s[b].num,"1")!=0&&strcmp(s[b].num,stu_num)!=0)
			{	system("cls");
				printf("\n\n\n\n\n\t\t\t��������������������������������\n");
				printf("\t\t\t�����           ���鱻������һ����                 �����\n");		
				printf("\t\t\t��  �ý����û���%-20s�����\n\n\n",s[b].num);
				Sleep(1250);
			}
		}
		if(choose==2)
		{
			int w=w_check();
			if(w!=299)
			{
				system("cls");
				printf("\n\n\t\t\t�������              �������                 �������\n");
				printf("\t\t\t                   �� %-20s  ��         \n",s[w].book);
			}
			if(strcmp(s[w].num,stu_num)==0)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������           ���ѽ������                �������\n\n\n");
				Sleep(1250);
			}
			if(strcmp(s[w].num,"1")==0)
			{
				system("cls");
				strcpy(s[w].num,stu_num);
				printf("\n\n\n\n\n\t\t\t�������              ���ĳɹ�                 �������\n"); 	
				Sleep(1250);
			}
			if(w==299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
				Sleep(1250);
			}		
			if(w!=299&&strcmp(s[w].num,"1")!=0&&strcmp(s[w].num,stu_num)!=0)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t��������������������������������\n");
				printf("\t\t\t�����           ���鱻������һ����                 �����\n");		
				printf("\t\t\t��  �ý����û���%-20s�����\n\n\n",s[w].num);
				Sleep(1250);
			}
		}
		if(choose!=1&&choose!=2)
		{
			break;
		}
	}
}



int b_return() //���麯�� 
{		
	char ONE[10];
	strcpy(ONE,"1");
	int borrow_num=0,choose;
	system("cls");
	printf("\n\n\n\t\t\t�������              ���ļ�¼                 �������\n");	
	for(int i=0;i<300;i++)
	{	
		if(i==(end-1)/3)
		{
			break;
		}	 	
		if(strcmp(s[i].num,stu_num)==0)
		{			
			printf("\t\t\t�����������   %d ��%-10s    �����������\n",borrow_num+1,s[i].book);
			borrow_num++;
		}				
	}
	if(borrow_num==0)
	{
		system("cls");
		printf("\n\n\t\t\t�������        ��û�н��ļ�¼                 �������\n");
		Sleep(1250);
	}
	while(borrow_num!=0)
	{	
		system("cls");
		printf("\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1������                            ���\n");	
		printf("\t\t\t���                   2���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
		scanf("%d",&choose);
		printf("\n\n");
		if(choose==1)
		{	int b=b_check();		
			if(b==299)
			{
				system("cls");
				printf("\n\n\t\t\t�������             ���鲻����                �������\n\n");
				Sleep(1250);
			}
			if(strcmp(s[b].num,"1")==0)
			{	system("cls");
				printf("\n\n\n\n\n\t\t\t�������           �����޽��ļ�¼              �������\n\n");
				Sleep(1250);
			}
			if(strcmp(s[b].num,stu_num)==0)
			{	system("cls");
				strcpy(s[b].num,"1");
				printf("\n\n\n\n\n\t\t\t�������              �黹�ɹ�                 �������\n\n");
				Sleep(1250);

			}
			if(strcmp(s[b].num,ONE)!=0&&strcmp(s[b].num,stu_num)!=0&&b!=299)
			{
				system("cls");	
				printf("\n\n\n\n\n\t\t\t�������          ��û�н������               �������\n\n");
				Sleep(1250);
			}															
		}
		if(choose!=1)
		{
			break;
		}
	}
}


int find_out() //���� 
 {
 	int choose;
 	while(true)
 	{	system("cls");
		printf("\n\n\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");
		printf("\t\t\t���                   1����������                        ���\n");	
		printf("\t\t\t���                   2����������                        ���\n");
		printf("\t\t\t���                   3���������                        ���\n");
		printf("\t\t\t���                   4���˳�                            ���\n");			
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
		printf("\t\t\there:");
 		scanf("%d",&choose);
 		if(choose==1)
 		{
 			int b=b_storage();
			if(b!=299)
			{
				system("cls");
				printf("\n\n\n\n\n\t���鼮��Ϣ�� ������%-20s  ���ߣ�%-20s  ��ţ�%-10s λ�ã�%-10s��\n",t[b].book,t[b].writer,t[b].b_num,t[b].place);
				Sleep(2500);
			}
			if(b==299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n"); 
				Sleep(1250);
			}
	
		}
		if(choose==2)
 		{
			int w=w_storage();
			if(w!=299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�鼮��Ϣ�� ������%-10s  ���ߣ�%-10s  ��ţ�%-10s   λ�ã�%-10s\n",t[w].book,t[w].writer,t[w].b_num,t[w].place);
			}
			if(w==299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n"); 
				Sleep(1250);
			}
		}
		if(choose==3)
 		{
			int n=n_storage();
			if(n!=299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�鼮��Ϣ�� ������%-10s  ���ߣ�%-10s  ��ţ�%-10s   λ�ã�%-10s\n",t[n].book,t[n].writer,t[n].b_num,t[n].place);
			}
			if(n==299)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������             ���鲻����                �������\n\n");
				Sleep(1250); 
			}
		}
		if(choose!=1&&choose!=2&&choose!=3)
		{
			break; 
		}		
	}
}





int Std_in(int std_t)//ѧ����½ 
{
g2:
int num,std_n;
system("cls");
printf("\n\n\n");
printf("\t\t\t��������������������������������\n");
printf("\t\t\t���     ѧ����¼                                         ���\n");
printf("\t\t\t���   --------------------------                         ���\n");
printf("\t\t\t���                     1.��¼                           ���\n");
printf("\t\t\t���                     2.ע��                           ���\n");
printf("\t\t\t���                     0.������һ��                     ���\n");
printf("\t\t\t��������������������������������\n");
printf("                                              \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
if(num==1){
	std_n=Sign_std(std_t);
	return std_n;
	}
else if(num==2)
	Register(std_t);
else if(num==0)
	Signin_page();
else
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t�������         �������������ѡ��          �������\n\n"); 
		Sleep(1250);
		goto g2;
	}	 	
}


int Sign_std(int i)//ѧ����½ 
{
	int j,inputw,password,k=0;
	int std_t;
	char psword[10]; 
	char ch;
g1:	printf("\n\n\t\t\t����˺ţ�");
	scanf("%d",&inputw);
	for(j=0;j<i;j++)
	{
		if(inputw==stdn[j].id_n)
		{
			printf("\t\t\t������룺"); 
		//	ch=getchar();
			while (1)
			{
				ch=getch();
				if(ch=='\r'){
					break;
				}else if(ch=='\b'){
					printf("\b \b");
					k=k-1;
				}else{
					psword[k] = ch;
					putchar('*');
					k++;
				}
			//	ch=getchar();
			}
		//	psword[k]='\0';
			password=atoi(psword);
			printf("\t%d",password); //
			if(password==stdn[j].pd_n)
			{
				system("cls");
				printf("\n\n\n\t\t\t                      ���������\n");	
				printf("\t\t\t                    ��                ��                         \n");		
				printf("\t\t\t�����������      ��¼�ɹ�      �����������\n");	
				printf("\t\t\t                    ��                ��                   \n");				
				printf("\t\t\t                      ���������\n\n");
				Sleep(1250);
				itoa(inputw,stu_num,10)	;		
				while(true)
				{
					system("cls");
					int choose99;
					printf("\n\n\n\t\t\t��������������������������������\n");
					printf("\t\t\t���                                                      ���\n");
					printf("\t\t\t���                   1��ͼ�����                        ���\n");	
					printf("\t\t\t���                   2���黹�鱾                        ���\n");
					printf("\t\t\t���                   3��ͼ�����                        ���\n");
					printf("\t\t\t���                   4��ͼ�����                        ���\n");			
					printf("\t\t\t���                   5���˳�                            ���\n");
					printf("\t\t\t���                   0���޸�����                        ���\n");	
					printf("\t\t\t��������������������������������\n\n");
					printf("\t\t\there:");							
					scanf("%d",&choose99);
					printf("\n\n");
					if(choose99==1)
					{					
						b_borrow();
					} 
					if(choose99==2)
					{
						b_return();
					}
					if(choose99==3)
					{
						look();
					} 
					if(choose99==4)
					{
						find_out();
					} 
					if(choose99==0)
					{
						edit_password(j,i);
					}
					if(choose99!=1&&choose99!=2&&choose99!=3&&choose99!=4&&choose99!=0)
					{
						break;
					} 				
				}
				Signin_page();				
			}
			else
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t�������                 �������              �������\n\n");
				Sleep(1250);
				std_t=std_ip();
				Std_in(std_t);
					
			}
			break;
		}
	}
		if(j==i)
		{
			system("cls");
			printf("\n\n\n\n\n\t\t\t�������               δ�ҵ��û�              �������\n\n");
			Sleep(1250);
			std_t=std_ip();
			Std_in(std_t);
			
		}
}



int Register(int std_t)//ע�� 
{
	int i,num;
	i=std_t+1;
//	u_total=u_total+1;
	printf("\n\n\t\t\t����˺ţ�");
	scanf("%d",&stdn[i-1].id_n);
	printf("\t\t\t�����λ�����룺");
	scanf("%d",&stdn[i-1].pd_n);
	FILE*fp_1;
	FILE*fp_2;
	fp_1=fopen("id.txt","a+");
	if(fp_1==NULL){
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                    ��id�ļ�ʧ��                    ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	fp_2=fopen("password.txt","a+");
	if(fp_2==NULL){
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                 ��password�ļ�ʧ��                 ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	fprintf(fp_1,"%d\n",stdn[i-1].id_n);
	fclose(fp_1);
	fseek(fp_2,0,SEEK_END);
	fprintf(fp_2,"%d\n",stdn[i-1].pd_n);
	fclose(fp_2);
	itoa(stdn[i].id_n,stdn[i-1].std_id,10);
	itoa(stdn[i].pd_n,stdn[i-1].std_pd,10);
	system("cls");
	printf("\n\n\n\t\t\t                      ���������\n");	
	printf("\t\t\t                    ��                ��                         \n");		
	printf("\t\t\t�����������      ע��ɹ�      �����������\n");	
	printf("\t\t\t                    ��                ��                   \n");				
	printf("\t\t\t                      ���������\n\n");
	Sleep(1250);
	Std_in(i);
}


int edit_password(int std_n,int u_total){//�޸����� 
	int newpd1=0,newpd2=0,i=0,n=0,total=0;
	FILE*p2;
	printf("\n\n");
//	printf("\t%d",std_n);
p1:	printf("\t\t\t�����λ�������룺");
	scanf("%d",&newpd1);
	printf("\t\t\t����ٴ����������룺");
	scanf("%d",&newpd2);
	if(newpd1!=newpd2){
		system("cls");
		printf("\n\n\n\n\n\t\t\t���               �������벻һ�£�����������             ���\n");
		Sleep(1250);
		goto p1;
	}
	
	n=std_n;
	stdn[n].pd_n=newpd1;
	itoa(newpd1,stdn[n].std_pd,10);
	p2=fopen("password.txt","w+");
	for(i=0;i<u_total;i++){
		fprintf(p2,"%d\n",stdn[i].pd_n);
	}	
	fclose(p2);
	system("cls");
	printf("\n\n\n\t\t\t                      ���������\n");	
	printf("\t\t\t                    ��                ��                         \n");		
	printf("\t\t\t�����������      �޸ĳɹ�      �����������\n");	
	printf("\t\t\t                    ��                ��                   \n");				
	printf("\t\t\t                      ���������\n\n");
	Sleep(1250);
	system("cls");
	Std_in(u_total);
	
//!!
}



int login_admin(){//����Ա��½ 
	int admin_password[4];
	int input_password;
	FILE *fp;	
	fp=fopen("����Ա��������.txt","r"); 
	if(fp==NULL){
		printf("\t\t\t��������������������������������\n");
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");		
		printf("\t\t\t���                  �򿪹���Ա�ļ�ʧ��                  ���\n");				
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t���                                                      ���\n");	
		printf("\t\t\t��������������������������������\n\n");
	}
	for(int i=0;i<4;i++)
	{
		fscanf(fp,"%d",&admin_password[i]);
	}	
	fclose(fp);
	printf("\t\t\t������룺");
	scanf("%d",&input_password);
	for(int i=0;i<NB+1;i++)
	{
		if(i==NB)
		{
			return 1;
			break;
		}
		if(input_password==admin_password[i])
		{		
			return 0;
			break;
		}
	}
}

int judge_and_do()//����Ա��½ 
{	
	int R=login_admin();
	if(R!=0){
		system("cls");
		printf("\n\n\n\n\n\t\t\t���                   ������󣬵�¼ʧ��                 ���\n");
		Sleep(1250);
		Admin_in();
	}
	if(R==0)
	{	system("cls");
 		printf("\n\n\n\t\t\t                      ���������\n");	
		printf("\t\t\t                    ��                ��                         \n");		
		printf("\t\t\t�����������      ��½�ɹ�      �����������\n");	
		printf("\t\t\t                    ��                ��                   \n");				
		printf("\t\t\t                      ���������\n\n");	
		Sleep(1250);					
		int choose66;			
		while(true)
		{
			system("cls");
			printf("\n\n\n\t\t\t��������������������������������\n");
			printf("\t\t\t���                   1��ͼ���޸�                        ���\n");	
			printf("\t\t\t���                   2�������鱾                        ���\n");		
			printf("\t\t\t���                   3��ɾ���鱾                        ���\n");				
			printf("\t\t\t���                   4������鱾                        ���\n");	
			printf("\t\t\t���                   5�����ļ�¼��ѯ                    ���\n");
			printf("\t\t\t���                   6���˳�                            ���\n");	
			printf("\t\t\t��������������������������������\n\n");		 
			printf("\t\t\there:");	
			scanf("%d",&choose66);
			printf("\n\n");
			if(choose66==1)
			{	
				b_change();
			}		
			if(choose66==2)
			{		
				b_add();
			}
			if(choose66==3)
			{
				b_del();					
			}
			if(choose66==4)
			{
				look();
			}
			if(choose66==5)
			{
				record_check();
			}
			if(choose66!=1&&choose66!=2&&choose66!=3&&choose66!=4&&choose66!=5)
			{
				break;
			}							
		}
		Signin_page();	
	}
}


int Admin_in()//����Ա��½ 
{
int num;
system("cls");
printf("\n\n\n");
printf("\t\t\t��������������������������������\n");
printf("\t\t\t���     ����Ա��¼                                        ���\n");
printf("\t\t\t���   --------------------------                          ���\n");
printf("\t\t\t���                     1.��¼                            ���\n");
printf("\t\t\t���                     0.������һ��                      ���\n");
printf("\t\t\t���                                                       ���\n");
printf("\t\t\t��������������������������������\n");
printf("                                              \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
if(num==1)
	judge_and_do();//
else if(num==0)
	Signin_page();
else
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t���                �������������ѡ��                   ���\n");
		Sleep(1250);
		Admin_in();
	}	 
}


int Homepage()//��ҳ 
{
int num;
int amount;
system("cls");
printf("\n\n\n");
printf("\t\t\t��������������������������������\n");
printf("\t\t\t���                 ��ӭʹ�ñ���������ѧ                 ���\n");
printf("\t\t\t���                     ͼ�����ϵͳ                     ���\n");
printf("\t\t\t���                       ____________                   ���\n");
printf("\t\t\t���                     1.�����½����                   ���\n");
printf("\t\t\t���                     0.�˳�ϵͳ                       ���\n");
printf("\t\t\t��������������������������������\n");
printf("                                             \t\t���������ֽ���ѡ��: ");
scanf("%d",&num);
printf("\n");
if(num==0)
	Logout_page();
else if(num==1){
	Signin_page();	
	}
else
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t���                �������������ѡ��                   ���\n");
		Sleep(1250);
		Homepage();
	}
}


int Signin_page()//��½��ҳ 
{
int num,std_t;
system("cls");
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
if(num==1){
	std_t=std_ip();
	Std_in(std_t);
	}
else if(num==2)
	Admin_in();
else if(num==0)
	Logout_page();
else
	{
		system("cls");
		printf("\n\n\n\n\n\t\t\t���                �������������ѡ��                   ���\n");
		Sleep(1250);
		Signin_page();
	}
}

void Logout_page()//�˳� 
{
system("cls");
printf("\n\n\n");
printf("\t\t\t��������������������������������\n");
printf("\t\t\t���                                                      ���\n");
printf("\t\t\t���                                                      ���\n");
printf("\t\t\t���                       __�˳��ɹ�___                  ���\n");
printf("\t\t\t���                                                      ���\n");
printf("\t\t\t���                                                      ���\n");
printf("\t\t\t��������������������������������\n");
}



int main()//������ 
{	
	system("color 47");
	std_ip();
	check_data_out();
	storage_data_out();	
	Homepage();							
	check_data_in();
	storage_data_in();		
}
