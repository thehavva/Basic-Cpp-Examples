//============================================================================
// Name        : SaylorOrg1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string mines="HAVVA YILMAZ";
	for(string::iterator it=mines.begin(); it<mines.end(); it++){
		cout<<*it<<endl;
	}
	return 0;
}
