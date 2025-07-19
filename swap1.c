#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Before Swapping \nA=%d\nB=%d",a,b);
    c=b;
    b=a;
    a=c;
    printf("\nAfter Swapping\nA=%d\nB=%d",a,b);
    return 0;


}