
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
	struct xinxi s[100],*p;
	char b_input[10],w_input[10],ONE[10];
	int choose1,r=-1,end;
	fp=fopen("bookcheck.txt","r+");
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
				if(strcmp(s[k].num,ONE)!=0)
				{
					printf("�ҵ��ɽ��鱾:    ");
					printf("%s    ",s[k].book);
					printf("���ߣ�");
					printf("%s\n",s[k].writer);
					printf("��ѡ��1������       2���˳�\n");
					int choose2;
					scanf("%d",&choose2);
					if(choose2==1)
					{	
						char bw_num[10];
						printf("�����˺ţ�");
						scanf("%s",&s[k].num);
						printf("����ɹ�");
						
					}
					else
					{
						printf("���˳�");
					}
				}
				else
				{
					printf("�����鱾�ѽ��");
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
					printf("��ѡ��1������       2���˳�\n");
					int choose2;
					scanf("%d",&choose2);
					if(choose2==1)
					{	
						char bw_num[10];
						printf("�����˺ţ�");
						scanf("%s",&s[h].num);
						printf("����ɹ�"); 
					}
					else
					{
						printf("���˳�");
				} 	}
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
		if(a==end-27)
		{	
			printf("hahahaah");
			break;
			
		}
		fprintf(fp,"%s %s %s\n",s[a].book,s[a].writer,s[a].num);
	}
	fclose(fp);

}




int main()
{
	b_borrow();
} 
