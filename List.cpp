// List.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//This program consists of using list method which likes c programing language linked list.

#include <iostream>
#include <list>

using namespace std;

void display(list<int>l) { //this definition of function list.
	list<int>::iterator p = l.begin();
	while (p != l.end()) {
		cout << "Display List : " << *p << endl;
		p++;
	}
}

void display2(list<int>l) { //this function offers next numbers in list by using empty function with deleting numbers from front.
	list<int>::iterator p2;
	while (!l.empty()) {
		p2 = l.begin();
		cout << "Next Number : " << *p2 << endl;
		l.pop_front();
	}
}
int main() {
	list<int>l;
	int number;
	do {
		cout << "Enter a number : ";
		cin >> number;
		l.push_back(number);
	} while (number > 0);
	l.pop_back(); //thanks to this we cannot add to last number which is negative.
	cout <<endl<< "----------List----------" << endl;
	display(l);
	cout << endl << "----------List----------" << endl;
	display2(l);
	return 0;
}