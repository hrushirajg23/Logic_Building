/*
Accept character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*)
*/
 #include<stdio.h>
 #include<stdbool.h>



bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%'|| ch=='^'|| ch=='&'|| ch=='*')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("\nEnter a character : ");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet==true)
    {
        printf("\nIt is special character");
    }
    else
    {
        printf("\nIt is not a special character");
    }
    return 0;
}