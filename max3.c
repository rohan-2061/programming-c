#include<stdio.h>
int main()
{
  int a, b, c;
  printf("Enter the 3 Number");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b &&  a>c)
  {
    printf("max no is :%d\n",a);
  }
  else if(b>a && b>c){
    printf("max no is :%d\n",b);

  }
  else{
    printf("max no is:%d",c);

  }
  return 0;
}