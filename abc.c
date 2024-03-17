#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int iRow=0,iCol=0,i=0;
    int j=0;
    printf("Enter rwos\n");
    scanf("%d",&iRow);
    printf("Enter ocls\n");
    scanf("%d",&iCol);
    
    int **ptr=(int **)malloc(sizeof(int)*(iRow*iCol));
    
    int iCnt=0;
    
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\n",*(*(ptr+i)+j));
        }
    }

    return 0;
}