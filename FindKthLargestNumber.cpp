#include <vector>
#include <iostream>

int FindKthLargestNumber(int left[], int right[]) 
{
	int arrayCount = 9;
	int pivot = arr[arrayCount - 1];
	int wall = 0;
	int tmpSwapVariable = arr[0];
	for (int i = 0; i < arrayCount; i++) 
	{
		if (pivot < arr[i]) 
		{
			tmpSwapVariable = arr[wall];
			arr[wall] = arr[i];
			arr[i] = tmpSwapVariable;
			wall++;
		}
	}
	for(int i = 0; i < arrayCount; i++) 
	{
		std::cout << arr[i] << std::endl;
	}
	std::cout << "wall: " << wall << std::endl;
	return 0;
}

int Partition(int wall, int array[], int sizeofarray) {
	
}

int main() 
{
	// init array with random values
	int array[] = {4, 341, 123, 5634, 23, 356, 2887, 76, 45};
	FindKthLargestNumber(array, 3);
	return 0;
}

