
 #include<stdio.h>
 #include<string.h>
 struct xinxi{
 	char book[10];
	char writer[10];
	char num[10];
 };
int b_borrow() //���麯�� 
{
	FILE *fp;
	struct xinxi s[100];
	char b_input[10],w_input[10],ONE[10];
	int choose1,r=-1,end;
	strcpy(ONE,"1");
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
	printf("1����������       2����������\n");
	scanf("%d",&choose1);
	if(choose1==1)
	{	printf("����������");
		scanf("%s",&b_input);
		for(int k=0;k<100;k++)
		{
			if(strcmp(s[k].book,b_input)==0)
			{
				if(strcmp(s[k].num,ONE)==0)
				{
					printf("�ҵ��ɽ��鱾:    ");
					printf("%s    ",s[k].book);
					printf("���ߣ�");
					printf("%s\n",s[k].writer);
					char bw_num[10];
					printf("�����˺ţ�");
					scanf("%s",&s[k].num);
					printf("����ɹ�");
					

				}
				else
				{
					printf("�����鱾�ѽ��\n");
				}
				break;
			}
		}
	}
	else
	{	
		printf("�������ߣ�");
		scanf("%s",&w_input);
		for(int h=0;h<100;h++)
		{	
			if(strcmp(w_input,s[h].writer)==0)
			{	
				if(strcmp(s[h].num,ONE)!=0)
				{	
					printf("�ҵ��ɽ��鱾:    ");
					printf("%s\n",s[h].book);
					char bw_num[10];
					printf("�����˺ţ�");
					scanf("%s",&s[h].num);
					printf("����ɹ�\n"); 


				} 	
				else
				{
					printf("���鱾�ѽ��");
				}
				break;
			}
		}
	}
	fclose(fp);
	//����  ������
	//���浽�ļ� 
	rewind(fp);
	fopen("����.txt","w+");
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







int b_return() //���麯�� 
{
	FILE *fp;
	struct xinxi s[100];
	char b_input[10],ONE[2],input_num[10];
	int r=-1,end;
	strcpy(ONE,"1");
	fp=fopen("����.txt","r");
	if(fp==NULL)
	{
		printf("��ʧ��\n");
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
	}//�ı���Ϣ���� 
	printf("����ѧ�ţ�");
	scanf("%s",&input_num);
	printf("����黹���鱾:");
	scanf("%s",&b_input);
	for(int g=0;g<100;g++)
	{
		if(g==(end-1)/3+1)
		{

			break;
		}
		if(strcmp(s[g].book,b_input)==0)
		{
			printf("�ҵ�����,");
			if(strcmp(s[g].num,ONE)==0)
			{
				printf("����û�н��ļ�¼"); 
			}
			else
			{

				if(strcmp(s[g].num,input_num)!=0)
				{
					printf("��û�н������\n");
				}
				else
				{
					printf("�õ����ѹ黹\n");
					strcpy(s[g].num,"1");

				}
			}
			break;
		}
		
	}
	fclose(fp);
	//���浽�ļ� 
	rewind(fp);

	fopen("����.txt","w+");
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


int main()
{	
	int book_operate=0;
	int choose3;

	while(book_operate==0)
	{
		
		printf("��ѡ��  1������     2������    3���˳�\n") ;
		scanf("%d",&choose3);
	
		if(choose3==1)
		{
			b_borrow();
	
		}
		if(choose3==2)
		{
			b_return();
		}
		if(choose3!=1&&choose3!=2) 
		{	
			book_operate=1;
			printf("�����˳�\n");
		}
		
	}
	 
}


