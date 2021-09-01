
#include <stdio.h>
#include <stdlib.h>

int reversefun(int n){
    int rev=0,rem;
    while(n!=0){    
     rem=n%10;      
     rev=rev*10+rem;    
     n/=10;    
  } 
  return rev;
}
int main(){
    int t,i,num;
    scanf("%d",&t);
    int *arr=malloc(sizeof(int)*t);
    for(i=0; i<t; i++){
        scanf("%d",&num);
        arr[i]=reversefun(num);
    }
    i=0;
    for(i=0; i<t; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
