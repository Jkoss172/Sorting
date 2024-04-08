#include <iostream>
#include "quickSort.h"

using namespace std;

// function to swap elements
void swap1(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// function to print the array
void quickSort::printArray1(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " " << endl;
    cout << endl;
}

// function to rearrange array (find the partition point)
int quickSort::partition(int array[], int low, int high) {

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap1(&array[i], &array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap1(&array[i + 1], &array[high]);

    // return the partition point
    return (i + 1);
}

void quickSort::qSort(int array[], int low, int high) {
    if (low < high) {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        qSort(array, low, pi - 1);

        // recursive call on the right of pivot
        qSort(array, pi + 1, high);
    }
}
