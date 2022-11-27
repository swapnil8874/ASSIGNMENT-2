//Write a program to input a three-digit number and display the sum of the digits
#include<stdio.h>
int main()
{
    int x,y,z,w,a,Add;
    printf("ENTER THE THREE DIGIT NUMBERS\n");
    scanf("%d",&x);
    y=x/100;//
    z=x%100;
    w=z/10;//
    a=z%10;//
    Add=y+w+a;
    printf("THE ADDITION OF THREE DIGIT NUMBER IS %d",Add);

}