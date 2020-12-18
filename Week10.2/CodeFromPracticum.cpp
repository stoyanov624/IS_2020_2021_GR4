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
		cout << arr[i];
	}
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
int main()
{ 
	int capacity = 8;
	int size = 0;
	int* arr = new int[capacity];
	pushBack(arr, size, capacity, 23);
	pushBack(arr, size, capacity, 3);
	pushBack(arr, size, capacity, 2);
	pushBack(arr, size, capacity, 5);
	pushBack(arr, size, capacity, 123);
	pushBack(arr, size, capacity, 1213);
	pushBack(arr, size, capacity, 12);
	pushBack(arr, size, capacity, 56);
	pushBack(arr, size, capacity, 73);
	pushBack(arr, size, capacity, 9);
	pushBack(arr, size, capacity, 0);

	int otherCapacity = 5;
	int otherSize = 3;
	int arr2[5] = { 1,2,3 };

	printArray(arr, size);
	copy(arr, size, capacity, otherSize, otherCapacity, arr2);
	
	printArray(arr, size);


}
