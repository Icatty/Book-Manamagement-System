#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h> 
#include<stdio.h>//
#include<stdlib.h>//
#include<string.h>
#include<time.h>
#include<Windows.h>//��ɫ����
//#define FilePath "couen.txt"
void guihuan(struct book *head);
struct d
{
char name[100];
char mima[100];
};
d p, q, m;
typedef struct enter
{
d xx;
struct enter *next;
}E;
char root[] = "root";
char roo[] = "123";
void en()
{


FILE *fp;
d bookinfo[20];
d l;
int n = 1, x = 1;
int g = 0;
int booknumber = 0;
if ((fp = fopen("couen.txt", "rb")) == NULL)
printf("ʧ��");


while (!feof(fp))
{
fread(&bookinfo[booknumber], sizeof(d), 1, fp);
booknumber++;
}
booknumber--;
fclose(fp);
while (n)
{
char a[100], b[100];
printf(" ����������û���           \n");
scanf("%s", a);
printf(" �������������           \n");
scanf("%s", b);
system("cls");
/*booknumber--;ʹ��feof()��������һ�У������Ҫbooknumber�Լ�һ�Σ�ʹ��Ŀ��������ȷ*/
strcpy(l.name, a);
strcpy(l.mima, b);
system("pause");
for (g = 0; g <= booknumber; g++)
{


if (strcmp(l.name, bookinfo[g].name) == 0 && strcmp(l.mima, bookinfo[g].mima) == 0)
{
printf("��֤��ȷ\n");
system("cls");
printf("���ڽ���ϵͳ���Ժ�.\n");
_sleep(500);
system("cls");
printf("���ڽ���ϵͳ���Ժ�..\n");
_sleep(500);
system("cls");
printf("���ڽ���ϵͳ���Ժ�...\n");
_sleep(500);
system("cls");
printf("���ڽ���ϵͳ���Ժ�.\n");
_sleep(500);
system("cls");
printf("���ڽ���ϵͳ���Ժ�..\n");
_sleep(500);
system("cls");
printf("���ڽ���ϵͳ���Ժ�...\n");
n = 0;
x = 2;
break;
system("cls");
}
}
if (x == 1)
{
printf("�����˻��������Ƿ���ȷ\n");
printf("Ȼ����������\n");
system("pause");
}
}
}
void zc()
{
int t = 1;
E *hea;
char a[100], b[100], c[] = "123";
FILE* fp;
if ((fp = fopen("couen.txt", "ab")) == NULL)
{
printf("�޷������������ļ���\n");
return;
}
fp = fopen("couen.txt", "ab");
printf(" ����������Ҫ�ĵ��û���      \n");
scanf("%s", a);
printf(" ����������Ҫ������           \n");
scanf("%s", b);
strcpy(p.name, a);
strcpy(p.mima, b);
fwrite(&p, sizeof(d), 1, fp);
fclose(fp);
}
struct book {
int num;
char bname[50];
char wname[20];
char press[50];
char sort[50];
int time;
float price;
int islended;
int counter;
struct book *next;
};
int gotoxy(int x, int y)
{
HANDLE hout;
COORD coord;
coord.X = x;
coord.Y = y;
hout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hout, coord);
return 0;
}
void jieshu(struct book *head);
void paixu();
struct book *creatbook();                          //��������
struct book *addbook(struct book *head);           //���ͼ��
int yanzheng(struct book *head, int m);             //��֤����ӵ�ͼ������Ƿ��Ѵ���
void deletebook(struct book *head);                //ɾ��ͼ��
void fprint(struct book *head);                    //������д���ļ�
struct book *load();                               //���ļ��ж�ȡ��Ϣ����������
void print_book(struct book *head);                //��������Ϣ���
void chaxun(struct book *head);                    //��ѯͼ����Ϣ
void num_chaxun(struct book *head);                //��ͼ���Ų�ѯͼ��
void wname_chaxun(struct book *head);              //����������ѯͼ��
void sort_chaxun(struct book *head);               //������ѯͼ��
void time_chaxun(struct book *head);               //������ʱ���ѯͼ��
void bname_chaxun(struct book *head);              //��ͼ������ѯͼ��
void xiugai(struct book *head);                    //�޸�ͼ����Ϣ
int main()
{
int m, cv = 1;
system("color 4a");
printf("\n\n\n\n\n");
printf(" \t\t\t             ��¼����           \n\n");
printf(" \t\t\t|----------------------------|\n");
printf(" \t\t\t| ���˻��ɵ�¼����û����ע�� | \n");
printf(" \t\t\t|           �� 1�����¼     | \n");
printf(" \t\t\t|           �� 2����ע��     | \n");
printf(" \t\t\t|           �� 3��������¼   |\n");
printf(" \t\t\t|----------------------------|\n");


while (cv)
{
scanf("%d", &m);
switch (m)
{
case 1:
en();
cv = 0;
break;
case 2:zc();
cv = 0;
printf("ע��ɹ����Զ��˳������µ�¼\n");
system("pause");
exit(1);
break;;
case 3:
printf("��1 ΢�ŵ�¼\n");
printf("��2 qq��¼\n");
printf("��3 ΢����¼\n");
system("pause");
printf("��Ȼ��ƭ�����\n");
system("pause");
cv = 0;
exit(1);
break;
default:
printf("�����������������\n");
break;
}
}
char key, z;
int o = 40, p = 4;
int choice, x;
char a, d, b[10], b1[10], c1[10], c[10];
struct book *head = NULL;
while (1)
{
system("cls");
system("color 4a");
printf("\n");
system("cls");
system("color 4a");


printf(" ----------------------ͼ�����ϵͳ-----------------------\n");
printf(" ---------------------------------------------------------\n");


printf("       |\t\t   1 ���ͼ��\t\t\t\t|\n");
printf("       |\t\t   2 ɾ��ͼ��\t\t\t\t|\n");
printf("       |\t\t   3 ͼ���б�\t\t\t\t|\n");
printf("       |\t\t   4 ��ѯͼ��\t\t\t\t|\n");
printf("       |\t\t   5 �޸�ͼ��\t\t\t\t|\n");
printf("       |\t\t   6 ¼������\t\t\t\t|\n");
printf("       |\t\t   7 ����ͼ��\t\t\t\t|\n");
printf("       |\t\t   8 �黹ͼ��\t\t\t\t|\n");
printf("       |\t\t   9 ��������\t\t\t\t|\n");
printf("       |\t\t   0 �˳�ϵͳ\t\t\t\t|\n");
printf(" ---------------------------------------------------------\n");
printf("\t\t\t\t��������ѡ������:");
scanf("%d", &choice);
getchar();
system("cls");
switch (choice)
{
case 7:
head = load();
jieshu(head);
fprint(head);
getchar();
break;
case 8:
head = load();
guihuan(head);
fprint(head);
system("pause");
break;
case 9:
head = load();
paixu();
fprint(head);
getchar();
break;
case 0:
x = 0; break;
case 1:
head = load();
if (head == NULL) {
printf("�ļ�Ϊ��,����¼������!\n");
getchar();
break;
}
else {
head = addbook(head);
printf("��ӳɹ�!\n");
printf("�Ƿ�����Ϣ���浽�ļ�?(e/n)\n");
scanf("%c", &a);
getchar();
switch (a) {
case 'n':
break;
case 'e':
fprint(head);
printf("����ɹ�!\n");
getchar();
break;
}
break;
}


case 2:
head = load();
if (head == NULL) {
printf("�ļ�Ϊ��,����¼������!\n");
getchar();
break;
}


else {
deletebook(head);
getchar();
break;
}
break;
case 3:
head = load();
if (head == NULL) {
printf("�ļ�Ϊ��,����¼������!\n");
getchar();
break;
}
else {
print_book(head);
getchar();
break;
}


case 4:
head = load();
if (head == NULL) {
printf("�ļ�Ϊ��,����¼������!\n");
getchar();
break;
}
else {
chaxun(head);
getchar();
}
break;
case 5:
head = load();
if (head == NULL) {
printf("�ļ�Ϊ��,����¼������!\n");
getchar();
break;
}
else {
xiugai(head);
getchar();
break;
}
break;
case 6:
printf("ע��:����ͼ�����Ϊ0ʱ����!\n");
head = creatbook();
printf("�Ƿ��������Ϣ���浽�ļ��Ը����ļ����Ѵ��ڵ���Ϣ?(e/n)\n");
getchar();
scanf("%c", &a);
getchar();
switch (a) {
case 'n':
break;
case 'e':
fprint(head);
printf("����ɹ�!\n");
getchar();
break;
}
break;
default:
printf("������������,����������!\n");
getchar();
break;
}
}
}
//¼�����ݲ��γ�����


void paixu()
{
struct book *ptr;
struct book *list;
list = load();
struct book *p, *q;


int t;
int num;
char bname2[50];
for (p = list; p != NULL; p = p->next)


{


for (q = p->next; q != NULL; q = q->next)


{


if (p->counter<q->counter)//���� 


{


t = q->counter;


q->counter = p->counter;


p->counter = t;


t = q->num;
q->num = p->num;
p->num = t;


strcpy(bname2, p->bname);
strcpy(p->bname, q->bname);
strcpy(q->bname, bname2);






}


}


}
ptr = list;
while (ptr)
{
printf(" ���\tͼ����\t����\n");
printf(" %d\t%s\t%d\n", ptr->num, ptr->bname, ptr->counter);
ptr = ptr->next;
}




}
struct book *creatbook()
{
char r[50];
char ro[50];
printf("��Ҫ����ԱȨ��\n���¼\n");
printf("�˻�\n");
scanf("%s", r);
printf("����\n");
scanf("%s", ro);
if (strcmp(r, root) != 0 && strcmp(roo, ro) != 0)
{
printf("�㲻�ǹ���Ա\nϵͳ���Զ��˳�");
system("pause");
exit(1);
}
struct book *head, *tail, *p;
int num, time, n;
char bname[50], wname[20], press[50], sort[50];
float price;
int size = sizeof(struct book);
head = tail = NULL;
printf("������ͼ����:");
scanf("%d", &num);
printf("������ͼ����:");
scanf("%s", bname);
getchar();
printf("������������:");
scanf("%s", wname);
getchar();
printf("�����������:");
scanf("%s", press);
getchar();
printf("���������:");
scanf("%s", sort);
getchar();
printf("���������ʱ��:");
scanf("%d", &time);
getchar();
printf("������۸�:");
scanf("%f", &price);


getchar();
while (1) {
p = (struct book *)malloc(size);
p->num = num;
strcpy(p->bname, bname);
strcpy(p->wname, wname);
strcpy(p->press, press);
strcpy(p->sort, sort);
p->time = time;
p->price = price;
p->counter = 0;
p->next = NULL;
if (head == NULL)
head = p;
else
tail->next = p;
tail = p;
do {
printf("������ͼ����:");
scanf("%d", &num);
n = yanzheng(head, num);
if (n == 0)
break;
else
printf("������ı���Ѵ���,����������!\n");
} while (1);
if (num == 0)
break;
else
{
printf("������ͼ����:");
scanf("%s", bname);
getchar();
printf("������������:");
scanf("%s", wname);
getchar();
printf("�����������:");
scanf("%s", press);
getchar();
printf("���������:");
scanf("%s", sort);
getchar();
printf("���������ʱ��:");
scanf("%d", &time);
getchar();
printf("������۸�:");
scanf("%f", &price);
getchar();
}
}
return head;
}


//����ڵ㣬���Ҳ�����԰�һ��˳��
struct book *addbook(struct book *head)
{
char r[50];
char ro[50];
printf("��Ҫ����ԱȨ��\n���¼\n");
printf("�˻�\n");
scanf("%s", r);
printf("����\n");
scanf("%s", ro);
if (strcmp(r, root) != 0 && strcmp(roo, ro) != 0)
{
printf("�㲻�ǹ���Ա\nϵͳ���Զ��˳�");
system("pause");
exit(1);
}
struct book *ptr, *p1, *p2, *p;
char bname[50], wname[20], press[50], sort[50];
int size = sizeof(struct book);
int num, time, n = 1;
float price;
do {
printf("������ͼ����:");
scanf("%d", &num);
n = yanzheng(head, num);
if (n == 0)
break;
else
printf("������ı���Ѵ���,����������!\n");
} while (1);
printf("������ͼ����:");
scanf("%s", bname);
getchar();
printf("������������:");
scanf("%s", wname);
getchar();
printf("�����������:");
scanf("%s", press);
getchar();
printf("���������:");
scanf("%s", sort);
getchar();
printf("���������ʱ��:");
scanf("%d", &time);
getchar();
printf("������۸�:");
scanf("%f", &price);
getchar();
p = (struct book *)malloc(size);
p->num = num;
strcpy(p->bname, bname);
strcpy(p->wname, wname);
strcpy(p->press, press);
strcpy(p->sort, sort);
p->time = time;
p->price = price;
p->counter = 0;
p2 = head;
ptr = p;
while ((ptr->num>p2->num) && (p2->next != NULL)) {
p1 = p2;
p2 = p2->next;
}
if (ptr->num <= p2->num) {
if (head == p2)
head = ptr;
else {
p1->next = ptr;
p->next = p2;
}
}
else {
p2->next = ptr;
p->next = NULL;
}
return head;
}
//��֤��ӵ�ͼ�����Ƿ��Ѵ���
int yanzheng(struct book *head, int m)
{
struct book *p;
p = head;
while (p != NULL)
{
if (p->num == m)
break;
p = p->next;
}
if (p == NULL)
return 0;
else
return 1;
}




//���ļ��ж�ȡͼ����Ϣ
struct book *load()
{
FILE *fp;
char ch;
struct book *head, *tail, *p1;
head = tail = NULL;
if ((fp = fopen("f1.txt", "r")) == NULL) {
printf("File open error!\n");
exit(0);
}
ch = fgetc(fp);
if (ch == '1') {


while (!feof(fp)) {
p1 = (struct book *)malloc(sizeof(struct book));
fscanf(fp, "%d%s%s%s%s%d%f%d\n", &p1->num, p1->bname, p1->wname, p1->press, p1->sort, &p1->time, &p1->price, &p1->counter);
if (head == NULL)
head = p1;
else
tail->next = p1;
tail = p1;
}
tail->next = NULL;
fclose(fp);
return head;
}
else
return NULL;


}
//�������������Ϣ���
void print_book(struct book *head)
{
struct book *ptr;
if (head == NULL) {
printf("\nû����Ϣ!\n");
return;
}
printf("                                 ͼ����Ϣ����\n");
printf(" ==========================================================\n");
printf(" ���\tͼ����\t������\t������\t���\t����ʱ��\t�۸�\n");
for (ptr = head; ptr; ptr = ptr->next)
printf(" %d\t%s\t%s\t%s\t%s\t%d\t\t%.2f\n", ptr->num, ptr->bname, ptr->wname, ptr->press, ptr->sort, ptr->time, ptr->price);
printf(" ==========================================================\n");
}
//ɾ��ͼ����Ϣ
void deletebook(struct book *head)
{
char r[50];
char ro[50];
printf("��Ҫ����ԱȨ��\n���¼\n");
printf("�˻�\n");
scanf("%s", r);
printf("����\n");
scanf("%s", ro);
if (strcmp(r, root) != 0 && strcmp(roo, ro) != 0)
{
printf("�㲻�ǹ���Ա\nϵͳ���Զ��˳�");
system("pause");
exit(1);
}
int a;
char b, ch = '1';
struct book *p1, *p2;
FILE *fp;
printf("������Ҫɾ����ͼ����:");
scanf("%d", &a);
p1 = head;
if (p1->num == a&&p1->next == NULL) {          //�����ļ���ֻ��һ������
printf("�Ƿ�����ļ�!(y/n)\n");
getchar();
scanf("%c", &b);
getchar();
switch (b) {
case 'n':
break;
case 'y':


if ((fp = fopen("f1.txt", "w")) == NULL) {
printf("File open error!\n");
exit(0);
}
fclose(fp);
printf("�ļ������!\n");
}
}
else {
while (p1->num != a&&p1->next != NULL) {
p2 = p1;
p1 = p1->next;
}


if (p1->next == NULL) {
if (p1->num == a) {
p2->next = NULL;
printf("�Ƿ�ȷ�����ļ��г���ɾ����ͼ��?(y/n)\n");
getchar();
scanf("%c", &b);


switch (b) {
case 'n':
break;
case 'y':
fprint(head);
printf("ɾ���ɹ�!\n");
getchar();
break;
}
}


else {
printf("û���ҵ�Ҫɾ��������!\n");
getchar();
}
}
else if (p1 == head) {
head = p1->next;
printf("�Ƿ�ȷ�����ļ��г���ɾ����ͼ��?(y/n)\n");
getchar();
scanf("%c", &b);


switch (b) {
case 'n':
break;
case 'y':
fprint(head);
printf("ɾ���ɹ�!\n");
getchar();
break;
}


}
else {
p2->next = p1->next;
printf("�Ƿ�ȷ�����ļ��г���ɾ����ͼ��?(y/n)\n");
getchar();
scanf("%c", &b);


switch (b) {
case 'n':
break;
case 'y':
fprint(head);
printf("ɾ���ɹ�!\n");
getchar();
break;
}
}
}


}
//ͼ���ѯ
void chaxun(struct book *head)
{
int a;
printf("               ==========================================================\n");
printf("               |       1-��ͼ���Ų�ѯ        2-��ͼ������ѯ           | \n");
printf("               |       3-��ͼ������ѯ        4-����������ѯ           | \n");
printf("               |       5-������ʱ���ѯ        0-�˳���ѯ               | \n");
printf("               ==========================================================\n");
printf("��������ѡ��ı��:");
scanf("%d", &a);
getchar();
switch (a) {
case 0:
break;
case 1:
num_chaxun(head);
break;
case 2:
bname_chaxun(head);
break;
case 3:
sort_chaxun(head);
break;
case 4:
wname_chaxun(head);
break;
case 5:
time_chaxun(head);
break;
default:
printf("������������!\n");
break;
}
}
//����Ų�ѯͼ����Ϣ
void num_chaxun(struct book *head)
{
int a;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ����:");
scanf("%d", &a);
getchar();
p = head;
while (p != NULL) {
if (p->num == a)
break;
p = p->next;
}


if (p == NULL) {
printf("û���ҵ��ñ�ŵ�ͼ��!\n");
}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf("   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   \n");
printf("     %d        %s         %s         %s        %s        %d       %.2f  \n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
printf(" =========================================================================\n");
}
}


void jieshu(struct book *head)
{
int choice;
char a[50];
int flag = 0;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ����:");
scanf("%s", a);
p = head;


while (p != NULL) {
if (strcmp(p->bname, a) == 0) {
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (strcmp(p->bname, a) == 0) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
printf("�Ƿ�����鼮��\n");
printf("1 ��   2��\n");
scanf("%d", &choice);


switch (choice)


{
case 1:p->islended = 1;
printf("%d", p->counter);
p->counter++;
printf("%d", p->counter);
printf("���ĳɹ�\n");
break;
}
}
p = p->next;
}
printf(" =========================================================================\n");
}


}


//��������д���ļ���
void fprint(struct book *head)
{
FILE *fp;
char ch = '1';
struct book *p1;
if ((fp = fopen("f1.txt", "wb")) == NULL) {
printf("File open error!\n");
exit(0);
}
fputc(ch, fp);
for (p1 = head; p1; p1 = p1->next) {
fprintf(fp, "%d %s %s %s %s %d %f %d\n", p1->num, p1->bname, p1->wname, p1->press, p1->sort, p1->time, p1->price, p1->counter);
}
fclose(fp);
}
//��ͼ������ѯͼ����Ϣ
void bname_chaxun(struct book *head)
{
char a[50];
int flag = 0;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ����:");
scanf("%s", a);
p = head;
while (p != NULL) {
if (strcmp(p->bname, a) == 0) {
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (strcmp(p->bname, a) == 0) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
}
p = p->next;
}
printf(" =========================================================================\n");
}


}
//����������ѯͼ����Ϣ
void wname_chaxun(struct book *head)
{
char a[50];
int flag = 0;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ��������:");
scanf("%s", a);
p = head;
while (p != NULL) {
if (strcmp(p->wname, a) == 0) {
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (strcmp(p->wname, a) == 0) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
flag = 1;
}
p = p->next;
}
printf(" =========================================================================\n");
}


}
//��ͼ������ѯͼ����Ϣ
void sort_chaxun(struct book *head)
{
char a[50];
int flag = 0;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ�����:");
scanf("%s", a);
p = head;
while (p != NULL) {
if (strcmp(p->sort, a) == 0) {
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (strcmp(p->sort, a) == 0) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
flag = 1;
}
p = p->next;
}
printf(" =========================================================================\n");
}
}
//��ͼ�����ʱ���ѯͼ����Ϣ
void time_chaxun(struct book *head)
{
int a, flag = 0;
struct book *p;
printf("��ѡ����Ҫ��ѯ��ͼ�����ʱ��:");
scanf("%d", &a);
getchar();
p = head;
while (p != NULL) {
if (p->time == a) {
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ������ѯ��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (p->time == a) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
flag = 1;
}
p = p->next;
}
printf(" =========================================================================\n");
}
}
//�޸�ͼ����Ϣ
void xiugai(struct book *head)
{
int a, b;
char c;
struct book *p;
printf("������Ҫ�޸ĵ�ͼ����:");
scanf("%d", &a);
p = head;
while (p != NULL) {
if (p->num == a)
break;
p = p->next;
}
if (p == NULL) {
printf("û���ҵ��ñ�ŵ�ͼ��!\n");
getchar();
}
else {
printf("              ============================================================\n");
printf("              |  1-���               2-ͼ����              3-������     |\n");
printf("              |  4-������             5-���                6-����ʱ��   |\n");
printf("              |  7-�۸�               8-�޸�ȫ��            0-�����޸�   |\n");
printf("              ============================================================\n");
printf("��ѡ����Ҫ�޸ĵ���Ϣ���:");
scanf("%d", &b);
getchar();
switch (b) {
case 1:
printf("�������±��:");
scanf("%d", &p->num);
printf("�޸ĳɹ�!\n");
getchar();
break;
case 2:
printf("��������ͼ����:");
scanf("%s", p->bname);
printf("�޸ĳɹ�!\n");
break;
case 3:
printf("��������������:");
scanf("%s", p->wname);
printf("�޸ĳɹ�!\n");
break;
case 4:
printf("�������³�����:");
scanf("%s", p->press);
printf("�޸ĳɹ�!\n");
break;
case 5:
printf("�����������:");
scanf("%s", p->sort);
printf("�޸ĳɹ�!\n");
break;
case 6:
printf("�������³���ʱ��:");
scanf("%d", &p->time);
printf("�޸ĳɹ�!\n");
getchar();
break;
case 7:
printf("�������¼۸�:");
scanf("%f", &p->price);
printf("�޸ĳɹ�!\n");
getchar();
break;
case 8:
printf("��������ͼ����:");
scanf("%d", &p->num);
printf("��������ͼ����:");
scanf("%s", p->bname);
getchar();
printf("��������������:");
scanf("%s", p->wname);
getchar();
printf("�������³�����:");
scanf("%s", p->press);
getchar();
printf("�����������:");
scanf("%s", p->sort);
getchar();
printf("�������³���ʱ��:");
scanf("%d", &p->time);
getchar();
printf("�������¼۸�:");
scanf("%f", &p->price);
getchar();
printf("�޸ĳɹ�!\n");
getchar();
break;
case 0:
break;
default:
printf("������������!\n");
break;
}
printf("�Ƿ��޸ĺ����Ϣ���浽�ļ���?(y/n)\n");
scanf("%c", &c);
getchar();
switch (c) {
case 'n':
break;
case 'y':
fprint(head);
printf("����ɹ�!\n");
getchar();
break;
}


}
}


void guihuan(struct book *head)    //�黹ͼ��
{
int cunzai = 0;
int choice;
char a[50];
int flag = 0;
struct book *p;
printf("��������Ҫ�黹��ͼ����:");
scanf("%s", a);
p = head;


while (p != NULL)
{
if (strcmp(p->bname, a) == 0)
{
flag = 1;
break;
}
p = p->next;
}
if (flag == 0) {
printf("û���ҵ���ͼ������ͼ��!\n");


}
else {
printf("                        ����Ҫ�黹��ͼ����Ϣ����\n");
printf(" =========================================================================\n");
printf(" **   ���    ͼ����    ������    ������    ���    ����ʱ��     �۸�   **\n");
while (p != NULL) {
if (strcmp(p->bname, a) == 0) {
printf(" **    %d        %s         %s        %s         %s       %d        %.2f  **\n", p->num, p->bname, p->wname, p->press, p->sort, p->time, p->price);
printf("�Ƿ�黹�鼮��\n");
printf("1 ��   2��\n");
scanf("%d", &choice);
switch (choice)
{
case 1:p->islended = 0;


printf("�黹�ɹ�\n");
break;
}
}
p = p->next;
}
}
} 

