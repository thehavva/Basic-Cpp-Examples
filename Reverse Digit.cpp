// Reverse Digit.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

/*Write a function, reverseDigit, that takes an integer as a parameter and
returns the number with its digits reversed. For example, the value of
reverseDigit(12345) is 54321; the value of reverseDigit(5600)
is 65; the value of reverseDigit(7008) is 8007; and the value of
reverseDigit(-532) is -235*/

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main() {
	string s;
	int i;
	cout << "Enter a number : " << endl;
	cin >> s;
	cout << "Old number : " << s << endl;    //this method is general way to reverse number with string like C.
	cout << "Reverse Number : ";
	if (s[0] == '-') {
		s[0] = '-';
		cout << s[0];
		for (i = s.size() - 1; i >0; i--) {
			cout << s[i];
		}
	}
	else {
		for (i = s.size() - 1; i >= 0; i--) {
			cout << s[i];
		}
	}
	
	reverse(s.begin()+1, s.end());    //this is string process with library algorith.
	cout <<endl<< "Reverse number : " << s;
	return 0;
}

