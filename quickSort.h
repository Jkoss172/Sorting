/*
Jeff Koss
MS549
Assignment 3
04/07/24
*/
#pragma once

#include <iostream>

class quickSort
{
public:

	void printArray1(int array[], int size);
	int partition(int array[], int low, int high);
	void qSort(int array[], int low, int high);
};
