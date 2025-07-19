#include<stdio.h>
int main()
{
   char ch;
    for(ch='A';ch<='Z';ch++)
    {
        printf("\nCharacter value %d",ch);
    }
    for(ch='a';ch<='z';ch++)
    {
        printf("\nSmall value %d",ch);

    }
    for(ch='0';ch<='9';ch++)
    {
        printf(" number value%d",ch);
    }
return 0;
}