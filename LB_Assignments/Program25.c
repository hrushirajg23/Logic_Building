//Write a program which accepts total marks and obtained marks from user and caluclate percentage


#include<stdio.h>

float Percentage(int iMarks,int iTotalMarks)
{
    float fPercentage=0.0;
    if(iTotalMarks<=0 || iMarks<0 || iTotalMarks<iMarks)
    {
        printf("\nINVALID INPUT");
        return fPercentage;
    }
    fPercentage=((float)iMarks/(float)iTotalMarks)*100;
    return fPercentage;

}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;
    printf("Please enter total marks");
    scanf("%d",&iValue2);
    printf("Please enter obtained marks");
    scanf("%d",&iValue1);

    fRet=Percentage(iValue1,iValue2);
    printf("%.1f",fRet);
    return 0;
}