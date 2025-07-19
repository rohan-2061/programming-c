#include<stdio.h>
int main()
{
    int id,p1,p2,p3,q1,q2,q3,total,discount,disamt,payment;
    char name[30];
    printf("Enter a Id:");
    scanf("%d",&id);
    printf("Enter a Name");
    scanf("%s",&name);
    printf("Enter a Price:");
    scanf("%d%d%d",&p1,&p2,&p3);
    printf("Enter a Quatity:");
    scanf("%d%d%d",&q1,&q2,&q3);
    total =(p1*q1)+(p2*q2)+(p3*q3);
    if(total>=1000)
    {
        discount=10;
    }
    else if(total>=800)
    {
        discount=8;
    }
    else if(total>=500)
    {
        discount=5;
    }
    else if(total>=300)
    {
        discount=2;
    }
    else{
        discount=0;
    }
    disamt=(total*discount)/100;
    payment=total-disamt;
    printf("\nid %d",id);
    printf("\nName%s",name);
    printf("\nTotal%d",total);
    printf("\nDiscount%d",disamt);
    printf("\npercentage%d",discount);
    printf("\nPayment%d",payment);
    return 0;
}