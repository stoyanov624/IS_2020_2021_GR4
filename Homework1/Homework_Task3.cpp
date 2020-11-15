
#include <iostream>
using namespace std;
int main()
{
	int year = 2020;
	//cin >> year;
	int days = 28;

	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (isLeapYear)
		days = 29;

	double score = 3;
	bool isPrime = true;

	for (int i = 2; i <= days; i++) {
		isPrime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			score += 2;
			continue;
		}
		
		if (i % 2 == 0) {
			score += 2.99;
		}
		else {
			score += 3;
		}
		
	}
	double result = score / days;
	
	cout << result << endl;
	result = int(result * 100.0 + 0.5);
	result = double(result / 100.0);

	cout << result;

}
	