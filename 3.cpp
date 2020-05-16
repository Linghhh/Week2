#include <iostream>
#include <string>
using namespace std;
using std::string;
int main()
{
	string str;
	getline(cin, str);
	int num = 0;
	for (int i = str.length(); i >= 0; i--)
	{
		if (str[i] >= 'A' && str[i] <= 'z')
			num++;
		cout << str[i];
	}
	cout << "×ÖÄ¸¸öÊý£º" << num;
	return 0;
}