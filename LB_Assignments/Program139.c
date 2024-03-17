/*Write a program which accpet string from user and accept one character.
Return index of last occurence of that character
*/
#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCnt=0,itemp=0;
    while(*str!='\0')
    {                  //0 1 2 3 4 5 6 7 8
        if(*str==ch)   //H r u s h i r a j Gandhi    i
        {
           itemp=iCnt;
        }
        str++;  //1 2 3 4 5
        iCnt++; //1 2 3 4 5

    


    }
    return itemp;
} 


int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);

    printf("\nEnter the character: ");
    scanf(" %c",&cValue);

    iRet=LastChar(Arr,cValue);

    printf("\nCharacter location is %d",iRet);
    

    return 0;
}