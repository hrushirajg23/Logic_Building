/*Write a program which accept matrix from user and
 return addition of diagonal elements */
import java.util.*;
import twod.Matrix;
class Program236
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;

        System.out.println("Enter the number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter the number of cols:");
        iCol=sobj.nextInt();
        
        int iRet=0;
        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        iRet=mobj.AddDiagonal();

        System.out.println("Addition of diagonals is: "+iRet);
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

    public int AddDiagonal()
    {
        int i=0,j=0,iSum=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(i==j)
                {
                    iSum=iSum+Arr[i][j];
                }
            }
        }
        return iSum;
    }
    
}