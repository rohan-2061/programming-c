#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1Addition\n2Substraction\n3Multiplcation\n4Division\nEnter Choice");
    scanf("%d",&ch);
    printf("Enter 2 Numbers");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
    case 1: printf("Addition is %d",(a+b));
            break;
     case 2: printf("Substraction is %d",(a-b));
            break;
     case 3: printf("Multiplication is %d",(a*b));
            break;
     case 4: printf("Division is %d",(a/b));
            break;
    
            default :printf("invalid Choice");
    }
    return 0;
}