// Finding Word.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, as;
	int count = 0;
	cout << "Enter a line : ";
	getline(cin, s);
	cout << "Enter to find word : ";
	getline(cin, as);
	int pos = s.find(as);
	while (pos != string::npos) {
		count++;
		pos = s.find(as, pos + 1);
	}
	cout << "String : " << s << endl;
	cout << "Word : " << as << endl;
	cout <<"Number of word in line : "<< count << endl;
	return 0;
}