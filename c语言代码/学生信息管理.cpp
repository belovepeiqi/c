#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#define MAX 100
static int N;
using namespace std;
class CDate  // ����������
{
private:
    unsigned short int year;   // ��
    unsigned short int month;  // ��
    unsigned short int day;    // ��
public:
    CDate(int y=0,int m=0,int d=0);
    bool operator < (CDate d);  //��Ա����������<�����
    friend istream & operator >> (istream &in,CDate &d);    //�������������
    friend ostream & operator<<(ostream &out,CDate &d);     //������������
    friend bool CheckValid(CDate d);    //������ںϷ���
    friend bool LeapYear(int year);
    void SetDate(int y,int m,int d);
};
CDate::CDate(int y,int m,int d):year(y),month(m),day(d) {}
// ��������
void CDate::SetDate(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
}
// �������������>>
istream &operator>>(istream &in,CDate &d)
{
    char ch1,ch2;
    cout<<"����������(�����ʽ��YYYY-MM-DD)��";
    while(1)
    {
        cin>>d.year>>ch1>>d.month>>ch2>>d.day;
        if (ch1=='-' && ch2=='-')
            if (CheckValid(d)) break;   //��ʽ��ȷ���˳�
        cerr<<"ʱ���ʽ��ȡֵ����ȷ! ����������\n";
    }
    return cin;
}
// ������������<<
ostream &operator<<(ostream &out,CDate &d)
{
    out<<d.year<<"��"<<d.month<<"��"<<d.day<<"��";
    return out;
}
// �ж�����d1<d2
bool CDate::operator < (CDate d)
{
    if (year<d.year) return true;
    if (year>d.year) return false;
    if (month<d.month) return true;
    if (month>d.month) return false;
    if (day<d.day) return true;
    return false;
}

// ����Ƿ�Ϊ����
bool LeapYear(int year)
{
    if (year%4==0 && year%100 || year%400==0)
        return true;
    return false;
}

// ������ںϷ���
bool CheckValid(CDate d)
{
    int n;
    if (d.month<1 || d.month>12) return false;
    if (d.day<1) return false;
    n=31;
    switch(d.month)
    {
    case 2:
        if (LeapYear(d.year))//�ж��Ƿ�������
            n=29;
        else
            n=28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        n=30;
        break;
    }
    if (d.day>n) return false;
    return true;
}

class CStudent
{
private:
    char *name;              // ����
    bool sex;                // �Ա�
CDate date;              // �������ڣ�����������ݳ�Ա
vector<CStudent> data;
public:
    static int num;          // ѧ������
    CStudent();
    void InputData();
    friend void Sort();      // ����
    friend void FindName();  // ��������ѯ
    friend void Statistic(); // ���Ա�ͳ��
    friend void Display();   // ��ʾȫ����Ϣ
} stu[MAX];
int CStudent::num=0;    //static ��ʼ��
CStudent::CStudent() {} //���캯��

void add()
{	int num;
	string name,politic,address;
	char sex;
	ofstream outfile("student1.txt",ios::out);
	if(!outfile){cerr<<"open file error!";exit(1);}
	while(1){
		cout<<"  ��������ѧ����Ϣ��\n"<<endl;
		cout<<"      ��������ѧ�ţ�\n"<<endl;
			cin>>num;
			if(num==0)break;
		cout<<"  \n      ��������������\n"<<endl;
			cin>>name;
		cout<<"   \n      ���������Ա�\n"<<endl;
			cin>>sex;
		cout<<"   \n      ��������������ò��\n"<<endl;
			cin>>politic;
		cout<<"   \n      ���������ͥסַ��\n"<<endl;
			cin>>address;
		cout<<"\n";
			outfile<<num<<" "<<name<<" "<<sex<<" "<<politic<<" "<<address<<" "<<endl;
		N++;
	}
		outfile.close();
}
void change()
{
		int num[200];
		string name[200],politic[200],address[200];
		char sex[200];
		int n;
		string nam,poli,addr;
		char s;
		ifstream infile("student1.txt",ios::in);
		if(!infile){cerr<<"open file error!";exit(1);}
			for(int i=0;i<N;i++)
			{infile>>num[i]>>name[i]>>sex[i]>>politic[i]>>address[i]; }
			infile.close();
			ofstream outfile("student1.txt",ios::out);
			if(!outfile){cerr<<"open file error!";exit(1);}
		while(1)
		{
			cout<<" !ע������ѧ��Ϊ0��ֹͣ����!\n"<<endl;
			cout<<" ����������Ҫ�޸�ѧ����ѧ�ţ�\n"<<endl;
			cin>>n;cout<<"\n";
		if(n==0)break;
			cout<<"\n      ���������޸ĺ��������\n"<<endl;
			cin>>nam;cout<<"\n";
			cout<<"      ���������޸ĺ���Ա�\n"<<endl;
			cin>>s;cout<<"\n";
			cout<<"      ���������޸ĺ��������ò��\n"<<endl;
			cin>>poli;cout<<"\n";
			cout<<"      ���������޸ĺ��ͥסַ��\n"<<endl;
			cin>>addr;cout<<"\n";
		for(int i=0;i<N;i++)
		{	if(num[i]==n){name[i]=nam;sex[i]=s;politic[i]=poli;address[i]=addr;}
			outfile<<num[i]<<" "<<name[i]<<" "<<sex[i]<<" "<<politic[i]<<" "<<address[i]<<endl; }
			outfile.close();
			cout<<"�޸����!\n"<<endl;
		}
}
void search()
{
		int num[200];
		string name[200],politic[200],address[200];
		char sex[200];
		int n;
		ifstream infile("student1.txt",ios::in);
		if(!infile){cerr<<"open file error!";exit(1);}
		for(int i=0;i<N;i++)
		{infile>>num[i]>>name[i]>>sex[i]>>politic[i]>>address[i];}
			infile.close();
		while(1)
		{
			cout<<"�����밴���ַ�ʽ����:"<<endl;
			cout<<"                       ---------------------------------"<<endl;
			cout<<"                      |         ";cout<<"1.��ѧ�Ų���    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"2.����������    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"3.���Ա����    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"4.��������ò����";cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"5.����ͥסַ����";cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"6.�������˵�    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"0.�˳�����      ";      cout<<"        |"<<endl;
			cout<<"                       ---------------------------------\n\n"<<endl;
		cin>>n;
			cout<<"\n";
	if(n==6)break;
		switch(n)
	{	case 1:while(1){cout<<"��������Ҫ���ҵ�ѧ��(����0���ز��ҷ�ʽ)��"<<endl;cin>>num[199];
                if(num[199]==0)break;
                for(int i=0;i<N;i++)
				{if(num[i]==num[199]){cout<<"���ҽ��Ϊ��"<<endl;
				cout<<"ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"������ϣ�\n"<<endl;
               }break;
		case 2:while(1){cout<<"��������Ҫ���ҵ�����(����0���ز��ҷ�ʽ)��"<<endl;cin>>name[199];
	            if(name[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(name[i]==name[199]){cout<<"���ҽ��Ϊ��"<<endl;
				cout<<"ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"������ϣ�\n"<<endl;
               };break;
		case 3:while(1){cout<<"��������Ҫ���ҵ��Ա�(����0���ز��ҷ�ʽ)��"<<endl;cin>>sex[199];
	            if(sex[199]=='0')break;
                for(int i=0;i<N;i++)
				{if(sex[i]==sex[199]){cout<<"���ҽ��Ϊ��"<<endl;
				cout<<"ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"������ϣ�\n"<<endl;
               }break;
		case 4:while(1){cout<<"��������Ҫ���ҵ�������ò(����0���ز��ҷ�ʽ)��"<<endl;cin>>politic[199];
	            if(politic[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(politic[i]==politic[199]){cout<<"���ҽ��Ϊ��"<<endl;
				cout<<"ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"������ϣ�\n"<<endl;
               }break;
		case 5:while(1){cout<<"��������Ҫ���ҵļ�ͥסַ(����0���ز��ҷ�ʽ)��"<<endl;cin>>address[199];
	            if(address[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(address[i]==address[199]){cout<<"���ҽ��Ϊ��"<<endl;
				cout<<"ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"������ϣ�\n"<<endl;
               }break;
		default:cout<<"�������\n"<<endl;break;
		}
	}
}
void del()
{	int num[200],n;
	string name[200],politic[200],address[200];
	char sex[200];
	ifstream infile("student1.txt",ios::in);
	if(!infile){cerr<<"open file error!";exit(1);}
	cout<<" ѧ��      ����       �Ա�       ������ò        ��ͥסַ"<<endl;
	for(int i=0;i<N;i++)
	{infile>>num[i]>>name[i]>>sex[i]>>politic[i]>>address[i];
		cout<<" "<<num[i]<< "          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;}
		infile.close();
		ofstream outfile("student1.txt",ios::out);
	if(!outfile){cerr<<"open file error!";exit(1);}
 while(1)
	{cout<<"\n\n!ע������ѧ��Ϊ0��ֹͣɾ��!\n"<<endl;
	 cout<<"����������Ҫɾ��ѧ����ѧ�ţ�"<<endl;
		cin>>n;
	if(n==0)break;
	for(int i=0;i<N;i++)
	{if(num[i]!=n)outfile<<num[i]<<" "<<name[i]<<" "<<sex[i]<<" "<<politic[i]<<" "<<address[i]<<endl;}
		cout<<"ɾ����ϣ�"<<endl;
		N--;
	}
	outfile.close();
}
void show()
	{ 	int num;
	string name,politic,address;
	char sex;
	ifstream infile("student1.txt",ios::in);
	if(!infile){cerr<<"open file error!";exit(1);}
		cout<<"ѧ��       ����       �Ա�       ������ò       ��ͥסַ"<<endl;
	for(int i=0;i<N;i++)
	{infile>>num>>name>>sex>>politic>>address;
		cout<<num<<"            "<<name<<"          "<<sex<<"           "<<politic<<"              "<<address<<endl<<endl;}
	}
int main()
{	
int n;
while(1){
	cout<<"                       ---------------------------------"<<endl;
	cout<<"                      |         ";cout<<"1.����ѧ����¼��";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"2.ɾ��ѧ����¼��";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"3.�޸�ѧ����¼��";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"4.����ѧ����¼��";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"5.��ʾѧ����¼��";cout<<"        |"<<endl;
	cout<<"                      |";cout<<"��ע�⣺����ѧ��Ϊ0ʱ�˳����룡��";cout<<"|"<<endl;
	cout<<"                       ---------------------------------\n\n"<<endl;
	cout<<" ����ѡ��\n"<<endl;
	cin>>n;
	cout<<"\n";
	if(n==0)break;
switch(n)
{		case 1:add();break;
		case 2:del();break;
		case 3:change();break;
		case 4:search();break;
		case 5:show();break;
		default:break;
		}
	}
}

