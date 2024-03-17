//Accept string from user and  accept a character from user and calculate number occurences of that character in that string


//There is problem in this code , solution in next program 
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
    scanf("%c",&c);
    /*
    Problem: Jevha apan pahili string gheto tevha apan condition detoy ki jopryant Enter det nahi toparyant 
    Pn apan string ghetlya nantar character ghenyasathi Enter dabtoy
    tyacha mule to buffer hoto and character ghet nahi
    */

    //Solution in next Program

    int iRet=Count(Arr,c);  //strlenX(100)

    printf("\nCount of character %c is : %d",c,iRet);

    
    return 0;
}