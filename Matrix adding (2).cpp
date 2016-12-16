#include <iostream>
#include <string>
using namespace std;


int main()
{

	int a[1][5] = { { 1,1,1,1,1 } };
	int b[5][1] = { { 2 },{ 0 },{ 1 },{ 1 },{ 3 } };
	int c[1][1];

	int m = 1;
	int p = 5;
	int n = 1;

	int i, j, k;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; i++) {
			c[i][j] = 0;//sum
			for (k = 0; k < p; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];


			for (i = 0; i < m; i++) {
				for (j = 0; j < n; j++)
					cout << c[i][j] << " ";
				cout << endl;
			}
		}


	return 0;

}
