// File Processing with c++ 2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string name;
	int numberofstudent=1, score,sum=0;
	double average;
	ofstream file1("file1.txt");
	if (!file1) {
		cout << "File failed!" << endl;
	}
	else {
		cout << "Enter number of student in class" << endl;
		cin >> numberofstudent;
		cout << "Enter scores age of student" << endl;
		for (int i = 0; i < numberofstudent; i++) {
			cout << "Name : " << endl;
			cin.ignore(); //for working getline function properly
			getline(cin, name);
			cout << "Scores : ";
			cin >> score;
			sum += score;
			file1 << "Name : " << name << "\tScore : " << score << endl;
		}	
	}
	average = (double)sum / numberofstudent;
	cout << "Average of class : " << average << endl;
	file1<<endl << "Number of student is " << numberofstudent << endl;
	file1 << "Average of class is " << average << endl;
	return 0;
}