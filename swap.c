#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 Numbers");
    scanf("%d%d:",&a,&b);
    printf("Before Swapping \nA=%d\nB=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping\nA=%d\nB=%d",a,b);
    return 0;
    
}