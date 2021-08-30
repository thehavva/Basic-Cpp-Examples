#include <stdio.h>

int main(void) {
	// your code goes here
	
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if(x<=2000&&x>0&&y>=0&&y<=2000)
	{
	    if(x%5==0&&y>=x+0.50)
	    {
	        printf("%.2f",y-x-0.50);
	    }
	    else
	        printf("%.2f",y);
	    
	}
	return 0;
}
