#include <stdio.h>

int main(void) {

	int t,n,x;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    
	    n=(n+5)/6;
	   
	    printf("%d\n",n*x);
	    
	}
	
	return 0;
}

