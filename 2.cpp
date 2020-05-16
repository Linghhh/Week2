#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C);
int main()
{
	int m;
	cin >> m;
	hanoi(m, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char A, char B, char C)
{
	if(n == 1)
		cout<<A<<"-->"<<C<<endl;
	else
	{
		hanoi(n - 1, A, C, B);
		cout << A << "-->" << C << endl;
		hanoi(n - 1, B, A, C);
	}
}