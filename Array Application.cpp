// Array Application.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
/*Let's read the numbers and create an array of integers until enter is entered from the keyboard, then sort this array from smallest to largest.*/

#include <cstdlib> //for malloc function
#include <iostream>

using namespace std;

void sort(int* arr, int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
int main() {
	int* array, i=0,size;
	cout << "Enter Your Array Size : ";
	cin >> size;
	array = new int[size]; // array=(int*)malloc(sizeof(int)*size) this prototip is also value like c programming.
	while (i != (size)) {
		cout << "Enter a number :";
		cin >> array[i];
		i++;
	}
	sort(array, size);
	cout << "Minimum value in array is " << array[0] << endl;
	cout << "Maximum value in array is " << array[size - 1] << endl;
	return 0;
}