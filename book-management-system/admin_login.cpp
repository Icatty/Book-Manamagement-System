#include <stdio.h>
void star(){
	printf("\t\t\t  �����������������������������������\n");
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
	scanf("%d",&input_password);
	if(input_password==admin_password){
		return 1;
	}else{
		return 0;
	}
}
int check(int n){
	if(n==0){
		printf("������󣬵�¼ʧ��"); 
		return 0;
	}else{
		printf("��¼�ɹ�"); 
		return 1;
	}
}
int admin_checkin(){
	int a=0;
	a=login_admin();
	a=check(a);
	return a;
}
int main(){
	int a=0;
	a=admin_checkin();
	getchar(); 
	return 0;
}
