//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    char A;
    int b;
    float c;
    double d;
   A = sizeof(char);
    printf("Size of char is %zu",A);
    printf("Size of int is %zu \n",sizeof(b));
     printf("Size of float is %zu \n",sizeof(c));
      printf("Size of double is %zu \n",sizeof(d));
}