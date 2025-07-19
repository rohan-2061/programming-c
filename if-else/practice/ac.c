#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("  %c",&ch);
    if(ch>=65 && ch<=90)
    printf("Capita Letter");
    else if(ch>=97 && ch<=122)
    printf("Small Letter");
    else if(ch>=48 && ch<=57)
    printf("Digit");
    else
    printf("Special Symbol");
    return 0;
}