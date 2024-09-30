#include <stdio.h>

int main()
{
    int x, y,t ;
    for (t = 0; t< 4; t++)
    {
        printf("Enter The Number Of Hours Worked  :");
        scanf("%d", &x);
    }
printf("Enter The Number Of Hours Worked On Friday :");
scanf("%d",&y);
int c=x+y+x+x+x;
printf("You Worked For %d Hours This weak", c);
    return 0;
}