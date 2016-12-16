
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cout << "How many numbers are in your list" << endl;
	cin >> size;

	int arrary[size];
	int *aPtr;

	aPtr = arrary;

	cout << "Enter in the numbers of the list" << endl;
	for (int i = 0; i < size; i++) {
		cout << "number:";
		cin >> *(aPtr + i);
	}


	for (int i = 0; i < size; i++) {
		for (int k = i + 1; k < size; k++) {
			if (*(aPtr + i) == *(aPtr + k)) {

				cout << "The mode is " << *(aPtr + i);

			}

		}
	}


	return 0;
}
