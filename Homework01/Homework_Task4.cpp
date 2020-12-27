
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << "*";
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j <= n; j++) {
			if (j == i + 1 || j == n - i - 2) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 1; i < n / 2; i++)
	{
		for (int j = 0; j <= n; j++) {
			if (j == n / 2 - i || j == n / 2 + i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		cout << endl;
	}

	

	for (int i = 0; i < n; i++) {
		cout << "*";
	}
}