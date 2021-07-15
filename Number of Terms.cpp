// Number of Terms.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

//We wrote a program that calculates how many times the numbers in a string are repeated.

#include <iostream>
using namespace std;

void sort(int* v, int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (v[i] > v[j]) {
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}
int main() {
	int i = 0, count = 1, num, oldnumber;
	int* array;
	array = new int;
	do {
		cout << "Enter a positive number : ";
		cin >> num;
		array[i] = num;
		i++;
	} while (num > 0);
	i--;
	sort(array, i);
	cout << "-----------------Array----------------" << endl;
	for (int j = 0; j < i; j++) {
		cout << array[j] << "\t";
	}
	cout << endl;
	oldnumber = array[0];
	for (int j = 1; j <= i; j++) {
		if (array[j] == oldnumber) {
			count++;
		}
		else {
			cout << count << " is number of " << oldnumber << endl;
			count = 1;
		}
		oldnumber = array[j];
	}

	return 0;
}