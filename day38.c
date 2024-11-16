#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,a,b,count=-1;
	    scanf("%d%d%d",&n,&a,&b);
	    while(n>0)
	    {
	        n=n/2;
	        count++;
	    }
	    int s = (a*count) + b*(count-1);
	    printf("%d\n",s);
	}
	return 0;
}

