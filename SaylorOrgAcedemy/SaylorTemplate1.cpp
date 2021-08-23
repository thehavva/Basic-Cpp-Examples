//============================================================================
// Name        : SaylorTemplate1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
T Add(T n1, T n2)
{
    T result;
    result = n1 + n2;

    return result;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a+b="<<Add(a,b);
    return 0;
}
