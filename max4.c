#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three No:");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)? a:b;
    b=(c>b)? c:b;
    printf("max no is %d\n",b);
    return 0;
}