/*Write a program which accept matrix from user and
check whther the matrix is sparse matrix or not */

//A matrix is sparse if majority of its elements are equal to zero
import java.util.*;
import twod.Matrix;
class Program238
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0,iValue=0;
        boolean bRet=false;

        System.out.println("Enter the number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter the number of cols:");
        iCol=sobj.nextInt();
 
        MyMatrix mobj=new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        
        bRet=mobj.ChkSparse();
        if(bRet==true)
        {
            System.out.println("TRUE : ");
        }
        else
        {
            System.out.println("FALSE : ");
        }
        
        
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

    public boolean ChkSparse()
    {
        int i=0,j=0,iCnt=0;
        boolean bFlag=false;
        try{
            for(i=0;i<Arr.length;i++)
            {
                for(j=0;j<Arr[i].length;j++)
                {
                    if(Arr[i][j]==0)
                    {
                        iCnt++;
                    }
                    if(iCnt>(Arr.length*Arr[i].length)/2)
                    {
                        bFlag=true;
                        break;
                    }
                }
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            
        }
        finally
        {
            return bFlag;
        }
       
    }
    
}