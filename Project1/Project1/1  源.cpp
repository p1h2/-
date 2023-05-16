 #include<iostream>       
#define MAX 1000
using namespace std;
struct person
{
	string name;
	int age;
	int sex;
	int number;
	string address;
};
struct addressbook
{
	person arry[MAX];
	int number;
};
//添加联系人
void Addressbook(addressbook* abs)
{
	if (abs->number == MAX)
		cout << "添加已满";
	else
	{
		string name;
		cout << "输入姓名";
		cin >> name;
		abs->arry[abs->number].name = name;
		int age;
		cout << "输入年龄";
		cin >> age;
		abs->arry[abs->number].age = age;
		int sex = 0;
		cout << "1为男，2为女";
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->arry[abs->number].sex = sex;
				break;
			}
			cout << "输入有误，重新输入";
		}
		int number;
		cout << "输入" << name << "电话号码";
		cin >> number;
		abs->arry[abs->number].number = number;
		cout << "请输入家庭地址";
		string address;
		cin >> address;
		abs->arry[abs->number].address = address;
		abs->number++;
		system("pause");
		system("cls");
	}
}
void d(addressbook * d)
{
		if (d->number == 0)    //判断目录是否为0
		cout << "当前记录为空";
		else
		{
			int i;
			for (i = 0; i < d->number; i++)
			{
				cout << "联系人:" << d->arry[i].name << " 年龄" << d->arry[i].age << "岁 " << "性别:" <<(d->arry[i].sex==1?"男":"女" )<< " 电话号码:" << d->arry[i].number;
				cout << " 家庭地址:" << d->arry[i].address << endl;
			}
		}
		system("pause");
		system("cls");
}
void showmune()
{
	cout << "***************************" << endl;
	cout << "*****  1添加联系人  *****" << endl;
	cout << "*****  2,显示联系人 *****" << endl;
	cout << "*****  3,删除联系人 *****" << endl;
	cout << "*****  4,查找联系人 *****" << endl;
	cout << "*****  5,修改联系人 *****" << endl;
	cout << "*****  6,清空联系人 *****" << endl;
	cout << "*****  0,退出管理系统 *****" << endl;
}
int main()
{
	addressbook abs;
	abs.number = 0;
	int select = 0;
	while (true)
	{
		showmune();
		cin >> select;
		switch (select)
		{
		case 1:
			Addressbook(&abs);
			break;
		case 2:
			d(&abs);
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
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		}
	}
}