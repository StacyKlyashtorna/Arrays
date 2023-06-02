#include <iostream>
#include <time.h>
using namespace std;

int arrayGen(int* arr, int arrSize);

int main() {
	srand(time(NULL));

	int size;
	cout << "Enter arr size";
	cin >> size;
	int* arr = new int[size];

	arrayGen(arr, size);

	return 0;
}

int arrayGen(int* temp, int arrSize) {

	for (int i = 0; i < arrSize; i++)
	{
		(*temp)[i] = rand() % 90 + 10;
	}

	return temp;
}