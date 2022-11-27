// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD
#include<stdio.h>
int main()
{
    double usd = 76.23,x,y;
    printf("ENTER THE AMOUNT OF RUPEES\n");
    scanf("%lf",&x);
    y=x/usd;
    printf(" the converted amount is %lf",y);

}