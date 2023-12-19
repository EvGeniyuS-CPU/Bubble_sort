//Bubble sort
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	const int SIZE = 10;
	int num = 0;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i <SIZE; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i] < arr[j])
			{
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
    return 0;
}