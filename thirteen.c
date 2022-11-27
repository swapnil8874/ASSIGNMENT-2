#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER THE THREE DIGIT NUMBERS\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=y*100;
    x=y+x;
    printf("UPDATED RESULT IS \n %d",x);
}