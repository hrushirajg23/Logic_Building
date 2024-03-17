/*Write a program which accept matrix from user and
reverse contents of each row */


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

        
        mobj.ReverseRow();
        System.out.println("After ReverseRow : ");
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

    public void ReverseRow()
    {
        int i=0,j=0,iTemp=0;
        try{
            for(i=0;i<Arr.length;i++)
            {
                
                for(j=0;j<Arr[i].length/2;j++)
                {
                    iTemp=Arr[i][j];
                    Arr[i][j]=Arr[i][Arr[i].length-1-j];
                    Arr[i][Arr[i].length-1-j]=iTemp;
                }
                
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
       
    }
    
}