#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[3][4] = { { 2,4,5,1 },{ 1,1,2,1 },{ 0,1,3,0 } };
	int s[3];
	int i, j;
	int m = 3;
	int n = 4;

	for (i = 0; i < m; i++)
	{
		s[i] = 0;
		for (j = 0; j < n; j++)
			s[i] = s[i] + a[i][j];
		cout << s[i] << endl;
	}
	cout << endl;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
	cout << endl;
	return 0;
}
