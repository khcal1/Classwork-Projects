#include<iostream>
#include<string>
using namespace std;

int main()
{

	int m = 5;
	int n = 4;
	int x[5][4] = { { 2,4,5,1 },{ 1,1,-2,1 },{ -1,2,17,0 },
	{ -12,1,3,8 },{ 5, -3,3,3 } };

	int temp;
	int i, j, k;

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < m; i++)
			for (j = 0; j < m - 1; j++) {
				if (x[j][k] < x[j + 1][k])
				{
					temp = x[j][k];
					x[j][k] = x[j + 1][k];
					x[j + 1][k] = temp;
				}
			}
	}


	for (i = 0; i < m; i++) {
		for (j = 0; j < m - 1; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
