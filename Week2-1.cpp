#include <iostream>
#include <string>
using namespace std;
using std::string;

typedef struct Student
{
	int num;
	string name;
	double mark;
	string sex;
	
}Stu;
int main()
{
	int n;
	cout << "输入学生人数：";
	cin >> n;
	
	Stu* s = new Stu[n];
	//获取信息
	for (int i = 0; i < n; i++)
	{
		cout << "学生学号(由1000开始):";
		cin >> s[i].num;
		cout << "姓名:";
		cin >> s[i].name;
		cout << "性别:";
		cin >> s[i].sex;
		cout << "成绩:";
		cin >> s[i].mark;
		cout << endl;
	}

	//按成绩从高到低排序
	//冒泡排序
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (s[j].mark > s[j + 1].mark)
			{
				Stu temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}

	}
	//输出;
	cout << "\n排序后--";
	for (int i = 0; i < n; i++)
	{
		cout << "姓名：" << s[i].name << endl;
		cout << "性别：" << s[i].sex << endl;
		cout << "学号：" << s[i].num << endl;
		cout << "成绩：" << s[i].mark << endl;
		cout << endl;
	}
	

	return 0;
}
