//Accept a character from user and check whether that character is vowel or not

#include<stdio.h>
#include<stdbool.h>


bool CheckVowel(char Cvalue)
{
    bool bFlag=false;
    if(Cvalue=='A' || Cvalue=='E'|| Cvalue=='I'|| Cvalue=='O'|| Cvalue=='U' ||Cvalue=='a' || Cvalue=='e'|| Cvalue=='i'|| Cvalue=='o'|| Cvalue=='u')
    {
        bFlag=true;
    }
    return bFlag;
}


int main()
{
    bool bRet=false;
    char CValue='\0';
    printf("\nEnter a character: ");
    scanf("%c",&CValue);
    
    
    bRet=CheckVowel(CValue);
    if(bRet==true)
    {
        printf("%c is a vowel",CValue);
    }
    else
    {
        printf("%c is not a vowel",CValue);
    }
    return 0;
}