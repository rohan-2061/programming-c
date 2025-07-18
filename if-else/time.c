#include<stdio.h>
int main()
{
    int hours,sec,min;
    printf("Enter the Hourse:");
    scanf("%d",&hours);
    printf("Enter the Second:");
    scanf("%d",&sec);
    printf("Enter the Minutes:");
    scanf("%d",&min);
    if(hours>0&&hours<=24)
    {
        if(min>0&&min<=60)
        {
            if(sec>0&&sec<=60)
            {
                printf("Valid\n");
            }else{
                printf("Invalid\n");
            }
        }else{
             printf("Invalid\n");
        }
    }else{
         printf("Invalid\n");
    }
    return 0;
}