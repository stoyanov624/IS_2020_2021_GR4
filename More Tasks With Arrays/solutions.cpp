#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//Slice and Dice

		//int n = 0;
		//int main_arr[100];
		//
		//int first_half[100];
		//int second_half[100];
		//int middle = 0;
		//
		//cin >> n;
		//for (int i = 0; i < n; i++)
		//{
		//	cin >> main_arr[i];
		//}
		//
		//for (int i = 0; i < n / 2; i++)
		//{
		//	first_half[i] = main_arr[i];
		//}
		//
		//cout << "First array: ";
		//for (int i = 0; i < n / 2; i++)
		//{
		//	cout << first_half[i] << " ";
		//}
		//
		//if (n % 2 == 1) {
		//	middle = main_arr[n / 2];
		//
		//	for (int i = 0,k = (n / 2 + 1); k < n; i++, k++)
		//	{
		//		second_half[i] = main_arr[k];
		//	}
		//
		//}
		//else {
		//	for (int i = 0, k = (n / 2); k < n; i++, k++)
		//	{
		//		second_half[i] = main_arr[k];
		//	}
		//}
		//
		//cout << "Second array: ";
		//for (int i = 0; i < n / 2; i++)
		//{
		//	cout << second_half[i] << " ";
		//}
		//
		//if (n % 2 == 1) {
		//	cout << "Middle: " << middle << endl;
		//}

	//Neighbours
		//int n2 = 0;
		//cin >> n2;
		//int arr2[100];
		//
		//for (int i = 0; i < n2; i++)
		//{
		//	cin >> arr2[i];
		//}
		//
		//for (int i = 1; i < n2 - 1; i++) {
		//	if (arr2[i] > arr2[i - 1] && arr2[i] < arr2[i + 1]) {
		//		cout << arr2[i] << " ";
		//	}
		//}
		//cout << endl;

	// Sub Array
		//int n3 = 0;
		//int m3 = 0;
		//cin >> n3;
		//cin >> m3;
		//
		//int bigger_arr[100];
		//int smaller_arr[100];
		//for (int i = 0; i < n3; i++)
		//{
		//	cin >> bigger_arr[i];
		//}
		//
		//for (int i = 0; i < m3; i++)
		//{
		//	cin >> smaller_arr[i];
		//}
		//
		//int i = 0;
		//int k = 0;
		//for (; i < n3 && k < m3; i++, k++)
		//{
		//	if (bigger_arr[n3 - 1 - i] != smaller_arr[m3 - 1 - k]) {
		//		k = 0;
		//	}
		//}
		//
		//if (k == m3) {
		//	cout << "YES";
		//}
		//else {
		//	cout << "NO";
		//}

	// Pairs
		//int arr4[100];
		//int n4 = 0, small_diff = 0, large_diff;
		//cin >> n4;
		//
		//for (int i = 0; i < n4; i++) {
		//	cin >> arr4[i];
		//}
		//
		//small_diff = abs(arr4[0] - arr4[1]);
		//large_diff = abs(arr4[0] - arr4[1]);
		//int save_small_diff_element1 = arr4[0];
		//int save_small_diff_element2 = arr4[1];
		//
		//int save_large_diff_element1 = arr4[0];
		//int save_large_diff_element2 = arr4[1];
		//for (int i = 0; i < n4; i++) {
		//	for (int j = i + 2; j < n4; j++)
		//	{
		//		if (small_diff > abs(arr4[i] - arr4[j])) {
		//			save_small_diff_element1 = arr4[i];
		//			save_small_diff_element2 = arr4[j];
		//			small_diff = abs(arr4[i] - arr4[j]);
		//		}
		//
		//		if (large_diff < abs(arr4[i] - arr4[j])) {
		//			save_large_diff_element1 = arr4[i];
		//			save_large_diff_element2 = arr4[j];
		//			large_diff = abs(arr4[i] - arr4[j]);
		//		}
		//	}
		//}
		//
		//cout << "Smallest diff - (" << save_small_diff_element1 << "," << save_small_diff_element2 << ")\n";
		//cout << "Largest diff - (" << save_large_diff_element1 << "," << save_large_diff_element2 << ")\n";

	//Alphabet Container
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int alphabet_count[26] = { 0 };

	char word[100];
	int length = 0;
	//cin.ignore();
	cin.getline(word, 30);
	int letter_position = 0;

	while (word[length] != '\0') {
		++length;
	}

	for (int i = 0; i < length; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] += 32;
		}
		letter_position = (word[i] - 97);
		alphabet_count[letter_position]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " - " << alphabet_count[i] << endl;
	}
}