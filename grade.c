#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the Grade Mark");
    scanf("%d",&mark);
    if(mark>=90)
   { 
    printf("Grade A");
}
else if(mark>=80)
{
    printf("Grade B");
}
else if(mark>=75)
{
    printf("Grade c"); 
}
else 
{
    printf("Fail");
}
return 0;
}