#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
#define MAX 100
class kecheng           //�γ̱��� ģ��һ
{
public:                //��������
	void setvalue();      //���뺯��
	void showke();//�����������
	void showke1();
	string ming[16];     //�γ���
	string jiao[16];      //��ʦ��
	string di[16];       //���ҵص�
	int qi[16];         //�γ���ʼ��
	int jie[16];         //�γ̽�����
	int xing[16];       //����
	int tang[16];       //�ڼ���
}; 


void Evaluate();//�׶���ѧϰ���� 
int evaluate(int Smath,int Sphysics,int Scplusplus,int Spe,float GPA);//�׶���ѧϰ�����Ӻ��� 
class Student
{
private:
	string Name;
	string Number;
	string Sex;
	int Math;
	int Physics;
	int CPlusPlus;
	int PE;
public:
	void SetName();
	void SetNumber();
	void SetSex();
	void SetScore();
	void ShowName();
	void ShowNumber();
	void ShowSex();
	void ShowMScore();
	void ShowPScore();
	void ShowCScore();
	void ShowPEScore();
	void ChangeName();
	void ChangeNumber();
	void ChangeSex();
	void ChangeMScore();
	void ChangePScore();
	void ChangeCScore();
	void ChangePEScore();
	void load();
	string name();
	string number();
	int math();
	int physics();
	int cplusplus();
	int pe(); 
	kecheng ke; 
	float count_GPA();
}student2[MAX];      //�������飬�����Ӹ��� 
int m,n,o;             //���ѡ�����ʱ��������,���ظ�ʹ�� 
string a,b,c,d;        //�������������ѧ�ţ�
int i,x=0;             //forѭ�������������ñ��������ظ�ʹ�� 
int q;                 //ȷ������λ��ʱ���õı��������ظ�ʹ�� 
void set();//������Ϣ¼�� 
void xiugai(); //������Ϣ�޸��Ӻ��� 
void change();//������Ϣ�޸� 
void chaxun();//������Ϣ��ѯ�Ӻ��� 
void query();//������Ϣ��ѯ 
void kecheng_input();//�γ̱�����
void kecheng_output();//�γ̱����
void kecheng_outputfile();//�γ̱�������ļ� 
class Student1{
	private:
		string student_name;
	    int student_number;
	    int morality_score; //˼����������������� 
	    int volunteer_score; //���ʵ����־Ը����� 
	    int academic_score; //�Ƽ�ѧ���봴�´�ҵ�� 
	    int physics_score; //�������������ķ�չ�� 
	    int club_score; //���Ż����Ṥ���� 
	    int skill_score; //������ѵ�������� 
	    int SecondScore; //�ڶ������ܷ� 
	public:
		void get_name(string name); //�޸�˽����������
		void get_number(int number); //�޸�˽������ѧ�� 
		void get_morality(int morality); //�޸�˽������˼����������������� 
		void get_volunteer(int volunteer); //�޸�˽���������ʵ����־Ը����� 
		void get_academic(int academic); //�޸�˽�����ݿƼ�ѧ���봴�´�ҵ�� 
		void get_physics(int physics); //�޸�˽�������������������ķ�չ�� 
		void get_club(int club); //�޸�˽���������Ż����Ṥ���� 
		void get_skill(int skill); //�޸�˽�����ݼ�����ѵ�������� 
		void count(); //���㲢�޸ĵ������ܷ� 
		string back_name(); //��������
		int back_number(); //����ѧ��
		int back_SecondScore(); //���صڶ������ܷ�
		int display_SecondScore(); //��ʾ�ڶ����÷��� 
};
Student1 student[MAX];
int MoralityScore(int a,int b,int c, int d,int e); //����˼�����������������
int VolunteerScore(int a,int b,int c,int d); //�������ʵ����־Ը����� 
int AcademicScore(int a,int b,int c,int d); //����Ƽ�ѧ���봴�´�ҵ�� 
int PhysicsScore(int a,int b, int c,int d,int e,int f); //�����������������ķ�չ�� 
int ClubScore(int a,int b,int c); //�������Ż����Ṥ����  
int SkillScore(int a,int b,int c,int d); //���㼼����ѵ�������� 
int Input_SecondScore(int x);  //�޸ĵ�����
void Input_SecondScore_void(int y);  //���������
void Input_MoralityScore(int x);  //����˼�������������������
void Input_VolunteerScore(int x);  //�������ʵ����־Ը���񲿷�
void Input_AcademicScore(int x);  //����Ƽ�ѧ���봴�´�ҵ����
void Input_PhysicsScore(int x);  //�����������������ķ�չ����
void Input_ClubScore(int x);  //�������Ż����Ṥ������
void Input_SkillScore(int x); //���뼼����ѵ����������
void load(); //���������ݳ�ʼ�� 
int delect_student(int x); //ɾ��ѧ����Ϣ 
void alter_SecondScore(); //���������˵���ѡ�˵���ѡ����Ҷ���ʽ���޸ĵ����� 
void log_SecondScore(); //���������˵�¼��ѡ�¼������� 
void Delect(); //���������˵�ɾ��ѡ��
void output(); //���������˵����ѡ�� 
void Student1::get_name(string name) //�޸�˽����������
{
	student_name=name;
}
void Student1::get_number(int number) //�޸�˽������ѧ�� 
{
	student_number=number;
}
void Student1::get_morality(int morality) //�޸�˽������˼�����������������
{
	morality_score=morality;
}  
void Student1::get_volunteer(int volunteer) //�޸�˽���������ʵ����־Ը�����
{
	volunteer_score=volunteer;
}
void Student1::get_academic(int academic) //�޸�˽�����ݿƼ�ѧ���봴�´�ҵ�� 
{
	academic_score=academic;
}
void Student1::get_physics(int physics) //�޸�˽�������������������ķ�չ�� 
{
	physics_score=physics;
}
void Student1::get_club(int club) //�޸�˽���������Ż����Ṥ����
{
	club_score=club;
}
void Student1::get_skill(int skill) //�޸�˽�����ݼ�����ѵ��������
{
	skill_score=skill;
}
void Student1::count() //���㲢�޸ĵ������ܷ� 
{
	SecondScore=3*morality_score+2*volunteer_score+3*academic_score+2*physics_score+2*club_score+skill_score;
}
string Student1::back_name() //��������
{
	return student_name;
}
int Student1::back_number() //����ѧ��
{
	return student_number;
}
int Student1::back_SecondScore() //���صڶ������ܷ�
{
	return SecondScore;
} 
int Student1::display_SecondScore() //��ʾ�ڶ����÷���
{
	cout<<endl<<"��Ҫ���ҵ�ѧ����Ϣ����"<<endl;
	cout<<"������"<<student_name<<endl;
	cout<<"ѧ�ţ�"<<student_number<<endl;
	cout<<"***�ڶ����õ����ֲ���***"<<endl;
	cout<<"˼����������������÷֣� "<<morality_score<<endl;
	cout<<"���ʵ����־Ը����÷֣�"<<volunteer_score<<endl;
	cout<<"�Ƽ�ѧ���봴�´�ҵ�÷֣�"<<academic_score<<endl;
	cout<<"�������������ķ�չ�÷֣�"<<physics_score<<endl;
	cout<<"���Ż����Ṥ���÷֣�"<<club_score<<endl;
	cout<<"������ѵ�������÷֣�    "<<skill_score<<endl;
	cout<<"�ڶ������ܷ֣�          "<<SecondScore<<endl;
	cout<<endl<<"��������Ϣ������"<<endl;
	int a;
	for(;1;)
	{
		cout<<endl<<"1.�����ϼ��˵�"<<endl;
	    cout<<"0.�������˵�"<<endl;
	    cin>>a;
	    if(a==1||a==0) break;
	    else cout<<"ѡ�����������ѡ��"<<endl; 
	}
	return a; 
} 
int MoralityScore(int a,int b,int c, int d,int e) //����˼������������������� 
{
	int score=0;
	if(a) score=10;
	if(!b) score+=30;
	score+=5*(4-c);
	if(d) score+=15;
	score+=5*e;
	return score;
}
int VolunteerScore(int a,int b,int c,int d) //�������ʵ����־Ը���񲿷� 
{
	int score=0;
	if(a) score=15;
	else score=20;
	if(b) score+=10;
	switch(c)
	{
		case 1:score+=30;break;
		case 2:score+=25;break;
		case 3:score+=0;break;
	}
	score+=2*d;
	return score;
}
int AcademicScore(int a,int b,int c,int d) //����Ƽ�ѧ���봴�´�ҵ���� 
{
	int score;
	score=5*a+10*b+5*c+5*d;
	return score;
}
int PhysicsScore(int a,int b, int c,int d,int e,int f) //�����������������ķ�չ���� 
{
	int score=0;
	score+=5*a;
	if(b==1) score+=15;
	else if(b==2) score+=10;
	     else score+=0; 
	if(c==1) score+=15;
	else if(c==2) score+=10;
	     else score+=0;
	if(d==1) score+=20;
	else if(d==2) score+=15;
	     else score+=0; 
	switch(e)
	{
		case 1:score+=20;break;
		case 2:score+=18;break;
		case 3:score+=10;break;
		case 4:score+=5;break;
	} 
	switch(f)
	{
		case 1:score+=15;break;
		case 2:score+=10;break;
		case 3:score+=8;break;
		case 4:score+=5;break;
		case 5:score+=0;break;	
	}
	return score;
}
int ClubScore(int a,int b,int c) //�������Ż����Ṥ������ 
{
	int score=0;
	if(a) score=35;
	switch(b)
	{
		case 1:score+=40;break;
		case 2:score+=30;break;
		case 3:score+=20;break;
		case 4:score+=15;break;
		case 5:score+=0;break;
	}
	switch(c)
	{
		case 1:score+=20;break;
		case 2:score+=15;break;
		case 3:score+=10;break;
		case 4:score+=5; break;
		case 5:score+=0;break; 
	}
	return score;
}
int SkillScore(int a,int b,int c,int d) //���㼼����ѵ���������� 
{
	int score=0;
	if(a) score=30;
	if(b) score+=30;
	if(c) score+=30;
	if(d) score+=30;
	if(score<100) return score;
	else return(100);
}
void alter_SecondScore() //���˵���ѡ�˵���ѡ����Ҷ���ʽ ���޸ĵ����� 
{
	int a=1,b,i,c=1,f=1;
	string d; 
	for(;a;)
	{
		cout<<endl<<"***��ѡ����Ҷ���ķ�ʽ***"<<endl;
		cout<<"1����ѧ�Ų���"<<endl;
		cout<<"2������������"<<endl;
		cout<<"0�����ص��������˵�"<<endl;
		c=1,f=1;
		cin>>a;
		switch(a)
		{
			case 1:{
				for(;c;)
				{
					cout<<"������ѧ�ţ�";
				    cin>>b;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_number()==b) 
					    {
						    cout<<"�����ҵ�ѧ��Ϊ��"<<student[i].back_number()<<endl;
						    cout<<"ѧ������Ϊ��    "<<student[i].back_name() <<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>c;
						        if(c==1)
						        {
						    	    cout<<"*�������������ϵͳ*"<<endl;
						    	    break;
							    }
							    else if(c==0)
							    {
							    	c=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1��������ѧ�ţ���2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) c=0;
						else if(g==3)
						{
							c=0;
							a=0;
						}	 
					}
				    if(c==1)
				    {
				    	int judge;
						judge=Input_SecondScore(i);
				    	if(judge==1) c=0;
				    	else if(judge==0)
				    	{
				    		c=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 2:{
				for(;f;)
				{
					cout<<"������ѧ��������";
				    cin>>d;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_name()==d) 
					    {
						    cout<<"�����ҵ�ѧ������Ϊ��"<<student[i].back_name()<<endl;
						    cout<<"ѧ��Ϊ��            "<<student[i].back_number()<<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>f;
						        if(f==1)
						        {
						    	    cout<<"*�������������ϵͳ*"<<endl;
						    	    break;
							    }
							    else if(f==0)
							    {
							    	f=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1����������������2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) f=0;
						else if(g==3)
						{
							f=0;
							a=0;
						}	 
					} 
				    if(f==1)
				    {
				    	int judge;
						judge=Input_SecondScore(i);
				    	if(judge==1) f=0;
				    	else if(judge==0)
				    	{
				    		f=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 0:break;
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;break;
		}
	} 
} 
int Input_SecondScore(int x) //�޸ĵ����� 
{
	int a=1,b;
	for(;a!=0;)
	{
		cout<<endl<<"***��ѡ������˵�ǰ�����***"<<endl;
		cout<<"1������˼�������������������"<<endl;
		cout<<"2���������ʵ����־Ը���񲿷�"<<endl;
		cout<<"3������Ƽ�ѧ���봴�´�ҵ����"<<endl;
		cout<<"4�������������������ķ�չ����"<<endl;
		cout<<"5���������Ż����Ṥ������" <<endl;
		cout<<"6�����뼼����ѵ����������"<<endl;
		cout<<"7�������ϼ��˵�"<<endl; 
		cout<<"0���������˵�"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:{
				Input_MoralityScore(x);
				cout<<endl<<"***˼�������������������¼�����***"<<endl; 	
				break;
			}
			case 2:{
				Input_VolunteerScore(x);
				cout<<endl<<"***���ʵ����־Ը���񲿷�¼�����***"<<endl;
				break;
			}
			case 3:{
				Input_AcademicScore(x);
				cout<<endl<<"***�Ƽ�ѧ���봴�´�ҵ����¼�����***"<<endl;
				break;
			}
			case 4:{
				Input_PhysicsScore(x);
				cout<<endl<<"***�������������ķ�չ����¼�����***"<<endl;
				break;
			}
			case 5:{
				Input_ClubScore(x);
				cout<<endl<<"***���Ż����Ṥ������¼�����***"<<endl;
				break;
			}
			case 6:{
				Input_SkillScore(x);
				cout<<endl<<"***������ѵ����������¼�����***"<<endl;
				break;
			}
			case 7:{
				b=1;
				a=0;
				break;
			}
			case 0:b=0;break;                                                   //�����˵���ʾ���� 
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;
		}
	}
	return b;
}
void Input_SecondScore_void(int y) //�޸ĵ����� 
{
	int a=1;
	for(;a!=0;)
	{
		cout<<endl<<"***��ѡ������˵�ǰ�����***"<<endl;
		cout<<"1������˼�������������������"<<endl;
		cout<<"2���������ʵ����־Ը���񲿷�"<<endl;
		cout<<"3������Ƽ�ѧ���봴�´�ҵ����"<<endl;
		cout<<"4�������������������ķ�չ����"<<endl;
		cout<<"5���������Ż����Ṥ������" <<endl;
		cout<<"6�����뼼����ѵ����������"<<endl;
		cout<<"0���������˵�"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:{
				Input_MoralityScore(y);
				cout<<endl<<"***˼�������������������¼�����***"<<endl; 	
				break;
			}
			case 2:{
				Input_VolunteerScore(y);
				cout<<endl<<"***���ʵ����־Ը���񲿷�¼�����***"<<endl;
				break;
			}
			case 3:{
				Input_AcademicScore(y);
				cout<<endl<<"***�Ƽ�ѧ���봴�´�ҵ����¼�����***"<<endl;
				break;
			}
			case 4:{
				Input_PhysicsScore(y);
				cout<<endl<<"***�������������ķ�չ����¼�����***"<<endl;
				break;
			}
			case 5:{
				Input_ClubScore(y);
				cout<<endl<<"***���Ż����Ṥ������¼�����***"<<endl;
				break;
			}
			case 6:{
				Input_SkillScore(y);
				cout<<endl<<"***������ѵ����������¼�����***"<<endl;
				break;
			}
			case 0:break;                                                   //�����˵���ʾ���� 
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;
		}
	}
}
void Input_MoralityScore(int x) //����˼�������������������
{
	int a,b,c,d,e,morality_score;
	cout<<endl<<"˼������������������֣�3ѧ�֣�����100�֣�"<<endl;
	for(;1;)
	{
		cout<<"�Ƿ���뵳��ѧϰ����ͨ�����ԣ�10�֣��ǰ�1����0��" <<endl;
	    cin>>a;
	    if(a==1||a==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"����ѧУ���ɴ��֣�30�֣��а�1����0��"<<endl;
	    cin>>b;
	    if(b==1||b==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�μӻ�ĳ������������20�֣�������ȱ�ڴ��������Ϊ4�Σ�" <<endl;
	    cin>>c;
	    if(c==0||c==1||c==2||c==3||c==4) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�Ƿ�μӵ�У����У��ѧ���ɲ�ѧϰ��ѵ�Ȼ��15�֣��ǰ�1����0��"<<endl;
	    cin>>d;
	    if(d==1||d==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�μӸ����������߽���������25�֣�������μӴ��������5�Σ�" <<endl;
	    cin>>e;
	    if(e==0||e==1||e==2||e==3||e==4||e==5) break;
	    else cout<<"�����������������"<<endl; 
	} 
	morality_score=MoralityScore(a,b,c,d,e);
	student[x].get_morality(morality_score); 
	student[x].count() ;
}
void Input_VolunteerScore(int x)  //�������ʵ����־Ը���񲿷�
{
	int a,b,c,d,volunteer_score;
	cout<<endl<<"���ʵ����־Ը���񲿷֣�2ѧ�֣�����100�֣�"<<endl;
	for(;1;)
	{
		cout<<"�μ��������ʵ��������20�֣������밴1�������밴0��" <<endl;
	    cin>>a;
	    if(a==1||a==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�Ƿ�����޳���Ѫ�����׹���������10�֣��ǰ�1����0��" <<endl;
	    cin>>b;
	    if(b==1||b==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"����ѧ��������30�֣������˰�1����Ա��2��û�в��밴3��"<<endl;
	    cin>>c;
	    if(c==1||c==2||c==3) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
	    cout<<"������μ�־Ը����ʱ��,����40�֣����20Сʱ)"<<endl;
	    cin>>d;
	    if(d>=0&&d<=20) break;
	    else cout<<"�����������������"<<endl; 
	} 
	volunteer_score=VolunteerScore(a,b,c,d);
	student[x].get_volunteer(volunteer_score); 
	student[x].count() ;
}
void Input_AcademicScore(int x)  //����Ƽ�ѧ���봴�´�ҵ����
{
	int a,b,c,d,academic_score;
	cout<<endl<<"�Ƽ�ѧ���봴�´�ҵ���֣�3ѧ�֣�����100�֣�"<<endl;
	for(;1;)
	{
		cout<<"����ѧ�ƾ���������ѿ����������̱�����ѧ�Ʊ���������30�֣�������μӴ��������6�Σ�"<<endl;
	    cin>>a;
	    if(a>=0&&a<=6) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"ѧ�����ĵķ���,����20�֣������뷢��ƪ�������2ƪ��"<<endl;
	    cin>>b;
	    if(b==1||b==0||b==2) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"��ѧ�����ĵķ���,����10�֣������뷢��ƪ�������2ƪ��" <<endl;
	    cin>>c;
	    if(c==1||c==2||c==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
	    cout<<"�μӿƼ�ѧ������������ѿ���������������ʽ������40��(������μӴ��������8�Σ�"<<endl;
	    cin>>d;
	    if(d>=0&&d<=8) break;
	    else cout<<"�����������������"<<endl; 
	} 
	academic_score=AcademicScore(a,b,c,d);
	student[x].get_academic(academic_score); 
	student[x].count() ;
} 
void Input_PhysicsScore(int x)  //�����������������ķ�չ����
{
	int a,b,c,d,e,f,physics_score;
	cout<<endl<<"�������������ķ�չ����(2ѧ�֣�����100��)"<<endl;
	for(;1;)
	{
		cout<<"��������С������/������/��ҵ���������/�Ի���ֵ���ݽ�����/��ʦ��־����/Ժ�������Ա(���������ĸ��������3��������15��)" <<endl;
	    cin>>a;
	    if(a>=0&&a<=3) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"����У�˶��Ὰ������Ŀ������15�֣����벢�񽱰�1�����밴2��û�в��밴3��"<<endl;
	    cin>>b;
	    if(b==1||b==3||b==2) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�Ƿ����У�˶���Ȥζ����Ŀ������15�֣����벢�񽱰�1�����밴2��û�в��밴3��"<<endl;
	    cin>>c;
	    if(c==1||c==2||c==3) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
	    cout<<"�����˶��ӻ������ţ�����20�֣�У����1��Ժ����2,û�в��밴3��"<<endl;
	    cin>>d;
	    if(d==1||d==2||d==3) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"��ѵ������20�֣���ѵ�������1�����μӺϳ�������ԽҰ���κӡ��屨����2������ɾ�ѵ����3������ϰ����3�죨��4��"<<endl;
	    cin>>e;
	    if(e==1||e==2||e==3||e==4) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"��������������15�֣��ţ���1����������2�����еȣ���3�������񣨰�4�������5��"<<endl;
	    cin>>f;
	    if(f==1||f==2||f==3||f==4||f==5) break;
	    else cout<<"�����������������"<<endl; 
	} 
	physics_score=PhysicsScore(a,b,c,d,e,f);
	student[x].get_physics(physics_score);
	student[x].count() ;
}
void Input_ClubScore(int x)  //�������Ż����Ṥ������
{
	int a,b,c,club_score;
	cout<<endl<<"���Ż����Ṥ�����֣�2ѧ�֣�����100�֣�"<<endl;
	for(;1;)
	{
	    cout<<"�Ƿ�Ϊѧ����֯�ɲ����ί��Ա��40�֣��ǰ�1����0��"<<endl;
	    cin>>a;
	    if(a==0||a==1) break;
	    else cout<<"�����������������"<<endl; 
	} 	 
	for(;1;)
	{
		cout<<"�ڴ�ѧ�ڼ����Ҽ����м���У����Ժ����������������40�֣�������ѧ��������ѧ���ɲ���������Ա�������Ÿɲ�������ѧ����Ա��(���Ҽ���1���м���2��У����3��Ժ����4��û�л񽱰�5��"<<endl;
	    cin>>b;
	    if(b==1||b==3||b==2||b==3||b==4||b==5) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�μ�����,����20�֣����Ǽ���1�����Ǽ���2�����Ǽ���3���μ��������Ű�4��û�вμӰ�5��"<<endl;
	    cin>>c;
	    if(c==1||c==2||c==3||c==4||c==5) break;
	    else cout<<"�����������������"<<endl; 
	} 
	club_score=ClubScore(a,b,c);
	student[x].get_club(club_score);
	student[x].count() ;
}
void Input_SkillScore(int x) //���뼼����ѵ����������
{
	int a,b,c,d,skill_score;
	cout<<endl<<"������ѵ���������֣�1ѧ�֣�����100�֣�"<<endl;
	for(;1;)
	{
	    cout<<"�Ƿ�ͨ��Ӣ���ġ�������30��(�ǰ�1����0��"<<endl;
	    cin>>a;
	    if(a==0||a==1) break;
	    else cout<<"�����������������"<<endl; 
	} 	 
	for(;1;)
	{
		cout<<"�Ƿ�ͨ������������������ԣ�30�֣��ǰ�1����0��" <<endl;
	    cin>>b;
	    if(b==1||b==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
		cout<<"�Ƿ�μ�΢����֤��Cisco ��֤��Oracle��֤��sun��֤�����������֤��ѵ���õ�����֤�飬30�֣��ǰ�1����0��"<<endl;
	    cin>>c;
	    if(c==1||c==0) break;
	    else cout<<"�����������������"<<endl; 
	} 
	for(;1;)
	{
	    cout<<"�Ƿ�ͨ����������Ӣ���м���GRE����˼���и���Ӣ������ѵ���ԣ������֤�飬30�֣��ǰ�1����0��"<<endl;
	    cin>>d;
	    if(d==0||d==1) break;
	    else cout<<"�����������������"<<endl; 
	} 	 
	skill_score=SkillScore(a,b,c,d);
	student[x].get_skill(skill_score);
	student[x].count() ;
}
void load() //���ݳ�ʼ��
{
	int i;
	for(i=0;i<MAX;i++) 
	{
		student[i].get_number(0);
		student[i].get_academic(0);
		student[i].get_club(0);
		student[i].get_morality(0);
		student[i].get_physics(0);
		student[i].get_skill(0);
		student[i].get_volunteer(0);
		student[i].count();       
	}
 } 
void log_SecondScore() //¼������� 
{
	static int a=0;
	string b;
	int c,d=1,i;
	for(;d;)
	{
		cout<<endl<<"������ѧ��������";
	    cin>>b;
	    for(i=0;i<a;i++)
	    {
	    	if(b==student[i].back_name())
	    	{
	    		cout<<"ѧ�����������ѧ�������ظ�������������"<<endl;
	    		break;
			}
		}
		if(i==a) d=0;
	}
	student[a].get_name(b);
	d=1;
	for(;d;)
	{
		cout<<endl<<"������ѧ�ţ�";
	    cin>>c;
	    for(i=0;i<a;i++)
	    {
	    	if(c==student[i].back_number()) 
	    	{
	    		cout<<"ѧ�Ŵ����ѧ���ظ�������������"<<endl;
	    		break;
			}
		}
		if(i==a) d=0;
	}
	student[a].get_number(c);
	Input_SecondScore_void(a);
	a+=1;
}
int delect_student(int x) //ɾ��ѧ����Ϣ 
{
	student[x].get_number(0);
	student[x].get_academic(0);
	student[x].get_club(0);
	student[x].get_morality(0);
	student[x].get_physics(0);
	student[x].get_skill(0);
	student[x].get_volunteer(0);
	student[x].count(); 
	cout<<"ѧ����Ϣɾ���ɹ�"<<endl;
	int a;
	for(;1;)
	{
		cout<<endl<<"1.�����ϼ��˵�"<<endl;
	    cout<<"0.�������˵�"<<endl;
	    cin>>a;
	    if(a==1||a==0) break;
	    else cout<<"ѡ�����������ѡ��"<<endl; 
	}
	return a; 
} 
void Delect() //���˵�ɾ��ѡ�� 
{
	int a=1,b,i,c=1,f=1;
	string d; 
	for(;a;)
	{
		cout<<endl<<"***��ѡ����Ҷ���ķ�ʽ***"<<endl;
		cout<<"1����ѧ�Ų���"<<endl;
		cout<<"2������������"<<endl;
		cout<<"0�����ص��������˵�"<<endl;
		c=1,f=1;
		cin>>a;
		switch(a)
		{
			case 1:{
				for(;c;)
				{
					cout<<"������ѧ�ţ�";
				    cin>>b;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_number()==b) 
					    {
						    cout<<"�����ҵ�ѧ��Ϊ��"<<student[i].back_number()<<endl;
						    cout<<"ѧ������Ϊ��    "<<student[i].back_name() <<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ��ɾ������0��������"<<endl;
						        cin>>c;
						        if(c==1) break; 
							    else if(c==0)
							    {
							    	c=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1��������ѧ�ţ���2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) c=0;
						else if(g==3)
						{
							c=0;
							a=0;
						}	 
					}
				    if(c==1)
				    {
				    	int judge;
						judge=delect_student(i);
				    	if(judge==1) c=0;
				    	else if(judge==0)
				    	{
				    		c=0;
				    		a=0;
				    	}
					}
				} 
				break;
			}
			case 2:{
				for(;f;)
				{
					cout<<"������ѧ��������";
				    cin>>d;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_name()==d) 
					    {
						    cout<<"�����ҵ�ѧ������Ϊ��"<<student[i].back_name()<<endl;
						    cout<<"ѧ��Ϊ��            "<<student[i].back_number()<<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ��ɾ������0��������"<<endl;
						        cin>>f;
						        if(f==1) break;
							    else if(f==0)
							    {
							    	f=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1����������������2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) f=0;
						else if(g==3)
						{
							f=0;
							a=0;
						}	 
					} 
				    if(f==1)
				    {
				    	int judge;
						judge=delect_student(i);
				    	if(judge==1) f=0;
				    	else if(judge==0)
				    	{
				    		f=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 0:break;
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;break;
		}
	}
}
void output() //���˵����ѡ�� 
{
	int a=1,b,i,c=1,f=1;
	string d; 
	for(;a;)
	{
		cout<<endl<<"***��ѡ����Ҷ���ķ�ʽ***"<<endl;
		cout<<"1����ѧ�Ų���"<<endl;
		cout<<"2������������"<<endl;
		cout<<"0�����ص��������˵�"<<endl;
		c=1,f=1;
		cin>>a;
		switch(a)
		{
			case 1:{
				for(;c;)
				{
					cout<<"������ѧ�ţ�";
				    cin>>b;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_number()==b) 
					    {
						    cout<<"�����ҵ�ѧ��Ϊ��"<<student[i].back_number()<<endl;
						    cout<<"ѧ������Ϊ��    "<<student[i].back_name() <<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>c;
						        if(c==1) break;
							    else if(c==0)
							    {
							    	c=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1��������ѧ�ţ���2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) c=0;
						else if(g==3)
						{
							c=0;
							a=0;
						}	 
					}
				    if(c==1)
				    {
				    	int judge;
						judge=student[i].display_SecondScore();
				    	if(judge==1) c=0;
				    	else if(judge==0)
				    	{
				    		c=0;
				    		a=0;
				    	}
					}
				} 
				break;
			}
			case 2:{
				for(;f;)
				{
					cout<<"������ѧ��������";
				    cin>>d;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_name()==d) 
					    {
						    cout<<"�����ҵ�ѧ������Ϊ��"<<student[i].back_name()<<endl;
						    cout<<"ѧ��Ϊ��            "<<student[i].back_number()<<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>f;
						        if(f==1)
						        {
						    	    cout<<"*�������������ϵͳ*"<<endl;
						    	    break;
							    }
							    else if(f==0)
							    {
							    	f=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1����������������2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) f=0;
						else if(g==3)
						{
							f=0;
							a=0;
						}	 
					} 
				    if(f==1)
				    {
				    	
				    	int judge;
						judge=student[i].display_SecondScore();
				    	if(judge==1) f=0;
				    	else if(judge==0)
				    	{
				    		f=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 0:break;
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;break;
		}
	} 
 } 
class Score
{	public:
	float HuanSuan(int a);
	Score(int,int,int,int,int);
	double GPA();
	float M,P,E,S,C;	
};
Score::Score(int m,int p,int e,int s,int c)
{
	M=HuanSuan(m);
	P=HuanSuan(p);
	E=HuanSuan(e);
    S=HuanSuan(s);
    C=HuanSuan(c);
}
float Score::HuanSuan(int a)
{
    if(a>=95) return(4.33);
    else if(a>=90) return(4.00);
    else if(a>=85) return(3.67);
    else if(a>=82) return(3.33);
    else if(a>=78) return(3.00);
    else if(a>=75) return(2.67);
    else if(a>=72) return(2.33);
    else if(a>=68) return(2.00);
    else if(a>=64) return(1.67);
    else if(a>=61) return(1.33);
    else if(a=60) return(1.00);
    else return(0);
}
double Score::GPA()
{
	float a,b,c,d,e,z;
	a=M*5.5;
	b=P*4;
	c=E*4;
	d=S*3;
	e=C*3;
	z=(a+b+c+d+e)/(5.5+4+4+3+3);
	return(z);
}
void zybiankuang()
{
 int i;
 cout<<"*";
 for(i=0;i<117;i++)
 {
  cout<<" ";
 }
 cout<<"*";
}
void ybiankuang(int j)
{
 int i;
 for(i=0;i<j;i++)
 {
  cout<<" ";
 }
 cout<<"*";
}
void zimu()
{
 cout<<"*                **********             **          **              *********           ************                  *"<<endl;
 cout<<"*                **********             **          **             **********           ************                  *"<<endl;
 cout<<"*                **       **            **          **            **                         **                       *"<<endl;
 cout<<"*                **        **           **          **            **                         **                       *"<<endl;
 cout<<"*                **        **           **          **           **                          **                       *"<<endl;
 cout<<"*                **       **            **          **           **                          **                       *"<<endl;
 cout<<"*                **********             **          **           **                          **                       *"<<endl;
 cout<<"*                **********             **          **           **                          **                       *"<<endl;
 cout<<"*                **       **            **          **           **                          **                       *"<<endl;
 cout<<"*                **        **           **          **           **                          **                       *"<<endl;
 cout<<"*                **        **           **          **            **                         **                       *"<<endl;
 cout<<"*                **       **             **        **             **                         **                       *"<<endl;
 cout<<"*                **********               **********               **********                **                       *"<<endl;
 cout<<"*                **********                ********                 *********                **                       *"<<endl;
}
void kongge(int j=48)
{
 int i;
 cout<<"*";
 for(i=0;i<j;i++)
 {
  cout<<" ";
 }
}
void xinghao()
{
 int i;
 for(i=0;i<120;i++)
 {
  cout<<"*";
 }
}
int main()
{   
    int first;
    int i;
    load();
	for(i=0;i<MAX;i++) student2[i].load();
    for(;1;)
	{
	xinghao();
    zybiankuang();
    cout<<endl;
    zimu();
    zybiankuang();
    cout<<endl;
    kongge(44);
    cout<<"��ӭʹ��ѧ����Ϣ����ϵͳ" ;
    ybiankuang(49);
    cout<<endl;
    kongge();
    cout<<"��Ҫѡ��Ĳ�����:";
    ybiankuang(52);
    cout<<endl; 
    kongge();
    cout<<"1 ѧ��������Ϣ";
    ybiankuang(55);
    cout<<endl;
    kongge();
    cout<<"2 GPA����"; 
    ybiankuang(60);
    cout<<endl;
    kongge();
    cout<<"3 ������ͳ��";
    ybiankuang(57);
    cout<<endl;
    kongge();
    cout<<"4 ѧ���α���";
    ybiankuang(55);
    cout<<endl;
    kongge();
    cout<<"5 �׶���ѧϰ����";
    ybiankuang(53);
    cout<<endl;
    kongge();
    cout<<"0 �˳�ϵͳ";
    ybiankuang(59);
    cout<<endl;
    zybiankuang();
    cout<<endl;
    xinghao();	
    cout<<endl;
	cin>>first;
	if (first==1) 
	{
		while(1)
        {
			  xinghao() ;
 			  zybiankuang();
			  cout<<endl;
			  kongge();
 			  cout<<"��������Ҫ���еĲ����ı��:";
			  ybiankuang(42);
 			  cout<<endl; 
 			  kongge();
 			  cout<<"�����µ�ѧ����Ϣ(1);";
			  ybiankuang(49);
 			  cout<<endl; 
			  kongge();
 			  cout<<"�޸�����ѧ������Ϣ(2);";
 			  ybiankuang(47);
 			  cout<<endl; 
 			  kongge();
 			  cout<<"��ѯ����ѧ����Ϣ(3);";
 			  ybiankuang(49);
 			  cout<<endl; 
 			  kongge();
 			  cout<<"�������˵�(0);";
 			  ybiankuang(55);
 			  cout<<endl;    
 			  zybiankuang();
 			  cout<<endl; 
 			  xinghao();
              cin>>m;
              if(m==1) set();
              if(m==2) change();
              if(m==3) query();	
              if(m==0) break;
              if((m!=0)&(m!=1)&(m!=2)&(m!=3)) 
			  {
			   cout<<endl<<"��������ȷ��ָ�"<<endl<<endl;
			   xinghao();
			   } 
        }
	}
	if (first==2) 
    {
      int a,b,c,d,e,f=1; 
      xinghao();
      cout<<"����������ɼ���5.5ѧ�֣���";
      cin>>a;
      cout<<endl<<"���������ɼ���4ѧ�֣���";
	  cin>>b;
	  cout<<endl<<"������Ӣ��ɼ���4ѧ�֣���";
	  cin>>c;
	  cout<<endl<<"������˼�޳ɼ���3ѧ�֣���";
	  cin>>d;
	  cout<<endl<<"������c++�ɼ���3ѧ�֣���";
	  cin>>e; 
	  xinghao();
  	  Score score1(a,b,c,d,e);	
	  cout<<endl<<"GPAΪ��"<<score1.GPA()<<endl;
	  xinghao();
	  for(;f;)
	  {
	  	 cout<<"��0�������˵�"<<endl;
	     cin>>f;
	     xinghao();
	     if(f!=0) cout<<"�����������������"<<endl;
		 xinghao(); 
	  } 
    }
    if (first==3)
    {
	  int a=1;
	  for(;a;)
	  {
	      xinghao() ;
 	       zybiankuang();
 	       cout<<endl;
 	       kongge();
  	       cout<<"���˵��������ֲ��֣�:";
 	       ybiankuang(48);
 	       cout<<endl; 
 	       kongge();
 	       cout<<"1.¼���������Ϣ;";
 	       ybiankuang(52);
 	       cout<<endl; 
 	       kongge();
 	       cout<<"2.��ѯ��������;";
 	       ybiankuang(54);
 	       cout<<endl; 
 	       kongge();
 	       cout<<"3.�޸ĵ�������Ϣ;";
 	       ybiankuang(52);
 	       cout<<endl; 
 	       kongge();
 	       cout<<"4.ɾ����������Ϣ;";
 	       ybiankuang(52);
 	       cout<<endl; 
 	       kongge();
 	       cout<<"5.�������˵�;";
 	       ybiankuang(56);
 	       cout<<endl;       
 	       zybiankuang();
 	       cout<<endl; 
 	       xinghao();
	       cin>>a;
	       switch(a)
	       {
		        case 1:log_SecondScore();break;
		        case 2:output();break;
		        case 3:alter_SecondScore();break;
		        case 4:Delect();break;
		        case 5:a=0;break;
		        default:cout<<"�˵�ѡ�����������ѡ��"<<endl;break;
		        xinghao();
	       }
	  }
    }
    if(first==4)
    {
    	int a=1;
		for(;a;)
		{
			xinghao() ;
 			zybiankuang();
 			cout<<endl;
 			kongge();
  			cout<<"1.¼��α���Ϣ;";
 			ybiankuang(54);
 			cout<<endl; 
 			kongge();
 			cout<<"2.��ѯ�α���Ϣ;";
 			ybiankuang(54);
 			cout<<endl; 
 			kongge();
 			cout<<"3.����α���Ϣ���ļ�;";
 			ybiankuang(48);
 			cout<<endl; 
 			kongge();
 			cout<<"0.�������˵�;";
 			ybiankuang(56);
 	    	cout<<endl;
 	    	zybiankuang();
            cout<<endl; 
            xinghao();
			cin>>a;
			if(a==1) kecheng_input();
			if(a==2) kecheng_output();
			if(a==3) 
			{
				kecheng_outputfile();
				cout<<"�γ̱���Ϣ������"<<endl;
				xinghao();
			}
			if(a!=1&&a!=2&&a!=3&&a!=0) 
			{
			 cout<<"�˵�ѡ���������������"<<endl;
			 xinghao;
			}	 
		 } 
	}
	if(first==5)
	{
		Evaluate(); 
	}
	if(first==0) break;
	if(first!=1&&first!=2&&first!=3&&first!=4&&first!=5&&first!=0) 
	{
	 cout<<"�˵�ѡ���������������";
	 xinghao();
	}
	 } 
}
void set()
{
 cout<<endl;
 student2[x].SetName();
 student2[x].SetNumber();
 student2[x].SetSex();
 student2[x].SetScore();
 cout<<endl<<endl;
 x++; 
}
void xiugai()
{
 cout<<"������Ϣ(1);"<<endl<<"����(2);"<<endl<<"ѧ��(3);"<<endl<<"�Ա�(4);"<<endl<<"�ɼ�(5)"<<endl<<endl;
 cin>>o;
 if(o==1)
 {
   cout<<endl;
   student2[q].ChangeName();
   student2[q].ChangeNumber();
   student2[q].ChangeSex();
   student2[q].ChangeMScore();
   student2[q].ChangePScore();
   student2[q].ChangeCScore();
   student2[q].ChangePEScore();
   cout<<endl;
 }
 if(o==2)
 {
   cout<<endl;
   student2[q].ChangeName();
 }
 if(o==3)
 {
   cout<<endl;
   student2[q].ChangeNumber();
 }
 if(o==4)
 {
   cout<<endl;
   student2[q].ChangeSex();
 }
 if(o==5)
 {
   cout<<endl<<"������Ҫ�޸ĵĿ�Ŀ������:"<<endl;
   cout<<"���п�Ŀ(1)"<<endl<<"�ߵ���ѧ(2);"<<endl<<"��ѧ����(3);"<<endl<<"C++(4);"<<endl<<"����(5);"<<endl;
   cin>>m;
   if(m==1)
   {
     cout<<endl;
	 student2[q].ChangeMScore();
     student2[q].ChangePScore();
     student2[q].ChangeCScore();
     student2[q].ChangePEScore();
     cout<<endl;
   } 
   if(m==2) 
   {
	 cout<<endl;
	 student2[q].ChangeMScore();
   } 
   if(m==3)
   {
	 cout<<endl;
	 student2[q].ChangePScore();
   }
   if(m==4)
   {
	 cout<<endl;
	 student2[q].ChangeCScore();
   }
   if(m==5)
   {
	 cout<<endl;
	 student2[q].ChangePEScore();
   } 
 }
 if((o!=1)&(o!=2)%(o!=3)&(o!=4)&(o!=5)) cout<<"��������ȷѡ��"<<endl<<endl;
} 


void change()
{
 cout<<endl<<"������ȷ��ѧ����ݵķ�ʽ�ı�ţ�";
 cout<<endl<<"����(1);"<<endl<<"ѧ��(2);"<<endl<<endl;
 cin>>n;
 if(n==1)
 {
   cout<<endl<<"����������:"; 
   cin>>a;
   q=-1;
   for(i=0;i<MAX;i++)
   {
      b=student2[i].name();
      if(a==b) 
        {
   	      q=i;
	      xiugai();
        }
   } 
   if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
 }
  if(n==2)
  {
    cout<<endl<<"������ѧ��"<<endl;
    cin>>c; 
    q=-1;
    for(i=0;i<MAX;i++)
    {
      d=student2[i].number();
   	  if(c==d) 
      {
        q=i;
        xiugai();
      }
   
    }
    if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
   }
}


void chaxun()
{
 cout<<endl<<"��������Ҫ��ѯ����Ϣ�ı��:"<<endl;
 cout<<"������Ϣ(1);"<<endl<<"����(2);"<<endl<<"ѧ��(3);"<<endl<<"�Ա�(4);"<<endl<<"�ɼ�(5)"<<endl<<endl;
 cin>>o;
 if(o==1)
 {
   cout<<endl;
   student2[q].ShowName();
   student2[q].ShowNumber();
   student2[q].ShowSex();
   student2[q].ShowMScore();
   student2[q].ShowPScore();
   student2[q].ShowCScore();
   student2[q].ShowPEScore();
   cout<<endl;
 }
 if(o==2)
 {
   cout<<endl;
   student2[q].ShowName();
 }
 if(o==3)
 {
   cout<<endl;
   student2[q].ShowNumber();
 }
 if(o==4)
 {
   cout<<endl;
   student2[q].ShowSex();
 }
 if(o==5)
 {
   cout<<endl<<"������Ҫ��ѯ�Ŀ�Ŀ������:"<<endl<<endl;
   cout<<"���п�Ŀ(1)"<<endl<<"�ߵ���ѧ(2);"<<endl<<"��ѧ����(3);"<<endl<<"C++(4);"<<endl<<"����(5);"<<endl<<"GPA(6)"<<endl;
   cin>>m;
   if(m==1)
   {
     cout<<endl;
	 student2[q].ShowMScore();
     student2[q].ShowPScore();
     student2[q].ShowCScore();
     student2[q].ShowPEScore();
     cout<<endl;
   } 
   if(m==2) 
   {
	 cout<<endl;
	 student2[q].ShowMScore();
   } 
   if(m==3)
   {
	 cout<<endl;
	 student2[q].ShowPScore();
   }
   if(m==4)
   {
	 cout<<endl;
	 student2[q].ShowCScore();
   }
   if(m==5)
   {
	 cout<<endl;
	 student2[q].ShowPEScore();
   } 
   if(m==6)
   {
   	cout<<endl<<"GPAΪ��"<<student2[q].count_GPA(); 
   }
 }
 if((o!=1)&(o!=2)%(o!=3)&(o!=4)&(o!=5)) cout<<"��������ȷѡ��"<<endl<<endl; 
}


void query()
{
 cout<<endl<<"������ȷ��ѧ����ݵķ�ʽ�ı�ţ�";
 cout<<endl<<"����(1);"<<endl<<"ѧ��(2);"<<endl<<endl;
 cin>>n;
 if(n==1)
 {
   cout<<endl<<"����������:"; 
   cin>>a;
   q=-1;
   for(i=0;i<MAX;i++)
  {
    b=student2[i].name();
    if(a==b) 
   {
   	 q=i;
	 chaxun();
   }
  } 
 if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
 }
  if(n==2)
  {
    cout<<endl<<"������ѧ��"<<endl;
    cin>>c; 
    q=-1;
    for(i=0;i<MAX;i++)
   {
     d=student2[i].number();
   	 if(c==d) 
    {
      q=i;
      chaxun();
    }
   }
  if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
  } 
}
void kecheng_input()
{
 cout<<endl<<"������ȷ��ѧ����ݵķ�ʽ�ı�ţ�";
 cout<<endl<<"����(1);"<<endl<<"ѧ��(2);"<<endl<<endl;
 cin>>n;
 if(n==1)
 {
   cout<<endl<<"����������:"; 
   cin>>a;
   q=-1;
   for(i=0;i<MAX;i++)
   {
      b=student2[i].name();
      if(a==b) 
        {
   	      q=i;
	      student2[i].ke.setvalue();
        }
   } 
   if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ���������ѧ��������Ϣ����д"<<endl; 
 }
  if(n==2)
  {
    cout<<endl<<"������ѧ��"<<endl;
    cin>>c; 
    q=-1;
    for(i=0;i<MAX;i++)
    {
      d=student2[i].number();
   	  if(c==d) 
      {
        q=i;
        student2[i].ke.setvalue();
      }
   
    }
    if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ���������ѧ��������Ϣ����д"<<endl; 
   }
}
void kecheng_output()
{
	cout<<endl<<"������ȷ��ѧ����ݵķ�ʽ�ı�ţ�";
 cout<<endl<<"����(1);"<<endl<<"ѧ��(2);"<<endl<<endl;
 cin>>n;
 if(n==1)
 {
   cout<<endl<<"����������:"; 
   cin>>a;
   q=-1;
   for(i=0;i<MAX;i++)
   {
      b=student2[i].name();
      if(a==b) 
        {
   	      q=i;
	      student2[i].ke.showke1();
        }
   } 
   if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
 }
  if(n==2)
  {
    cout<<endl<<"������ѧ��"<<endl;
    cin>>c; 
    q=-1;
    for(i=0;i<MAX;i++)
    {
      d=student2[i].number();
   	  if(c==d) 
      {
        q=i;
        student2[i].ke.showke1();
      }
   
    }
    if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
   }
}
void kecheng_outputfile()
{
	cout<<endl<<"������ȷ��ѧ����ݵķ�ʽ�ı�ţ�";
 cout<<endl<<"����(1);"<<endl<<"ѧ��(2);"<<endl<<endl;
 cin>>n;
 if(n==1)
 {
   cout<<endl<<"����������:"; 
   cin>>a;
   q=-1;
   for(i=0;i<MAX;i++)
   {
      b=student2[i].name();
      if(a==b) 
        {
   	      q=i;
	      student2[i].ke.showke();
        }
   } 
   if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
 }
  if(n==2)
  {
    cout<<endl<<"������ѧ��"<<endl;
    cin>>c; 
    q=-1;
    for(i=0;i<MAX;i++)
    {
      d=student2[i].number();
   	  if(c==d) 
      {
        q=i;
        student2[i].ke.showke();
      }
   
    }
    if(q==-1) cout<<endl<<"δ�ҵ���ѧ����Ϣ"<<endl; 
   }
}
void Evaluate()
{
	int a=1,i,c=1,f=1;
	string b,d; 
	for(;a;)
	{
		cout<<endl<<"***��ѡ����Ҷ���ķ�ʽ***"<<endl;
		cout<<"1����ѧ�Ų���"<<endl;
		cout<<"2������������"<<endl;
		cout<<"0���������˵�"<<endl;
		c=1,f=1;
		cin>>a;
		switch(a)
		{
			case 1:{
				for(;c;)
				{
					cout<<"������ѧ�ţ�";
				    cin>>b;
				    for(i=0;i<MAX;i++)
				    {
					    if(student2[i].number()==b) 
					    {
						    cout<<"�����ҵ�ѧ��Ϊ��"<<student2[i].number()<<endl;
						    cout<<"ѧ������Ϊ��    "<<student2[i].name() <<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>c;
						        if(c==1) break;
							    else if(c==0)
							    {
							    	c=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1��������ѧ�ţ���2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) c=0;
						else if(g==3)
						{
							c=0;
							a=0;
						}	 
					}
				    if(c==1)
				    {
				    	int judge;
						judge=evaluate(student2[i].math(),student2[i].physics(),student2[i].cplusplus(),student2[i].pe(),student2[i].count_GPA());
				    	if(judge==1) c=0;
				    	else if(judge==0)
				    	{
				    		c=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 2:{
				for(;f;)
				{
					cout<<"������ѧ��������";
				    cin>>d;
				    for(i=0;i<MAX;i++)
				    {
					    if(student[i].back_name()==d) 
					    {
						    cout<<"�����ҵ�ѧ������Ϊ��"<<student[i].back_name()<<endl;
						    cout<<"ѧ��Ϊ��            "<<student[i].back_number()<<endl;
						    for(;1;)
						    {
						    	cout<<"��1ȷ�ϣ���0��������"<<endl;
						        cin>>f;
						        if(f==1)
						        {
						    	    cout<<"*�������������ϵͳ*"<<endl;
						    	    break;
							    }
							    else if(f==0)
							    {
							    	f=2;
							    	break;
								}
								else cout<<"ѡ�����������ѡ��"<<endl;
							}
						    break;
					    } 
				    } 
				    int g;
				    if(i==MAX) 
					{
						cout<<"�޴�����Ϣ"<<endl;
						int e;
						for(;1;)
						{
							cout<<"��1����������������2������һ���˵�����3�������˵�"<<endl;
							cin>>e;
							if(e==1)
							{
								g=1;
								break;
							}
							else if(e==2)
							{
								g=2;
								break;
							}
							else if(e==3)
							{
								g=3;
								break;
							}
							else cout<<"ѡ���������������"<<endl; 
						}
						if(g==1) continue;
						else if(g==2) f=0;
						else if(g==3)
						{
							f=0;
							a=0;
						}	 
					} 
				    if(f==1)
				    {
				    	int judge;
						judge=evaluate(student2[i].math(),student2[i].physics(),student2[i].cplusplus(),student2[i].pe(),student2[i].count_GPA());
				    	if(judge==1) f=0;
				    	else if(judge==0)
				    	{
				    		f=0;
				    		a=0;
						}
					}
				} 
				break;
			}
			case 0:break;
			default:cout<<"�˵�ѡ�����������ѡ��"<<endl;break;
		}
	} 
 } 
 int evaluate(int Smath,int Sphysics,int Scplusplus,int Spe,float GPA)
{
	cout<<"��ĸ����ɼ�Ϊ��"<<Smath<<endl;
	cout<<"���γ����ۣ�";
	if(Smath>90)cout<<"���ſ�ѧ�úܺã��������ͣ�"<<endl;
	else if(Smath>75)cout<<"����֪ʶ�������գ���ĿҪ�����ϰ������������㣬ע����������ԣ��ú�Ŭ��������߷ֽ�����"<<endl; 
	else if(Smath>60)cout<<"���ſ�ѧ����Щ���������⣬����֪ʶ�н϶�©�����Ͽζ�������������ʦ��˼·��Ҫ�¹����ˣ�"<<endl;
	else cout<<"�ٲ�Ŭ����û�л���������ʱ����ڸ����ϰɣ�"<<endl; 
	cout<<endl<<"��Ĵ���ɼ�Ϊ��"<<Sphysics<<endl;
	cout<<"���γ����ۣ�";
	if(Sphysics>90)cout<<"���ſ�ѧ�úܺã��������ͣ�"<<endl;
	else if(Sphysics>75)cout<<"����֪ʶ�͸���������գ���ϰ��ʽ��������ã��������˼·������һ��¥��"<<endl; 
	else if(Sphysics>60)cout<<"���ſ�ѧ����Щ���������⣬�Ͽ�Ҫ���������ˣ����Խ��бʼǺ�֪ʶ�������ͬ�������ҳ����ƵĽ��ⷽ�������¹���ɣ�"<<endl;
	else cout<<"�ٲ�Ŭ����û�л�����������4ѧ��Ҳ����ҪŶ��"<<endl; 
	cout<<endl<<"���c++�ɼ�Ϊ��"<<Scplusplus<<endl;
	cout<<"���γ����ۣ�";
	if(Scplusplus>90)cout<<"���ſ�ѧ�úܺã��������ͣ�c++û����ģ����ƵĿ�һ��Ҳ�������£�"<<endl;
	else if(Scplusplus>75)cout<<"��ѧ�ǲ��еģ�Ҫ�����ϰ������ѧӢ��һ����һ��Ҫʵս��ϣ�������Ժ�������γ���ѧ���֪ʶ����ʵ������ʵ���н�����"<<endl; 
	else if(Scplusplus>60)cout<<"c++�ǽ����ˣ��������Ƶĳ������Կλ����еģ��������ԣ�ѧϰ�������ƣ�ϣ�����ܺú������������ϰ���ֲ����ſεĹ�ʧ��"<<endl;
	else cout<<"��ϢѧԺ��ѧ������c++��ѧ���᣿���а�������һ�θĹ����µĻ��ᣬһ��Ҫ�ú�ѧϰ�ˣ�"<<endl; 
	cout<<endl<<"��������ɼ�Ϊ��"<<Spe<<endl;
	cout<<"���γ����ۣ�";
	if(Spe>100)cout<<"�����������������룡"<<endl;
	else if(Spe>90)cout<<"�������ʲ�����Ҫ�����������Ŷ��"<<endl;
	else if(Spe>75)cout<<"���кúõ�Ŭ���ˣ��ټӰѾ��ɣ��෢չ���������Ǻܺõ�����ֶΣ�"<<endl; 
	else if(Spe>60)cout<<"ѧϰ��Ȼ��Ҫ��������ǵ�һλ�İ���Ҫ������ˣ����������ܶ��ǿ��Եģ�"<<endl;
	else cout<<"������լ������ʲô���ٲ�������û��Ҫ�ˡ�������ȥ�ٵ����Լ���"<<endl; 
	cout<<endl<<"���GPAΪ��"<<GPA<<endl;
	cout<<"�ۺ����ۣ�";
	if(GPA>=3.50)cout<<"֪ʶ���յĺܲ����������ͣ����ֺ�ѧϰ�ľ�ͷ��^-^��"<<endl;
	else if(GPA>=3.00)cout<<"����Ŭ����һ�����Ի�ø��õĳɼ���*-*��"<<endl; 
	else if(GPA>=2.50)cout<<"Ҫ�ӰѾ���ѽ����Ҫ���˸ϳ��ˣ�������"<<endl; 
	else if(GPA>=2.00)cout<<"���ѧϰ���ǲ����������أ���ɲ��У�Ҫ�ú�Ŭ����0.0"<<endl; 
	else cout<<"�ٲ��ú�ѧϰ�Ļ��ɾ�Ҫ����̭�ˣ����Ŭ���ɣ�~-~��"<<endl; 
	int a;
	for(;1;)
	{
		cout<<"1.������һ��"<<endl<<"0.�������˵�"<<endl;
	    cin>>a; 
	    if(a==1||a==0) break;
	    else cout<<"�˵�ѡ���������������"<<endl;
	}
	return a;
}
void Student::SetName()
  {
   cout<<"����������:";
   cin>>Name;
  }
void Student::SetNumber()
  {
   cout<<"������ѧ��:"; 
   cin>>Number;
  }
void Student::SetSex()
  {
   cout<<"�������Ա�:";
   cin>>Sex;
  }
void Student::SetScore()
  {
   cout<<"������ߵ���ѧ�ĳɼ�:";
   cin>>Math;
   cout<<"�������ѧ����ĳɼ�:";
   cin>>Physics;
   cout<<"������C++�ĳɼ�:";
   cin>>CPlusPlus;
   cout<<"�����������ĳɼ�:"; 
   cin>>PE;
  }
void Student::ShowName()
  {
   cout<<"����:"<<Name<<";"<<endl; 
  }
void Student::ShowNumber()
  {
   cout<<"ѧ��:"<<Number<<";"<<endl; 
  }
void Student::ShowSex()
  {
   cout<<"�Ա�:"<<Sex<<";"<<endl;
  }
void Student::ShowMScore()
  {
   cout<<"�ߵ���ѧ�ɼ�:"<<Math<<endl;
  }
void Student::ShowPScore()
  {
   cout<<"��ѧ����ɼ�:"<<Physics<<endl;
  }
void Student::ShowCScore()
  {
   cout<<"C++�ɼ�:"<<CPlusPlus<<endl;
  }
void Student::ShowPEScore()
  {
   cout<<"�����ɼ�:"<<PE<<endl;
  }
void Student::ChangeName()
  {
   cout<<"��Ҫ�������޸�Ϊ:";
   cin>>Name;
  } 
void Student::ChangeNumber()
  {
   cout<<"��Ҫ��ѧ���޸�Ϊ:";
   cin>>Number;
  } 
void Student::ChangeSex()
  {
   cout<<"��Ҫ�Ա��޸�Ϊ:";
   cin>>Sex;
  } 
void Student::ChangeMScore() 
  {
   cout<<"��Ҫ���ߵ���ѧ�ɼ��޸�Ϊ:";
   cin>>Math;
  }
void Student::ChangePScore() 
  {
   cout<<"��Ҫ����ѧ����ɼ��޸�Ϊ:";
   cin>>Physics;
  } 
void Student::ChangeCScore() 
  {
   cout<<"��Ҫ��C++�ɼ��޸�Ϊ:";
   cin>>CPlusPlus;
  } 
void Student::ChangePEScore() 
  {
   cout<<"��Ҫ�������ɼ��޸�Ϊ:";
   cin>>PE;
  }  
void Student::load()
{
	Math=0;
	Physics=0;
	CPlusPlus=0;
	PE=0;
}
string Student::name()
  {
   return Name;
  }
string Student::number()
  {
   return Number;
  }
int Student::math()
{
	return Math;
}
int Student::physics() 
{
	return Physics;
}
int Student::cplusplus() 
{
	return CPlusPlus;
}
int Student::pe() 
{
	return PE;
}
float Student::count_GPA()
{
	float a,b,c,d,e;
	if(Math>=95) a=4.33;
	else if(Math>=90) a=4.00;
	else if(Math>=85) a=3.67;
	else if(Math>=82) a=3.33;
	else if(Math>=78) a=3.00;
	else if(Math>=75) a=2.67;
	else if(Math>=72) a=2.33;
	else if(Math>=68) a=2.00;
	else if(Math>=64) a=1.67;
	else if(Math>=61) a=1.33;
	else if(Math>=60) a=1.00;
	else a=0;
	if(Physics>=95) b=4.33;
	else if(Physics>=90) b=4.00;
	else if(Physics>=85) b=3.67;
	else if(Physics>=82) b=3.33;
	else if(Physics>=78) b=3.00;
	else if(Physics>=75) b=2.67;
	else if(Physics>=72) b=2.33;
	else if(Physics>=68) b=2.00;
	else if(Physics>=64) b=1.67;
	else if(Physics>=61) b=1.33;
	else if(Physics>=60) b=1.00;
	else b=0;
	if(CPlusPlus>=95) c=4.33;
	else if(CPlusPlus>=90) c=4.00;
	else if(CPlusPlus>=85) c=3.67;
	else if(CPlusPlus>=82) c=3.33;
	else if(CPlusPlus>=78) c=3.00;
	else if(CPlusPlus>=75) c=2.67;
	else if(CPlusPlus>=72) c=2.33;
	else if(CPlusPlus>=68) c=2.00;
	else if(CPlusPlus>=64) c=1.67;
	else if(CPlusPlus>=61) c=1.33;
	else if(CPlusPlus>=60) c=1.00;
	else c=0;
	if(PE>=95) d=4.33;
	else if(PE>=90) d=4.00;
	else if(PE>=85) d=3.67;
	else if(PE>=82) d=3.33;
	else if(PE>=78) d=3.00;
	else if(PE>=75) d=2.67;
	else if(PE>=72) d=2.33;
	else if(PE>=68) d=2.00;
	else if(PE>=64) d=1.67;
	else if(PE>=61) d=1.33;
	else if(PE>=60) d=1.00;
	else d=0;
	e=(a*5.5+b*4+c*3+d)/(5.5+4+3+1);
	return e;
}
void kecheng::setvalue()  //ģ���
{
	for(int i=0;i<16;i++)  //forѭ����������
	{
		cout<<"*������γ�����(���д ��Ҫ����6����)"<<endl;
		cin>>ming[i];
		cout<<"*������γ̽�ʦ"<<endl;
		cin>>jiao[i];
		cout<<"*���������"<<endl;
		cin>>di[i];
		cout<<"*������γ̵���ʼ��"<<endl;
		cin>>qi[i];
		if(qi[i]>20)            
		{
			cout<<"�������!  ����������"<<endl;   //�����ж�
			cin>>qi[i];                            //��������
		}  
		cout<<"*������γ̵Ľ�����"<<endl;
		cin>>jie[i];
		if(jie[i]>20)                           //�����ж�
		{
			cout<<"�������!  ����������"<<endl;
			cin>>jie[i];                        //��������
		} 
		cout<<"*������γ�һ���м�����"<<endl; //һ�ſ�һ�ܼ��ڵĴ���
		int s;
		cin>>s;                               //�������
		{
			for(int u=0;u<s;u++)                 //forѭ�����ƶ������
			{
				ming[i+u]=ming[i];
				jiao[i+u]=jiao[i];
				di[i+u]=di[i];
				qi[i+u]=qi[i];
				jie[i+u]=jie[i];
				cout<<"*�������"<<u+1<<"�ο������ڼ�"<<endl;
		        cin>>xing[i+u];
		        if(xing[i+u]>7)
				{
					cout<<"�������!  ����������"<<endl;
			        cin>>xing[i+u];
				}
		        cout<<"*������γ��ǵڼ���"<<endl;
		        cin>>tang[i+u];
		        if(tang[i+u]>5)
				{
				    cout<<"�������!  ����������"<<endl;
			        cin>>tang[i+u];
				}
			}
		}
		i=i+s;
		cout<<"*�����Ƿ������һ���γ̣�(Y/N)"<<endl;  //�Ƿ��������
		char num;
		cin>>num;
		if(num=='Y'||num=='y') continue;                  //������һ��
		else break;                                    //��������
	}
}
void kecheng::showke()                                //ģ���� ������ļ� 
{
	ofstream fout("kebiao.txt");
	fout<<student2[i].name()<<"�Ŀα�"<<endl; 
	fout<<"                                            ////////////////////////////////"<<endl;                              //�α��ҳü
	fout<<"                                            //��           ��           ��//"<<endl;
	fout<<"                                            ////////////////////////////////"<<endl;
	fout<<"_____________________________________________________________________________________________________"<<endl;
	fout<<"         |     һ     |     ��     |     ��     |     ��     |     ��     |     ��     |     ��     |   "<<endl;
   	fout<<"_____________________________________________________________________________________________________"<<endl;
	for(int i=1;i<6;i++)
	{
		int l;                          //��l���������Ƿ����������
		switch(i)                       //�α��һ����� ���
		{
			case 1:fout<<"һ(1-2)  |";break;
		    case 2:fout<<"��(3-4)  |";break;
		    case 3:fout<<"��(5-6)  |";break;
		    case 4:fout<<"��(7-8)  |";break;
		    case 5:fout<<"��(9-10) |";break;
		}
		
		for(int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					fout<<setw(12)<<ming[n]<<"|";  //�������
					l=1;
				}
			}
			if(l==0)
			{
			    fout<<"            |";           //��û��������ո�
			}
		}
		fout<<endl;
		fout<<"         | ";
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					fout<<setw(10)<<jiao[n]<<" | ";  //��ʦ���
					l=1;
				}
			}
			if(l==0)
			{
			    fout<<"           | ";           //��û��������ո�
			}
		}
		fout<<endl;
		fout<<"         | ";                     
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					fout<<setw(11)<<di[n]<<"| ";    //�ص����
					l=1;
				}
			}
			if(l==0)
			{
			    fout<<"           | ";          //��û��������ո�
			}
		}
		fout<<endl;
		fout<<"         |";
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					fout<<" ("<<setw(2)<<qi[n]<<" -"<<setw(2)<<jie[n]<<")�� ";  //���������
					fout<<"|";
					l=1;
				}
			}
			if(l==0)
			{
			    fout<<setw(12)<<"          ";     //��û��������ո�
				fout<<"|";
			}
		}
		fout<<endl;
        	fout<<"_____________________________________________________________________________________________________"<<endl;
	}
}
void kecheng::showke1()                                //ģ���� ����α� 
{
	cout<<"                                   ////////////////////////////////"<<endl;                              //�α��ҳü
	cout<<"                                   //��           ��           ��//"<<endl;
	cout<<"                                   ////////////////////////////////"<<endl;
	cout<<"_____________________________________________________________________________________________________"<<endl;
	cout<<"         |     һ     |     ��     |     ��     |     ��     |     ��     |     ��     |     ��     |   "<<endl;
   	cout<<"_____________________________________________________________________________________________________"<<endl;
	for(int i=1;i<6;i++)
	{
		int l;                          //��l���������Ƿ����������
		switch(i)                       //�α��һ����� ���
		{
			case 1:cout<<"һ(1-2)  |";break;
		    case 2:cout<<"��(3-4)  |";break;
		    case 3:cout<<"��(5-6)  |";break;
		    case 4:cout<<"��(7-8)  |";break;
		    case 5:cout<<"��(9-10) |";break;
		}
		for(int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					cout<<setw(12)<<ming[n]<<"|";  //�������
					l=1;
				}
			}
			if(l==0)
			{
			    cout<<"            |";           //��û��������ո�
			}
		}
		cout<<endl;
		cout<<"         | ";
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					cout<<setw(10)<<jiao[n]<<" | ";  //��ʦ���
					l=1;
				}
			}
			if(l==0)
			{
			    cout<<"           | ";           //��û��������ո�
			}
		}
		cout<<endl;
		cout<<"         | ";                     
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					cout<<setw(11)<<di[n]<<"| ";    //�ص����
					l=1;
				}
			}
			if(l==0)
			{
			    cout<<"           | ";          //��û��������ո�
			}
		}
		cout<<endl;
		cout<<"         |";
		for( int j=1;j<8;j++)
		{
			l=0;
			for(int n=0;n<16;n++)
			{
				if(tang[n]==i&&xing[n]==j)
				{
					cout<<" ("<<setw(2)<<qi[n]<<" -"<<setw(2)<<jie[n]<<")�� ";  //���������
					cout<<"|";
					l=1;
				}
			}
			if(l==0)
			{
			    cout<<setw(12)<<"          ";     //��û��������ո�
				cout<<"|";
			}
		}
		cout<<endl;
        	cout<<"_____________________________________________________________________________________________________"<<endl;
	}
}

