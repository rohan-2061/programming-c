#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Before Swapping \nA=%d\nB=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter Swapping\nA=%d\nB=%d",a,b);
    return 0;


}