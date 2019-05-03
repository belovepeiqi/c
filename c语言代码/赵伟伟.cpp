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
  
  int ID;    /*宠物编号*/
	string sex;
  double age;
  double weight;  /*宠物的体重*/
  string birthday;
  string birthplace;
  double price;
  string character;    /*宠物性格类型*/
    string kind;   /*宠物所属种类*/
  string feedregion;   /*宠物饲养区域*/

};
class operate:public item
	{  public:
	   void start();
		void exit();
	
   

	};
void item::menu()
{
cout<<"\t|==================================================================|"<<endl;
cout<<"\t|~~~~~~~~~~~~~~~~~~~~~欢迎进入宠物商店管理系统~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t正在进入请稍后>>>>>>"<<endl;
}

void item::menu1()
{

cout<<"\t|********▁▂▃▄▅▆▇█ 宠物店信息管理系统 █▇▆▅▄▃▂▁******|"<<endl;
cout<<"\t|==================================================================|"<<endl;
cout<<"\t|-------------------------1.读入已有宠物信息-----------------------|"<<endl;
cout<<"\t|-------------------------2.购入宠物-------------------------------|"<<endl;/*输入新增宠物信息*/
cout<<"\t|-------------------------3.卖出宠物-------------------------------|"<<endl;/*删除链表分为按姓名、按ID编号删除宠物信息*/
cout<<"\t|-------------------------4.查询宠物-------------------------------|"<<endl;
cout<<"\t|-------------------------5.修改宠物信息---------------------------|"<<endl;
cout<<"\t|-------------------------6.显示所有宠物信息-----------------------|"<<endl;
cout<<"\t|-------------------------0.退出管理系统!--------------------------|"<<endl;
cout<<"\t|==================================================================|"<<endl;
}

void item::menu2()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                 1.按宠物所属种类查询                     |"<<endl;
cout<<"\t\t|                 2.按宠物所属性格查询                     |"<<endl;
cout<<"\t\t|                 3.按宠物价格查询                         |"<<endl;
cout<<"\t\t|                 4.按宠物ID编号查询                       |"<<endl;
cout<<"\t\t|                 0.退回主菜单!                            |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;	    
}
void item::menu3()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.温和类                            |"<<endl;
cout<<"\t\t|                      2.危险类                            |"<<endl;
cout<<"\t\t|                      3.活泼类                            |"<<endl;
cout<<"\t\t|                      4.冷淡类                            |"<<endl;
cout<<"\t\t|                      0.退回上级菜单!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;

}
void item::menu4()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.低于100元                         |"<<endl;
cout<<"\t\t|                      2.100-500元                         |"<<endl;
cout<<"\t\t|                      3.500-1000元                        |"<<endl;
cout<<"\t\t|                      4.高于1000元                        |"<<endl;
cout<<"\t\t|                      0.退回上级菜单!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}
void item::menu5()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.犬类                              |"<<endl;
cout<<"\t\t|                      2.蛇类                              |"<<endl;
cout<<"\t\t|                      3.鸟类                              |"<<endl;
cout<<"\t\t|                      4.猫科类                            |"<<endl;
cout<<"\t\t|                      5.兔类                              |"<<endl;
cout<<"\t\t|                      6.两栖类                            |"<<endl;
cout<<"\t\t|                      7.昆虫类                            |"<<endl;
cout<<"\t\t|                      0.退回上级菜单!                     |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}

void item::menu6()
{
cout<<"\t\t|==========================================================|"<<endl;
cout<<"\t\t|                      1.通过宠物的ID编号删除              |"<<endl;
cout<<"\t\t|                      2.通过宠物种类删除                  |"<<endl;
cout<<"\t\t|                      0.退回主菜单!                       |"<<endl;
cout<<"\t\t|==========================================================|"<<endl;
}
item *item ::creat()
  {item *p,*q,*head,node;
	p=head=q=new item;
	char s[100];string line;
ifstream mfile("宠物信息.txt"); 
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

item * item::insert(item *head,item *n)          //插入
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
{     cout<<"ID编号"<<"|性别"<<"|年龄(天)"<<"|体重(千克)"<<"|出生日期"<<"|原产地"<<"|价格(元)"<<"|性格"<<"|种类"<<"|饲养区域(区)"<<endl;
      cout<<"|"<<x->get_ID()<<"   | "<<x->get_sex()<<"   | "<<x->get_age()<<"   | "<<x->get_weight();
	  cout<<"   | "<<x->get_birthday()<<"   | "<<x->get_birthplace()<<"   | "<<x->get_price();
	  cout<<"   | "<<x->get_character()<<"  | "<<x->get_kind()<<"  | "<<x->get_feedregion()<<"|"<<endl;
system("pause");
} 
void item::showall(item *head)
{item *x;
	x=head;
cout<<"|-----------------------------------------------------------------------------|"<<endl;
cout<<"ID编号"<<"|性别"<<"|年龄(天)"<<"|体重(千克)"<<"|出生日期"<<"|原产地"<<"|价格(元)"<<"|性格"<<"|种类"<<"|饲养区域(区)"<<endl;
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
    cout<<"请给出你的选择:";
     cin>>choice; 
	switch(choice){
	case 1:
		cout<<"请输入您新卖出的宠物的ID编号:";
		cin>>id;
       while(p!=NULL)
	   {		  
		   if(p->ID==id)
		   { p->next=q->next;delete q;cout<<"删除完成!!!"<<endl;break;}
	   else 
		   cout<<"没有找到您要删除的宠物!!!"<<endl;break;
	   }
	   break;
	case 2:	
		cout<<"请输入您新卖出的宠物的种类:";
		cin>>Kind;
          while(p!=NULL)
	   {		  
		   if(p->kind==Kind)
		   { p->next=q->next;delete q;cout<<"删除完成!!!"<<endl;break;}
	   else 
	      cout<<"没有找到您要删除的宠物!!!"<<endl;break;

	}
    break;
	case 0:break;

	}
	if(choice!=0){
cout<<"您还想删除吗?(y/n)";
cout<<"请给出你的选择:";
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
if(x->get_kind()=="犬")
{cout<<"找到,有如下宠物:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_kind2(item *head)
{item *x;
x=head;int flag=0;
	while(x!=NULL){
if(x->get_kind()=="蛇")
{cout<<"找到,有如下宠物:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_kind3(item *head)
{item *x;
x=head;int flag=0;
	while(x!=NULL){
if(x->get_kind()=="鸟")
{cout<<"找到,有如下宠物:"<<endl;
show(x);flag=1;}
x=x->next;
}   
if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_kind4(item *head)
{item *x;
x=head;int flag=0;	
	while(x!=NULL){
if(x->get_kind()=="猫")
{cout<<"找到,有如下宠物:"<<endl;
show(x);flag=1;}
x=x->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_kind5(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="兔")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_kind6(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="两栖")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;
}
void item::search_kind7(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_kind()=="昆虫")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_character1(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="温和")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_character2(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="危险")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_character3(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="活泼")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_character4(item *head)
{item *p;
p=head;int flag=0;
	while(p!=NULL){
if(p->get_character()=="冷淡")
{cout<<"找到,有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}   
	if(flag==0)  cout<<"没有找到!"<<endl;

}
void item::search_price1(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>0&&p->get_price()<=100)
{
cout<<"找到，有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"没有找到!"<<endl;

}
void item::search_price2(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>100&&p->get_price()<=500)
{
cout<<"找到，有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"没有找到!"<<endl;

}
void item::search_price3(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>500&&p->get_price()<=1000)
{
cout<<"找到，有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"没有找到!"<<endl;

}
void item::search_price4(item *head)
{
item *p=head;  int flag=0;
while(p!=NULL){
if(p->get_price()>1000)
{
cout<<"找到，有如下宠物:"<<endl;
show(p);flag=1;}
p=p->next;
}
if(flag==0) cout<<"没有找到!"<<endl;

}

void item::search(item *head)
{
item *p=head;
int flag=1,choice,choice1,choice2,choice3,f=0;string ch;
while(flag){system("cls"); cout<<"\n\n\n\n\n\n";
   menu2();
   cout<<"请给出你的选择:";
   cin>>choice;
   switch(choice){
   case 1:system("cls"); cout<<"\n\n\n\n\n\n";
	   menu5();
          cout<<"请给出你的选择:";
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
	      cout<<"请给出你的选择:";
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
          cout<<"请给出你的选择:";
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
		cout<<"请输入您想查找的宠物的ID编号:";
		cin>>id;
		while(p!=NULL){
		if(p->get_ID()==id)
		{cout<<"找到了:"<<endl;
		  show(p);f=1;}
		p=p->next;
		}
  
        if(f==0) cout<<"没找到你想找的宠物!!!"<<endl;
        break;
	case 0:break;
   }
	if(choice!=0){
cout<<"您还想查找吗?(y/n)";
cout<<"请给出你的选择:";
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
cout<<"请输入您要编辑的宠物的ID编号:";
cin>>id;
while(p!=NULL)
{
if(p->ID==id)
{ cout<<"找到了该宠物!!!"<<endl;cout<<"请重新输入该宠物的信息:";
       
         cout<<"请输入宠物的ID编号(如1号即:1)、"<<"性别(雄/雌)、"<<"年龄(天)、"<<"体重(千克)、"
         <<"出生日期(如1990年2月1号:19900201)、"<<"原产地、"<<"价格、"<<"性格(有温和、危险、活泼、冷淡)、"<<"种类(有犬、猫、鸟、啮齿、蛇、两栖、昆虫)、"<<"饲养区域(如A区即:a):"<<endl;
         cin>>id>>Sex>>Age>>Weight>>Birthday>>Birthplace>>Price>>Character>>Kind>>Feedregion;
       p->ID=id;p->sex=Sex;p->age=Age;p->weight=Weight;p->birthday=Birthday;p->birthplace=Birthplace;p->price=Price;p->character=Character;p->kind=Kind;p->feedregion=Feedregion;
       ;cout<<"编辑完成!"<<endl; flag=1;break;}
else  p=p->next;
}
if(flag==0)   cout<<"您想编辑的宠物不存在!";
system("pause");
}
void item::output_all(item *head)
{item *p=head;
ofstream file("宠物信息.txt");
file<<"ID编号"<<"  "<<"性别"<<"  "<<"年龄"<<"  "<<"体重"<<"  "<<"出生日期"<<"  "<<"原产地"<<"  "<<"价格"<<"  "<<"性别"<<"  "<<"种类"<<"  "<<"饲养区域"<<"\n";
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
	cout<<"请从菜单中选择你要执行的功能:";
    cin>>choice;
	switch(choice){
    case 1:cout<<"正在文件中读取数据......"<<endl;
         head=creat(); 
		 cout<<"读入数据完毕!!!"<<endl;system("pause");break;
    case 2:item *p;p=new item;
         cout<<"请输入宠物的ID编号(如1号即:1)、"<<"性别(雄/雌)、"<<"年龄(天)、"<<"体重(千克)、"
         <<"出生日期(如1990年2月1号:19900201)、"<<"原产地、"<<"价格、"<<"性格(有温和、危险、活泼、冷淡)、"<<"种类(有犬、猫、鸟、啮齿、蛇、两栖、昆虫)、"<<"饲养区域(如A区即:a):"<<endl;
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
		 cout<<"编辑完成!!!"<<endl;output_all(head);
		 break;
    case 6:
	      showall(head);
		  break;
    case 0:flag=0;break;
	default:cout<<"请认真重新输入选择(从0-6):"<<endl;system("pause");
		}

}
	}

void operate::exit()
{   
cout<<"|==================================================================|"<<endl;
cout<<"|                     !!!谢谢光顾使用本系统!!!                     |"<<endl;
cout<<"|             -------------!!!恭喜发财!!!-------------             |"<<endl;
cout<<"|==================================================================|"<<endl;

}
int main()
{
operate a;
a.start();
a.exit();

}
