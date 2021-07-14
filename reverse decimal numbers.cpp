// reverse decimal numbers.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//this project supply reverse decimal number parts between integer part and decimal part
//example input : 123.456; output : 456.123


#include <iostream>
#include <string>

using namespace std;


int main() {
    string num, temp1, temp2;
    cout << "Enter a decimal number : ";
    cin >> num;
    int start = num.find(".");
    temp1 = num.substr(0, start);
    temp2 = num.substr(start + 1, num.size());
    cout << "old number " << num << endl;
    cout << "new number " << temp2 << "." << temp1;
    return 0;
}
