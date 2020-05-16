#include <iostream>
using namespace std;
#define UPPER 0

int main()
{
	char c;
#if UPPER
	cout << "小写转大写！" << endl;
	cout << "请输入一个字母：";
	cin >> c;
	cout << "转换后：";
	if (c >= 'a' && c <= 'z')
		cout << (char)(c - ('a' - 'A'));
	else
		cout << c;
#else
	cout << "大写转小写！" << endl;
	cout << "请输入一个字母：";
	cin >> c;
	cout << "转换后：";
	if (c >= 'A' && c <= 'Z')
		cout << (char)(c + ('a' - 'A'));
	else
		cout << c;
#endif

	return 0;
}