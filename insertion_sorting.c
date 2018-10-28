#include <stdio.h>

int len(int arr[])
{
	return sizeof(arr)/4;
}
/*
void Insert_sorting(int arr[])
{
	int i, j;
	i = 1;
	int temp = arr[i];
	for (i = 1; i < len(arr); i++)
	{
		int j = i - 1;
		while (arr[j] > temp && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		if (j != i - 1)
			arr[j + 1] = temp;
	}
	for (int i = 0; i < 12; i++)
	{
		printf("%d ", arr[i]);
	}
}
*/
void insertion_sort(int array[], int first, int last)
{
	int i, j;
	int temp;
	for (i = first + 1; i < last; i++)
	{
		temp = array[i];
		j = i - 1;
		//与已排序的数逐一比较，大于temp时，该数移后
		while ((j >= 0) && (array[j] > temp))
		{
			array[j + 1] = array[j];
			j--;
		}
		//存在大于temp的数
		if (j != i - 1)
			array[j + 1] = temp;
	}
}

int main(void)
{
	int nums[12] = { 10, 4, 9, 0, 3, 7, 34, 6, 21, 5, 1, 22 };
	
	//Insert_sorting(nums);
	insertion_sort(nums, 0, 12);
	for (int i = 0; i < 12; i++) {
		printf("%d ", nums[i]);
	}
	

	return 0;
}
