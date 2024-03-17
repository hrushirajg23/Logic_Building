//addition of each row seperately
import java.util.*;
import LB.Matrix;   //user defined package vaprat asu tar member cha naav dyava lagta, direct LB.* nahi chalat

class Program398
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.SummationRow();

        // Function calls

        mobj = null;
        System.gc();
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic

    public void SummationRow()
    {
        int i=0,j=0,iSum=0;

        for(i=0;i<Arr.length;i++)
        {
            iSum=0;
            for(j=0;j<Arr[i].length;j++)
            {
                iSum=iSum+Arr[i][j];
                
            }
            System.out.println("Summation of Row is: "+(i+1)+" is :"+iSum);
        }
    }
}