#include<stdio.h>
int main()
{
    int mno;
    printf("Enter the Month No=");
    scanf("%d",&mno);
    switch(mno)
    {
        case 1:printf("31 days");
        break;
        case 2:printf("28 dyas");
        break;
        case 3:printf("31 days");
        break;
         case 4:printf("30 days");
        break;
        case 5:printf("31 dyas");
        break;
        case 6:printf("30 days");
        break;
         case 7:printf("31 days");
        break;
        case 8:printf("31 dyas");
        break;
        case 9:printf("30 days");
        break;
         case 10:printf("31 days");
        break;
        case 11:printf("30 dyas");
        break;
        case 12:printf("31 days");
        break;
        default:
        printf("\nInvaid");
    }
    return 0;
}