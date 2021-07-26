// Map.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//This program also gives a list with dual variable this name is map function.

#include <iostream>
#include <map>

using namespace std;

int main() {
	map<char,int>m;
	m.insert(pair<char,int>('c', 58));
	m.insert(pair<char, int>('b', 57));
	m.insert(pair<char, int>('k', 54));
	map<char, int>::iterator p = m.begin();
	cout << "------------Map------------" << endl;
	while (p != m.end()) {
		cout << "Name : " << p->first << "\tNumber : " << p->second << endl;
		p++;
	}
	return 0;
}

