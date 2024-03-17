/*Write a program which accept matrix from user and
display transpose of matrix */


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

        
        mobj.Transpose();
        System.out.println("After Transpose : ");
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

    public void Transpose()
    {
        int i=0,j=0,iTemp=0;
        try{
            for(i=0;i<Arr.length;i++)
            {
                
                for(j=0;j<i;j++)
                {
                    iTemp=Arr[j][i];
                    Arr[j][i]=Arr[i][j];
                    Arr[i][j]=iTemp;
                }
                
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
       
    }
    
}