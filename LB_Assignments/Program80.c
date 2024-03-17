//Accept N numbers from user and display summation of digits of each number
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int *Arr,int iLength)
{
    int iCnt=0;
    int iSum=0;
    int iDigit=0;

    for(iCnt=0;iCnt<iLength;iCnt++)     //8225 665 3 76 953 858
    {
        iSum=0,iDigit=0;   //After every inner loop completes
        while(Arr[iCnt]!=0)     //8225 822 82  8
        {
            iDigit=Arr[iCnt]%10;  //5  2  2  8
            iSum=iSum+iDigit;     //0+5+2+2+8=17
            Arr[iCnt]=Arr[iCnt]/10; //822  82  8  0
        }
        printf("%d\t",iSum);
    }
   
}

int main()
{
    int iRet=0,iCnt=0,iSize=0;
    int *p=NULL;

    printf("\nEnter the number of elements :");
    scanf("%d",&iSize);

    p=(int*)malloc(sizeof(int)*iSize);

    if(p==NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d\t",iCnt+1);
        scanf("%d",&p[iCnt]);  //&(*(p+iCnt))
    }

    DigitsSum(p,iSize);
    
    free(p);

    return 0;
}