
#include<iostream>
#include<iomanip>
#include<cstring>
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
			break;
		else
			cout << "重新输入:";
	}
	cout << "添加电话号码";
	string number;//输入电话号码
	cin >> number;
	c.lianxiren[c.number].number = number;
	cout << "添加地址";
	string address;//输入地址
	cin >> address;
	c.lianxiren[c.number].address = address;
}
int main()
{ 
	phonebook();
	int select;
	cin >> select;
	switch (select)//用户选择
	{
	case 1://添加联系人
		a();
		break;
	case 2:
		break;
	case 3:
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