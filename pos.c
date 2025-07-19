#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    if(num>0)
    {
    printf("Positive Number");
    }
    else if(num>0){
        printf("Negative number");
    }
    else{
        printf("zero");
    }

    return 0;
}