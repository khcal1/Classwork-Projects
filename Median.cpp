#include <iostream>
#include <vector>
using namespace std;




int main() {
	int vectSize;
	cout << "Enter the size of your list:";
	cin >> vectSize;

	vector<double> Med(vectSize);
	int i = 0;

	cout << "Enter " << vectSize << " integer values..." << endl;
	for (i = 0; i < vectSize; i++) {
		cout << "Value: ";
		cin >> Med.at(i);
	}

	if (vectSize % 2 == 1) {

		cout << "The median is " << Med.at(vectSize / 2);
	}
	else {

		cout << " The median is " << (Med.at(vectSize / 2 - 1) + Med.at(vectSize / 2)) / 2;
	}


	return 0;
}
