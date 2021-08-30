#include <stdio.h> 
#include <stdlib.h>
int main(){
    int test,num1,num2,i;
    int *arr;
    scanf("%d",&test);
    arr=(int*)malloc(sizeof(int)*test);
    i=0;
    while(test!=0){
        scanf("%d%d",&num1,&num2);
        arr[i]=num1+num2;
        i++;
        test--;
    }
    for(int j=0; j<i; j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}