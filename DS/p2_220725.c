//Program to swap 2 numbers without using 3rd variable and using addition and subtraction operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("before swaping a=%d, b=%d\n",a,b);
    //logic starts
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d, b=%d\n",a,b);
    return 0;
}