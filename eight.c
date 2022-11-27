//WAP TO FIND EVEN OR ODD NUMBER USING BITWISE OPERATOR
#include<stdio.h>
int main()
{
     int x;
     printf("ENTER THE NUMBER");
     scanf("%d",&x);
     if((x&1)==1)
          printf("given number is ODD",x);
     else
     printf("Given number is EVEN");
}