#include<stdio.h>
int main()
{
    int id1,id2,id3,p1,p2,p3,q1,q2,q3;
    float total,disper,disamt,payamt;
    char name1[30],name2[30],name3[30];
    printf("\nEnter a Id:");
    scanf("%d",&id1);
    printf("Enter a Name");
    scanf("%s",&name1);
    printf("\nEnter a Price-1:");
    scanf("%d",&p1);
    printf("\nEnter a Quantity-1:");
    scanf("%d",&q1);
    
    printf("\nEnter a Id:");
    scanf("%d",&id2);
    printf("Enter a Name");
    scanf("%s",&name2);
    printf("\nEnter a Price-2:");
    scanf("%d",&p2);
    printf("\nEnter a Quantity-2:");
    scanf("%d",&q2);

    printf("\nEnter a Id:");
    scanf("%d",&id3);
    printf("Enter a Name");
    scanf("%s",&name3);
    printf("\nEnter a Price-3:");
    scanf("%d",&p3);
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
        disper = 2;
    else
        disper = 0;
    
    disamt = (total*disper)/100;
    payamt = total-disamt;
    printf("\n--------------------------------------------------------");
    printf("\n|   ID     |  Name    |  Prie    |  Qty     | Total   |");
    printf("\n--------------------------------------------------------");
    printf("\n\x1b[31m|%10d|%10s|%10d|%10d|%10d|",id1,name1,p1,q1,(p1*q1));
    printf("\n--------------------------------------------------------");
    printf("\n|%10d|%10s|%10d|%10d|%10d|",id2,name2,p2,q2,(p2*q2));
    printf("\n--------------------------------------------------------");
    printf("\n|%10d|%10s|%10d|%10d|%10d|",id3,name3,p3,q3,(p3*q3));
    printf("\n--------------------------------------------------------");
    printf("\nTotal %.2f:",total);
    printf("\nDiscount-Amount %.2f:",disamt);
    printf("\nDiscount is Percentage%.2f:",disper);
    printf("\nTotal Pay Amount:%.2f",payamt);
    return 0;  
}