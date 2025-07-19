#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three No:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<=c)
    {
        printf("Minimum No is:%d\n",a);
    }
    else if(b<=c && b<=a)
    {
        printf("Minimum No is:%d\n",b);
    }
    else{
        printf("Minimum No is:%d\n",c);
    }
    return 0;
}