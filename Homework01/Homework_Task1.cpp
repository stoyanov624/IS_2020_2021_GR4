
#include <iostream>
using namespace std;
int main()
{
	int exams_taken = 0;

	bool administration_in_mood = false;
	bool taxes_payed_in_time = false;
	bool special_tax_payed = false;

	cin >> exams_taken;

	if (exams_taken >= 0) {
		bool passed_for_sure = (exams_taken >= 4) || (administration_in_mood && taxes_payed_in_time && special_tax_payed);
		bool passed_with_two_exams = (exams_taken == 2) && (administration_in_mood);
		bool passed_with_one_exam = (exams_taken == 1) && (administration_in_mood && taxes_payed_in_time);

		if (passed_for_sure || passed_with_two_exams || passed_with_one_exam) {
			cout << "Good job, you passed!" << endl;
		}
		else {
			cout << "September is a fun month" << endl;
		}
	}
	else {
		cout << "Invalid input!" << endl;
	}
}