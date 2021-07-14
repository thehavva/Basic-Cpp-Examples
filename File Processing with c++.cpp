// File Processing with c++.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream> //for file processing
#include <string> //for getline 
using namespace std;

int main() {
	int data;
	string name;
	//Declare file stream variables such as the following
	ofstream inputfile;
	inputfile.open("file1.txt");
	cout << "input a name : ";
	getline(cin, name);
	cout << "Enter your data : ";
	cin >> data;
	inputfile << name << endl<<data; //Write datas to file
	inputfile.close();  //close file
	return 0;
}
