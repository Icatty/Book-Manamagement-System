#include <stdio.h>
struct books{
	char book_name[20];
	char book_num[10];
	char writer[15];
	char place[15];
	char state[10];
}book[300];
int book_input(){//ͼ��¼��//û������ 
	FILE *p,*p2;
	p=fopen("bookstorage.txt","a+");
	if(p==NULL){
		printf("ERROR\n");
	} 
	p2=fopen("bookcheck.txt","a+");
	printf("����������\n");
	scanf("%s",&book[0].book_name);
	fprintf(p,"%s ",book[0].book_name);
	fprintf(p2,"%s ",book[0].book_name);
	printf("����������\n");
	scanf("%s",&book[0].writer);
	fprintf(p,"%s ",book[0].writer);
	fprintf(p2,"%s ",book[0].writer);
	printf("���������\n");
	scanf("%s",&book[0].book_num);
	fprintf(p,"%s ",book[0].book_num);
	printf("������λ��\n");
	scanf("%s",&book[0].place);
	fprintf(p,"%s\n",book[0].place);
	fprintf(p2,"1\n");
	fclose(p);
	return 0;
}
int book_amount(FILE*p){//����ͼ������ //û������ 
	int i=0;
	char a[20];
	for(i=0;(fgets(a,30,p))!=NULL;i++){
		//printf("%d\n",i);
	}
	return i;
}
int book_struct(FILE*p,int amount){//����鼮����ṹ��
	int i=0; 
	for(i=0;i<amount;i++){
	//	fscanf(p2,"s",book[i].book_name);
		fscanf(p,"%s",book[i].book_name);
	//	fscanf(p2,"s",book[i].writer);
		fscanf(p,"%s",book[i].writer);
	//	fscanf(p2,"s",book[i].book_num);
	//	fscanf(p2,"s",book[i].place);
		fscanf(p,"%s",book[i].state);
	}
}
int book_struct2(FILE*p2,int amount){//����鼮����ṹ��//û������ 
	int i=0; 
	for(i=0;i<amount;i++){
		fscanf(p2,"%s",book[i].book_name);
	//	fscanf(p,"s",book_ck[i].book_name);
		fscanf(p2,"%s",book[i].writer);
	//	fscanf(p,"s",book_ck[i].writer);
		fscanf(p2,"%s",book[i].book_num);
		fscanf(p2,"%s",book[i].place);
	//	fscanf(p,"d",book_ck[i].state);
	}
}
int book_print(int i){//ͼ��������� //û������ 
//	fscanf(p,"%s",book[i].book_name);
	printf("%-12s ",book[i].book_name);
//	fscanf(p,"%s",book[i].writer);
	printf("%-12s ",book[i].writer);
//	fscanf(p,"%s",book[i].book_num);
	printf("%-5s ",book[i].book_num);
//	fscanf(p,"%s",book[i].place);
	printf("%-5s\n",book[i].place);
	return 0;
} 
int book_struct_test(int amount){//�ṹ����Ժ��� 
	int i=0;
	for(i=0;i<amount;i++){
		book_print(i);
	}
}

int book_through(){//���ȫ��ͼ����Ϣ 
	int i=0,amount=0;
	char s[20];
	FILE *p;
	p=fopen("bookstorage.txt","r+");
	if(p==NULL){
		printf("ERROR\n");
	}
	amount=book_amount(p);
	if(book[amount].book_name!=s){
		book_struct2(p,amount);
		printf("����ṹ��2\n");
	}
	for(i=0;i<amount;i++){
		book_print(i);
	}
	printf("\t%d\n",amount);
	book_struct_test(amount);
	fclose(p);
	printf("%d\n",i);
}

char book_scan_none(char book_for[20]){//û�в�ѯ���鼮���ؽ������ 
	printf("\t\t\tû���ҵ�%s\n",book_for);
	printf("\t\t\t1.�����Ŀ\n");
	printf("\t\t\t2.�ٴβ�ѯ\n");
	printf("\t\t\t3.�����û���������\n");
}
char book_scan(){//ͼ����Һ��� 
	char book_for[20];
	int i=0,amount=0,choice=0;
	printf("\t\t\t1,������ѯ\n");
	printf("\t\t\t2,���߲�ѯ\n");
	scanf("%d",&choice);
	printf("\t\t\t��������Ҫ��ѯ������\n");
	scanf("%s",&book_for);
	FILE*p;
	FILE*p2;
	p=fopen("bookcheck.txt","r+");
	if(p==NULL){
		printf("ERROR\n");
	}
	p2=fopen("bookstorage.txt","r+");
	if(p2==NULL){
		printf("ERROR\n");
	}
	amount=book_amount(p);
		book_struct2(p2,amount);
		printf("����ṹ��2\n");
	

		book_struct(p,amount);
		printf("����ṹ��1\n");
	
	if(choice==1){//������ѯ 
		for(i=0;i<amount;i++){
			if(book[i].book_name==book_for){
				book_print(i);
				break;
				}
		}
		if(i==amount){
			book_scan_none(book_for);
		}
	}else
	{//���߲�ѯ 
		for(i=0;i<amount;i++){
			if(book[i].writer==book_for){
				book_print(i);
				break;
			}
		}
		if(i==amount){
			book_scan_none(book_for);
		}
	}
	fclose(p);
	fclose(p2);
}
int main(){
//	book_input();
	book_through();
	book_scan();
	getchar();
	return 0;
}
