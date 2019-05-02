#include<iostream>
#include<fstream> 
#include<string.h> 
using namespace std;
 
/*ѧ����Ϣ���*/
class Student
{
	public:
	char name[20];
	int num;
	Student *next;
	char sex[10];
	 
	
	void input();
	void ReadFile(ifstream &in);
};
 
/*�����������Ϣ*/
void Student::input()
{
	cout<<"please enter student's name:";
	cin>>name;
	cout<<"please enter student's num:";
	cin>>num;
	cout<<"please enter student's sex:";
	cin>>sex;
	cout<<"please enter student's birth:";
	cin>>birth;
	cout<<"please enter student's roomnum:";
	cin>>roomnum;
	
	return ; 
}
 
/*���ĵ��ж�ȡֵ�����*/
void Student::ReadFile(ifstream &in)
{
	in>>name>>num>>sex>>birth>>roomnum;
}
 
/*ѧ����Ϣ�������*/
class StudentMessage
{
	public:
	StudentMessage();	
	~StudentMessage();
	
	/*����ѧ����Ϣ��������õ��ĺ���*/
	void Show_Menu();
	void Add_Node();
	void Del_node();
	void Display();
	void Find(); 
	void Modify();
	void Load();
	void Save();
	void Clean();
	void Swap_node(Student *q,Student*p);
	void Sort(); 
	
	private: 
	/*StudentMessage����Կ�������Studet��Ϊ��������*/ 
	Student *head;  //����ͷ 
	Student *end;	//����β 
	
	ifstream in;
	ofstream out;
};
 
/*���캯��*/
/*������캯�������ڴ򿪳���ʱ�����Զ�����ԭ�е�ѧ����Ϣ*/ 
StudentMessage::StudentMessage()
{
	/*��ʼ����ͷβ���*/ 
	head = new Student;
	head->next = new Student;
	end = head->next; 
	
	ifstream in("file.txt"); //ԭ�е�ѧ����Ϣ�Ƿ����ļ�file.txt�е� 
	
	/*Important Part��*/
		char ch = in.get();
	if(in.eof())
	{
		cout<<"file is empty"<<endl;
	}
	
	/*���ļ��ǿ�*/	
	while(!in.eof())
	{
		end->ReadFile(in);
		if(end->name[0]=='\0')break;  //����Ҳ�ǱȽϹؼ��ģ�������һ��Ļ�
									 //�������ļ��������ı��Ҳ������		
		end->next = new Student;
		end = end->next;
	}
}
 
/*��������*/
StudentMessage::~StudentMessage()
{
	Save();    //�������˳������ʱ�򣬱������ݵ�file.txt�� 
	Student *pos = head->next;
	Student *temp;
	while(pos!=end)
	{
		temp = pos;
		pos = pos->next;
		delete temp;
	}
	delete head,end;
}
 
/*
/*���ӽ��*/
void StudentMessage::Add_Node()
{
	char quit;
	while(1)
	{
		end->input();
		end->next = new Student;
		end = end->next;
		
		cout<<"continue or not?,Y/N"<<endl;
		cin>>quit;
		switch(quit)
		{
			case'Y':
			case'y':break;
			case'n':
			case'N':return;break;
			default:cout<<"error input,again,please..Y/N";
					cin>>quit;
		}
	}
	cout<<"add node success!"<<endl;
	system("pause");
}
 
 
/*�޸Ľ��*/
void StudentMessage::Modify()
{
	char name[20];
	cout<<"enter the name you want to modify:";
	cin>>name;
	
	Student *pos = head->next;
	for(pos;pos!=end;pos=pos->next)
	{
		if(strcmp(name,pos->name)==0)
		{
			pos->input();
			break;
		}	
	}
	cout<<"Modify success!..."<<endl;
	system("pause");
} 
 
/*ɾ�����*/
void StudentMessage::Del_node()
{
	int del_flag = 0;
	char name[20];
	if(head->next == end)
	{cout<<"Empty...."<<endl;return;}
	
	cout<<"please enter the name you want to delete:";
	cin>>name;
	
	Student *p = head->next;
	Student *q = head; 
	
	for(p;p!=end;p->next)
	{
		if(strcmp(p->name,name)==0) 
		{
			del_flag = 1;
			q->next = p->next;
			delete p;
			break;		
		}
		else
		{
			q=q->next;
			p=p->next;
		}
	}	
	if(del_flag == 0)
	{cout<<"Can not Find the name you want."<<endl;}
	
	cout<<"del node success!"<<endl;
	system("pause");
} 
 
/*����ѧ����Ϣ*/
void StudentMessage::Find()
{
	char name[20];
	cout<<"please enter name you want to find:";
	cin>>name;
 
	Student *pos = head->next;
	if(pos==end)
	{
		cout<<"Student Message is Empty..."<<endl;
		return ;
	}
	
	for(pos;pos!=end;pos=pos->next)
	{
		if(strcmp(pos->name,name)==0)
		{
			cout<<"Find it!"<<endl;
			cout<<"name:"<<pos->name<<endl;
			cout<<"num:"<<pos->num<<endl;
			cout<<"sex:"<<pos->num<<endl;
			cout<<"birth:"<<pos->num<<endl;
			cout<<"roomnum:"<<pos->num<<endl;
			return;
		}
	}
	cout<<"Can not Find the name...";
}
 
/*����ѧ����Ϣ*/
void StudentMessage::Save()
{
	out.open("file.txt");
	Student *pos = head->next;
	if(head->next== end)
	{
		cout<<"StudentMessage List is Empty...."<<endl;
		return ;
	}
	else
	{
		for(pos;pos!=end;pos=pos->next)
		{
			out<<'\t'<<pos->name<<'\t'<<pos->num;//��ʽ�������д
										//��Ϊһ��ʼ����ļ���һ�£����ж�
										//�ļ��Ƿ�Ϊ�գ�����ǰ������á�\t��
										//�����Ӽ����ո񣬸�����һ���ո�
										//�Բ������������ݣ�����Ͳ�Ҫ�пո�
										//��Ϊ�������file.txt����Ϣʱ������
										//��ѿո�Ҳ����һ�����ݽ���������	
		}
	}
	out.close();
	
	cout<<"Save node success!"<<endl;
}
 
/*��ʾ���*/
void StudentMessage::Display()
{
	if(head->next==end)
	{cout<<"Empty..."<<endl;}
	
	Student *pos;
	pos = head->next;
	for(pos;pos!=end;pos=pos->next)
	{
		cout<<endl;
		cout<<pos->name<<endl;
		cout<<pos->num<<endl;
		cout<<endl;
	}
	system("pause");
}
 
/*��㽻��*/
void StudentMessage::Swap_node(Student *q,Student *p)
{
	char Tname[20];
	int Tnum;
	
	strcpy(Tname,p->name);
	Tnum = p->num;
	
	strcpy(p->name,q->name);
	p->num = q->num;
	
	strcpy(q->name,Tname);
	q->num = Tnum;	
}
 
/*��numλ׼����*/
void StudentMessage::Sort()
{
	Student *p,*q;
	p=head->next;
	
	/*ð������*/
	for(p;p!=end;p=p->next)
	{
		for(q=p->next;q!=end;q=q->next)
		{
			if(q->num > p->num)
			{
				Swap_node(q,p);		
			}	
		}
	} 
	cout<<"sort success!"<<endl;
	system("pause");
}
 
/*����ĵ�*/
void StudentMessage::Clean()
{
	ofstream out("file.txt",ios::trunc);
	out.close();
	exit(0);//��exitʹ�����˳������ʱ�򣬲�����StudentMessage�������������
			//�����ֻ���ڴ������д��file.txt�ļ��� 
}
 
/*��ʾ�˵�*/
void StudentMessage::Show_Menu()
{
	cout<<"0.�˳�����"<<endl;
	cout<<"1.����ѧ����Ϣ"<<endl;
	cout<<"2.ɾ��ѧ����Ϣ"<<endl;
	cout<<"3.��ʾ����ѧ����Ϣ"<<endl; 
	cout<<"4.�޸�ѧ����Ϣ"<<endl; 
	cout<<"5.����ѧ����Ϣ"<<endl;
	cout<<"6.����ĵ�"<<endl;
	cout<<"7.����"<<endl; 
} 
 
int main()
{
	StudentMessage sm;    //��������󣬲������乹�캯��
					     //��file.txt�е�ѧ����Ϣ���ݶ����ڴ���		
	int choice;
	
	while(1)
	{
		sm.Show_Menu();
		cout<<"please enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 0:return 0;break;
			case 1:sm.Add_Node();break;
			case 2:sm.Del_node();break;
			case 3:sm.Display();break;		
			case 4:sm.Modify();break;
			case 5:sm.Find();break;
			case 6:sm.Clean();break;
			case 7:sm.Sort();break;
		}		
		system("cls");	
	}
	return 0;
}

