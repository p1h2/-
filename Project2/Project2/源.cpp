
#include<iostream>
#define MAX 1000
using namespace std;
void phonebook()    //功能
{
	cout << "*****************************" << endl;
	cout << "*****1,添加联系人" << endl;
	cout << "*****2,显示联系人" << endl;
	cout << "*****3,删除联系人" << endl;
	cout << "*****4,查找联系人" << endl;
	cout << "*****5,修改联系人" << endl;
	cout << "*****6,清空联系人" << endl;
	cout << "*****0退出管理系统" << endl;
}
struct person
{
	string name;
	int age;
	int sex;
	string number;
	string address;
} lianxiren;
struct b
{
   person lianxiren[MAX];
   int number;
}c;
void a()
{
	cout << "添加联系人:";
	string name;
	cin >> name;//添加联系人
	c.lianxiren[c.number].name = name;
	cout << "添加年龄:";
	int age;//添加年龄
	cin >> age;
	c.lianxiren[c.number].age = age;
	int sex = 0;
	while (true)
	{
		cout << "添加性别";
		//添加性别
		cout << "1为男，2为女" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			c.lianxiren[c.number].sex = sex;
			break;
		}
		else
			cout << "重新输入:";
	}
	cout << "添加电话号码";
	string number;//输入电话号码
	cin >> number;
	c.lianxiren[c.number].number = number;
	cout << "添加地址" << endl;
	string address ;//输入地址
	cin >> address;
	c.lianxiren[c.number].address = address;
	++c.number;
	cout << "添加成功"<<endl;
	system("pause");//按任意键继续
	system("cls"); //清屏操作
}
//显示联系人
void d(b *d)
{
	if (d->number == 0)    //判断目录是否为0
	{
		cout << "当前记录为空";
	}	
	else
	{
		int i;
		for (i = 0; i < d->number; i++)
		{
			cout << "联系人:" << d->lianxiren[i].name << " 年龄" << d->lianxiren[i].age << "岁 " << "性别:" << (d->lianxiren[i].sex == 1 ? "男": "女" )<< " 电话号码:" << d->lianxiren[i].number;
			cout << " 家庭地址:" <<d->lianxiren[i].address << endl;
		}
	}
}
int shanchu(b *c,string name)   //查找要删除的人
{
	int i;
	for (i = 0; i <c->number; i++)
	{
		if (c->lianxiren[i].name == name)
			return i;
		else
			return -1;
	}
}
void shanchu1(b* c)
{
	int i;
	cout << "查找要删除的人";
	string name;
	cin >> name;
	int rent = shanchu(c, name);
	if (rent == -1)
		cout << "查无此人";
	else
		for (i = 0; i < c->number; i++)
		{
			c->lianxiren[i] = c->lianxiren[i + 1];
			c->number--;
			cout << "删除成功";
		}
}
int main()
{ 
	phonebook();
	while (true)
	{
		int select;
		cin >> select;
		switch (select)//用户选择
		{
		case 1://添加联系人
			a();
			break;
		case 2://显示联系人
			d(&c);
			break;
		case 3://删除联系人
			shanchu1(&c);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "退出管理系统";
			system("pause");
			break;
		}
	} 
}