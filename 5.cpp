#include <iostream>
using namespace std;
#define UPPER 0

int main()
{
	char c;
#if UPPER
	cout << "Сдת��д��" << endl;
	cout << "������һ����ĸ��";
	cin >> c;
	cout << "ת����";
	if (c >= 'a' && c <= 'z')
		cout << (char)(c - ('a' - 'A'));
	else
		cout << c;
#else
	cout << "��дתСд��" << endl;
	cout << "������һ����ĸ��";
	cin >> c;
	cout << "ת����";
	if (c >= 'A' && c <= 'Z')
		cout << (char)(c + ('a' - 'A'));
	else
		cout << c;
#endif

	return 0;
}