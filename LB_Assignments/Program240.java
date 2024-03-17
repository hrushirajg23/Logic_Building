/*Write a program which accept matrix from user and
swap the contents of consecutive rows */


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

        
        mobj.SwapRows();
        System.out.println("After swappinh consecutive rowws: ");
        mobj.Display();
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

    public void SwapRows()
    {
        int i=0,j=0,iTemp=0;
        try{
            for(i=0;i<Arr[i].length;i++)
            {
                
                for(j=0;j<Arr.length;j=j+2)
                {
                    iTemp=Arr[j][i];
                    Arr[j][i]=Arr[j+1][i];
                    Arr[j+1][i]=iTemp;
                }
                
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
       
    }
    
}