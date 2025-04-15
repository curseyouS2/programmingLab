// Lab01-8 배열 처리 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int arr[], int n)
{
	for (int i = 0; i < n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

double compute_avg(int arr[], int n)
{
	double sum = 0;
	for (int i = 0; i < n;i++) {
		sum += arr[i];
	}

	return sum / n;
}

int find_max(int arr[], int n)
{
	int Max = arr[0];
	for (int i = 0;i < n;i++) {
		if (Max < arr[i]) {
			Max = arr[i];
		}
		else {
			continue;
		}
	}

	return Max;
}

int find_min(int arr[], int n)
{
	int Min = arr[0];
	for (int i = 0;i < n;i++) {
		if (Min > arr[i]) {
			Min = arr[i];
		}
		else {
			continue;
		}
	}

	return Min;
	
}
void main() {
	int arr[10] = { 12, 30, 5, 20, 44, 3, 100, 88, 9, 101 };

	print_array(arr, 10);
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));
}