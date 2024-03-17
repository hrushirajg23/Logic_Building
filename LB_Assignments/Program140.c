//accept a string from user and reverse that string in a place

#include<stdio.h>

void StrRevX(char *str)
{
    char *brr=str;
    char temp='\0';
    char *crr=NULL;

    while(*str!='\0')
    {
        str++;
    }
    crr=str-1;

    while(brr<crr)
    {
        temp=*crr;
        *crr=*brr;
        *brr=temp;
        
        crr--;
        brr++;
    }

}

int main()
{
    char arr[20];
    printf("\nEnter a string\t");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("\nModified String is %s",arr);
    return 0;
}