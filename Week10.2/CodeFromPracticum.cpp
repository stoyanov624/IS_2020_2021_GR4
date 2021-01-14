#include <iostream>
using namespace std;

void resize(int *&arr,int &capacity, int size) {
	capacity *= 2;
	int *biggerArr = new int[capacity];

	for(int i = 0; i<size;i++){
		 biggerArr[i] = arr[i];
	}
	delete[] arr;
	arr = biggerArr;
}



void pushBack(int*& arr, int &size,int &capacity ,int number) {
	
	if(size==capacity) {
		resize(arr, capacity, size);
	}

	arr[size] = number;
	size++;
	
}	

void printArray(const int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void copy(int *&arrayMimi,int &sizeOne, int &capacityOne, int sizeTwo, int capacityTwo, int arrMimiTwo[])
{
	delete[] arrayMimi;
	capacityOne = capacityTwo;
	sizeOne = sizeTwo;
	arrayMimi = new int[capacityOne];
	for (int i = 0; i < sizeOne; i++)
	{
		arrayMimi[i] = arrMimiTwo[i];
	}
}

void popBack(int* arr, int& size) {
	if(size <= 0) {
		cout << "No elements found\n";
		return;
	}

	size--;
}

void swap(int& element1, int& element2) {
	int temp = element1;
	element1 = element2;
	element2 = temp;
}

void popFront(int* arr, int& size) {
	if(size <= 0) {
		cout << "No elelemts found\n";
		return;
	}

	for (int i = 1; i < size; i++) {
		swap(arr[i],arr[i - 1]);
	}

	size--;
	
}
int main()
{ 
	int capacity = 8;
	int size = 0;
	int* arr = new int[capacity];
	pushBack(arr, size, capacity, 23);
	pushBack(arr, size, capacity, 3);
	pushBack(arr, size, capacity, 2);
	pushBack(arr, size, capacity, 5);

	
	printArray(arr, size);

	popFront(arr,size);

	printArray(arr,size);


}
