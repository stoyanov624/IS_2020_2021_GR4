#include <iostream>
using namespace std;

const int ARRAY_SIZE = 3;
const int MATRIX_SIZE = 4;


void sum(int array[],int number){
	for (int i = 0; i < ARRAY_SIZE;i++)
    {
		for (int j = i+1; j < ARRAY_SIZE;j++)
        {
            if(array[i] + array[j] == number)
				cout << "(" << i << " " << j << ") ";
		}
	}
}

//сума на главния диагонал
int mainDiagonalSum(int matrix[][MATRIX_SIZE])
{
	int sum = 0;
	for (int i = 0;i<MATRIX_SIZE;++i)
    {
		sum += matrix[i][i];
    }
	return sum;
}

//сума на второстопенния
int secondDiagonalSum(int matrix[][MATRIX_SIZE]) {

	int sum = 0;
	for (int i = 0; i < MATRIX_SIZE; i++){
		sum += matrix[i][MATRIX_SIZE-i-1];
	}
	return sum;
}

//проверка дали едно число е степен на двойката
bool isPowerByTwo(int n)
{
    if(n==0) 
		return false;
	

	while(n != 1) { 
	if(n%2 != 0)
		return false;
		n /= 2;
    }
	return true;
}


bool isSumPowerOfTwo(int matrix[][MATRIX_SIZE]) {

    int result = mainDiagonalSum(matrix) + secondDiagonalSum(matrix);
    cout << result;
	if(MATRIX_SIZE % 2 != 0) {
        result -= matrix[MATRIX_SIZE/2][MATRIX_SIZE/2];
    }

    return isPowerByTwo(result);
}

void printCounter(int* counter) {
    for (int i = 0; i < 26; i++) {
        if(counter[i] != 0) {
            cout << char(i + 97) << " - " << counter[i] << endl; 
        }
    }
}

void Recursive(char* arr,int* counter) {
	if(arr[0] == '\0') {
        printCounter(counter);
        return;
    }

    counter[(int)arr[0] - 97] += 1;
	 
	return Recursive(arr + 1,counter);  
}


int charArrLength(char* arr) {
    int count = 0;
    while(arr[count] != '\0') {
        count++;
    }

    return count;
}

void removeAt(char* arr, int index) {
    char help = ' ';
    int length = charArrLength(arr);
	for (int i = 0; i < length; i++){
		if(i == index){
			for (int j = i + 1; j < length; j++){
                help = arr[j - 1];
                arr[j-1] = arr[j];
				arr[j] = help;
			}
		}
	}
    arr[length - 1] = '\0';
}

void insertAfter(char* arr, int index) {
    char sentence[1000] = {};

    for (int i = 0; i < index + 1; i++) {
        sentence[i] = arr[i];
    }
    sentence[index + 1] = '+';

    int length = charArrLength(arr);
    for (int i = index; i < length; i++) {
        sentence[i + 2] = arr[i + 1];
    }
    
    cout << sentence;
}

int main() {
	int array[ARRAY_SIZE] = {6,6,6};
    int number = 12;

    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {{2,3,4,5},
                                            {2,4,5,6},
                                            {3,6,0,9},
                                            {6,0,1,4}};

	//sum(array,3);
    int counter[26] = {};
    char sentence[1000] = "dopulnitelno";
    insertAfter(sentence,0);
}



//Напишете функция, която по подадени масив от цели числа и число, 
//проверете дали има двойка стойности на масива, които след тяхното събиране се
//получава търсеното число. Върнете на стандартния изход позициите на тези стойности

//Да се напише програма, която въвежда квадратна матрица от цели числа 
//с размер nxn (n също се въвежда от клавиатурата), след което намира сумата от елементите на главния и 
//второстепенния диагонал (центърът да се брои само веднъж). Да се провери дали сумата е степен на двойката.

// Напишете рекурсивна функция, която извежда, коя буква колко пъти се съдържа в дадено изречение



