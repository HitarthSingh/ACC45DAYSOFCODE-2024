#include<stdio.h>

int main(){
int r1,r2,r3,r4,i;
for(i=0;i<=20;i++)
{
   scanf("%d%d%d%d",&r1,&r2,&r3,&r4);
   if(r1==1&&r2==1&&r3==1&&r4==1) 
   {printf("in\n");}
   else printf("out\n");
   
}

return 0;
}