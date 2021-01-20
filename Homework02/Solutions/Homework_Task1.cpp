#include <iostream>
using namespace std;

const int ARRAY_CAPACITY = 100;
const int ARRAY_SIZE = 9;

void printArray(const int* array) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(int& element1, int& element2) {
    int temp = element1;
    element1 = element2;
    element2 = temp;
}

void shift(int* array) {
    int save_element = array[0];
    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        swap(array[i],array[i+1]);
    }
    array[ARRAY_SIZE] = save_element;
}

void shiftArray(int* array, int shift_counter) {
    while(shift_counter != 0) {
        printArray(array);
        shift(array);
        --shift_counter;
    }
}

int main() {
    int shift_counter = 3;
    int shifting_array[ARRAY_CAPACITY] = {1,2,3,4,5,6,7,8,9};   
    shiftArray(shifting_array,shift_counter);
}