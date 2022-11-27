//Write a program to input a number from the user and also input a digit. Append a 
//digit in the number and print the resulting number. (Example - number=234 and 
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("ENTER THE THREE DIGIT NUMBERS");
    scanf("%d",&x);
     printf("ENTER THE ONE DIGIT NUMBER");
    scanf("%d",&y);
    printf("FINAL RESULT IS %d",z=x*10+y);
}