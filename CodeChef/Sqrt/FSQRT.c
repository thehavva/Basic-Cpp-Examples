#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int t,i,num,temp;
	scanf("%d",&t);
	int *arr=malloc(sizeof(int)*t);
	i=0;
	temp=t;
	while(temp>0){
	    scanf("%d",&num);
	    arr[i]=sqrt(num);
	    i++;
	    temp--;
	}
	for(i=0; i<t; i++){
	    printf("%d\n",arr[i]);
	}
	return 0;
}

