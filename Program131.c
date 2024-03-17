//Accept string from user and  accept a character from user and calculate number occurences of that character in that string


//Problem of earlier program solved 
#include<stdio.h>

int Count(char *str,char ch)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char c='\0';    

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    printf("\nEnter the character for frequency calculation");
    scanf(" %c",&c);
    //scanf chya adhi space dilie to avoid buffer which was a problem in earlier program

    int iRet=Count(Arr,c);  //strlenX(100)

    printf("\nCount of character %c is : %d",c,iRet);

    
    return 0;
}