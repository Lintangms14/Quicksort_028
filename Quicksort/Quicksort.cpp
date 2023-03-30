#include <iostream>
using namespace std;

																					// array of intergers to hold values
int arr[20];
int cmp_count = 0;																	// number of comparasion
int mov_count = 0;																	// number of data movement
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Panjang Element Array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 20" << endl;
	}
}