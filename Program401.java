//find smalles of each row
import java.util.*;
//import LB.Matrix.*;   //user defined package vaprat asu tar member cha naav dyava lagta, direct LB.* nahi chalat

class Program401
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
        mobj.MinimumRow();

        // Function calls

        mobj = null;
        System.gc();
    }
}

 class Matrix    //class adhi public lihina mahatvacha ahe
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}


class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic

    public void MinimumRow()
    {
        int i=0,j=0,iMin=0;

        for(i=0;i<Arr.length;i++)
        {
            iMin=Arr[i][0];
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]<iMin)
                {
                    iMin=Arr[i][j];

                }
                
            }
            System.out.println("Minimum of Row  "+(i+1)+" is :"+iMin);
        }
    }
}