/*Write a program which accept matrix from user and
reverse contents of each column */


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

        
        mobj.ReverseCol();
        System.out.println("After ReverseCol : ");
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

    public void ReverseCol()
    {
        int i=0,j=0,iTemp=0;
        try{
            for(i=0;i<Arr.length/2;i++)
            {
                
                for(j=0;j<Arr[i].length;j++)
                {
                    iTemp=Arr[i][j];
                    Arr[i][j]=Arr[Arr.length-1-i][j];
                    Arr[Arr.length-1-i][j]=iTemp;
                }
                
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
       
    }
    
}