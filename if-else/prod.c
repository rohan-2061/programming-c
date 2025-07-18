#include<stdio.h>
int main()
{
    int id,p1,p2,p3,q1,q2,q3;
    int total,disper,disamt,payamt;
    char name[30];
    printf("\nEnter a Id1:");
    scanf("%d",&id);
    printf("Enter a Name");
    scanf("%s",&name);
    printf("\nEnter a Price-1:");
    scanf("%d",&p1);
     printf("\nEnter a Price-2:");
    scanf("%d",&p2);
     printf("\nEnter a Price-3:");
    scanf("%d",&p3);
    printf("\nEnter a Quantity-1:");
    scanf("%d",&q1);
    printf("\nEnter a Quantity-2:");
    scanf("%d",&q2);
    printf("\nEnter a Quantity-3:");
    scanf("%d",&q3);
    total=(p1*q1)+(p2*q2)+(p3*q3); 
    if(total>=1000)
        disper = 10; 
    else if(total>=800)

        disper = 8;
    
    else if(total>=500)

        disper = 5;

    else if(total>=300)
        disper = 3;
    else
        disper = 0;
    
    disamt = (total*disper)/100;
    payamt = (total-disamt);
    printf("\nId:%d",id);
    printf("\nName:%s",name);
    printf("\nTotal %d:",total);
    printf("\nDiscount-Amount %d:",disamt);
    printf("\nDiscount is Percentage%d:",disper);
    printf("\nTotal Pay Amount:%d",payamt);
    return 0;  
}