#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,a=0;
	    scanf("%d",&x);
	    int c[x];
	    for(int i=0;i<x;i++){
	        scanf("%d",&c[i]);
	        if(c[i]==1) a++;
	    }
	    if(x%2!=0) printf("-1\n");
	    else {
	        printf("%d\n",abs(a-x/2));
	    }
	        
	    
	}
	return 0;
}
