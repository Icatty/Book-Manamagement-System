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


 
 int check_data_out()//������Ϣд������    ���� 
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
 
 int check_data_in()//����д���ļ�   ���� 
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



 int storage_data_out()//������Ϣд������    ���� 
 {	
	int r=-1;
	tp=fopen("����2.txt","r+");
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
 
 int storage_data_in()//����д���ļ�   ���� 
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



int b_check()
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
			return 0;
			break;
		}
	}

	
}
int w_check()
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
			return 0;
			break;
		}
	}		
}

int n_storage()
{
	char bnumber[10];
	printf("�����ţ�\n");
	scanf("%s",&bnumber);
	for(int u=0;u<=100;u++)
	{
		if(strcmp(bnumber,t[u].b_num)==0)
		{	
        	return u;
						
		}
		if(u==99)
		{
			return 0;
			break;
		}

	}
} 




int b_storage()
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
			return 0;
			break;
		}
	}


	

	
}
int w_storage()
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
			return 0;
			break;
		}
	}		
}


int look()

{	
	printf("ͼ����Ϣ  ��\n");
	printf("1������ 2������ 3����� 4��λ��\n");
	for(int i=0;i<(end2-1)/3;i++)
	{	
		
		
		printf("%s  %s  %s  %s\n",t[i].book,t[i].writer,t[i].b_num,t[i].place);
	}
}




 int b_borrow() //���麯�� 
{
	int choose;
	char ONE[10];
	strcpy(ONE,"1");
	while(true)
	{
		printf("��ѡ��  1����������     2����������     3���˳�\n ");//�˴���ü�һ�����ѡ�� 
		scanf("%d",&choose);	
		if(choose==1)
		{	int b=b_check();
			printf("���������%s\n",s[b].book);
			if(strcmp(s[b].num,stu_num)==0)
			{
				printf("���ѽ������Ŷ\n");
			}
			if(strcmp((s[b].num),"1")==0)
			{
				strcpy(s[b].num,stu_num);
				printf("���ĳɹ�\n"); 				
			}
			if(b==0)
			{
				printf("���������鲻����Ӵ\n");
			}
			if(strcmp(s[b].num,ONE)!=0&&strcmp(s[b].num,stu_num)!=0&&b!=0)
			{	
				printf("���鱻������һ�����������û���  %s\n",s[b].num);
			}
		}
		if(choose==2)
		{
			int w=w_check();
			printf("���������%s\n",s[w].book);
			if(strcmp(s[w].num,stu_num)==0)
			{
				printf("���ѽ������Ŷ\n");
			}
			if(strcmp(s[w].num,"1")==0)
			{
				strcpy(s[w].num,stu_num);
				printf("���ĳɹ�\n");
			}
			if(w==0)
			{
				printf("���������鲻����Ӵ\n");
			}		
			if(strcmp(s[w].num,ONE)!=0&&strcmp(s[w].num,stu_num)!=0&&w!=0)
			{
				printf("���鱻������һ�����������û���  %s\n",s[w].num);
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
	int i,choose,n_borrow=0;
	for(i=0;i<100;i++)
	{	
		if(i==(end-1)/3&&n_borrow==0)
		{	
			i=999;
			printf("û�и�����ļ�¼��=��\n");
			break;
		}	 
		if(i==(end-1)/3)
		{
			break; 
		}	
		if(strcmp(s[i].num,stu_num)==0)
		{
			printf("���ļ�¼��  %s\n",s[i].book);
			n_borrow++ ;
		}				
	}
	while(i!=999)
	{	
		printf("��ѡ��  1�� ����     2���˳�\n");
		scanf("%d",&choose);
		if(choose==1)
		{	int b=b_check();		
			if(b==0)
			{
				printf("���黹���鲻����Ӵ\n");
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
				printf("���鱻������һ�����������û���  %s\n",s[b].num);
			}															
		}
		if(choose!=1)
		{
			break;
		}
	}
	
}


int book_change()
{	
	while(true)
	{	
		int choose;
		printf("��ѡ�� 1����������   2����������   3���������  4���˳�\n ");
		scanf("%d",&choose);
		 
		if(choose==1)
		{
			int b=b_storage();
			if(b==0)
			{
				printf("���鲻����\n");
			} 
			if(b!=0)
			{
				printf("�ѵ����鱾�� %s\n",t[b].book);
				printf("�����޸ĵ�λ�ã�\n");			
				scanf("%s",&t[b].place);
				printf("�޸ĳɹ�\n");
				printf("�޸ĺ����Ϣ��%s  %s  %s  %s\n",t[b].book,t[b].writer,t[b].b_num,t[b].place);
			} 

		}
		if(choose==2)
		{	
			int w=w_storage();
			
			if(w==0)
			{
				printf("���鲻����\n");
			} 
			if(w!=0)
			{
				printf("�ѵ����鱾�� %s\n",t[w].book);
				printf("�����޸ĵ�λ�ã�\n");			
				scanf("%s",&t[w].place);
				printf("�޸ĳɹ�\n");
				printf("�޸ĺ����Ϣ��%s  %s  %s  %s\n",t[w].book,t[w].writer,t[w].b_num,t[w].place);
			}
		}
		if(choose==3)
		{
			int n=n_storage();
			if(n==0)
			{
				printf("���鲻����\n");
			} 
			if(n!=0)
			{
				printf("�ѵ����鱾�� %s\n",t[n].book);
				printf("�����޸ĵ�λ�ã�\n");			
				scanf("%s",&t[n].place);
				printf("�޸ĳɹ�\n");
				printf("�޸ĺ����Ϣ��%s  %s  %s  %s\n",t[n].book,t[n].writer,t[n].b_num,t[n].place);
			}
		}
		if(choose!=1&&choose!=2&&choose!=3)
		{
			break;	
		}
					
	}
	printf("�����˳��޸Ĺ���\n");	
}




 

 int b_add()
 {
 	int choose=1;
 	int booknumber=(end2-1)/4-1;
	while(choose==1)
	{
		printf("��ѡ�� 1������ͼ��     2�����\n"); 
		scanf("%d",&choose);
		if(choose!=1)
		{
			break;
		}
		booknumber=booknumber+1;
		printf("����ͼ����Ϣ����1����  2����  3���  4λ�ã�\n");
		scanf("%s%s%s%s",&t[booknumber].book,&t[booknumber].writer,&t[booknumber].b_num,&t[booknumber].place);
		
		strcpy(s[booknumber].book,t[booknumber].book);
		strcpy(s[booknumber].writer,t[booknumber].writer);
		strcpy(s[booknumber].num,"1");
		printf("�������\n");
		printf("�����鱾����Ϣ��%s  %s  %s  %s\n",t[booknumber].book,t[booknumber].writer,t[booknumber].b_num,t[booknumber].place);
		end2=end2+4;
		end=end+3;
	}
	printf("�˳����鹦��\n");
 }


int b_del()
{	char b_input2[10];
	int choose1=1;
	while(choose1==1)
	{	

		if(choose1==1)
		{	
			int choose2;
			printf("��ѡ��  1����������   2����������  3���������  4���˳�\n");
			scanf("%d",&choose2);//�������Ƚϴ� 
			if(choose2==4)
			{
				break;
			}
			if(choose2==1)
			{
				
				printf("������������\n");
				scanf("%s",&b_input2);
				for(int u=0;u<=(end2-1)/4-1;u++)
				{
					if(strcmp(b_input2,t[u].book)==0)
					{	printf("ɾ��������Ϊ��%s\n",t[u].book);
						strcpy(t[u].book,"\0");
						strcpy(t[u].writer,"\0");
						strcpy(t[u].b_num,"\0");
						strcpy(t[u].place,"\0");
						printf("ɾ�����\n");
					}
				}
			}
			if(choose2==2)
			{
				char w_input[10];
				printf("�������ߣ�\n");
				scanf("%s",&w_input);
				for(int u=0;u<=(end2-1)/4-1;u++)
				{
					if(strcmp(w_input,t[u].writer)==0)
					{
						strcpy(t[u].book,"\0");
						strcpy(t[u].writer,"\0");
						strcpy(t[u].b_num,"\0");
						strcpy(t[u].place,"\0");
						printf("ɾ�����");
					}
				}
				
				
			}
			if(choose2==3)
			{
				char num_input[10];
				printf("�����ţ�\n");
				scanf("%s",num_input);
				for(int u=0;u<=(end2-1)/4;u++)
				{
					if(strcmp(num_input,t[u].b_num)==0)
					{	
						strcpy(t[u].book,"\0");
						strcpy(t[u].writer,"\0");
						strcpy(t[u].b_num,"\0");
						strcpy(t[u].place,"\0");
						
						printf("ɾ�����");
					}
				}
				
			}
			
		}
		else
		{
			printf("�����˳�ɾ��ϵͳ\n");
			break;
		}

	}
}
 
 
 
 
int main()
{	printf("������ѧ�ţ�\n");
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
				printf("��ѡ�� 1�� ����    2������  3���鿴ͼ����Ϣ  4���˳�\n");			
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
				int choose77;
				printf("��ѡ��  1������   2���˳�ѧ������\n");
				scanf("%d",&choose77);
				if(choose77!=1)
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
					book_change();
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
	storage_data_in();
		
	printf("�����˳�ϵͳ\n");		
}


