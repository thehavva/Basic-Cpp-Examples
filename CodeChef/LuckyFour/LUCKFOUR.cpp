#include <iostream>
#include <string>
using namespace std;

int main() {
	int test;
	string s;
	cin>>test;
	while(test--){
	    cin>>s;
	    int count=0,j;
	    for(j=0; j<s.size(); j++){
	        if(s[j]=='4') count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
