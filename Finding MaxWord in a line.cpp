// Finding MaxWord in a line.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//This project allows to find  the lengthest word in a line

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "Enter a line : ";
	getline(cin, s);
	string empty = "";
	string longest = "";
	int i;
	for (i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			empty += s[i];
		}
		else {
			empty = "";
		}

		if (empty.size() > longest.size()) {
			longest = empty;
		}
	}
	cout << "string : " << s << endl;
	cout << "longest word : " << longest << endl;
	return 0;
}
