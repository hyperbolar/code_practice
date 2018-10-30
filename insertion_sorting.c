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
// update on 20181030
#include <stdio.h>
#define LEN 10 //假定数组长度为10

void Insert_sorting(int arr[])
{
	int j = 1; 
	int r = 1; 
	int temp = arr[j];
	for (j = 1; j < LEN; j++)
	{
		int r = j;
		while (temp < arr[r - 1] && r > 0) {
			arr[r] = arr[r - 1];
			arr[r - 1] = temp; //swap(arr[r], arr[r-1])
			r--;
			temp = arr[r]; //update temp
		}
		if (r == 0)
			arr[0] = temp;
		if(j != LEN - 1)
			temp = arr[j + 1];
	}

}

int main(void)
{
	int arr[10] = { 2, 4, 6, 1, 3, 5, 9, 0, 7, 8 };
	Insert_sorting(arr);

	for (int i = 0; i < LEN; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
