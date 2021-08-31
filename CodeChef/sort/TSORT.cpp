#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int test;
    cin>>test;
    int i;
    int arr[test];

    for(i=0;i<test;i++){
        cin>>arr[i];
        
    }
    sort(arr,arr+test);
    int j;
    for(j=0;j<test;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}