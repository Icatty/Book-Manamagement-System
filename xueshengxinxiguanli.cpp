#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

void zhuyemian();
void denglu();
void guanli();
void jiaoshi();
void xuesheng();
void tuichu();
void chengjiluru();
void chengjichaxun();
void mimagenggai();
void zhanghaotianjia();
void zhanghaoshanchu();
void zhanghaogenggai();
void xinxitianjia();
void xinxichaxun();
void chaxunmima();
void chaxunchengji();
void miwenshuru(char *miwen);
int sf;
char zh[11];
char mm[19];

typedef struct canshub
{
	int shenfen;
	char zhanghao[11];
	char mima[19];
}canshuc;
canshuc yanzheng[1000];

typedef struct canshud
{
	char xuehao[11];
	char kemu1[10];int fenshu1;
	char kemu2[10];int fenshu2;
	char kemu3[10];int fenshu3;
	char kemu4[10];int fenshu4;
	char kemu5[10];int fenshu5;
	char kemu6[10];int fenshu6;
	char kemu7[10];int fenshu7;
	char kemu8[10];int fenshu8;

}canshue;

typedef struct canshuf
{
	char xuehao[11];
	char xingming[10];
	char xueyuan[10];
	char banji[10];
}canshug;


int main()
{
    system("cls");
	zhuyemian();
	denglu();
    switch(sf)
	{
		case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
} 


void zhuyemian()
{
    system("cls");
	printf("\n\n\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("\t\t\t  ��                           �������ϵͳ                         ��\n");
	printf("\t\t\t  ��                       -------------------                      ��\n");
	printf("\t\t\t  ��                           1.�����¼                           ��\n");
	printf("\t\t\t  ��                           2.��ʦ��¼                           ��\n");
	printf("\t\t\t  ��                           3.ѧ����¼                           ��\n");
	printf("\t\t\t  ��                           0.�˳�ϵͳ                           ��\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("                                                      ������ѡ��: ");
	scanf("%d",&sf);
	printf("\n");
	if(sf==0)
    	tuichu();
    else if(sf!=1&&sf!=2&&sf!=3)
		zhuyemian();
	else
	{
		printf("                                                      �������˺�: ");
        scanf("%s",&zh);
        printf("\n"); 
        printf("                                                      ����������: ");
         
		miwenshuru(mm);
     	printf("\n");
    	printf("\t\t\t                                 ");
	}
}

void denglu()
{
	int i;
	int canshua=0;
	FILE *fp;
	if((fp=fopen("zhanghaomima.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;i<1000;i++)
	         fscanf(fp,"%d%s%s",&yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
	fclose(fp);
	for(i=0;i<1000;i++)
		 if(strcmp(zh,yanzheng[i].zhanghao)==0&&strcmp(mm,yanzheng[i].mima)==0&&sf==yanzheng[i].shenfen)
			 {       	
				 canshua=1;
		         break;
			 }	      	 
    if(canshua!=1)
    main();
}

void xuesheng()
{ 
	system("cls");
    printf("\n\n\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("\t\t\t  ��                       �������ϵͳѧ��ҳ��                     ��\n");
	printf("\t\t\t  ��                       -------------------                      ��\n");
	printf("\t\t\t  ��                           1.��ѯ�ɼ�                           ��\n");
	printf("\t\t\t  ��                           2.��ѯ��Ϣ                           ��\n");
	printf("\t\t\t  ��                           3.��������                           ��\n");
	printf("\t\t\t  ��                           0.������һ��                         ��\n");
	printf("\t\t\t  �����������������������������������\n");   
    printf("\n");
	int a;
	printf("                                                      ������ѡ��: ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:chengjichaxun();break;
	case 2:xinxichaxun();break;
	case 3:mimagenggai();break;
	case 0:main();
	default:xuesheng();
	}
}

void guanli()
{
	system("cls");
    printf("\n\n\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("\t\t\t  ��                       �������ϵͳ����ҳ��                     ��\n");
	printf("\t\t\t  ��                       -------------------                      ��\n");
	printf("\t\t\t  ��                           1.����˺�                           ��\n");
	printf("\t\t\t  ��                           2.��ѯ����                           ��\n");
    printf("\t\t\t  ��                           3.ɾ���˺�                           ��\n");
	printf("\t\t\t  ��                           4.��Ϣ���                           ��\n");
	printf("\t\t\t  ��                           0.������һ��                         ��\n");
	printf("\t\t\t  �����������������������������������\n");   
    printf("\n");
    int a;
	printf("                                                      ������ѡ��: ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:zhanghaotianjia();break;
	case 2:chaxunmima();break;
	case 3:zhanghaoshanchu();break;
    case 4:xinxitianjia();break;
	case 0:main();
	default:guanli();
	}
}

void jiaoshi()
{
	system("cls");
    printf("\n\n\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("\t\t\t  ��                       �������ϵͳ��ʦҳ��                     ��\n");
	printf("\t\t\t  ��                       -------------------                      ��\n");
	printf("\t\t\t  ��                           1.�ɼ�¼��                           ��\n");
	printf("\t\t\t  ��                           2.�ɼ���ѯ                           ��\n");
	printf("\t\t\t  ��                           3.��������                           ��\n");
	printf("\t\t\t  ��                           0.������һ��                         ��\n");
	printf("\t\t\t  �����������������������������������\n");   
    printf("\n");
	int a;
	printf("                                                      ������ѡ��: ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:chengjiluru();break;
	case 2:chaxunchengji();break;
	case 3:mimagenggai();break;;
	case 0:main();
	default:jiaoshi();
	}
}
void tuichu()
{
    system("cls");
	printf("\n\n\n");
	printf("\t\t\t  �����������������������������������\n");
	printf("\t\t\t  ��                                                                ��\n");
	printf("\t\t\t  ��                         �����˳�ϵͳ!!!                        ��\n");
	printf("\t\t\t  ��                                                                ��\n"); 
	printf("\t\t\t  ��                       Goodbye! My friend!                      ��\n");
	printf("\t\t\t  ��                                                                ��\n");
	printf("\t\t\t  ��                                                                ��\n");
	printf("\t\t\t  �����������������������������������\n");   
    printf("\n\n\n");
	exit(0);
}

void mimagenggai()
{
    system("cls");
	int i,b;
	int canshua=0;
	char yuanmima[19];
	FILE *fp;
	if((fp=fopen("zhanghaomima.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;yanzheng[i].shenfen!='\0';i++)
	fscanf(fp,"%d%s%s",&yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
	fclose(fp);
	printf("\n\n\n\n\n                                         ������ѡ��(������1����,����0����):");
	scanf("%d",&b);
	if(b==0)
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
	printf("                                         ������ԭ����:");
	miwenshuru(yuanmima);
	for(i=0;yanzheng[i].shenfen!='\0';i++)
		 if(strcmp(zh,yanzheng[i].zhanghao)==0&&strcmp(yuanmima,yanzheng[i].mima)==0)
			 {   
			     
			     printf("                                         ������������:");
                 miwenshuru(yanzheng[i].mima);
                 
				 printf("\t\t\t              ���Ƿ񱣴�(������1���棬����0������):");
                 scanf("%d",&b);
                 if(b==1)
				 {
                 if((fp=fopen("zhanghaomima.txt","w"))==NULL)
					{ 
		            printf("can not");
	             	exit(0);
					}
				 for(i=0;yanzheng[i].shenfen!='\0';i++)
                 fprintf(fp,"%d %s %s \n",yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
				 fclose(fp);
				 printf("                                                 (���ĳɹ�)\n");
	             printf("                                         �����������ַ�����һ��:");
	             scanf("%d",&b);
	             switch(sf)
				 {
	            	case 1:guanli();break;
	            	case 2:jiaoshi();break;
	            	case 3:xuesheng();break;
				 }
				 canshua=1;
		         break;
				 }
				 else
                 switch(sf)
				 {
	            	case 1:guanli();break;
	            	case 2:jiaoshi();break;
	            	case 3:xuesheng();break;
				 }
			 }	      	 
    if(canshua!=1)
    mimagenggai();
}
void chengjiluru()
{
	system("cls");
	int i;
	int canshua=0;
	int b;
    canshue luru;
	FILE *fp;
	if((fp=fopen("chengji.txt","a"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	printf("\n\n\n\n\n");
    printf("                                         ������ѧ��:");
    scanf("%s",luru.xuehao) ;
	printf("\n");
    printf("                                         �������Ŀ�ͳɼ�:");
    scanf("%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d",
		   luru.kemu1 ,&luru.fenshu1,luru.kemu2 ,&luru.fenshu2,luru.kemu3 ,&luru.fenshu3,
		   luru.kemu4 ,&luru.fenshu4,luru.kemu5 ,&luru.fenshu5,luru.kemu6 ,&luru.fenshu6,
		   luru.kemu7 ,&luru.fenshu7,luru.kemu8 ,&luru.fenshu8);
	printf("\n");
    printf("\t\t\t              ���Ƿ񱣴�(������1���棬����0������):");
	scanf("%d",&b);
	if(b==1)
    {
		fprintf(fp,"%s %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d \n",luru.xuehao ,
		luru.kemu1 ,luru.fenshu1,luru.kemu2 ,luru.fenshu2,luru.kemu3 ,luru.fenshu3,luru.kemu4 ,luru.fenshu4,
		luru.kemu5 ,luru.fenshu5,luru.kemu6 ,luru.fenshu6,luru.kemu7 ,luru.fenshu7,luru.kemu8 ,luru.fenshu8);
        fclose(fp);
        printf("\n"); 
		printf("                                                 (����ɹ�)\n");
		printf("\n");
	    printf("                                         �����������ַ�����һ��:");
	    scanf("%d",&b);
	    switch(sf)
		{
	     	case 1:guanli();break;
	    	case 2:jiaoshi();break;
	    	case 3:xuesheng();break;
		}
	}
	else
    switch(sf)
		{
	     	case 1:guanli();break;
	    	case 2:jiaoshi();break;
	    	case 3:xuesheng();break;
		}

}

void zhanghaotianjia()
{
	system("cls");
	printf("\n\n\n");
	int i;
	int b;
    canshuc tianjia;
	FILE *fp;
	if((fp=fopen("zhanghaomima.txt","a"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	printf("\n\n\n");
    printf("                                         ������Ҫ��ӵ���ݣ�");
    scanf("%d",&tianjia.shenfen );	
	printf("\n");
	printf("                                         ������Ҫ��ӵ�ѧ�ţ�");
    scanf("%s",tianjia.zhanghao );
    printf("\n");
	printf("                                         ������Ҫ��ӵ����룺");
    scanf("%s",tianjia.mima );
    printf("\n");  

    printf("\t\t\t              ���Ƿ񱣴�(������1���棬����0������) :");
	scanf("%d",&b);
	printf("\n");
	if(b==1)
    {
		fprintf(fp,"%d %s %s \n",tianjia.shenfen ,tianjia.zhanghao ,tianjia.mima );
       	fclose(fp);
		printf("                                                 (��ӳɹ�)\n");
		printf("\n");
	    printf("                                         �����������ַ�����һ��:");
	    scanf("%d",&b);
	    switch(sf)
		{
	     	case 1:guanli();break;
	    	case 2:jiaoshi();break;
	    	case 3:xuesheng();break;
		}
	}
	else
    switch(sf)
		{
	     	case 1:guanli();break;
	    	case 2:jiaoshi();break;
	    	case 3:xuesheng();break;
		}

}
void chengjichaxun()
{
    system("cls");
	int i,b;
	FILE *fp;
    canshue chengji[1000];
	if((fp=fopen("chengji.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;i<1000;i++)
	   fscanf(fp,"%s%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d",chengji[i].xuehao ,
	          chengji[i].kemu1 ,&chengji[i].fenshu1,chengji[i].kemu2 ,&chengji[i].fenshu2,
	          chengji[i].kemu3 ,&chengji[i].fenshu3,chengji[i].kemu4 ,&chengji[i].fenshu4,
	          chengji[i].kemu5 ,&chengji[i].fenshu5,chengji[i].kemu6 ,&chengji[i].fenshu6,
	          chengji[i].kemu7 ,&chengji[i].fenshu7,chengji[i].kemu8 ,&chengji[i].fenshu8);
   	fclose(fp);
	for(i=0;i<1000;i++)
	if(strcmp(zh,chengji[i].xuehao)==0)
			 {       	
				 printf("\n\n\n\n\n                                              %s\n\n",chengji[i].xuehao );				     	
				 printf("                                              %s:%d\n",chengji[i].kemu1 ,chengji[i].fenshu1);		     	
				 printf("                                              %s:%d\n",chengji[i].kemu2 ,chengji[i].fenshu2);
				 printf("                                              %s:%d\n",chengji[i].kemu3 ,chengji[i].fenshu3);
				 printf("                                              %s:%d\n",chengji[i].kemu4 ,chengji[i].fenshu4);
				 printf("                                              %s:%d\n",chengji[i].kemu5 ,chengji[i].fenshu5);
				 printf("                                              %s:%d\n",chengji[i].kemu6 ,chengji[i].fenshu6);
				 printf("                                              %s:%d\n",chengji[i].kemu7 ,chengji[i].fenshu7);
				 printf("                                              %s:%d\n\n",chengji[i].kemu8 ,chengji[i].fenshu8);
		         break;
			 }	   
    printf("                                        �����������ַ�����һ��:");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
}
void zhanghaoshanchu()
{
    system("cls");
	int i,j,k,b;
	int canshua=0;
	char zhanghao[11];
	FILE *fp;
	if((fp=fopen("zhanghaomima.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;yanzheng[i].shenfen!='\0';i++)
	fscanf(fp,"%d%s%s",&yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
	fclose(fp);
	printf("\n\n\n\n\n");
	printf("                                         ������ѡ��(������1����,����0����):");
	scanf("%d",&b);
	if(b==0)
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
	printf("\n");
	printf("                                         ������Ҫɾ�����˺�:");
	scanf("%s",&zhanghao);
	printf("\n");
	for(i=0;i<1000;i++)
		 if(strcmp(zhanghao,yanzheng[i].zhanghao)==0)
			 {   
			      canshug xinxi[1000];
	              if((fp=fopen("xinxi.txt","r"))==NULL)
				  { 
		              printf("can not");
		              exit(0);
				  }
             	 for(k=0;k<1000;k++)
	             fscanf(fp,"%s%s%s%s",xinxi[k].xuehao,xinxi[k].xingming ,xinxi[k].xueyuan ,xinxi[k].banji);
                 for(k=0;k<1000;k++)
	             if(strcmp(zhanghao,xinxi[k].xuehao)==0)
				 {       	
				     printf("                                         ѧ�ţ�%s\n                                         ������%s\n                                         ѧԺ��%s\n                                         �༶��%s\n\n", 
					    xinxi[k].xuehao,xinxi[k].xingming ,xinxi[k].xueyuan ,xinxi[k].banji); 
		             break;
				 }
				 fclose(fp);
			     printf("                                         �Ƿ�ɾ��������1ɾ��������0��ɾ������");
				 scanf("%d",&b);
                 if(b==1)
				 {
			     for(j=i;yanzheng[j].shenfen!='\0';j++)
				 {
				    yanzheng[j].shenfen=yanzheng[j+1].shenfen;
				    strcpy(yanzheng[j].zhanghao,yanzheng[j+1].zhanghao);			    
				    strcpy(yanzheng[j].mima,yanzheng[j+1].mima);
				 }
			     if((fp=fopen("zhanghaomima.txt","w"))==NULL)
					{ 
		            printf("can not");
	             	exit(0);
					}
                 for(i=0;yanzheng[i].shenfen!='\0';i++)
                 fprintf(fp,"%d %s %s \n",yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
				 fclose(fp);
				 canshua=1;
		         break;
				 }
				 else
                 switch(sf)
				 {
	            	case 1:guanli();break;
	            	case 2:jiaoshi();break;
	            	case 3:xuesheng();break;
				 }
			 }	      	 
    if(canshua!=1)
    zhanghaoshanchu();
    printf("                                               (ɾ���ɹ�)\n");
    printf("                                         �����������ַ�����һ��\n");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
}

void xinxitianjia()
{
	system("cls");
	int i;
	int canshua=0;
	int b;
    canshug xinxi;
	FILE *fp;
	if((fp=fopen("xinxi.txt","a"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	printf("\n\n\n\n\n");
    printf("                                                 ������ѧ��:");
    scanf("%s",xinxi.xuehao);
    printf("\n");
    printf("                                                 ����������:");
    scanf("%s",xinxi.xingming);
    printf("\n");
    printf("                                                 ������ѧԺ:");
    scanf("%s",xinxi.xueyuan);
    printf("\n");
    printf("                                                 ������༶:");
    scanf("%s",xinxi.banji);	
	printf("\n");
	
	 printf("\t\t\t              ���Ƿ񱣴�(������1���棬����0������) :");
	scanf("%d",&b);	
	if(b==1)
    {
		fprintf(fp,"%s %s %s %s \n",xinxi.xuehao,xinxi.xingming,xinxi.xueyuan,xinxi.banji);
    fclose(fp);
    printf("\n");
	printf("                                                 (����ɹ�)\n");
	printf("\n");
	printf("                                           �����������ַ�����һ��:");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
	}
	else
    switch(sf)
		{
	     	case 1:guanli();break;
	    	case 2:jiaoshi();break;
	    	case 3:xuesheng();break;
		}
	

}

void xinxichaxun()
{
    system("cls");
	int i,b;
	FILE *fp;
    canshug xinxi[1000];
	if((fp=fopen("xinxi.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;i<1000;i++)
	   fscanf(fp,"%s%s%s%s",xinxi[i].xuehao,xinxi[i].xingming ,xinxi[i].xueyuan ,xinxi[i].banji);
   	for(i=0;i<1000;i++)
	if(strcmp(zh,xinxi[i].xuehao)==0)
			 {   
			 	printf("\n\n\n\n\n");    	
				printf("                                                 ѧ�ţ�%s\n", 
					    xinxi[i].xuehao); 
				printf("                                                 ������%s\n", 
					    xinxi[i].xingming);
				printf("                                                 ѧԺ��%s\n", 
					    xinxi[i].xueyuan );
				printf("                                                 �༶��%s\n", 
					    xinxi[i].banji);
		         break;
			 }	   
   	fclose(fp);
	printf("\n\n");
	printf("                                           �����������ַ�����һ��:");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
}

void chaxunmima()
{
    system("cls");
	int i,b;
	int canshua=0;
	char chaxunmima[19];
	FILE *fp;
	if((fp=fopen("zhanghaomima.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;yanzheng[i].shenfen!='\0';i++)
	fscanf(fp,"%d%s%s",&yanzheng[i].shenfen,yanzheng[i].zhanghao,yanzheng[i].mima);
	fclose(fp);
	printf("\n\n\n\n\n                                         ������ѡ��(������1����,����0����):");
	scanf("%d",&b);
	if(b==0)
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
	printf("                                         �˺�:");
	scanf("%s",&chaxunmima);
    for(i=0;i<1000;i++)
	if(strcmp(chaxunmima,yanzheng[i].zhanghao)==0)
	{
		printf("                                         ����:%s\n",yanzheng[i].mima);
        canshua=1;
		break;
	}
  
	printf("                                         �����������ַ�����һ��:");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}

}
void chaxunchengji()
{
    system("cls");
	int i,b;
	FILE *fp;
	char chaxunxuehao[11];
    canshue chengji[1000];
	if((fp=fopen("chengji.txt","r"))==NULL)
	{ 
		 printf("can not");
		 exit(0);
	}
	for(i=0;i<1000;i++)
	   fscanf(fp,"%s%s%d%s%d%s%d%s%d%s%d%s%d%s%d%s%d",chengji[i].xuehao ,
	          chengji[i].kemu1 ,&chengji[i].fenshu1,chengji[i].kemu2 ,&chengji[i].fenshu2,
	          chengji[i].kemu3 ,&chengji[i].fenshu3,chengji[i].kemu4 ,&chengji[i].fenshu4,
	          chengji[i].kemu5 ,&chengji[i].fenshu5,chengji[i].kemu6 ,&chengji[i].fenshu6,
	          chengji[i].kemu7 ,&chengji[i].fenshu7,chengji[i].kemu8 ,&chengji[i].fenshu8);
   	fclose(fp);
	printf("\n\n\n\n\n                                        �������ѯѧ��");
    scanf("%s",&chaxunxuehao);
	for(i=0;i<1000;i++)
	if(strcmp(chaxunxuehao,chengji[i].xuehao)==0)
			 {       	
				 printf("                                              %s\n\n",chengji[i].xuehao );				     	
				 printf("                                              %s:%d\n",chengji[i].kemu1 ,chengji[i].fenshu1);		     	
				 printf("                                              %s:%d\n",chengji[i].kemu2 ,chengji[i].fenshu2);
				 printf("                                              %s:%d\n",chengji[i].kemu3 ,chengji[i].fenshu3);
				 printf("                                              %s:%d\n",chengji[i].kemu4 ,chengji[i].fenshu4);
				 printf("                                              %s:%d\n",chengji[i].kemu5 ,chengji[i].fenshu5);
				 printf("                                              %s:%d\n",chengji[i].kemu6 ,chengji[i].fenshu6);
				 printf("                                              %s:%d\n",chengji[i].kemu7 ,chengji[i].fenshu7);
				 printf("                                              %s:%d\n\n",chengji[i].kemu8 ,chengji[i].fenshu8);
		         break;
			 }	   
    printf("                                        �����������ַ�����һ��:");
	scanf("%d",&b);
	switch(sf)
	{
	   	case 1:guanli();break;
		case 2:jiaoshi();break;
		case 3:xuesheng();break;
	}
}

void miwenshuru(char *miwen)
{
char ch = 0;
int i = 0;
while(i<18)
{
ch = getch();

if(ch == '\r')
{ 
printf("\n");
break;
}
if(ch=='\b' && i>0)
{ 
i--;
printf("\b \b");
}
else
{ 
printf("%c",ch);
Sleep(500);
printf("\b");
miwen[i] = ch;
printf("*");
i++;
}
}
miwen[i] = 0;
}

