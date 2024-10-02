#include<stdio.h>

int main(){
int b1,b2,b3;
scanf("%d %d %d",&b1,&b2,&b3);



if ( b2==0 &&b3==0 || b1==0 &&   b3==0 || b1==0 && b2==0 || b1==0 && b2==0 &&b3==0)
{
    printf("Water Filling Time");
}
else printf("Not now");

return 0;
}
