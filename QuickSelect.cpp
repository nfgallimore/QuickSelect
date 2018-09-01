// Author Nick Gallimore
// See https://en.wikipedia.org/wiki/Quickselect

#include <vector>
#include <iostream>

int partition(int list[], int left, int right, int pivotIndex) 
{
	int pivotValue = list[pivotIndex];

	int tmp = list[pivotIndex];
	list[pivotIndex] = list[right];
	list[right] = tmp;

	int storeIndex = left;
	for (int i = left; i < right - 1; i++) 
	{
		if (list[i] < pivotValue) 
		{
			tmp = list[storeIndex];
			list[storeIndex] = list[i];
			list[i] = list[storeIndex];

			storeIndex++;
		}
	}

	tmp = list[right];
	list[right] = list[storeIndex];
	list[storeIndex] = list[right];
	return storeIndex;
}

int select(int list[], int left, int right, int k) 
{
	if (left == right)
	{
		return list[left];
	}

	int pivotIndex = right;

	pivotIndex = partition(list, left, right, pivotIndex);

	if (k == pivotIndex)
	{
		return list[k];
	}
	else if (k < pivotIndex) 
	{
		return select(list, left, pivotIndex - 1, k);
	}
	else 
	{
		return select(list, pivotIndex + 1, right, k);
	}
}

int main() 
{
	// init array with random values
	int array[] = {4, 341, 123, 5634, 23, 356, 2887, 76, 45};
	auto result = select(array, 0, sizeof(array[0] / sizeof(*array)), 1);
	std::cout << result << std::endl;
	return result;
}
