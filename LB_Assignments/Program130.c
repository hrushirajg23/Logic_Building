/*
Write a prograam which accepts string from user and display it in reverse order 

*/

#include<stdio.h>

void Reverse(char *str)  //100
{
    char *brr=NULL;
    char *crr=str;  //100

    //printf("crr %c\n",*crr);

    while(*str!='\0')
    {
        //shift
        
        str++;
       // printf("%d\n",str);

    }
    brr=str;  //110

    //printf("%c %d",*brr,brr);

    printf("\n");

    while(brr>=crr) //while(110>=100)
    {
        printf("%c ",*brr);
        brr--;
    }


    //printf("crr %c",*crr);

}

// 

//  o   j   a   s    b b b b b b \0

// 100 101

//  b b b b b b s a j o 



int main()
{
    char arr[10];

    printf("\nEnter a string: ");
    scanf("%[^'\n']s",arr);


    Reverse(arr);
    return 0;
}



 // int iCnt=10;
    // // for(iCnt=19;iCnt>=0;iCnt--)
    // // {
    // //     printf("%c",*(str+iCnt));
    // // }
    