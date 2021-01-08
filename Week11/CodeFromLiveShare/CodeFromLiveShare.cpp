#include <iostream>
using namespace std;

int sumOfDigits(int a)
{
	if(a <= 0) { // a % 10 == 0
        return 0;
    }
	return (a % 10) + sumOfDigits(a / 10); // a + sumOfDigits
}
// abc -> 1+2=3
// bc -> 1+1=2
// c -> 1+0=1
// '\0' -> 0 
int recStrlen(const char* sentence) {
	if (sentence[0] != '\0') {
		return 1 + recStrlen(sentence + 1);
	} return 0;
}

int countLetters(const char* sentence) {
	if(sentence[0]=='\0')
	{
		return 0;
	}

	if ((sentence[0] >= 'a' && sentence[0] <= 'z') || (sentence[0] >= 'A' && sentence[0] <= 'Z')) {
		return 1 + countLetters(sentence + 1);
	}

    return countLetters(sentence + 1);
}

int reverseNum(int number) {
	static int result = 0;
	if (number <= 0)
		return result / 10;
    
	result += (number % 10);
	result *= 10;
	return reverseNum(number / 10);
}

int factorial(int number){
	if (number < 0) {
		cout << "Invalid number!";
		return -1;
	}

	if (number <= 1)
		return 1;

	return number * factorial(number - 1); 
}
// strcpy_s(a,b);
int fibonnaci(int number) {
	
	if()
}


int main() {
	//Напишете рекурсивна функция int factorial(int) , която пресмята факториел от дадено цяло число.
	cout << sumOfDigits(355) << endl;
	char array[100] = "Praktikum";
	cout << recStrlen(array) << endl;
	char array2[100] = "Praktikum410@#!";
	cout << countLetters(array2) << endl;
	cout << reverseNum(355) << endl;
	cout << factorial(5) << endl;	
}