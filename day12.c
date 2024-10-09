#include<stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(x>n-x)
        printf("\n%d",n-x);
        else 
        printf("\n%d",x);
       // else

    }
    
	return 0;
}
