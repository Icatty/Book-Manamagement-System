#include<stdio.h>
#include<string.h>
char stu_num[10];
FILE *tp; 
FILE *fp;
struct B {
	char book[10];
	char writer[10];
	char b_num[10];
	char place[10];
};struct B t[100];
 struct xinxi{
 	char book[10];
	char writer[10];
	char num[10];
 };struct xinxi s[100];
int end,end2;
//ȫ�ֱ��� 

 
 int check_data_out()//check�ļ�д������    ���� 
 {	
	int r=-1;
	fp=fopen("����.txt","r+");
	if(fp==NULL)
	{
		printf("��ʧ��");
	}
	for(int i=0;i<=100;i++)
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
 
 int check_data_in()//s[]����д���ļ�   ���� 
 {
	rewind(fp);
	fp=fopen("����.txt","w+");
	if(fp==NULL)
	{
		printf("��ʧ��");
	}
	for(int a=0;a<100;a++)
	{	
		if(a==(end-1)/3)
		{	
			break;
		}
		fprintf(fp,"%s %s %s\n",s[a].book,s[a].writer,s[a].num);
	}
	fclose(fp);
 }



 int storage_data_out()//storage�ļ�д�����麯�� 
 {	
	int r=-1;
	tp=fopen("bookstorage.txt","r+");
	if(tp==NULL)
	{
		printf("��ʧ��");
	}
	for(int i=0;i<=100;i++)
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
 
 int storage_data_in()//t[]����д���ļ�   ���� 
 {
	rewind(tp);
	tp=fopen("����2.txt","w+");
	if(tp==NULL)
	{
		printf("��ʧ��\n");
	}
	for(int a=0;a<=100;a++)
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
	char bname1[10];
	printf("����������\n");
	scanf("%s",&bname1); 
	for(int k=0;k<100;k++)
	{	
		if(strcmp(s[k].book,bname1)==0)
		{			
			return k;
			break;
		}
		if(k==99)
		{

			return 99;
			break;
		}
	}

	
}
int w_check()//�������߷��ء���>s[]�����е�λ��
{
	char writer1[10];
	printf("���������ߣ�\n");
	scanf("%s",&writer1);
	for(int h=0;h<100;h++)
	{	
		if(strcmp(writer1,s[h].writer)==0)
		{				
			return h;	
			break;
		}
		if(h==99)
		{	
			return 99;
			break;
		}
	}		
}

int n_storage()//�����ŷ��ء���>t[]�����е�λ�� 
{
	char bnumber[10];
	printf("�����ţ�\n");
	scanf("%s",&bnumber);
	for(int u=0;u<=100;u++)
	{
		if(strcmp(bnumber,t[u].b_num)==0)
		{	
        	return u;
			break;			
		}
		if(u==99)
		{
			return 99;
			break;
		}

	}
} 




int b_storage()//�����������ء���>t[]�����е�λ��
{	
	char bname2[10];
	printf("����������\n");
	scanf("%s",&bname2);

	for(int k=0;k<=100;k++)
	{	
		if(strcmp(t[k].book,bname2)==0)
		{	

			return k;

			break;
		}
		if(k==99)
		{
			return 99;
			break;
		}
	}


	

	
}
int w_storage()//�������߷��ء���>�����е�λ�� 
{
	char writer2[10];
	printf("���������ߣ�\n");
	scanf("%s",&writer2);
	for(int h=0;h<100;h++)
	{
		if(strcmp(writer2,t[h].writer)==0)
		{		

			return h;
			break;
		}
		if(h==99)
		{
			return 99;
			break;
		}
	}		
}



int look()//������� 

{	
	printf("ͼ����Ϣ  ��\n");
	printf("1������    2������    3�����    4��λ��\n");
	for(int i=0;i<(end2-1)/3;i++)
	{	
		
		
		printf("%-10s  %-10s  %-10s  %-10s\n",t[i].book,t[i].writer,t[i].b_num,t[i].place);
	}
}



 int b_add()//ͼ�����Ӻ��� 
 {
 	int booknumber=(end2-1)/4-1;
	while(true)
	{	int choose;
		printf("��ѡ�� 1������ͼ��   2���鿴ͼ��  3���˳�\n"); 
		scanf("%d",&choose);
		if(choose!=1&&choose!=2)
		{
			break;
		}
		if(choose==1)
		{
			booknumber=booknumber+1;
			printf("����ͼ����Ϣ����1����  2����  3���  4λ�ã�\n");
			scanf("%s%s%s%s",&t[booknumber].book,&t[booknumber].writer,&t[booknumber].b_num,&t[booknumber].place);
			strcpy(s[booknumber].book,t[booknumber].book);
			strcpy(s[booknumber].writer,t[booknumber].writer);
			strcpy(s[booknumber].num,"1");
			end2=end2+4;
			end=end+3;
		}
		if(choose==2)
		{
			look();
		}
	}
	printf("���˳����鹦��\n");
 }
 
 
 int n_b_del()//�鱾ɾ����������������� 
{		

   	int site=n_storage();
	if(site!=99)
	{	
		printf("ɾ��������Ϊ��%s\n",t[site].book);
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("ɾ�����\n");	
		
	}
	if(site==99)
	{
		printf("�鱾������\n"); 
	}	
}

int b_b_del()//�鱾ɾ������������������ 
{		
  	int site=b_storage();
	if(site!=99)
	{	
		printf("ɾ��������Ϊ��%s\n",t[site].book);
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("ɾ�����\n");	
	}
	if(site==99)
	{
		printf("�鱾������\n"); 
	}
}

int w_b_del()//�鱾ɾ������������������ 
{		
	int site=w_storage();
	if(site!=99)
	{	
		printf("ɾ��������Ϊ��%s\n",t[site].book);
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("ɾ�����\n");			
	}
	if(site==99)
	{
		printf("�鱾������\n"); 
		
	}	
}




int b_b_change()//ͼ���޸ĺ��������������� 
{	
	int b=b_storage();
	if(b!=99)
	{
		printf("�����޸�ֵ��\n");
		scanf("%s",t[b].place);
		printf("�޸����\n");
		printf("�޸Ľ��: %s %s %s %s\n",t[b].book,t[b].writer,t[b].b_num,t[b].place);
	}
	if(b==99)
	{
		printf("���鲻����"); 
	}
}

int w_b_change()// ͼ���޸ĺ��������������� 
{	
	int w=w_storage();
	if(w!=99)
	{
		printf("�����޸�ֵ��\n");
		scanf("%s",t[w].place);
		printf("�޸����\n");
		printf("�޸Ľ��: %s %s %s %s\n",t[w].book,t[w].writer,t[w].b_num,t[w].place);
	}
	if(w==99)
	{
		printf("���鲻����"); 
	}
}

int n_b_change()//ͼ���޸ĺ�������������� 
{	
	int n=n_storage();
	if(n!=99)
	{
		printf("�����޸�ֵ��\n");
		scanf("%s",t[n].place);
		printf("�޸����\n");
		printf("�޸Ľ��: %s %s %s %s\n",t[n].book,t[n].writer,t[n].b_num,t[n].place);
	}
	if(n==99)
	{
		printf("���鲻����\n"); 
	}
}





 int b_borrow() //���麯�� 
{
	int choose;
	char ONE[10];
	strcpy(ONE,"1");
	while(true)
	{
		printf("��ѡ��  1����������     2����������     3���˳�\n ");
		scanf("%d",&choose);	
		if(choose==1)
		{	int b=b_check();
			if(b!=99)
			{
				printf("���������%s\n",s[b].book);
			}
			
			if(strcmp(s[b].num,stu_num)==0)
			{
				printf("���ѽ������Ŷ\n");
			}
			if(strcmp((s[b].num),"1")==0)
			{
				strcpy(s[b].num,stu_num);
				printf("���ĳɹ�\n"); 				
			}
			if(b==99)
			{
				printf("���������鲻����Ӵ\n");
			}
			if(b!=99&&strcmp(s[b].num,"1")!=0&&strcmp(s[b].num,stu_num)!=0)
			{	
				printf("���鱻������һ�����������û���  %s\n",s[b].num);
			}
		}
		if(choose==2)
		{
			int w=w_check();
			if(w!=99)
			{
				printf("���������%s\n",s[w].book);
			}
			if(strcmp(s[w].num,stu_num)==0)
			{
				printf("���ѽ������Ŷ\n");
			}
			if(strcmp(s[w].num,"1")==0)
			{
				strcpy(s[w].num,stu_num);
				printf("���ĳɹ�\n");
			}
			if(w==99)
			{
				printf("���������鲻����Ӵ\n");
			}		
			if(w!=99&&strcmp(s[w].num,"1")!=0&&strcmp(s[w].num,stu_num)!=0)
			{
				printf("���鱻������һ�����������û���  %s\n",s[w].num);
			}
		}
		if(choose!=1&&choose!=2)
		{
			break;
		}
	}
	printf("�����˳����鹦��\n");
}
int b_return() //���麯�� 
{		
	char ONE[10];
	strcpy(ONE,"1");
	int borrow_num=0,choose;	
	for(int i=0;i<100;i++)
	{	
		if(i==(end-1)/3)
		{
			break;
		}	 	
		if(strcmp(s[i].num,stu_num)==0)//�˺Ų�����"1"
		{
			printf("���ļ�¼��  %s\n",s[i].book);
			borrow_num++;
		}				
	}
	if(borrow_num==0)
	{
		printf("��û�н��ļ�¼\n");
	}
	while(borrow_num!=0)
	{	
		printf("��ѡ��  1�� ����     2���˳�\n");
		scanf("%d",&choose);
		if(choose==1)
		{	int b=b_check();		
			if(b==0)
			{
				printf("���������鲻����Ӵ\n");
			}
			if(strcmp(s[b].num,"1")==0)
			{	
				printf("����û�н��ļ�¼\n");
			}
			if(strcmp(s[b].num,stu_num)==0)
			{	
				strcpy(s[b].num,"1");
				printf("���ѹ黹����\n");
			}
			if(strcmp(s[b].num,ONE)!=0&&strcmp(s[b].num,stu_num)!=0&&b!=0)
			{	
				printf("��û�н������\n");
			}															
		}
		if(choose!=1)
		{
			break;
		}
	}
	printf("�����˳����鹦��\n");
}

int b_del()//ɾ�麯������ 
{	
	look();
	int choose;
	while(true)
	{		
		printf("��ѡ�� 1�� ��������   2����������   3���������   4���˳�\n");
		scanf("%d",&choose);
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
	printf("�����˳�ɾ�Ĺ���\n");
}

int b_change()//�޸��麯������ 
{	look();
	int choose;
	while(true)
	{		
		printf("��ѡ�� 1�� ��������   2����������   3���������   4���˳�\n");
		scanf("%d",&choose);
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
	printf("�����˳��޸Ĺ���\n");
}






int main()
{	
	printf("������ѧ�ţ�\n");
	scanf("%s",&stu_num);
	int choose0;
	check_data_out();
	storage_data_out();
	while(true)
	{	
		printf("��ѡ�� 1�� ѧ������   2������Ա����   3���˳�ϵͳ \n ");
		scanf("%d",&choose0);
		if(choose0==1)
		{	while(choose0==1)
			{
				int choose99;
				printf("��ѡ�� 1�� ����    2������  3���鿴ͼ����Ϣ  4���˳�ѧ������\n");			
				scanf("%d",&choose99);
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
				if(choose99!=1&&choose99!=2&&choose99!=3)
				{
					break;
				} 				
			}
			printf("�����˳�ѧ��������\n");			
		}					
		if(choose0==2)
		{		
			int choose66;
			
			while(choose0==2)
			{			 
				printf("��ѡ��  1���޸�ͼ����Ϣ    2������ͼ��    3������ͼ��   4���鿴ͼ����Ϣ  5���˳�����Ա����\n");
				scanf("%d",&choose66);
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
				if(choose66!=1&&choose66!=2&&choose66!=3&&choose66!=4)
				{
					break;
				}			
			}
			printf("�����˳�����Ա������\n"); 
		}
		if(choose0!=1&&choose0!=2)
		{
			break;
		}
	}
	check_data_in();
	storage_data_in();//�����ļ� 
		
	printf("�����˳�ϵͳ\n");		
}