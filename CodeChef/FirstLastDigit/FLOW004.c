
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int test,i,num,*arr,*result,j;
	scanf("%d",&test);
	arr=(int*)malloc(sizeof(int)*test);
	result=(int*)malloc(sizeof(int)*test);
    for(i=0; i<test; i++){
        j=0;
        scanf("%d",&num);
        while(num>0){
            arr[j]=num%10;
            num=num/10;
            j++;
        }
        j--;
        result[i]=arr[0]+arr[j];
    }
	for(i=0; i<test; i++){
	    printf("%d\n",result[i]);
	}
	free(arr);
	free(result);
	return 0;
}
