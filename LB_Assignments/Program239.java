/*Write a program which accept matrix from user and
display addition of elements from each column */


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

        
        mobj.AddColumn();
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

    public void AddColumn()
    {
        int i=0,j=0,iAdd=0;
        try{
            for(i=0;i<Arr[i].length;i++)
            {
                iAdd=0;
                for(j=0;j<Arr.length;j++)
                {
                    iAdd=iAdd+Arr[j][i];
                }
                System.out.println("Addition of "+i+" Column is "+iAdd);
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
       
    }
    
}