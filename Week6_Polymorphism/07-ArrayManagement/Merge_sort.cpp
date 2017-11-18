#include <iostream>
using namespace std;

void mergeSort(int arr[], int start, int end);
//Precondition: The array elements arr[start] through arr[end] have values. start <= end
//Postcondition: The values of arr[start] through arr[end] have been rearranged so that
//				 arr[start] <= arr[start+1] <= ... <= arr[end].


void merge(int arr[], int start, int mid, int end);
//Precondition: The array elements arr[start] through arr[end] have values. start <= mid <= end
//		subarray arr[start] to arr[mid] is sorted; subarray arr[mid+1] to arr[end] is sorted
//Postcondition: the entire array arr[start] to arr[end] is sorted


void print(int arr[], int start, int end);
// output the elements in arr from arr[start] to arr[end], start <= end



void mergeSort(int arr[], int start, int end)
{
	if (start == end-1)		// size 2 array, base case. What about size 1 array?
	{
		// swap the two elements if they are out of order
		if(arr[start] > arr[end])
		{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
	}

	else if (start < end - 1)	// size > 2 array
	{
		int mid = (start + end)/2;		// "cut" the array in half

		mergeSort(arr, start, mid);		// sort the first half

		mergeSort(arr, mid+1, end);		// sort the second half

		merge(arr, start, mid, end);	// merge them into one

		//print(arr, start, end);	// add this line to trace the recursive calls
	}
}


void merge(int arr[], int start, int mid, int end)
{
	int length = end-start+1;
	int *temp = new int[length]; // a temporary array for holding the merged elements

	int index = 0;
	int i = start, j = mid + 1;

	while(i <= mid && j <= end)
		if (arr[i] < arr[j])
			temp[index++] = arr[i++];
		else
			temp[index++] = arr[j++];

	// copy remaining elements
	while (i <= mid)
		temp[index++] = arr[i++];

	while (j <= end)
		temp[index++] = arr[j++];

	// copy temp back into arr
	for (int i = 0; i < length; ++i)
		arr[start+i] = temp[i];

	delete[] temp; // before exiting the function, delete the temp array
}

// the following merge is also good

//void merge(int arr[], int start, int mid, int end)
//{
//	int size = end-start+1;
//	int* temp = new int [size];
//	for (int index(0), i(start), j(mid+1); index < size; ++index)
//	{
//		if (i <= mid && j <= end)
//		{
//			if (arr[i] < arr [j])
//				temp[index] = arr[i++];
//			else
//				temp[index] = arr[j++];
//		}
//		else if (i <= mid)
//			temp[index] = arr[i++];
//		else if (j <= end)
//			temp[index] = arr[j++];
//	}
//	for (int i(start), j(0); i <= end; i++, j++)
//		arr[i] = temp[j]; 
//	delete [] temp;	
//}

