#include <iostream>
using namespace std;
void printDani(int n,int rows)
{
	int copy = n;
	for (int i = 0;i<rows;i++)
	{
		cout << copy << " ";
		if(copy==1)
		return;
		copy--;
	}
	cout << endl;
	printDani(n, rows + 1);
}
void count(int* arr, int size, int elem, int &occ) {
	if(size == 0) {
		return;
	}
    
	if(arr[0] != elem) {
		return count(arr + 1, size - 1, elem, occ);
	}
    
	occ++;
	return count(arr + 1, size - 1, elem, occ);
}

void replace(int* arr, int size, int oldElem, int newElem)
{
	if(size == 0)
		return;
	if(arr[0] == oldElem)
	{
		arr[0] = newElem;
	}
	return replace(arr + 1, size - 1, oldElem, newElem);

}


void printArray(const int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void helperPrinter(int n, int i) {
    if(i == 0) {
        cout << endl;
        return;
    }    

    cout << n - 1 << " ";

    return helperPrinter(n - 1 ,i - 1); 
}

void printPyramid(int n, int i){
    if(n == i){
		return;
	}
    cout << n << " ";
    helperPrinter(n,i);
    printPyramid(n, i + 1);
}

void printMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++) {
            cout << matrix[i][j] << ' ';
        }
        
        cout << endl;
    }

}

void makeMatrix(int* arr, int size, int n,int**& matrix) {
    int final_size = 0;
    if(size % n == 0) {
        final_size = size/n;
        matrix = new int*[final_size];
    }else {
        final_size = size/n + 1;
        matrix = new int*[final_size];
    }

    for (int i = 0; i < final_size; i++) {
        matrix[i] = new int[n];
    }
    int k = 0;

    for (int i = 0; i < final_size; i++) {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = arr[k];
            k++;
        }
    }
}

int main() {
    int rows = 5;

    //int* array = new int[420];
	int **matrix = nullptr;
	int array[10] = {4,5,6,6,4,2,3,4,6};
    int size = 9;
	int n = 3;
	 makeMatrix(array, size, n, matrix);
	printMatrix(matrix,3);
    
    //matrix = new int* [rows];
    //for (int i = 0; i < rows; i++)
    //{
    //    matrix[i] = new int[rows];  
    //}
//
  
//
	//for(int i = 0; i < rows; i++){
	//	delete[] matrix[i];
	//}
    //delete matrix; 
    return 0;
}