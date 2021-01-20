#include <iostream>
using namespace std;

const int MATRIX_SIZE = 5;

int printMatrix(const int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void shift(int matrix[MATRIX_SIZE][MATRIX_SIZE], int command,int &border_index) {
    int first_element = 0;
	int second_element = 0;
	int third_element = 0;
	int forth_element = 0;

    while (command != 0) {
		first_element = matrix[border_index][border_index];
		second_element = matrix[border_index][MATRIX_SIZE - (border_index + 1)];
		third_element = matrix[MATRIX_SIZE - (border_index + 1)][MATRIX_SIZE - (border_index + 1)];
		forth_element = matrix[MATRIX_SIZE - (border_index + 1)][border_index];

        if(border_index % 2 == 0) {
            matrix[border_index][border_index] = forth_element;
		    matrix[border_index][MATRIX_SIZE - (border_index + 1)] = first_element;
		    matrix[MATRIX_SIZE - (border_index + 1)][MATRIX_SIZE - (border_index + 1)] = second_element;
		    matrix[MATRIX_SIZE - (border_index + 1)][border_index] = third_element;
        } else {
            matrix[border_index][border_index] = second_element;
		    matrix[border_index][MATRIX_SIZE - (border_index + 1)] = third_element;
		    matrix[MATRIX_SIZE - (border_index + 1)][MATRIX_SIZE - (border_index + 1)] = forth_element;
		    matrix[MATRIX_SIZE - (border_index + 1)][border_index] = first_element;
        }
		command--;
       
	}
    border_index++;
}

void shiftMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE], int shift_counter) {
    int matrixes_to_shift_count = MATRIX_SIZE / 2;
    int border_index = 0;

    while(border_index != matrixes_to_shift_count) {
        shift(matrix,shift_counter,border_index);
    }
}


int main() {
    int matrix[6][6] = {{1,  0,  0,  0,  0,  2,},
                        {0,  1,  0,  0,  2,  0,},
                        {0,  0,  1,  2,  0,  0,},
                        {0,  0,  4,  3,  0,  0,},
                        {0,  4,  0,  0,  3,  0,},
                        {4,  0,  0,  0,  0,  3}};

    int matrix2[5][5] = {{1,  2,  3,  4,  5},
                         {4,  5,  6,  7,  8},
                         {3,  4,  5,  9,  0},
                         {5,  6,  9,  1,  2},
                         {6,  10, 11, 0,  1}};

    shiftMatrix(matrix2,1);
    printMatrix(matrix2);
}