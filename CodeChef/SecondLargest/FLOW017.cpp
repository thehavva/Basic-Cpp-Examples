#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int a,b,c ;
	    cin >> a >> b >> c ;
	    if((a>b&&b>c)||(c>b&&b>a))
	    cout << b <<"\n" ;
	    else if((b>a&&a>c)||(c>a&&a>b))
	    cout << a <<"\n" ;
	    else if((a>c&&c>b)||(b>c&&b>a))
	    cout << c << "\n" ;
	}
	return 0;
}
