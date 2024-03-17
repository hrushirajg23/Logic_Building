//convert odd numbers in Matrix to even by adding 1 to them
import java.util.*;
//import LB.Matrix.*;   //user defined package vaprat asu tar member cha naav dyava lagta, direct LB.* nahi chalat

class Program404
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0,iValue=0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        
         System.out.println("updated matrix is:");
        mobj.UpdateMatrix();
        mobj.Display();

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

    public void UpdateMatrix()
    {
        int i=0,j=0,iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]%2!=0)
                {
                    Arr[i][j]=Arr[i][j]+1;

                }
                
            }
            
        }

    }
}