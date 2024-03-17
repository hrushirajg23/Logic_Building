/*
Write a program which accept string from user and count characters in it 
Input: Hello
Output: 5

*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount=0;

    if(*str!='\0')
    {
        str++;
        iCount++;
        Strlen(str);
    }
    return iCount;
}

int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet=Strlen(arr);

    printf("%d\n",iRet);
    return 0;
}


/*

main

Sum(879)   iDigit=9   iNo=87  

Sum(87)    iDigit=7   iNo=8  

Sum(8)     iDigit=8   iNo=0  

Sum(0)     iDigit=0   iNo=0 


                                            



***static section****   
*                   *
*    iSum=24        *                         
*********************

*/