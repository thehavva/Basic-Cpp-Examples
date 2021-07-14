// Finding rhyme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
/*Rhymes are found in quatrains with the last 3 letters of the lines being the same. In this project, we will find whether there is a rhyme in the strings entered.*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2;
	cout << "Enter first sentence : ";
	getline(cin, s1);
	cout << "Enter second sentence : ";
	getline(cin, s2);
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	if (s1.compare(0, 3, s2, 0, 3) == 0) {
		cout << "These lines have rhymes" << endl;
	}
	else
		cout << "Rhymes not found!" << endl;
	return 0;
}