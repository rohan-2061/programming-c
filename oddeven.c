#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    if(num&1)
    printf("odd Number");
    else
    printf("Even Number");
return 0;
}