#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int w,x,y,z;
        scanf("%d %d %d %d", &w, &x, &y, &z);
        if(w==x || w==y || w==z || w==(x+y) || w==(y+z) || w==(x+z) || w==(x+y+z))
        {
            printf("yes \n");
        }
        else
        printf("no \n");
        t--;
    }
    return 0;
}
