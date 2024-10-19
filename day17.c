#include<stdio.h>

int main(){
int t,x,y;
for(t=0;t<=100;t++){
    scanf("%d %d",&x,&y);
    if(x>y)
    {printf("car");}
    else {printf("bike");}
}
return 0;
}