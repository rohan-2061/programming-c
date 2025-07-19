#include<stdio.h>
int main()
{
    int units;
    float Amount;
    printf("Enter a Units");
    scanf("%d",&units);
    if(units>=100)
    {
        Amount = 100*8;
        units -=100;
        if(units>=100)
        {
            Amount = Amount+(100*10);
            units -=100;
            if(units>=100)
            {
                    Amount = Amount+(100*12);
                    units -=100;
                    if(units>=100)
                    {
                        Amount = Amount+(100*15);
                        units -=100;
                        if(units>=100)
                        {
                            Amount = Amount+(100*17);
                            units -=100;
                            if (units>=0)
                            {
                                    Amount = Amount+(units*20);
                                    units -=100;
                            }else{
        Amount = Amount+(units*20);
    }

                            
                        }else{
        Amount = Amount+(units*17);
    }

                    }else{
        Amount = Amount+(units*15);
    }

            }else{
        Amount = Amount+(units*12);
    }

        }else{
        Amount = Amount+(units*10);
    }

    }else{
        Amount = Amount+(units*8);
    }
   printf("%f",Amount);
    return 0;
 
    
}