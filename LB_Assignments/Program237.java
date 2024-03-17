/*Write a program which accept matrix from user and
 one number from user and return frequency of that number */


import java.util.*;
import twod.Matrix;
class Program237
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

        System.out.println("Enter the number whose frequency you want");
        iValue=sobj.nextInt();
        iRet=mobj.Frequency(iValue);

        System.out.println("Frequency of : "+iValue+" is : "+iRet);
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

    public int Frequency(int iNo)
    {
        int i=0,j=0,iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]==iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
    
}