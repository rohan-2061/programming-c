#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter lagrest no");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a>b)
    {
        printf("A is large");
    }
    else if(b>c)
    {
        printf("B is largest");

    }
    else
    {
        printf("C is largets");
    }

}