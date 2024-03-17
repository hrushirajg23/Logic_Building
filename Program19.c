//0-35 fail
//35-49 pss class
//50-59 second class
//60-74 1st class
//>=75 distinction




#include<stdio.h>

void DisplayClass(float fpercentage)
{
    if((fpercentage<0.00) || (fpercentage>100.000))
    {
        printf("\nInvalid Percentage...");
    }
    if(fpercentage>=0 && fpercentage<35.00)
    {
        printf("\nYou are Fail");
    }
    else if(fpercentage>=35.00 && fpercentage<50.00)
    {
        printf("\nYour class is Pass class");
    }
    else if(fpercentage>=50.00 && fpercentage<60.00)
    {
        printf("\nYour class is second class");
    }
    else if(fpercentage>=60.00 && fpercentage<75.00)
    {
        printf("\nYour class is first class");
    }
    else if(fpercentage>=75.00 && fpercentage<=100.00)
    {
        printf("\nYour class is first with Distinction");
    }
    
}

int main()
{
    auto float fvalue=0.0f;

    printf("\nEnter your percentage: ");
    scanf("%f",&fvalue);

    DisplayClass(fvalue);
    return 0;
}