#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int test,num,sum,*arr,i;
	scanf("%d",&test);
	arr=(int*)malloc(sizeof(int)*test);
	for(i=0; i<test; i++){
	    sum=0;
	    scanf("%d",&num);
	    while(num>0){
	        sum+=num%10;
	        num=num/10;
	    }
	    arr[i]=sum;
	}
	for(i=0; i<test; i++){
	    printf("%d\n",arr[i]);
	}
	return 0;
}

