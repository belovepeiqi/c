#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string"
#include "cstring"
#include "fstream"
#include "iomanip"
#define NULL 0
using namespace std;
   int id;    
	string Sex;
  double Age;
  double Weight;  
  string Birthday;
  string Birthplace;
  double Price;
  string Character;   
    string Kind;   
  string Feedregion; 
class item{
   public:
    item()
	{   }
  item *creat();
  void set_ID(int id){ID=id;}
  void set_sex(string Sex){sex=Sex;}
  void set_age(double Age){age=Age;}
  void set_weight(double Weight){weight=Weight;}
  void set_birthday(string Birthday){birthday=Birthday;}
  void set_birthplace(string Birthplace){birthplace=Birthplace;}
  void set_price(double Price){price=Price;}
  void set_character(string Character){character=Character;}
  void set_kind(string Kind){kind=Kind;}
  void set_feedregion(string Feedregion){feedregion=Feedregion;}
   int get_ID(){return ID;}
   string get_sex()   {return sex;}
   double get_age()  {return age;}
  double get_weight() { return weight; }
   string get_birthday()  { return birthday;}
   string get_birthplace()  { return birthplace;}
   double get_price()  {return price;}
	string get_character()  { return character;}
    string get_kind()  {return kind;}
	string get_feedregion()  {return feedregion;}
	void output_all(item *head);
   item *insert(item *head,item *p);
	void del(item *head);
    void search(item *head);
	void search_kind1(item *head);
	void search_kind2(item *head);
	void search_kind3(item *head);
	void search_kind4(item *head);
	void search_kind5(item *head);
	void search_kind6(item *head);
	void search_kind7(item *head);
    void search_price1(item *head);
	void search_price2(item *head);
	void search_price3(item *head);
	void search_price4(item *head);
	void search_character1(item *head);
	void search_character2(item *head);
	void search_character3(item *head);
	void search_character4(item *head);
	void show(item *x);
    void showall(item *head);
    void sort_ID(item *head);
	void sort_weight(item *head);
    void sort_age(item *head);
    void sort_price(item *head);
	void edit(item *head);
	void menu();
	void menu1();
	void menu2();
	void menu3();
	void menu4();
	void menu5();
	void menu6();
	void menu7();
	void menu8();
	     item *head;
	
   private:
  item *next;
  
  int ID;    /*������*/
	string sex;
  double age;
  double weight;  /*���������*/
  string birthday;
  string birthplace;
  double price;
  string character;    /*�����Ը�����*/
    string kind;   /*������������*/
  string feedregion;   /*������������*/

};
class operate:public item
	{  public:
	   void start();
		void exit();
	
   

	};
void item::menu()
{
cout<<"\t|==================================================================|"<<endl;
cout<<"\t|~~~~~~~~~~~~~~~~~~~~~��ӭ��������̵����ϵͳ~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t���ڽ������Ժ�>>>>>>"<<endl;
}

void item::menu1()
{

cout<<"\t|********�x�y�z�{�|�}�~�� �������Ϣ����ϵͳ ���~�}�|�{�z�y�x******|"<<endl;
cout<<"\t|==================================================================|"<<endl;
cout<<"\t|-------------------------1.�������г�����Ϣ-----------------------|"<<endl;
cout<<"\t|-------------------------2.�������-------------------------------|"<<endl;/*��������������Ϣ*/
cout<<"\t|-------------------------3.��������-------------------------------|"<<endl;/*ɾ�������Ϊ����������ID���ɾ��������Ϣ*/
cout<<"\t|-------------------------4.��ѯ����-------------------------------|"<<endl;
cout<<"\t|-------------------------5.�޸ĳ�����Ϣ---------------------------|"<<endl;
cout<<"\t|-------------------------6.��ʾ���г�����Ϣ-----------------------|"<<endl;
cout<<"\t|-------------------------0.�˳�����ϵͳ!--------------------------|"<<endl;
cout<<"\t|==================================================================|"<<endl;
}

void item::menu2()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                 1.���������������ѯ                     |"<<endl;
cout<<"\t\t|                 2.�����������Ը��ѯ                     |"<<endl;
cout<<"\t\t|                 3.������۸��ѯ                         |"<<endl;
cout<<"\t\t|                 4.������ID��Ų�ѯ                       |"<<endl;
cout<<"\t\t|                 0.�˻����˵�!                            |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;	    
}
void item::menu3()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.�º���                            |"<<endl;
cout<<"\t\t|                      2.Σ����                            |"<<endl;
cout<<"\t\t|                      3.������                            |"<<endl;
cout<<"\t\t|                      4.�䵭��                            |"<<endl;
cout<<"\t\t|                      0.�˻��ϼ��˵�!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;

}
void item::menu4()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.����100Ԫ                         |"<<endl;
cout<<"\t\t|                      2.100-500Ԫ                         |"<<endl;
cout<<"\t\t|                      3.500-1000Ԫ                        |"<<endl;
cout<<"\t\t|                      4.����1000Ԫ                        |"<<endl;
cout<<"\t\t|                      0.�˻��ϼ��˵�!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}
void item::menu5()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.Ȯ��                              |"<<endl;
cout<<"\t\t|                      2.����                              |"<<endl;
cout<<"\t\t|                      3.����                              |"<<endl;
cout<<"\t\t|                      4.è����                            |"<<endl;
cout<<"\t\t|                      5.����                              |"<<endl;
cout<<"\t\t|                      6.������                            |"<<endl;
cout<<"\t\t|                      7.������                            |"<<endl;
cout<<"\t\t|                      0.�˻��ϼ��˵�!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}

void item::menu6()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.ͨ�������ID���ɾ��              |"<<endl;
cout<<"\t\t|                      2.ͨ����������ɾ��                  |"<<endl;
cout<<"\t\t|                      0.�˻����˵�!                       |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}
item *item ::creat()
  {item *p,*q,*head,node;
	p=head=q=new item;
	char s[100];string line;
ifstream mfile("������Ϣ.txt"); 
mfile.getline(s,100);
mfile>>id>>Sex>>Age>>Weight>>Birthday>>Birthplace>>Price>>Character>>Kind>>Feedregion;
node.set_ID(id);node.set_sex(Sex);node.set_age(Age);node.set_weight(Weight);node.set_birthday(Birthday);node.set_birthplace(Birthplace);node.set_price(Price);node.set_character(Character);node.set_kind(Kind);node.set_feedregion(Feedregion);
*p=node;
while(!mfile.eof())
{
    p=new item;
	  q->next=p;
	  q=p;
mfile>>id>>sex>>Age>>Weight>>Birthday>>Birthplace>>Price>>Character>>Kind>>Feedregion;
node.set_ID(id);node.set_sex(Sex);node.set_age(Age);node.set_weight(Weight);node.set_birthday(Birthday);node.set_birthplace(Birthplace);node.set_price(Price);node.set_character(Character);node.set_kind(Kind);node.set_feedregion(Feedregion);
*p=node;
}
p->next=NULL;
mfile.close();
return head;
  }

item * item::insert(item *head,item *n)          //����
{


item *q,*p;
  p=head;
if(head==NULL)   
    { head=n;   head->next=NULL;}
 else 
    {
      while(p->ID<n->ID&&p->next!=NULL)
      { q=p;
        p=p->next;
      }
    
  if(n->ID<=p->ID)
        { if(head==p)    
              head=n;   
           else
              q->next=n;       
           n->next=p;
        } 
   else
        {
          p->next=n;
          n->next=NULL;
        }
     }
 
return  head;
}

void item::show(item *x)
{     cout<<"ID���"<<"|�Ա�"<<"|����(��)"<<"|����(ǧ��)"<<"|��������"<<"|ԭ����"<<"|�۸�(Ԫ)"<<"|�Ը�"<<"|����"<<"|��������(��)"<<endl;
      cout<<"|"<<x->get_ID()<<"   | "<<x->get_sex()<<"   | "<<x->get_age()<<"   | "<<x->get_weight();
	  cout<<"   | "<<x->get_birthday()<<"   | "<<x->get_birthplace()<<"   | "<<x->get_price();
	  cout<<"   | "<<x->get_character()<<"  | "<<x->get_kind()<<"  | "<<x->get_feedregion()<<"|"<<endl;
system("pause");
} 
void item::showall(item *head)
{item *x;
	x=head;
cout<<"|-----------------------------------------------------------------------------|"<<endl;
cout<<"ID���"<<"|�Ա�"<<"|����(��)"<<"|����(ǧ��)"<<"|��������"<<"|ԭ����"<<"|�۸�(Ԫ)"<<"|�Ը�"<<"|����"<<"|��������(��)"<<endl;
while(x!=NULL){
      cout<<"|"<<x->ID<<"   | "<<x->sex<<"   | "<<x->age<<"   | "<<x->weight;
	  cout<<"   | "<<x->birthday<<"   | "<<x->birthplace<<"   | "<<x->price;
	  cout<<"   | "<<x->character<<"  | "<<x->kind<<"  | "<<x->feedregion<<"|"<<endl;

x=x->next;
}
cout<<"|-----------------------------------------------------------------------------|"<<endl;
system("pause");
}
void item::del(item *head)
{  
	item *p;item *q;
p=head;
q=p->next;
int choice,flag=1;string choice1;
while(flag)
{   system("cls");cout<<"\n\n\n\n\n\n\n"; 
	menu6();
    cout<<"��������ѡ��:";
     cin>>choice; 
	switch(choice){
	case 1:
		cout<<"���������������ĳ����ID���:";
		cin>>id;
       while(p!=NULL)
	   {		  
		   if(p->ID==id)
		   { p->next=q->next;delete q;cout<<"ɾ�����!!!"<<endl;break;}
	   else 
		   cout<<"û���ҵ���Ҫɾ���ĳ���!!!"<<endl;break;
	   }
	   break;
	case 2:	
		cout<<"���������������ĳ��������:";
		cin>>Kind;
          while(p!=NULL)
	   {		  
		   if(p->kind==Kind)
		   { p->next=q->next;delete q;cout<<"ɾ�����!!!"<<endl;break;}
	   else 
	      cout<<"û���ҵ���Ҫɾ���ĳ���!!!"<<endl;break;

	}
    break;
	case 0:break;

	}
	if(choice!=0){
cout<<"������ɾ����?(y/n)";
cout<<"��������ѡ��:";
cin>>choice1;
if(choice1=="n")
{  flag=0; break;}
else ;}
	else break;
}
}
void item::search_kind1(item *head)
{item *x;
x=head;int flag=0;
	while(x!=NULL){
if(x->get_kind()=="Ȯ")
{cout<<"�ҵ�,�����³���:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_kind2(item *head)
{item *x;
x=head;int flag=0;
	while(x!=NULL){
if(x->get_kind()=="��")
{cout<<"�ҵ�,�����³���:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_kind3(item *head)
{item *x;
x=head;int flag=0;
	while(x!=NULL){
if(x->get_kind()=="��")
{cout<<"�ҵ�,�����³���:"<<endl;
show(x);flag=1;}
x=x->next;
}   
if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_kind4(item *head)
{item *x;
x=head;int flag=0;	
	while(x!=NULL){
if(x->get_kind()=="è")
{cout<<"�ҵ�,�����³���:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_kind5(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="��")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_kind6(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="����")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;
}
void item::search_kind7(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="����")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_character1(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="�º�")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_character2(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="Σ��")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_character3(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="����")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_character4(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="�䵭")
{cout<<"�ҵ�,�����³���:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"û���ҵ�!"<<endl;

}
void item::search_price1(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>0&&p->get_price()<=100)
{
cout<<"�ҵ��������³���:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"û���ҵ�!"<<endl;

}
void item::search_price2(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>100&&p->get_price()<=500)
{
cout<<"�ҵ��������³���:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"û���ҵ�!"<<endl;

}
void item::search_price3(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>500&&p->get_price()<=1000)
{
cout<<"�ҵ��������³���:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"û���ҵ�!"<<endl;

}
void item::search_price4(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>1000)
{
cout<<"�ҵ��������³���:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"û���ҵ�!"<<endl;

}

void item::search(item *head)
{
item *p=head;
int flag=1,choice,choice1,choice2,choice3,f=0;string ch;
while(flag){system("cls"); cout<<"\n\n\n\n\n\n";
   menu2();
   cout<<"��������ѡ��:";
   cin>>choice;
   switch(choice){
   case 1:system("cls"); cout<<"\n\n\n\n\n\n";
	   menu5();
          cout<<"��������ѡ��:";
          cin>>choice1;
		  switch(choice1){
		  case 1:search_kind1(head);break;
		  case 2:search_kind2(head);break;
		  case 3:search_kind3(head);break;
		  case 4:search_kind4(head);break;
		  case 5:search_kind5(head);break;
		  case 6:search_kind6(head);break;
		  case 7:search_kind7(head);break;
		  case 0:break;
		  default:break;
		  }system("pause");
           break;
   case 2:system("cls"); cout<<"\n\n\n\n\n\n";
	   menu3();
	      cout<<"��������ѡ��:";
          cin>>choice2;
          switch(choice1){
		  case 1:search_character1(head);break;
	      case 2:search_character2(head);break;
	      case 3:search_character3(head);break;
	      case 4:search_character4(head);break;
           case 0:break;
		  default:break;
   
		  }system("pause"); break;
   case 3:system("cls"); cout<<"\n\n\n\n\n\n";
	   menu4();
          cout<<"��������ѡ��:";
          cin>>choice3;
          switch(choice3){
		  case 1:search_price1(head);break;
		  case 2:search_price2(head);break;
		  case 3:search_price3(head);break;
		  case 4:search_price4(head);break;
		   case 0:break;
		  default:break;	  
   
		 
		  } system("pause");break;
   
    case 4:
		cout<<"������������ҵĳ����ID���:";
		cin>>id;
		while(p!=NULL){
		if(p->get_ID()==id)
		{cout<<"�ҵ���:"<<endl;
		  show(p);f=1;}
		p=p->next;
		}
  
        if(f==0) cout<<"û�ҵ������ҵĳ���!!!"<<endl;
        break;
	case 0:break;
   }
	if(choice!=0){
cout<<"�����������?(y/n)";
cout<<"��������ѡ��:";
cin>>ch;
if(ch=="n")
{  flag=0; break;}
else ;}
	else break;

}

}
void item::edit(item *head)
{int flag=1;
item *p;
p=head;
cout<<"��������Ҫ�༭�ĳ����ID���:";
cin>>id;
while(p!=NULL)
{
if(p->ID==id)
{ cout<<"�ҵ��˸ó���!!!"<<endl;cout<<"����������ó������Ϣ:";
       
         cout<<"����������ID���(��1�ż�:1)��"<<"�Ա�(��/��)��"<<"����(��)��"<<"����(ǧ��)��"
         <<"��������(��1990��2��1��:19900201)��"<<"ԭ���ء�"<<"�۸�"<<"�Ը�(���º͡�Σ�ա����á��䵭)��"<<"����(��Ȯ��è�������ݡ��ߡ����ܡ�����)��"<<"��������(��A����:a):"<<endl;
         cin>>id>>Sex>>Age>>Weight>>Birthday>>Birthplace>>Price>>Character>>Kind>>Feedregion;
       p->ID=id;p->sex=Sex;p->age=Age;p->weight=Weight;p->birthday=Birthday;p->birthplace=Birthplace;p->price=Price;p->character=Character;p->kind=Kind;p->feedregion=Feedregion;
       ;cout<<"�༭���!"<<endl; flag=1;break;}
else  p=p->next;
}
if(flag==0)   cout<<"����༭�ĳ��ﲻ����!";
system("pause");
}
void item::output_all(item *head)
{item *p=head;
ofstream file("������Ϣ.txt");
file<<"ID���"<<"  "<<"�Ա�"<<"  "<<"����"<<"  "<<"����"<<"  "<<"��������"<<"  "<<"ԭ����"<<"  "<<"�۸�"<<"  "<<"�Ա�"<<"  "<<"����"<<"  "<<"��������"<<"\n";
while(p!=NULL)
{
	file<<p->ID<<"     "<<p->sex<<"  "<<p->age<<"    "<<p->weight<<"   "<<p->birthday<<"   "<<p->birthplace<<"  "<<p->price<<"  "<<p->character<<"  "<<p->kind<<"     "<<p->feedregion<<endl;
p=p->next;
}
}
void operate::start()
{item *head;item node;
int choice,flag=1;cout<<"\n\n\n\n\n\n\n";
menu();cout<<"\t";system("pause");
while(flag){
	system("cls");
	cout<<"\n\n\n\n\n\n\n";
	menu1();
	cout<<"��Ӳ˵���ѡ����Ҫִ�еĹ���:";
    cin>>choice;
	switch(choice){
    case 1:cout<<"�����ļ��ж�ȡ����......"<<endl;
         head=creat(); 
		 cout<<"�����������!!!"<<endl;system("pause");break;
    case 2:item *p;p=new item;
         cout<<"����������ID���(��1�ż�:1)��"<<"�Ա�(��/��)��"<<"����(��)��"<<"����(ǧ��)��"
         <<"��������(��1990��2��1��:19900201)��"<<"ԭ���ء�"<<"�۸�"<<"�Ը�(���º͡�Σ�ա����á��䵭)��"<<"����(��Ȯ��è�������ݡ��ߡ����ܡ�����)��"<<"��������(��A����:a):"<<endl;
         cin>>id>>Sex>>Age>>Weight>>Birthday>>Birthplace>>Price>>Character>>Kind>>Feedregion;
        node.set_ID(id);node.set_sex(Sex);node.set_age(Age);node.set_weight(Weight);node.set_birthday(Birthday);node.set_birthplace(Birthplace);node.set_price(Price);node.set_character(Character);node.set_kind(Kind);node.set_feedregion(Feedregion);
        *p=node;         
          head=node.insert(head,p);showall(head);output_all(head);
		 break;
	case 3:
		del(head);output_all(head);
		break;
	case 4:
		search(head);
		break;
    case 5:
         edit(head);
		 cout<<"�༭���!!!"<<endl;output_all(head);
		 break;
    case 6:
	      showall(head);
		  break;
    case 0:flag=0;break;
	default:cout<<"��������������ѡ��(��0-6):"<<endl;system("pause");
		}

}
	}

void operate::exit()
{   
cout<<"|==================================================================|"<<endl;
cout<<"|                     !!!лл���ʹ�ñ�ϵͳ!!!                     |"<<endl;
cout<<"|             -------------!!!��ϲ����!!!-------------             |"<<endl;
cout<<"|==================================================================|"<<endl;

}
int main()
{
operate a;
a.start();
a.exit();

}
