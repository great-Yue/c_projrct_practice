#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
const int N = 100;
using namespace std;
class Person
{
public:
	int num;
	string name;
	string sex;
	int age;
	Person(int n = 0, string nm = "", string s = "", int a = 0) :num(n), name(nm), sex(s), age(a) {};
	virtual void Input() {};
	virtual void output() {};
	int GetNum() { return num; }
	string GetName() { return name; }
};
class Teacher :virtual public Person
{
public:
	string depart;
	string major;
	string title;
	int choice1;
	int choice2;
	Teacher(int n = 0, string nm = "", string s = "男", int a = 0, string d = "计算机", string ma = "", string t = "") :Person(n, nm, s, a), depart(d), major(ma), title(t) {};
	void Input()
	{
		cout << "请输入编号:" << endl;
		cin >> num;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入性别:" << endl;
		cout << "(1.男 2.女)" << endl;
		cout << "请输入你的选择:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "男"; break;
		case 2:sex = "女"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入年龄:" << endl;
		cin >> age;
		cout << "请输入所在系别:" << setw(10) << "1.计算机工程系" << setw(10) << "2.电子工程系" << setw(10) << "3.经管系" << setw(10) << "4.外语系" << setw(10) << "5.环境与安全系" << endl;
		cout << "请输入你的选择：" << endl;
		cin >> choice1;
		switch (choice1)
		{
		case 1:depart = "计算机工程系"; break;
		case 2:depart = "电子工程系"; break;
		case 3:depart = "经管系"; break;
		case 4:depart = "外语系"; break;
		case 5:depart = "环境与安全系"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入专业名称:" << endl;
		cin >> major;
		cout << "请输入职称:" << endl;
		cin >> title;
	}
	void Output()
	{
		cout << setw(10) << "编号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "年龄" << setw(10) << "系别" << setw(10) << "专业" << setw(10) << "职称" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << depart << setw(10) << major << setw(10) << title << endl;
	}
};
class Staff :virtual public Person
{
public:
	string zzmm;
	string zc;
	int choice2;
	Staff(int n = 0, string nm = "", string s = "男", int a = 0, string z = "", string zc = "") :Person(n, nm, s, a), zzmm(z), zc(zc) {};
	void Input()
	{
		cout << "请输入编号:" << endl;
		cin >> num;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入性别:" << endl;
		cout << "(1.男 2.女)" << endl;
		cout << "请输入你的选择:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "男"; break;
		case 2:sex = "女"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入年龄:" << endl;
		cin >> age;
		cout << "请输入政治面貌:" << endl;
		cin >> zzmm;
		cout << "请输入职称:" << endl;
		cin >> zc;
	}
	void Output()
	{
		cout << setw(10) << "编号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "年龄" << setw(10) << "政治面貌" << setw(10) << "职称" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << zzmm << setw(10) << zc << endl;
	}
};
class Experimenter :public Person
{
public:
	string library;
	string zw;
	int choice2;
	Experimenter(int n = 0, string nm = "", string s = "男", int a = 0, string l = "", string z = "") :Person(n, nm, s, a), library(l), zw(z) {};
	void Input()
	{
		cout << "请输入编号:" << endl;
		cin >> num;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入性别:" << endl;
		cout << "(1.男 2.女)" << endl;
		cout << "请输入你的选择:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "男"; break;
		case 2:sex = "女"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入年龄:" << endl;
		cin >> age;
		cout << "请输入实验室:" << endl;
		cin >> library;
		cout << "请输入职务:" << endl;
		cin >> zw;
	}
	void Output()
	{
		cout << setw(10) << "编号" << setw(10) << " 姓名" << setw(10) << " 性别" << setw(10) << "年龄" << setw(10) << "实验室" << setw(10) << "职务" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << library << setw(10) << zw << endl;
	}
};
class Tea_Sta :public Teacher, public Staff
{
public:
	int choice1;
	int choice2;
	Tea_Sta(int n = 0, string nm = "", string s = "男", int a = 0, string d = "", string ma = "", string t = "", string z = "", string zc = "") :Person(n, nm, s, a), Teacher(n, nm, s, a, d, ma, t), Staff(n, nm, s, a, z, zc) {};
	void Input()
	{
		cout << "请输入编号:" << endl;
		cin >> num;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入性别:" << endl;
		cout << "(1.男 2.女)" << endl;
		cout << "请输入你的选择:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "男"; break;
		case 2:sex = "女"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入年龄:" << endl;
		cin >> age;
		cout << "请输入所在系别:" << endl;
		cin >> depart;
		cout << setw(10) << "1.计算机工程系" << setw(10) << "2.电子工程系" << setw(10) << "3.经管系" << setw(10) << "4.外语系" << setw(10) << "5.环境与安全系" << endl;
		cout << "请输入你的选择：" << endl;
		cin >> choice1;
		switch (choice1)
		{
		case 1:depart = "计算机工程系"; break;
		case 2:depart = "电子工程系"; break;
		case 3:depart = "经管系"; break;
		case 4:depart = "外语系"; break;
		case 5:depart = "环境与安全系"; break;
		default:cout << "输入错误！" << endl; break;
		}
		cout << "请输入专业名称:" << endl;
		cin >> major;
		cout << "请输入职称:" << endl;
		cin >> title;
		cout << "请输入政治面貌:" << endl;
		cin >> zzmm;
		cout << "请输入职称:" << endl;
		cin >> zc;
	}
	void Output()
	{
		cout << setw(10) << "编号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "年龄" << setw(10) << "系部" << setw(10) << "专业" << setw(10) << "职称" << setw(10) << "政治面貌" << setw(10) << "职称" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << depart << setw(10) << major << setw(10) << title << setw(10) << zzmm << setw(10) << zc << endl;
	}
};
class Exp_Manage
{
	Experimenter Tea[N];
	int top;
public:
	Exp_Manage()
	{
        cout << "请输入实验员人数:";
		cin >> top;
		if (top != 0)
		{
			cout << "请输入实验员的信息:" << endl;
			cout << "编号 姓名 性别 年龄   实验室   职务" << endl;
			for (int i = 0; i < top; i++)
				cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].library >> Tea[i].zw;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Exp_Manage::Add()
{
	int m;
	if (top >= N)
	{
		cout << "用户已满" << endl;
		return;
	}
	Experimenter t;
	cout << "输入新添加的人员的数目：" << endl;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
		{
			cout << "该编号的人已存在" << endl;
		break;
		}
		else
		cout << "输入新添加的人员的信息：" << endl;
	    t.Input();
	}
	Tea[top] = t;
	top = top + m;
	cout << "添加成功！" << endl;
}
void Exp_Manage::Show()
{
	if (top == 0)
	{
		cout << "无数据！" << endl;
		return;
	}
	/*cout << setw(10) << "编号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "年龄" << setw(10) << "实验室" << setw(10) << "职务" << endl;*/
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Exp_Manage::Search()
{
	if (top == 0)
	{
		cout << "当前系统中没有存储记录！" << endl;
		return;
	}
	int choice;
	cout << "请选择查询方式：1.按编号查找 2.按姓名查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入要查找的编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "查无此人！" << endl;
	} break;
	case 2:
	{
		cout << "请输入要查找的姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "查无此人！" << endl;
	} break;
	default:cout << "无此选项！请重试！" << endl; break;
	}
}
void Exp_Manage::Edit()
{
	if (top == 0)
	{
		cout << "当前系统没有存储记录！" << endl;
		return;
	}
	int num;
	cout << "请输入要查找的编号：" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "请对这位实验员的信息进行修改：" << endl;
			Tea[i].Input();
			cout << "修改成功！" << endl;
		}
		else
        cout << "查无此人！" << endl;
	}
	
}
void Exp_Manage::Delete()
{
	if (top == 0)
	{
		cout << "记录为空！" << endl;
		return;
	}
	cout << "请选择删除方式：1.按编号查找删除 2.按姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "删除成功！" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "删除成功！" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	default:cout << "无此项！" << endl; break;
	}
}
void Exp_Manage::Total()
{
	cout << "1.按人数统计  2.按性别统计" << endl;
	int choice;
	cout << "请输入你的选择" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "行政人员数为：" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "男")a++;
			if (Tea[i].sex == "女")b++;
		}
		cout << "男性人数为:" << a << endl;
		cout << "女性人数为:" << b << endl;
	}break;
	default:cout << "输入错误！" << endl; break;
	}
}
void Exp_Manage::Save()
{
	ofstream ofile;
	if (!ofile)
	{
		cout << "打开失败！" << endl;
		return;
	}
	ofile.open("实验员.txt");
	cout << "打开成功！" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].library << " " << Tea[i].zw << endl;
	}
	cout << "保存成功！" << endl;
	ofile.close();
}
void Exp_Manage::Read()
{
	ifstream ifile;
	ifile.open("实验员.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].library >> Tea[i].zw;
		Tea[i].Output();
	}
	ifile.close();
};
class Tea_Manage
{
	Teacher Tea[N];
	int top;
public:
	Tea_Manage()
	{
        cout << "请输入教师人数:";
		cin >> top;
		if (top != 0)
		{
		cout << "请输入教师信息:" << endl;
		cout << "编号 姓名 性别 年龄   系别   专业  职称" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Tea_Manage::Add()
{
	if (top >= N)
	{
		cout << "用户已满" << endl;
		return;
	}
	Teacher t;
	cout << "输入新添加的人员的信息：" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "该编号的人已存在" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "添加成功！" << endl;
}
void Tea_Manage::Show()
{
	if (top == 0)
	{
		cout << "无数据！" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Tea_Manage::Search()
{
	if (top == 0)
	{
		cout << "当前系统中没有存储记录！" << endl;
		return;
	}
	int choice;
	cout << "请选择查询方式：1.按编号查找 2.按姓名查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入要查找的编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "查无此人！" << endl;
	} break;
	case 2:
	{
		cout << "请输入要查找的姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "查无此人！" << endl;
	} break;
	default:cout << "无此选项！请重试！" << endl; break;
	}
}
void Tea_Manage::Edit()
{
	if (top == 0)
	{
		cout << "当前系统没有存储记录！" << endl;
		return;
	}
	int num;
	cout << "请输入要查找的编号：" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "请对这位教师的信息进行修改：" << endl;
			Tea[i].Input();
			cout << "修改成功！" << endl;
		}
	}
	cout << "查无此人！" << endl;
}
void Tea_Manage::Delete()
{
	if (top == 0)
	{
		cout << "记录为空！" << endl;
		return;
	}
	cout << "请选择删除方式：1.按编号查找删除 2.按姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "删除成功！" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "删除成功！" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	default:cout << "无此项！" << endl; break;
	}
}
void Tea_Manage::Total()
{
	cout << "1.按人数统计  2.按性别统计  3.按系别统计" << endl;
	int choice;
	cout << "请输入你的选择" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "教师人数为：" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "男")a++;
			if (Tea[i].sex == "女")b++;
		}
		cout << "男教师人数为:" << a << endl;
		cout << "女教师人数为:" << b << endl;
	}break;
	case 3:
	{
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].depart == "计算机工程系")a1++;
			if (Tea[i].depart == "电子工程系")a2++;
			if (Tea[i].depart == "外语系")a3++;
			if (Tea[i].depart == "经管系")a4++;
			if (Tea[i].depart == "环境与安全系")a5++;
		}
		cout << "计算机工程系教师人数为：" << a1 << endl;
		cout << "电子工程系教师人数为：" << a2 << endl;
		cout << "外语系教师人数为：" << a3 << endl;
		cout << "经管系教师人数为：" << a4 << endl;
		cout << "环境与安全系教师人数为：" << a5 << endl;
	}break;
	default:cout << "输入错误！" << endl; break;
	}
}
void Tea_Manage::Save()
{
	ofstream ofile("教师.txt");
	if (!ofile)
	{
		cout << "打开失败！" << endl;
		return;
	}
	cout << "打开成功！" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].depart << " " << Tea[i].major << " " << Tea[i].title << endl;
	}
	cout << "写入成功！" << endl;
	ofile.close();
}
void Tea_Manage::Read()
{
	string title;
	ifstream ifile;
	ifile.open("教师.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title;
		Tea[i].Output();
	}
	ifile.close();
};
class Staf_Manage
{
	Staff Tea[N];
	int top;
public:
	Staf_Manage()
	{
        cout << "请输入行政人员人数:";
		cin >> top;
		if (top != 0)
		{
		cout << "请输入行政人员信息:" << endl;
		cout << "编号 姓名 性别 年龄   政治面貌  职称" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].zzmm >> Tea[i].zc;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Staf_Manage::Add()
{
	if (top >= N)
	{
		cout << "用户已满" << endl;
		return;
	}
	Staff t;
	cout << "输入新添加的人员的信息：" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "该编号的人已存在" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "添加成功！" << endl;
}
void Staf_Manage::Show()
{
	if (top == 0)
	{
		cout << "无数据！" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Staf_Manage::Search()
{
	if (top == 0)
	{
		cout << "当前系统中没有存储记录！" << endl;
		return;
	}
	int choice;
	cout << "请选择查询方式：1.按编号查找 2.按姓名查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入要查找的编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "查无此人！" << endl;
	} break;
	case 2:
	{
		cout << "请输入要查找的姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "查无此人！" << endl;
	} break;
	default:cout << "无此选项！请重试！" << endl; break;
	}
}
void Staf_Manage::Edit()
{
	if (top == 0)
	{
		cout << "当前系统没有存储记录！" << endl;
		return;
	}
	int num;
	cout << "请输入要查找的编号：" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "请对这位员工的信息进行修改：" << endl;
			Tea[i].Input();
			cout << "修改成功！" << endl;
		}
	}
	cout << "查无此人！" << endl;
}
void Staf_Manage::Delete()
{
	if (top == 0)
	{
		cout << "记录为空！" << endl;
		return;
	}
	cout << "请选择删除方式：1.按编号查找删除 2.按姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "删除成功！" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "删除成功！" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	default:cout << "无此项！" << endl; break;
	}
}
void Staf_Manage::Total()
{
	cout << "1.按人数统计  2.按性别统计" << endl;
	int choice;
	cout << "请输入你的选择" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "员工数为：" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "男")a++;
			if (Tea[i].sex == "女")b++;
		}
		cout << "男性人数为:" << a << endl;
		cout << "女性人数为:" << b << endl;
	}break;
	default:cout << "输入错误！" << endl; break;
	}
}
void Staf_Manage::Save()
{
	ofstream ofile;
	ofile.open("行政人员.txt");
	if (!ofile)
	{
		cout << "打开失败！" << endl;
		return;
	}
	cout << "打开成功！" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].zzmm << " " << Tea[i].zc << endl;
	}
	cout << "写入成功！" << endl;
	ofile.close();
}
void Staf_Manage::Read()
{
	ifstream ifile("行政人员.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].zzmm >> Tea[i].zc;
		Tea[i].Output();
	}
	ifile.close();
};
class Tea_Staf_Manage
{
	Tea_Sta Tea[N];
	int top;
public:
	Tea_Staf_Manage()
	{
        cout << "请输入教师兼行政人员人数:";
		cin >> top;
		if (top != 0)
		{
		cout << "请输入教师兼行政人员信息:" << endl;
		cout << "编号 姓名 性别 年龄   系别   专业  职称    政治面貌    职称" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title >> Tea[i].zzmm >> Tea[i].zc;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Tea_Staf_Manage::Add()
{
	if (top >= N)
	{
		cout << "用户已满" << endl;
		return;
	}
	Tea_Sta t;
	cout << "输入新添加的人员的信息：" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "该编号的人已存在" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "添加成功！" << endl;
}
void Tea_Staf_Manage::Show()
{
	if (top == 0)
	{
		cout << "无数据！" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Tea_Staf_Manage::Search()
{
	if (top == 0)
	{
		cout << "当前系统中没有存储记录！" << endl;
		return;
	}
	int choice;
	cout << "请选择查询方式：1.按编号查找 2.按姓名查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入要查找的编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "查无此人！" << endl;
	} break;
	case 2:
	{
		cout << "请输入要查找的姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "查无此人！" << endl;
	} break;
	default:cout << "无此选项！请重试！" << endl; break;
	}
}
void Tea_Staf_Manage::Edit()
{
	if (top == 0)
	{
		cout << "当前系统没有存储记录！" << endl;
		return;
	}
	int num;
	cout << "请输入要查找的编号：" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "请对这位教师兼员工的信息进行修改：" << endl;
			Tea[i].Input();
			cout << "修改成功！" << endl;
		}
	}
	cout << "查无此人！" << endl;
}
void Tea_Staf_Manage::Delete()
{
	if (top == 0)
	{
		cout << "记录为空！" << endl;
		return;
	}
	cout << "请选择删除方式：1.按编号查找删除 2.按姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入编号：" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "删除成功！" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "是否确认删除？ 1.是 2，否" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "删除成功！" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "无此项！" << endl; break;
				}return;
			}
		}
		cout << "无此人！" << endl;
	}; break;
	default:cout << "无此项！" << endl; break;
	}
}
void Tea_Staf_Manage::Total()
{
	cout << "1.按人数统计  2.按性别统计  3.按系别统计" << endl;
	int choice;
	cout << "请输入你的选择" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "教授兼行政人员数为：" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "男")a++;
			if (Tea[i].sex == "女")b++;
		}
		cout << "男性人数为:" << a << endl;
		cout << "女性人数为:" << b << endl;
	}break;
	case 3:
	{
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].depart == "计算机工程系")a1++;
			if (Tea[i].depart == "电子工程系")a2++;
			if (Tea[i].depart == "外语系")a3++;
			if (Tea[i].depart == "经管系")a4++;
			if (Tea[i].depart == "环境与安全系")a5++;
		}
		cout << "计算机工程系教师兼行政人员数为：" << a1 << endl;
		cout << "电子工程系教师兼行政人员数为：" << a2 << endl;
		cout << "外语系教师兼行政人员数为：" << a3 << endl;
		cout << "经管系教师兼行政人员数为：" << a4 << endl;
		cout << "环境与安全系教师兼行政人员数为：" << a5 << endl;
	}break;
	default:cout << "输入错误！" << endl; break;
	}
}
void Tea_Staf_Manage::Save()
{
	ofstream ofile;
	ofile.open("教师兼行政人员.txt");
	if (!ofile)
	{
		cout << "打开失败！" << endl;
		return;
	}
	cout << "打开成功！" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].depart << " " << Tea[i].major << " " << Tea[i].title << " " << Tea[i].zzmm << " " << Tea[i].zc << endl;
	}
	cout << "写入成功！" << endl;
	ofile.close();
}
void Tea_Staf_Manage::Read()
{
	ifstream ifile;
	ifile.open("教师兼行政人员.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title >> Tea[i].zzmm >> Tea[i].zc;
		Tea[i].Output();
	}
	ifile.close();
};
void ExpMenu();
void TeaMenu();
void StafMenu();
void Tea_StafMenu();
int main()
{
	cout << "*******************欢迎进入高校人员信息管理系统**************" << endl;
	int choice;
	do {
		cout << "************************************主菜单********************************" << endl;
		cout << "1.实验员管理  2.教师管理  3.行政人员管理  4.教师兼行政人员管理  0.退出系统" << endl;
		cout << "**************************************************************************" << endl;
		cout << "请输入您要操作的选项：" << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1: ExpMenu(); break;
		case 2: TeaMenu(); break;
		case 3: StafMenu(); break;
		case 4: Tea_StafMenu(); break;
		case 0:cout << "已退出系统!" << endl; break;
		default:cout << "没有此项！" << endl; break;
		}
	} while (choice != 0);
	cout << "欢迎下次使用！" << endl;
	return 0;
}
void ExpMenu()
{
	Exp_Manage t;
	int choice;
	do {
	cout << "******************************实验员管理******************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.添加  2.显示  3.查找  4.修改  5.删除  6.统计  7.保存  8.读取  0.退出" << endl;
	cout << "**********************************************************************" << endl;
	cout << "请输入您要操作的选项：" << endl;
	cin >> choice;
	switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "退出成功" << endl; break;
		default:cout << "没有此项！" << endl; break;
		}
	} while (choice != 0);
}
void TeaMenu()
{
	Tea_Manage t;
	int choice;
	do {
	cout << "*********************************教师管理*****************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.添加  2.显示  3.查找  4.修改  5.删除  6.统计  7.保存  8.读取  0.退出" << endl;
	cout << "**********************************************************************" << endl;
	cout << "请输入您要操作的选项：" << endl;
	cin >> choice;
	switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "退出成功" << endl; break;
		default:cout << "没有此项！" << endl; break;
		}
	} while (choice != 0);
}
void StafMenu()
{
	Staf_Manage t;
	int choice;
	do {
	cout << "******************************行政人员管理****************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.添加  2.显示  3.查找  4.修改  5.删除  6.统计  7.保存  8.读取  0.退出" << endl;
	cout << "**********************************************************************" << endl;
	cout << "请输入您要操作的选项：" << endl;
	cin >> choice;
    switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "退出成功" << endl; break;
		default:cout << "没有此项！" << endl; break;
		}
	} while (choice != 0);
}
void Tea_StafMenu()
{
	Tea_Staf_Manage t;
	int choice;
	do {
	cout << "****************************教师兼行政人员管理************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.添加  2.显示  3.查找  4.修改  5.删除  6.统计  7.保存  8.读取  0.退出" << endl;
	cout << "**********************************************************************" << endl;
	cout << "请输入您要操作的选项：" << endl;
	cin >> choice;
    switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "退出成功" << endl; break;
		default:cout << "没有此项！" << endl; break;
		}
	} while (choice != 0);
}