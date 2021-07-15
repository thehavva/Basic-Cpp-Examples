// Vectors.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//In this project, we covered the vector class. We created a vector by giving the user options such as adding and deleting elements from the background and printing the vector.


#include <iostream>
#include <vector> //for vector assignment
#include <string> //for compare function
using namespace std;


int main() {
	vector<int>v;
	int num=0, count = 0;
	string process, answer;
	do {
		cout << "1-)Push Number" << endl << "2-)Pop Number" << endl << "3-)Display vector" << endl << endl;
		cout << "Which process,Enter a string answer : " << endl;
		cin >> process;
		if (process.compare("push") == 0) {
			cout << "Enter a number : ";
			cin >> num;
			v.push_back(num);
			count++;
		}
		else if (process.compare("pop") == 0) {
			if (count==0) {
				cout << "Vector is empty : " << endl;
			}
			else {
				v.pop_back();
				count--;
			}
		}
		else if (process.compare("display") == 0) {
			for (int i = 0; i < count; i++) {
				cout << v[i] << "\t";
			}
		}

		cout << endl << "Do you want to continue? Yes or No ?";
		cin >> answer;
		cout << endl;
	} while (answer != "no");

	return 0;
}