//WAP a program to swap two variables without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUES OF A AND B\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("AFTER SWAPING THE VALUE OF A IS %d B IS %d",a,b);
}