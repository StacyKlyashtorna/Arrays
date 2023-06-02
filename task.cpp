#include <iostream>
#include <time.h>
using namespace std;

void arrayGen(int* arr, int arrSize);

int main() {
	srand(time(NULL));

	int size;
	cout << "Enter arr size: ";
	cin >> size;
	int* arr = new int[size];

	arrayGen(arr, size);

	return 0;
}

void arrayGen(int* temp, int arrSize) {

	for (int i = 0; i < arrSize; i++)
	{
		*(temp + 1) = rand() % 90 + 10;
	}

}