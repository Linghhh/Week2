#include <iostream>
using namespace std;

int** turn(int** p, int r, int c);
int main()
{
	int r, c;
	cout << "请输入行数和列数：";
	cin >> r >> c;
	cout << endl;
	int** a = new int* [r];
	cout << "请输入：" << endl;
	for (int i = 0; i < r; i++)
	{
		a[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	int** b = turn(a, r, c);
	cout << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << b[i][j] << " ";

		cout << endl;
	}
	return 0;
}
int** turn(int** p, int r, int c)
{
	int** q = new int* [r];
	for (int i = 0; i < r; i++)
		q[i] = new int[c];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c;j++)
		{
			q[j][i] = p[i][j];
		}
	}
	return q;
}