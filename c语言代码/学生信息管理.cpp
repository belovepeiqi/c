#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#define MAX 100
static int N;
using namespace std;
class CDate  // 定义日期类
{
private:
    unsigned short int year;   // 年
    unsigned short int month;  // 月
    unsigned short int day;    // 日
public:
    CDate(int y=0,int m=0,int d=0);
    bool operator < (CDate d);  //成员函数，重载<运算符
    friend istream & operator >> (istream &in,CDate &d);    //重载输入运算符
    friend ostream & operator<<(ostream &out,CDate &d);     //重载输出运算符
    friend bool CheckValid(CDate d);    //检查日期合法性
    friend bool LeapYear(int year);
    void SetDate(int y,int m,int d);
};
CDate::CDate(int y,int m,int d):year(y),month(m),day(d) {}
// 设置日期
void CDate::SetDate(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
}
// 重载输入运算符>>
istream &operator>>(istream &in,CDate &d)
{
    char ch1,ch2;
    cout<<"请输入日期(输入格式：YYYY-MM-DD)：";
    while(1)
    {
        cin>>d.year>>ch1>>d.month>>ch2>>d.day;
        if (ch1=='-' && ch2=='-')
            if (CheckValid(d)) break;   //格式正确，退出
        cerr<<"时间格式或取值不正确! 请重新输入\n";
    }
    return cin;
}
// 重载输出运算符<<
ostream &operator<<(ostream &out,CDate &d)
{
    out<<d.year<<"年"<<d.month<<"月"<<d.day<<"日";
    return out;
}
// 判断日期d1<d2
bool CDate::operator < (CDate d)
{
    if (year<d.year) return true;
    if (year>d.year) return false;
    if (month<d.month) return true;
    if (month>d.month) return false;
    if (day<d.day) return true;
    return false;
}

// 检查是否为闰年
bool LeapYear(int year)
{
    if (year%4==0 && year%100 || year%400==0)
        return true;
    return false;
}

// 检查日期合法性
bool CheckValid(CDate d)
{
    int n;
    if (d.month<1 || d.month>12) return false;
    if (d.day<1) return false;
    n=31;
    switch(d.month)
    {
    case 2:
        if (LeapYear(d.year))//判断是否是闰年
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
    char *name;              // 姓名
    bool sex;                // 性别
CDate date;              // 出生日期，类对象作数据成员
vector<CStudent> data;
public:
    static int num;          // 学生人数
    CStudent();
    void InputData();
    friend void Sort();      // 排序
    friend void FindName();  // 按姓名查询
    friend void Statistic(); // 按性别统计
    friend void Display();   // 显示全部信息
} stu[MAX];
int CStudent::num=0;    //static 初始化
CStudent::CStudent() {} //构造函数

void add()
{	int num;
	string name,politic,address;
	char sex;
	ofstream outfile("student1.txt",ios::out);
	if(!outfile){cerr<<"open file error!";exit(1);}
	while(1){
		cout<<"  ★请输入学生信息：\n"<<endl;
		cout<<"      ◆请输入学号：\n"<<endl;
			cin>>num;
			if(num==0)break;
		cout<<"  \n      ◆请输入姓名：\n"<<endl;
			cin>>name;
		cout<<"   \n      ◆请输入性别：\n"<<endl;
			cin>>sex;
		cout<<"   \n      ◆请输入政治面貌：\n"<<endl;
			cin>>politic;
		cout<<"   \n      ◆请输入家庭住址：\n"<<endl;
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
			cout<<" !注意输入学号为0是停止输入!\n"<<endl;
			cout<<" ★请输入你要修改学生的学号：\n"<<endl;
			cin>>n;cout<<"\n";
		if(n==0)break;
			cout<<"\n      ★请输入修改后的姓名：\n"<<endl;
			cin>>nam;cout<<"\n";
			cout<<"      ★请输入修改后的性别：\n"<<endl;
			cin>>s;cout<<"\n";
			cout<<"      ★请输入修改后的政治面貌：\n"<<endl;
			cin>>poli;cout<<"\n";
			cout<<"      ★请输入修改后家庭住址：\n"<<endl;
			cin>>addr;cout<<"\n";
		for(int i=0;i<N;i++)
		{	if(num[i]==n){name[i]=nam;sex[i]=s;politic[i]=poli;address[i]=addr;}
			outfile<<num[i]<<" "<<name[i]<<" "<<sex[i]<<" "<<politic[i]<<" "<<address[i]<<endl; }
			outfile.close();
			cout<<"修改完毕!\n"<<endl;
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
			cout<<"请输入按何种方式查找:"<<endl;
			cout<<"                       ---------------------------------"<<endl;
			cout<<"                      |         ";cout<<"1.按学号查找    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"2.按姓名查找    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"3.按性别查找    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"4.按政治面貌查找";cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"5.按家庭住址查找";cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"6.返回主菜单    ";    cout<<"        |"<<endl;
			cout<<"                      |         ";cout<<"0.退出查找      ";      cout<<"        |"<<endl;
			cout<<"                       ---------------------------------\n\n"<<endl;
		cin>>n;
			cout<<"\n";
	if(n==6)break;
		switch(n)
	{	case 1:while(1){cout<<"请输入你要查找的学号(输入0返回查找方式)："<<endl;cin>>num[199];
                if(num[199]==0)break;
                for(int i=0;i<N;i++)
				{if(num[i]==num[199]){cout<<"查找结果为："<<endl;
				cout<<"学号      姓名       性别       政治面貌        家庭住址"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"查找完毕！\n"<<endl;
               }break;
		case 2:while(1){cout<<"请输入你要查找的姓名(输入0返回查找方式)："<<endl;cin>>name[199];
	            if(name[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(name[i]==name[199]){cout<<"查找结果为："<<endl;
				cout<<"学号      姓名       性别       政治面貌        家庭住址"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"查找完毕！\n"<<endl;
               };break;
		case 3:while(1){cout<<"请输入你要查找的性别(输入0返回查找方式)："<<endl;cin>>sex[199];
	            if(sex[199]=='0')break;
                for(int i=0;i<N;i++)
				{if(sex[i]==sex[199]){cout<<"查找结果为："<<endl;
				cout<<"学号      姓名       性别       政治面貌        家庭住址"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"查找完毕！\n"<<endl;
               }break;
		case 4:while(1){cout<<"请输入你要查找的政治面貌(输入0返回查找方式)："<<endl;cin>>politic[199];
	            if(politic[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(politic[i]==politic[199]){cout<<"查找结果为："<<endl;
				cout<<"学号      姓名       性别       政治面貌        家庭住址"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"查找完毕！\n"<<endl;
               }break;
		case 5:while(1){cout<<"请输入你要查找的家庭住址(输入0返回查找方式)："<<endl;cin>>address[199];
	            if(address[199]=="0")break;
                for(int i=0;i<N;i++)
				{if(address[i]==address[199]){cout<<"查找结果为："<<endl;
				cout<<"学号      姓名       性别       政治面貌        家庭住址"<<endl;
				cout<<num[i]<<"          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;
				}
				}
				cout<<"查找完毕！\n"<<endl;
               }break;
		default:cout<<"输入错误！\n"<<endl;break;
		}
	}
}
void del()
{	int num[200],n;
	string name[200],politic[200],address[200];
	char sex[200];
	ifstream infile("student1.txt",ios::in);
	if(!infile){cerr<<"open file error!";exit(1);}
	cout<<" 学号      姓名       性别       政治面貌        家庭住址"<<endl;
	for(int i=0;i<N;i++)
	{infile>>num[i]>>name[i]>>sex[i]>>politic[i]>>address[i];
		cout<<" "<<num[i]<< "          "<<name[i]<<"          "<<sex[i]<<"             "<<politic[i]<<"          "<<"     "<<address[i]<<endl<<endl;}
		infile.close();
		ofstream outfile("student1.txt",ios::out);
	if(!outfile){cerr<<"open file error!";exit(1);}
 while(1)
	{cout<<"\n\n!注意输入学号为0是停止删除!\n"<<endl;
	 cout<<"★请输入你要删除学生的学号："<<endl;
		cin>>n;
	if(n==0)break;
	for(int i=0;i<N;i++)
	{if(num[i]!=n)outfile<<num[i]<<" "<<name[i]<<" "<<sex[i]<<" "<<politic[i]<<" "<<address[i]<<endl;}
		cout<<"删除完毕！"<<endl;
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
		cout<<"学号       姓名       性别       政治面貌       家庭住址"<<endl;
	for(int i=0;i<N;i++)
	{infile>>num>>name>>sex>>politic>>address;
		cout<<num<<"            "<<name<<"          "<<sex<<"           "<<politic<<"              "<<address<<endl<<endl;}
	}
int main()
{	
int n;
while(1){
	cout<<"                       ---------------------------------"<<endl;
	cout<<"                      |         ";cout<<"1.增加学生记录～";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"2.删除学生记录～";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"3.修改学生记录～";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"4.查找学生记录～";cout<<"        |"<<endl;
	cout<<"                      |         ";cout<<"5.显示学生记录～";cout<<"        |"<<endl;
	cout<<"                      |";cout<<"（注意：输入学号为0时退出输入！）";cout<<"|"<<endl;
	cout<<"                       ---------------------------------\n\n"<<endl;
	cout<<" ☆请选择：\n"<<endl;
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

