// Array Application 2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// 
//lets sort of name of students according to alphabet by using string pointar

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void sortofnames(string n[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (n[i].compare(n[j]) > 0) {
				n[i].swap(n[j]);
			}
		}
	}
}
int main() {
	string *names,temp;
	int n;
	cout << "How many students are there : ";
	cin >> n;
	names = new string[++n];
	cout << "Enter names : " << endl;
	for (int i = 0; i <n; i++) {
		getline(cin, temp);
		names[i].assign(temp);
	}
	cout << endl << "----------Students----------" << endl;
	sortofnames(names, n);
	for (int i = 0; i <n; i++) {
		cout << names[i] << endl;
	}
	delete[]names;

	return 0;
}