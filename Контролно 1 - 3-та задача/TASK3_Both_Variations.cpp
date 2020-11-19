#include <iostream>
using namespace std;

int main() {

	// 3-та задача вариант 1
	/*int n = 0;
	cin >> n;
	int first_number = 0, second_number = 0, temp_second_number = 0;
	bool flag = false;
	cin >> first_number;
	double sum = first_number;

	for (int i = 1; i < n; i++) {
		cin >> second_number;
		sum += second_number;
		temp_second_number = second_number;

		while (first_number != 0 && temp_second_number != 0 && !flag) {
			if (first_number % 10 == temp_second_number % 10) {
				temp_second_number /= 10;
			}
			else {
				temp_second_number = second_number;
			}
			first_number /= 10;
		}

		if (temp_second_number == 0) {
			flag = true;
		}
		first_number = second_number;
	}

	if (flag) {
		cout << "YES" << endl;
		cout << sum / n;
	}
	else {
		cout << "NO" << endl;
	}*/


	// 3-та задача вариант 2
	int n = 0;
	cin >> n;
	int first_number = 0, second_number = 0, temp = 0, temp_first = 0;
	bool more = true;
	bool same = true;
	double sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> first_number;
		temp_first = first_number;
		sum += first_number;
		if (first_number < temp) {
			more = false;
			break;
		}

		while (temp_first > 9) {
			temp_first /= 10;
		}

		if (first_number % 10 != temp_first) {
			same = false;
			break;
		}

		temp = first_number;
	}

	if (same && more) {
		cout << "YES" << endl;
		cout << sum / n;
	}
	else {
		cout << "NO!";
	}
}