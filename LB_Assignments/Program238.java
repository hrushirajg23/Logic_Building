/*Write a program which accept matrix from user and
return largest number from both the diagonals */


import java.util.*;
import twod.Matrix;
class Program238
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0,iValue=0,iRet=0;

        System.out.println("Enter the number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter the number of cols:");
        iCol=sobj.nextInt();
 
        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        
        iRet=mobj.MaxDiagonal();

        System.out.println("Max Diagonal is :  "+iRet);
        mobj=null;

        System.gc();
        
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public int MaxDiagonal()
    {
        int i=0,j=0,iLarge1=0,iLarge2=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(i==j)
                {
                    if(Arr[i][j]>iLarge1)
                    {
                        iLarge1=Arr[i][j];
                    }
                }
                else if(i+j==Arr[i].length-1)
                {
                    if(Arr[i][j]>iLarge2)
                    {
                        iLarge2=Arr[i][j];
                    }
                }
            }
        }
        if(iLarge1>iLarge2)
        {
            return iLarge1;
        }
        else
        {
            return iLarge2;
        }
    }
    
}