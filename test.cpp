#include "qsort.h"

/* Function tests a given unsorted array, if it sorts linearly (i.e. in ascending order). */
// Pass, because array sorted in ascending order.
bool sortTestLinear(int* unsortArr, int *sortArr, int count)
{
	
	qsort(unsortArr, count);

	for (int i = 0; i < 5; i++)
	{
		if (unsortArr[i] != sortArr[i])
		{
			printf("quickSort not sorting correctly.");
			return false;
			break;
	 	}
	}

	return true;
	
	//result(cases);
	//printf("**Case:1 Assending sort**  passed");
		
}

void result(char cases)
{
	switch (cases)
	{
	case 'a':

		printf("***************************************\n");
		printf("**Case:1 Assending sort**  passed \n");
		printf("***************************************");
		break;

	case 'b':
		printf("***************************************\n");
		printf("**Case:2 Already sorted array**  passed \n");
		printf("***************************************");
		break;

	case 'c':
		printf("***************************************\n");
		printf("**Case:3 Reversed array**  passed\n");
		printf("***************************************");



	}


}
