	
	
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
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ��ʧ��    ���������\n");	
		printf("\t\t\t�������������������������\n\n");
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
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ��ʧ��    ���������\n");
		printf("\t\t\t�������������������������\n\n");
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
	tp=fopen("����2.txt","r+");
	if(tp==NULL)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ��ʧ��    ���������\n");
		printf("\t\t\t�������������������������\n\n");
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
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ��ʧ��    ���������\n");
		printf("\t\t\t�������������������������\n\n");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    ��������    ���������\n");
	printf("\t\t\t�������������������������\n\t\t\t");
	printf("here:");
	scanf("%s",&bname1); 
	printf("\n\n");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    ��������    ���������\n");
	printf("\t\t\t�������������������������\n\n\t\t\t");
	printf("here:");
	scanf("%s",&writer1);
	printf("\n\n");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    ������    ���������\n");
	printf("\t\t\t�������������������������\n\n\t\t\t");
	printf("here:");
	printf("\n\n");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    ��������    ���������\n");
	printf("\t\t\t�������������������������\n\n\t\t\t");
	printf("here:");	
	scanf("%s",&bname2);
	printf("\n\n");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    ��������    ���������\n");
	printf("\t\t\t�������������������������\n\n\t\t\t");
	printf("here:");
	scanf("%s",&writer2);
	printf("\n\n");
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
	printf("\t\t\t���������    ͼ����Ϣ    ����������\n\n");
	printf("\t\t\t��   1������    2������    3�����    4��λ��   ��\n");
	for(int i=0;i<(end2-1)/4;i++)
	{			
		printf("\t\t\t��     %-10s%-10s%-10s%-10s ��\n",t[i].book,t[i].writer,t[i].b_num,t[i].place);
	}
	printf("\t\t\t��������������������������\n\n");
}



 int b_add()//ͼ�����Ӻ��� 
 {
 	int booknumber=(end2-1)/4-1;
	while(true)
	{	int choose;
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������   1������      ���������\n");
		printf("\t\t\t���������   2������      ���������\n");
		printf("\t\t\t���������   3���˳�      ���������\n");
		printf("\t\t\t�������������������������\n\n\t\t\t");
		printf("here:");
		scanf("%d",&choose);
		printf("\n\n");
		if(choose!=1&&choose!=2)
		{
			break;
		}
		if(choose==1)
		{
			booknumber=booknumber+1;
			printf("\t\t\t�������������������������\n");
			printf("\t\t\t����������   ������Ϣ     ��������\n");
			printf("\t\t\t��  1������    2������    3�����    4��λ��  ��\n");
			printf("\t\t\t�������������������������\n\t\t\t");	
			printf("here:");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t���������    �˳�����    ���������\n");
	printf("\t\t\t�������������������������\n\n");
 }
 
 
 int n_b_del()//�鱾ɾ����������������� 
{		

   	int site=n_storage();
	if(site!=99)
	{	
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���    ɾ�����鱾��%-10s    ���%s\n",t[site].book);
		printf("\t\t\t�������������������������\n\n");
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ɾ���ɹ�    ���������\n");	
		printf("\t\t\t�������������������������\n\n");
		
	}
	if(site==99)
	{	
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    ���鱾������    ��������\n");
		printf("\t\t\t�������������������������\n\n"); 
	}	
}

int b_b_del()//�鱾ɾ������������������ 
{		
  	int site=b_storage();
	if(site!=99)
	{	printf("\t\t\t�������������������������\n");
		printf("\t\t\t����   ɾ�����鱾��%-10s  ����%s\n",t[site].book);
		printf("\t\t\t�������������������������\n");
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ɾ���ɹ�    ���������\n");	
		printf("\t\t\t�������������������������\n\n");	
	}
	if(site==99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    ���鱾������    ��������\n");
		printf("\t\t\t�������������������������\n\n"); 
	}
}

int w_b_del()//�鱾ɾ������������������ 
{		
	int site=w_storage();
	if(site!=99)
	{	
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���    ɾ�����鱾��%-10s  ����%s\n",t[site].book);
		printf("\t\t\t�������������������������\n\n");
		strcpy(t[site].book,"\0");
		strcpy(t[site].writer,"\0");
		strcpy(t[site].b_num,"\0");
		strcpy(t[site].place,"\0");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    ɾ���ɹ�    ���������\n");	
		printf("\t\t\t�������������������������\n\n");			
	}
	if(site==99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    ���鱾������    ��������\n");
		printf("\t\t\t�������������������������\n\n"); 
		
	}	
}




int b_b_change()//ͼ���޸ĺ��������������� 
{	
	int b=b_storage();
	if(b!=99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    �����޸�ֵ��    ��������\n");
		printf("\t\t\t�������������������������\n\n\t\t\t"); 
		printf("here:");
		scanf("%s",t[b].place);
		printf("\n\n");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    �޸ĳɹ�    ���������\n");	
		printf("\t\t\t�������������������������\n\n\n");
		printf("\t\t\t������������޸Ľ�������������\n");
		printf("\t\t\t���1���������2�����ߡ��3����š��4��λ�á��\n");	
		printf("\t\t\t���%s���%s���%s���%s���\n",t[b].book,t[b].writer,t[b].b_num,t[b].place);
			
	}
	if(b==99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  ���鱾������  ���������\n");
		printf("\t\t\t�������������������������\n\n"); 
	}
}

int w_b_change()// ͼ���޸ĺ��������������� 
{	
	int w=w_storage();
	if(w!=99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  �����޸�ֵ��  ���������\n");
		printf("\t\t\t�������������������������\n\n\t\t\t"); 
		printf("here:");
		scanf("%s",t[w].place);
		printf("\n\n");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t����������  �޸ĳɹ�  ����������\n");	
		printf("\t\t\t�������������������������\n\n\n");
		printf("\t\t\t����������  �޸Ľ��  ����������\n");
		printf("\t\t\t���1���������2�����ߡ��3����š��4��λ�á��\n");	
		printf("\t\t\t���%s���%s���%s���%s���\n\n\n",t[w].book,t[w].writer,t[w].b_num,t[w].place);
	}
	if(w==99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  ���鱾������  ���������\n");
		printf("\t\t\t�������������������������\n\n\n"); 
	}
}

int n_b_change()//ͼ���޸ĺ�������������� 
{	
	int n=n_storage();
	if(n!=99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  �����޸�ֵ��  ���������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t"); 
		printf("here:");
		scanf("%s",t[n].place);
		printf("\n\n");
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������    �޸ĳɹ�    ���������\n");	
		printf("\t\t\t�������������������������\n\n\n");
		printf("\t\t\t���������    �޸Ľ��    ���������\n");
		printf("\t\t\t���1���������2�����ߡ�� 3����š�� 4��λ�á�\n");	
		printf("\t\t\t���%s���%s���%s���%s���\n\n\n",t[n].book,t[n].writer,t[n].b_num,t[n].place);
	}
	if(n==99)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    ���鱾������    ��������\n");
		printf("\t\t\t�������������������������\n\n\n"); 
	}
}





 int b_borrow() //���麯�� 
{
	int choose;
	char ONE[10];
	strcpy(ONE,"1");
	while(true)
	{
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  1����������   ���������\n");
		printf("\t\t\t���������  2�����߲���   ���������\n");
		printf("\t\t\t���������   3���˳�      ���������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t");
		printf("here:");
		scanf("%d",&choose);
		printf("\n\n");	
		if(choose==1)
		{	int b=b_check();
			if(b!=99)
			{
				printf("\t\t\t���������    �������    ���������\n");
				printf("\t\t\t�������   %-12s   ��������\n",s[b].book);
				printf("\t\t\t�������������������������\n\n\n");
			}
			
			if(strcmp(s[b].num,stu_num)==0)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������    ���ѽ������    ��������\n");
				printf("\t\t\t�������������������������\n\n\n"); 
			}
			if(strcmp((s[b].num),"1")==0)
			{
				strcpy(s[b].num,stu_num);
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t���������    ���ĳɹ�    ���������\n");	
				printf("\t\t\t�������������������������\n\n\n"); 				
			}
			if(b==99)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������    ���鲻����    ���������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}
			if(b!=99&&strcmp(s[b].num,"1")!=0&&strcmp(s[b].num,stu_num)!=0)
			{	
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t������   ���鱻������һ����     �������\n");			
				printf("\t\t\t������   �ý����û���%-10s    �����\n\n\n",s[b].num);
			}
		}
		if(choose==2)
		{
			int w=w_check();
			if(w!=99)
			{
				printf("\t\t\t���������    �������    ���������\n");
				printf("\t\t\t��������   %-12s     ��������\n",s[w].book);
				printf("\t\t\t�������������������������\n\n\n");
			}
			if(strcmp(s[w].num,stu_num)==0)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������    ���ѽ������    ��������\n");
				printf("\t\t\t�������������������������\n\n\n"); 
			}
			if(strcmp(s[w].num,"1")==0)
			{
				strcpy(s[w].num,stu_num);
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t���������    ���ĳɹ�    ���������\n");	
				printf("\t\t\t�������������������������\n\n\n"); 	
			}
			if(w==99)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������    ���鲻����    ���������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}		
			if(w!=99&&strcmp(s[w].num,"1")!=0&&strcmp(s[w].num,stu_num)!=0)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t������     ���鱻������һ����     ������\n");			
				printf("\t\t\t�����    �ý����û���%-10s     �����\n\n\n",s[w].num);
			}
		}
		if(choose!=1&&choose!=2)
		{
			break;
		}
	}
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t�������    ���˳����鹦��    ��������\n");
	printf("\t\t\t�������������������������\n\n\n"); 
}
int b_return() //���麯�� 
{		
	char ONE[10];
	strcpy(ONE,"1");
	int borrow_num=0,choose;
	printf("\t\t\t����������  ���ļ�¼    ���������\n");		
	for(int i=0;i<100;i++)
	{	
		if(i==(end-1)/3)
		{
			break;
		}	 	
		if(strcmp(s[i].num,stu_num)==0)//�˺Ų�����"1"
		{			
			printf("\t\t\t��������  %d ��%-10s   ��������\n",borrow_num+1,s[i].book);
			borrow_num++;
		}				
	}
	if(borrow_num==0)
	{
		printf("\t\t\t�������   ��û�н��ļ�¼   ���������\n");
	}
	while(borrow_num!=0)
	{	
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    1������       ���������\n");	
		printf("\t\t\t��������    2���˳�     ����������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t");
		printf("here:");
		scanf("%d",&choose);
		printf("\n\n");
		if(choose==1)
		{	int b=b_check();		
			if(b==0)
			{
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������    ���鲻����    ���������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}
			if(strcmp(s[b].num,"1")==0)
			{	
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t�������    �����޽��ļ�¼    ��������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}
			if(strcmp(s[b].num,stu_num)==0)
			{	
				strcpy(s[b].num,"1");
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t��������     ����ɹ�     ���������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}
			if(strcmp(s[b].num,ONE)!=0&&strcmp(s[b].num,stu_num)!=0&&b!=0)
			{	
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t�������    ��û�н������    ��������\n");	
				printf("\t\t\t�������������������������\n\n\n");
			}															
		}
		if(choose!=1)
		{
			break;
		}
	}
			printf("\t\t\t�������������������������\n");
			printf("\t\t\t�������    ���˳����鹦��    ��������\n");	
			printf("\t\t\t�������������������������\n\n\n");
}

int b_del()//ɾ�麯������ 
{	
	look();
	int choose;
	while(true)
	{		
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  1����������   ���������\n");	
		printf("\t\t\t���������  2����������   ���������\n");
		printf("\t\t\t���������  3���������   ���������\n");
		printf("\t\t\t���������  4���˳�       ���������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t");
		printf("here:"); 
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t�������   �����˳�ɾ������    ��������\n");
	printf("\t\t\t�������������������������\n\n\n"); 
}

int b_change()//�޸��麯������ 
{	look();
	int choose;
	while(true)
	{		
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t���������  1����������   ���������\n");	
		printf("\t\t\t���������  2����������   ���������\n");
		printf("\t\t\t���������  3���������   ���������\n");
		printf("\t\t\t���������  4���˳�       ���������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t");
		printf("here:");
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
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t�������    ���˳��޸Ĺ���    ��������\n");
	printf("\t\t\t�������������������������\n\n\n"); 
}






int main()
{	
	printf("\t\t\t�������������������������\n");
	printf("\t\t\t�������      ������ѧ��      ��������\n");
	printf("\t\t\t�������������������������\n\n\n\t\t\t"); 
	printf("here:");
	scanf("%s",&stu_num);
	printf("\n\n");
	int choose0;
	check_data_out();
	storage_data_out();
	while(true)
	{	
		printf("\t\t\t�������������������������\n");
		printf("\t\t\t��������    1��ѧ������     ��������\n");	
		printf("\t\t\t��������    2������Ա����   ��������\n");
		printf("\t\t\t��������    3���˳�         ��������\n");
		printf("\t\t\t�������������������������\n\n\n\t\t\t");
		printf("here:");
		scanf("%d",&choose0);
		printf("\n\n");
		if(choose0==1)
		{	while(choose0==1)
			{
				int choose99;
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t���������  1��ͼ�����     ��������\n");	
				printf("\t\t\t���������  2���黹�鱾     ��������\n");
				printf("\t\t\t���������  3��ͼ�����     ��������\n");
				printf("\t\t\t���������  4���˳�         ��������\n");
				printf("\t\t\t�������������������������\n\n\n\t\t\t");		
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
				if(choose99!=1&&choose99!=2&&choose99!=3)
				{
					break;
				} 				
			}
			printf("\t\t\t�������������������������\n");
			printf("\t\t\t�������     �����˳�ѧ��������     �����\n");
			printf("\t\t\t�������������������������\n\n\n"); 		
		}					
		if(choose0==2)
		{		
			int choose66;
			
			while(choose0==2)
			{			 
				printf("\t\t\t�������������������������\n");
				printf("\t\t\t���������  1��ͼ���޸�   ���������\n");	
				printf("\t\t\t���������  2�������鱾   ���������\n");
				printf("\t\t\t���������  3��ɾ���鱾   ���������\n");
				printf("\t\t\t���������  4������鱾   ���������\n");
				printf("\t\t\t���������  5�� �˳�      ���������\n");
				printf("\t\t\t�������������������������\n\n\n\t\t\t");	
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
				if(choose66!=1&&choose66!=2&&choose66!=3&&choose66!=4)
				{
					break;
				}			
			}
			printf("\t\t\t�������������������������\n");
			printf("\t\t\t�������    ���˳���������    �������\n");
			printf("\t\t\t�������������������������\n\n\n"); 
		}
		if(choose0!=1&&choose0!=2)
		{
			break;
		}
	}
	check_data_in();
	storage_data_in();		
			printf("\t\t\t�������������������������\n");
			printf("\t\t\t�������    �����˳�ϵͳ      ��������\n");
			printf("\t\t\t�������������������������\n\n\n"); 		
}
