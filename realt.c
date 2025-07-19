#include<stdio.h>
int main()
{
    int rollno;
    char name[100],subN1[100],subN2[100],subN3[100];
    float m1,m2,m3,total,avg;
    char grade;
     FILE *fp;

     fp= fopen("Result.txt","w");

    printf("Enter a Subject Details");
    printf("\nRoll Number");
    scanf("%d",&rollno);
    printf("Name :");
    scanf("%s",&name);
    printf("Subject 1 :");
    scanf("%s",&subN1);
     printf("Subject 2 :");
    scanf("%s",&subN2);
     printf("Subject 3 :");
    scanf("%s",&subN3);
    printf("Marks of Subject 1:");
    scanf("%f",&m1);
        printf("Marks of Subject 2:");
    scanf("%f",&m2);
        printf("Marks of Subject 3:");
    scanf("%f",&m3);
    total= m1+m2+m3;
    avg=total/3;
    if(avg<=100 && avg>=90)
        grade ='O';
    else if(avg<=90 && avg>=80)
        grade ='A';
    else if(avg<=80 && avg>=70)
        grade ='B';
    else if(avg<=70 && avg>=60)
        grade ='C';
    else if(avg<=60 && avg>=50)
        grade ='D';
    else if(avg<=50 && avg>=35)
        grade ='E';
    else
     grade = 'F';

           fprintf(fp,"\n--------Result--------");
           fprintf(fp,"\nRoll Number       :%d",rollno);
           fprintf(fp,"\nName              :%s",name);
           fprintf(fp,"\nsubject 1         :%s",subN1);
           fprintf(fp,"\nMarks of Subject 1:%f",m1);
           fprintf(fp,"\nsubject 2        :%s",subN2);
           fprintf(fp,"\nMarks of Subject 2:%f",m2);
           fprintf(fp,"\nsubject 3          :%s",subN3);
           fprintf(fp,"\nMarks of Subject 3:%f",m3);
           fprintf(fp,"\nTotal             :%f",total);
           fprintf(fp,"\nAvg               :%f",avg);
           fprintf(fp,"\nGrade             :%c",grade);

            return 0;

}