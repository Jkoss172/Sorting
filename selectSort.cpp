#include <iostream>
#include "selectSort.h"

using namespace std;

// function to swap the the position of two elements
void swap3(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void selectionSort::printArray2(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " " << endl;
    }
    cout << endl;
}

void selectionSort::sSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        swap3(&array[min_idx], &array[step]);
    }
}