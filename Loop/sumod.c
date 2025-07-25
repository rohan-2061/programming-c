#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    do{
         printf("\nAddition of %d to %d is %d",1,n,sum);
           
             sum = sum+i;
            i++;
         
    }while(i<=n);
    
    return 0;
}