#include "bubbleSort.h"
#include "quickSort.h"
#include "selectSort.h"
#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>

using namespace std;

int main()
{

	int nums[1000];
	clock_t start, end;

	for (int i = 0; i < 1000; i++)
	{
		nums[i] = rand() % 1000;
	}
	int n = sizeof(nums) / sizeof(nums[0]);
	 bubbleSort b;
	 b.printArray(nums, n);
	 start = clock();
	 b.Sort(nums, n);
	 end = clock();
	 b.printArray(nums, n);

	 for (int i = 0; i < 1000; i++)
	 {
		 cout << nums[i] << endl;;
	 }
	 cout << "bubbleSort time (MS): " << end - start << endl;
	 
	 /*
	 int nums2[1000];
	 clock_t start5, end5;
	 for (int i = 0; i < 1000; i++)
	 {
		 nums2[i] = rand() % 1000;
	 }
	 int n1 = sizeof(nums2) / sizeof(nums2[0]);
	 start5 = clock();
	 sort(nums2, nums2 + n1);
	 end5 = clock();

	 for (int i = 0; i < 1000; i++)
	 {
		 cout << nums2[i] << endl;;
	 }

	 cout << "std lib time: " << end5 - start5 << endl;
	 
	
	 int nums3[1000];
	 clock_t start1, end1;

	 for (int i = 0; i < 1000; i++)
	 {
		 nums3[i] = rand() % 1000;
	 }
	 int n2 = sizeof(nums3) / sizeof(nums3[0]);
	 quickSort c;
	 c.printArray1(nums3, n2);
	 start1 = clock();
	 c.qSort(nums3, 0, n2 - 1);
	 end1 = clock();
	 c.printArray1(nums3, n2);
	 cout << "quickSort time (MS): " << end1 - start1 << endl;
	 
	 int nums4[1000];
	 clock_t start2, end2;

	 for (int i = 0; i < 1000; i++)
	 {
		 nums4[i] = rand() % 1000;
	 }
	 int n3 = sizeof(nums4) / sizeof(nums4[0]);
	 selectionSort d;
	 d.printArray2(nums4, n3);
	 start2 = clock();
	 d.sSort(nums4,  n3);
	 end2 = clock();
	 d.printArray2(nums4, n3);
	 cout << "selectionSort time (MS): " << end2 - start2 << endl;
	 */
	return 0;
}