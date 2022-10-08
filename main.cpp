#include "qsort.h"
int main() {

	//Tests cases for sorting algorithm
	//Case1:
	/* Function tests a given unsorted array, if it sorts linearly (i.e. in ascending order). */
   // Pass, because array sorted in ascending order.
	int arr[5] = { 5, 3, 4, 1, 2 };
	int arrSorted[5] = { 1, 2, 3, 4, 5 };

	//Case2:
	/* Function tests a given sorted array if its elements after sort will be untouched. */
    // Pass, because sorted array sorts back to itself.

	int arr1[2] = { 1, 2 };
	int arrSorted1[2] = { 1, 2 };

	//Case3:
	/* Function tests a given reversed sorted array if it will sort back in ascending order. */
// Pass, because array is resorted in ascending order.
	
	int arr2[5] = { 10000, 1000, 100, 10, 1 };
	int arrSorted2[5] = { 1, 10, 100, 1000, 10000 };
	
	//Case5: As the statement says that the values between 0 and 60000 if
	 //out of range value is detected the program will hault. f
	// will throw an error that "value out of range program will close 

	int arr3[2] = { -1, 2 };
	int arrSorted3[2] = { -1, 2 };

	if (sortTestLinear(arr, arrSorted, 5))
	{
		result('a');

	}
	if(sortTestLinear(arr1, arrSorted1, 2));
	{
		result('b');
	}
	if (sortTestLinear(arr2, arrSorted2, 5))
	{

		result('c');
	}

	if (sortTestLinear(arr3, arrSorted3, 5))
	{

		result('d');
	}

	//Case4: In C we cannot intialize an empty array but this program
	// will hault if an empty erray [cout 0] has been dected.
	
   
	

}