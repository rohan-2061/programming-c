#include<stdio.h>
int main()
{
    int id;
    float bs,da,hra,tax,totalsalary;
    char name[30];
    printf("Enter the Employee Id:");
    scanf("%d",&id);
    printf("Enter the Name:");
    scanf("%s",&name);
    printf("Enter the Basic Salary:");
    scanf("%f",&bs);
    printf("Enter the DA(%%)");
    scanf("%f",&da);
    printf("Enter the House Rent(%%)");
    scanf("%f",&hra);
    if(bs>=100000)
      tax = 20;
    else if(bs>=50000)
    tax = 10;
        else if(bs>=30000)
        tax = 5;
    else
    tax = 0;
 totalsalary=bs+((bs*(da+hra-tax))/100);
 printf("\nTotal Salary:%f",totalsalary);
 printf("\nTax is :%f",tax);
 return 0;
    
}
