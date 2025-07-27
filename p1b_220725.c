//Program to swap two numbers using multiplication and division operator and not using 3rd variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("before swapping a=%d, b=%d\n",a,b);
    //logic begins
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swapping a=%d, b=%d\n",a,b);
    return 0;
}