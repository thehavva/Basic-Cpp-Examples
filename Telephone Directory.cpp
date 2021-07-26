// Telephone Directory.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//With the help of map function, I did a little telephone directory temporarily.

#include <iostream>
#include <string>
#include <map>

using namespace std;

void menu() {
	cout << endl << "1-)Save" << endl << "2-)Delete" << endl << "3-)Display" << endl << "4-)Find" << endl << endl;
}
int main() {
	string name, number,answer;
	int process;
	map<string, string>m;  //definition of map
	do {
		menu();
		cout << "Which one is your process?Enter a number : ";
		cin >> process;
		if (process == 1) {
			cout << "Enter fullname : ";
			cin >> ws;
			getline(cin, name);
			cout << "Enter the telephone number : ";
			cin >> number;
			m.insert(pair<string, string>(name, number)); //inserting the name and number
		}
		else if (process == 2) {
			cout << "Enter deleting name : ";
			cin >> ws;
			getline(cin, name);
			map<string, string>::iterator p;
			p = m.find(name); //finding the name
			m.erase(p); //deleting the name and also number 
		}
		else if (process == 3) {
			map<string, string>::iterator p2 = m.begin();
			while (p2 != m.end()) {
				cout << "Name : " << p2->first << "\tTelephone Number : " << p2->second << endl;
				p2++;
			}
		}
		else if (process == 4) {
			cout << "Enter searched name : ";
			cin >> ws;
			getline(cin, name);
			map<string, string>::iterator p3;
			p3 = m.find(name);
			if (p3 != m.end()) {
				cout << "Name : " << p3->first << "\tTelephone Number : " << p3->second << endl;
			}
			else {
				cout << "Name not found!!!" << endl;
			}
		}
		else break;

		cout << "Do you want to continue, yes or no?";
		cin >> answer;
		cout << endl;
	} while (answer != "no");
	return 0;
}