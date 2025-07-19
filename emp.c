#include<stdio.h>
int main()
{
    float bs,da,hra,tax,totalsalary;
    printf("Enter basic Salary");
    scanf("%f",&bs);
    printf("Enter Da(%%)");
    scanf("%f",&da);
    printf("Enter Hra(%%)");
    scanf("%f",&hra);
    printf("Enter Tax(%%)");
    scanf("%f",&tax);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    printf("Total Salary Is %f ",totalsalary);
    return 0;
    
}